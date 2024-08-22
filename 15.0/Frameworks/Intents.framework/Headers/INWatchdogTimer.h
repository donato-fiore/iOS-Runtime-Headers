// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INWATCHDOGTIMER_H
#define INWATCHDOGTIMER_H

@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface INWatchdogTimer : NSObject {
    CGFloat _interval;
    NSObject<OS_dispatch_source> *_timerSource;
    BOOL _isStopped;
    CGFloat _remainingInterval;
    CGFloat _startTime;
    NSObject<OS_dispatch_queue> *_internalQueue;
}




-(BOOL)_cancelIfNotAlreadyCanceled;
-(BOOL)_isCanceled;
-(BOOL)cancelIfNotAlreadyCanceled;
-(BOOL)isCanceled;
-(id)initWithTimeoutInterval:(CGFloat)arg0 onQueue:(id)arg1 timeoutHandler:(id)arg2 ;
-(id)initWithTimeoutInterval:(CGFloat)arg0 timeoutHandler:(id)arg1 ;
-(void)_cancel;
-(void)_reset;
-(void)_start;
-(void)_stop;
-(void)cancel;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif