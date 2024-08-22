// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFWATCHDOGTIMER_H
#define AFWATCHDOGTIMER_H

@protocol NSCopying, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFWatchdogTimer : NSObject <NSCopying>

 {
    CGFloat _interval;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_queue;
    id *_timeoutHandler;
    BOOL _isStopped;
    CGFloat _remainingInterval;
    CGFloat _startTime;
}




-(BOOL)cancelIfNotAlreadyCanceled;
-(BOOL)isStopped;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTimeoutInterval:(CGFloat)arg0 onQueue:(id)arg1 timeoutHandler:(id)arg2 ;
-(id)initWithTimeoutInterval:(CGFloat)arg0 timeoutHandler:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)reset;
-(void)start;
-(void)stop;


@end


#endif