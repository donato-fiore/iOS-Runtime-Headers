// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSLHWATCHDOGTIMER_H
#define BSLHWATCHDOGTIMER_H

@class BSAbsoluteMachTimer, NSString;
@protocol SWSystemSleepObserver, BLSHWatchdogTiming, BLSHWatchdogDelegate;

#import <Foundation/Foundation.h>

#import "BLSHWatchdogProvider.h"

@interface BSLHWatchdogTimer : NSObject <SWSystemSleepObserver, BLSHWatchdogTiming>

 {
    BSAbsoluteMachTimer *_timer;
    NSString *_explanation;
    id<BLSHWatchdogDelegate> *_delegate;
    BLSHWatchdogProvider *_provider;
    CGFloat _lock_timeout;
    CGFloat _lock_watchdogStart;
    BOOL _lock_sleepImminentSinceScheduled;
    os_unfair_lock_s _lock;
    BOOL _lock_invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (nonatomic, getter=hasSleepBeenImminentSinceScheduled) BOOL sleepImminentSinceScheduled;
@property (readonly, nonatomic, getter=wasSleepImminentWhenScheduled) BOOL sleepImminentWhenScheduled; // ivar: _sleepImminentWhenScheduled
@property (readonly) Class superclass;


-(id)initWithExplanation:(id)arg0 delegate:(id)arg1 provider:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)scheduleWithTimeout:(CGFloat)arg0 ;
-(void)systemSleepMonitorDidWakeFromSleep:(id)arg0 ;
-(void)systemSleepMonitorSleepRequestAborted:(id)arg0 ;
-(void)systemSleepMonitorWillWakeFromSleep:(id)arg0 ;
-(void)timerFired;


@end


#endif