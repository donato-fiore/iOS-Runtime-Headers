// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTSLEEPCOORDINATOR_H
#define MTSLEEPCOORDINATOR_H

@class NSDate, NSString, NAFuture;
@protocol MTSource, MTSleepCoordinatorStateMachineDelegate, MTSleepCoordinatorStateMachineInfoProvider, MTAlarmObserver, MTTimeObserver, MTAgentDiagnosticDelegate, MTAlarmStorage, NAScheduler;

#import <Foundation/Foundation.h>

#import "MTXPCScheduler.h"
#import "MTAlarm.h"
#import "MTObserverStore.h"
#import "MTSleepModeMonitor.h"
#import "MTSleepCoordinatorStateMachine.h"

@interface MTSleepCoordinator : NSObject <MTSource, MTSleepCoordinatorStateMachineDelegate, MTSleepCoordinatorStateMachineInfoProvider, MTAlarmObserver, MTTimeObserver, MTAgentDiagnosticDelegate>



@property (copy, nonatomic) NSObject<MTAlarmStorage> *alarmStorage; // ivar: _alarmStorage
@property (retain, nonatomic) MTXPCScheduler *alarmTimeoutScheduler; // ivar: _alarmTimeoutScheduler
@property (retain, nonatomic) MTAlarm *cachedSleepAlarm; // ivar: _cachedSleepAlarm
@property (readonly, nonatomic) NSDate *currentDate;
@property (copy, nonatomic) id *currentDateProvider; // ivar: _currentDateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MTObserverStore *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (readonly, nonatomic) MTAlarm *sleepAlarm;
@property (retain, nonatomic) MTSleepModeMonitor *sleepModeMonitor; // ivar: _sleepModeMonitor
@property (retain, nonatomic) NAFuture *sleepStateResolved; // ivar: _sleepStateResolved
@property (readonly, nonatomic) NSUInteger sleepTimeOutMinutes;
@property (retain, nonatomic) MTSleepCoordinatorStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


-(BOOL)handlesNotification:(id)arg0 ofType:(NSInteger)arg1 ;
-(BOOL)isSleepModeOn;
-(BOOL)isUserAsleep;
-(id)gatherDiagnostics;
-(id)initWithAlarmStorage:(id)arg0 ;
-(id)initWithAlarmStorage:(id)arg0 currentDateProvider:(id)arg1 ;
-(id)sourceIdentifier;
-(void)_notifyObserversForSleepAlarmChange:(id)arg0 ;
-(void)handleBedtimeForAlarm:(id)arg0 date:(id)arg1 ;
-(void)handleBedtimeReminderForAlarm:(id)arg0 date:(id)arg1 ;
-(void)handleConfirmationOfGoToBedNotificationForAlarm:(id)arg0 date:(id)arg1 ;
-(void)handleDismissForAlarm:(id)arg0 dismissAction:(NSUInteger)arg1 date:(id)arg2 ;
-(void)handleNotification:(id)arg0 ofType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)handleSleepSessionEndedForAlarm:(id)arg0 date:(id)arg1 reason:(NSUInteger)arg2 ;
-(void)handleSnoozeForAlarm:(id)arg0 date:(id)arg1 ;
-(void)handleSnoozeOfGoToBedNotificationForAlarm:(id)arg0 date:(id)arg1 ;
-(void)handleWakeUpAlarmForAlarm:(id)arg0 date:(id)arg1 ;
-(void)handleWakeUpTimeForAlarm:(id)arg0 date:(id)arg1 ;
-(void)notifyObserversForSleepAlarmChange:(id)arg0 ;
-(void)notifyObserversForSleepAlarmChangeIfNecessary:(id)arg0 ;
-(void)pairedDevicePreferencesChanged:(id)arg0 ;
-(void)printDiagnostics;
-(void)registerObserver:(id)arg0 ;
-(void)sleepSessionTracker:(id)arg0 sessionDidComplete:(id)arg1 ;
-(void)source:(id)arg0 didAddAlarms:(id)arg1 ;
-(void)source:(id)arg0 didChangeNextAlarm:(id)arg1 ;
-(void)source:(id)arg0 didDismissAlarm:(id)arg1 dismissAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didFireAlarm:(id)arg1 triggerType:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didRemoveAlarms:(id)arg1 ;
-(void)source:(id)arg0 didSnoozeAlarm:(id)arg1 snoozeAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didUpdateAlarms:(id)arg1 ;
-(void)stateMachine:(id)arg0 dismissWakeUpAlarm:(id)arg1 dismissAction:(NSUInteger)arg2 ;
-(void)stateMachine:(id)arg0 shouldScheduleAlarmTimeoutForSecondsFromNow:(CGFloat)arg1 ;
-(void)stateMachineUserWentToBed:(id)arg0 ;
-(void)stateMachineUserWokeUp:(id)arg0 ;
-(void)timeListener:(id)arg0 didDetectSignificantTimeChangeWithCompletionBlock:(id)arg1 ;
-(void)updateSleepState;
-(void)updateSleepStateWithSleepAlarm:(id)arg0 ;


@end


#endif