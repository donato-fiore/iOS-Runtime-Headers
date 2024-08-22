// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCSIMPLETIMER_H
#define PCSIMPLETIMER_H

@class NSDate, NSString, NSRunLoop;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PCDispatchTimer.h"

@interface PCSimpleTimer : NSObject {
    CGFloat _fireTime;
    CGFloat _startTime;
    CGFloat _lastUpdateTime;
    CGFloat _earlyFireDelta;
    BOOL _triggerOnGMTChange;
    NSDate *_scheduledWakeDate;
    NSString *_serviceIdentifier;
    id *_target;
    SEL _selector;
    id *_userInfo;
    BOOL _userVisible;
    PCDispatchTimer *_preventSleepTimer;
    PCDispatchTimer *_fireTimer;
    BOOL _sleepIsImminent;
    unsigned int _powerAssertionID;
    id *_timeChangeSource;
    NSRunLoop *_timerRunLoop;
    NSString *_timerMode;
    int _significantTimeChangeToken;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (nonatomic) BOOL disableSystemWaking; // ivar: _disableSystemWaking
@property (nonatomic, getter=isUserVisible) BOOL userVisible;


+(CGFloat)currentMachTimeInterval;
+(id)lastSystemWakeDate;
-(BOOL)firingIsImminent;
-(BOOL)isValid;
-(id)_getTimerMode;
-(id)_getTimerRunLoop;
-(id)debugDescription;
-(id)initWithAbsoluteTime:(CGFloat)arg0 serviceIdentifier:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 triggerOnGMTChange:(BOOL)arg5 ;
-(id)initWithFireDate:(id)arg0 serviceIdentifier:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 ;
-(id)initWithTimeInterval:(CGFloat)arg0 serviceIdentifier:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 ;
-(id)userInfo;
-(void)_fireTimerFired;
-(void)_invalidateAllowAsync:(BOOL)arg0 ;
-(void)_performBlockOnQueue:(id)arg0 ;
-(void)_powerNotificationSleepIsImminent;
-(void)_powerNotificationSleepIsNotImminent;
-(void)_preventSleepFired;
-(void)_scheduleTimer;
-(void)_setPowerMonitoringEnabled:(BOOL)arg0 ;
-(void)_setSignificantTimeChangeMonitoringEnabled:(BOOL)arg0 ;
-(void)_significantTimeChange;
-(void)_updateTimers;
-(void)dealloc;
-(void)invalidate;
-(void)scheduleInQueue:(id)arg0 ;
-(void)scheduleInRunLoop:(id)arg0 ;
-(void)scheduleInRunLoop:(id)arg0 inMode:(id)arg1 ;
-(void)updateFireTime:(CGFloat)arg0 triggerOnGMTChange:(BOOL)arg1 ;


@end


#endif