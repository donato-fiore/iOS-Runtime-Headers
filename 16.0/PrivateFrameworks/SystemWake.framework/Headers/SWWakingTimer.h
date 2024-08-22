// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWWAKINGTIMER_H
#define SWWAKINGTIMER_H

@class NSString;
@protocol SWSystemSleepObserver, BSTimerScheduleQuerying, BSCancellable, BSInvalidatable, SWSystemSleepAssertionProviding, BSTimerScheduleQuerying><BSCancellable><BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SWScheduledSystemWake.h"
#import "SWSystemSleepMonitor.h"

@interface SWWakingTimer : NSObject <SWSystemSleepObserver, BSTimerScheduleQuerying, BSCancellable, BSInvalidatable>

 {
    SWScheduledSystemWake *_scheduledWake;
    SWSystemSleepMonitor *_sleepMonitor;
    id<SWSystemSleepAssertionProviding> *_sleepAssertionProvider;
    id<BSInvalidatable> *_preventSleepAssertion;
    os_unfair_lock_s _lock;
    id<BSTimerScheduleQuerying><BSCancellable><BSInvalidatable> *_lock_timer;
    id *_lock_handler;
    CGFloat _lock_leeway;
    BOOL _lock_invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isScheduled) BOOL scheduled;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeRemaining;


-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 sleepMonitor:(id)arg1 sleepAssertionProvider:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)invalidate;
-(void)scheduleForDate:(id)arg0 leewayInterval:(CGFloat)arg1 queue:(id)arg2 handler:(id)arg3 ;
-(void)scheduleWithFireInterval:(CGFloat)arg0 leewayInterval:(CGFloat)arg1 queue:(id)arg2 handler:(id)arg3 ;
-(void)systemSleepMonitor:(id)arg0 prepareForSleepWithCompletion:(id)arg1 ;
-(void)systemSleepMonitor:(id)arg0 sleepRequestedWithResult:(id)arg1 ;


@end


#endif