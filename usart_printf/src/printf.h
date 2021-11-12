/**
 * @file   printf.h
 * @author ZiTe (honmonoh@gmail.com)
 * @brief  Implement printf() function by USART.
 * @remark Reference: https://github.com/libopencm3/libopencm3-examples/blob/master/examples/stm32/f1/stm32-h103/usart_printf/usart_printf.c
 */

#ifndef PRINTF_H_
#define PRINTF_H_

#include <errno.h>
#include <libopencm3/stm32/usart.h>

/* Define which USART you actual used. */
#define USART (USART2)

#define BLOCKING_SEND

int _write(int file, char *ptr, int len);

#endif /* PRINTF_H_ */
