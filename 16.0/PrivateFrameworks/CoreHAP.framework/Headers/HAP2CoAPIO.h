// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2COAPIO_H
#define HAP2COAPIO_H


#import <Foundation/Foundation.h>


@interface HAP2CoAPIO : NSObject



+(BOOL)isRunning;
+(BOOL)setCoapAddressFromString:(id)arg0 port:(unsigned short)arg1 coapAddress:(struct coap_address_t *)arg2 ;
+(id)consumers;
+(id)lock;
+(id)new;
+(id)thread;
// +(void)queueSessionBlockForConsumer:(id)arg0 sessionBlock:(id)arg1 withTimeout:(unk)arg2 requiresCompletion:(CGFloat)arg3  ;
+(void)queueSessionCompletionForConsumer:(id)arg0 ;
+(void)registerConsumer:(id)arg0 ;
+(void)setConsumers:(id)arg0 ;
+(void)setThread:(id)arg0 ;
+(void)unregisterConsumer:(id)arg0 ;
-(id)init;


@end


#endif