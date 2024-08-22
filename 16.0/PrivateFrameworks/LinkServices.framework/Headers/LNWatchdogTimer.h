// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNWATCHDOGTIMER_H
#define LNWATCHDOGTIMER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface LNWatchdogTimer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (readonly, nonatomic) CGFloat interval; // ivar: _interval
@property (nonatomic) CGFloat remainingInterval; // ivar: _remainingInterval
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic, getter=_isStopped) BOOL stopped; // ivar: _stopped
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timerSource; // ivar: _timerSource


-(BOOL)_cancelIfNotAlreadyCanceled;
-(BOOL)_isCanceled;
-(BOOL)cancelIfNotAlreadyCanceled;
-(BOOL)isCanceled;
-(BOOL)isStopped;
-(id)initWithTimeoutInterval:(CGFloat)arg0 onQueue:(id)arg1 singleUse:(BOOL)arg2 timeoutHandler:(id)arg3 ;
-(id)initWithTimeoutInterval:(CGFloat)arg0 onQueue:(id)arg1 timeoutHandler:(id)arg2 ;
-(id)initWithTimeoutInterval:(CGFloat)arg0 singleUse:(BOOL)arg1 timeoutHandler:(id)arg2 ;
-(id)initWithTimeoutInterval:(CGFloat)arg0 timeoutHandler:(id)arg1 ;
-(void)_cancel;
-(void)_reset;
-(void)_start;
-(void)_stop;
-(void)cancel;
-(void)dealloc;
-(void)reset;
-(void)start;
-(void)stop;


@end


#endif