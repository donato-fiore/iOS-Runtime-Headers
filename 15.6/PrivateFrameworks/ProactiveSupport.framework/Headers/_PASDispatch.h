// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASDISPATCH_H
#define _PASDISPATCH_H


#import <Foundation/Foundation.h>


@interface _PASDispatch : NSObject



+(NSUInteger)dispatchTimeWithSecondsFromNow:(CGFloat)arg0 ;
+(id)autoreleasingSerialQueueWithLabel:(char *)arg0 ;
+(id)autoreleasingSerialQueueWithLabel:(char *)arg0 qosClass:(unsigned int)arg1 ;
// +(unsigned char)waitForBlock:(id)arg0 timeoutSeconds:(unk)arg1  ;
+(unsigned char)waitForGroup:(id)arg0 timeoutSeconds:(CGFloat)arg1 ;
+(unsigned char)waitForSemaphore:(id)arg0 timeoutSeconds:(CGFloat)arg1 ;
+(void)notifyGroup:(id)arg0 onQueue:(id)arg1 withTimeout:(CGFloat)arg2 block:(id)arg3 ;
+(void)runAsyncOnQueue:(id)arg0 afterDelaySeconds:(CGFloat)arg1 block:(id)arg2 ;
+(void)runSyncOnMainThreadWithBlock:(id)arg0 ;
+(void)waitForBlock:(id)arg0 ;
// +(void)waitForBlock:(id)arg0 timeoutSeconds:(unk)arg1 onBlockComplete:(CGFloat)arg2 onTimeout:(id)arg3  ;
+(void)waitForGroup:(id)arg0 ;
// +(void)waitForGroup:(id)arg0 timeoutSeconds:(CGFloat)arg1 onGroupComplete:(id)arg2 onTimeout:(unk)arg3  ;
+(void)waitForSemaphore:(id)arg0 ;
// +(void)waitForSemaphore:(id)arg0 timeoutSeconds:(CGFloat)arg1 onAcquire:(id)arg2 onTimeout:(unk)arg3  ;


@end


#endif