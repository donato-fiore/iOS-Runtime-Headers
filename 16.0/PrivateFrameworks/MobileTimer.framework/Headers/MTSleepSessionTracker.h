// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTSLEEPSESSIONTRACKER_H
#define MTSLEEPSESSIONTRACKER_H

@class NSString;
@protocol MTSleepSessionTracker, MTSleepObserver, MTAgentNotificationListener, MTSleepSessionTrackerDelegate;

#import <Foundation/Foundation.h>

#import "MTAlarmStorage.h"
#import "MTAlarm.h"

@interface MTSleepSessionTracker : NSObject <MTSleepSessionTracker, MTSleepObserver, MTAgentNotificationListener>



@property (nonatomic) os_unfair_lock_s alarmLock; // ivar: _alarmLock
@property (retain, nonatomic) MTAlarmStorage *alarmStorage; // ivar: _alarmStorage
@property (retain, nonatomic) MTAlarm *cachedAlarm; // ivar: _cachedAlarm
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MTSleepSessionTrackerDelegate> *sleepSessionTrackerDelegate; // ivar: _sleepSessionTrackerDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL trackingEnabled;


+(BOOL)_trackingEnabledForSleepAlarm:(id)arg0 ;
-(BOOL)handlesNotification:(id)arg0 ofType:(NSInteger)arg1 ;
-(Class)sessionClass;
-(id)initWithAlarmStorage:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)endSessionWithDate:(id)arg0 reason:(NSUInteger)arg1 ;
-(void)handleNotification:(id)arg0 ofType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)prepare;
-(void)sleepCoordinator:(id)arg0 bedtimeReminderWasConfirmed:(id)arg1 sleepAlarm:(id)arg2 ;
-(void)sleepCoordinator:(id)arg0 sleepAlarmDidChange:(id)arg1 ;
-(void)sleepCoordinator:(id)arg0 wakeUpAlarmWasDismissed:(id)arg1 dismissAction:(NSUInteger)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg0 waketimeWasReached:(id)arg1 sleepAlarm:(id)arg2 ;
-(void)startSession;


@end


#endif