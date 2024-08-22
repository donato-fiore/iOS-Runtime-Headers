// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTSLEEPMODEMONITOR_H
#define MTSLEEPMODEMONITOR_H

@class DNDModeAssertionService, NSDate, NSString;
@protocol DNDModeAssertionUpdateListener, MTSleepModeStateMachineInfoProvider, MTSleepModeStateMachineDelegate, MTSleepObserver, MTTimeObserver, MTAgentDiagnosticDelegate, MTAlarmStorage, NAScheduler;

#import <Foundation/Foundation.h>

#import "MTAlarm.h"
#import "MTSleepCoordinator.h"
#import "MTSleepModeStateMachine.h"

@interface MTSleepModeMonitor : NSObject <DNDModeAssertionUpdateListener, MTSleepModeStateMachineInfoProvider, MTSleepModeStateMachineDelegate, MTSleepObserver, MTTimeObserver, MTAgentDiagnosticDelegate>



@property (retain, nonatomic) NSObject<MTAlarmStorage> *alarmStorage; // ivar: _alarmStorage
@property (retain, nonatomic) DNDModeAssertionService *assertionService; // ivar: _assertionService
@property (readonly, nonatomic) NSDate *currentDate;
@property (copy, nonatomic) id *currentDateProvider; // ivar: _currentDateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isUserAsleep;
@property (readonly, nonatomic) NSDate *keepOffUntilDate;
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (readonly, nonatomic) MTAlarm *sleepAlarm;
@property (weak, nonatomic) MTSleepCoordinator *sleepCoordinator; // ivar: _sleepCoordinator
@property (retain, nonatomic) MTSleepModeStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


-(BOOL)isEnabled;
-(BOOL)isSleepModeEnabled:(*BOOL)arg0 ;
-(BOOL)isSleepModeEnabled:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)sleepMode:(*id)arg0 ;
-(BOOL)stateMachine:(id)arg0 disengageSleepModeUserRequested:(BOOL)arg1 ;
-(BOOL)stateMachine:(id)arg0 engageSleepModeUntilDate:(id)arg1 userEngaged:(BOOL)arg2 ;
-(NSUInteger)sleepModeTimeoutMinutes;
-(id)gatherDiagnostics;
-(id)initWithAlarmStorage:(id)arg0 sleepCoordinator:(id)arg1 ;
-(id)initWithAlarmStorage:(id)arg0 sleepCoordinator:(id)arg1 currentDateProvider:(id)arg2 ;
-(void)dealloc;
-(void)modeAssertionService:(id)arg0 didReceiveModeAssertionInvalidation:(id)arg1 ;
-(void)printDiagnostics;
-(void)sleepCoordinator:(id)arg0 bedtimeReminderDidFire:(id)arg1 sleepAlarm:(id)arg2 ;
-(void)sleepCoordinator:(id)arg0 bedtimeReminderWasConfirmed:(id)arg1 sleepAlarm:(id)arg2 ;
-(void)sleepCoordinator:(id)arg0 bedtimeWasReached:(id)arg1 sleepAlarm:(id)arg2 ;
-(void)sleepCoordinator:(id)arg0 sleepAlarmDidChange:(id)arg1 ;
-(void)sleepCoordinator:(id)arg0 userWentToBed:(id)arg1 sleepAlarm:(id)arg2 ;
-(void)sleepCoordinator:(id)arg0 userWokeUp:(id)arg1 sleepAlarm:(id)arg2 ;
-(void)sleepCoordinator:(id)arg0 wakeUpAlarmDidFire:(id)arg1 sleepAlarm:(id)arg2 ;
-(void)sleepCoordinator:(id)arg0 wakeUpAlarmWasSnoozed:(id)arg1 sleepAlarm:(id)arg2 ;
-(void)stateMachine:(id)arg0 keepSleepModeOffUntilDate:(id)arg1 ;
-(void)stateMachine:(id)arg0 scheduleUpdateForSecondsFromNow:(CGFloat)arg1 ;
-(void)stateMachineClearKeepSleepModeOff:(id)arg0 ;
-(void)timeListener:(id)arg0 didDetectSignificantTimeChangeWithCompletionBlock:(id)arg1 ;
-(void)updateMonitorState;
-(void)userDisengagedSleepMode;
-(void)userDisengagedSleepModeOnDate:(id)arg0 ;


@end


#endif