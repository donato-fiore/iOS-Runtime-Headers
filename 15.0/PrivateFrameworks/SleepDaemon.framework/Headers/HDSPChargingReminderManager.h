// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPCHARGINGREMINDERMANAGER_H
#define HDSPCHARGINGREMINDERMANAGER_H

@class NSDate, NSString, HKSPSleepScheduleModel;
@protocol HDSPChargingReminderStateMachineDelegate, HDSPChargingReminderStateMachineInfoProvider, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPSleepEventHandler, HDSPTimeChangeObserver, HDSPDevicePowerObserver, HDSPSleepEventProvider, HDSPSleepScheduleStateObserver, NAScheduler, HDSPActivityScheduler, HDSPSleepEventDelegate;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"
#import "HDSPChargingReminderStateMachine.h"

@interface HDSPChargingReminderManager : NSObject <HDSPChargingReminderStateMachineDelegate, HDSPChargingReminderStateMachineInfoProvider, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPSleepEventHandler, HDSPTimeChangeObserver, HDSPDevicePowerObserver, HDSPSleepEventProvider, HDSPSleepScheduleStateObserver>



@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) os_unfair_lock_s chargingReminderLock; // ivar: _chargingReminderLock
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCharging;
@property (readonly, nonatomic) NSObject<HDSPActivityScheduler> *monitoringScheduler; // ivar: _monitoringScheduler
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) NSObject<HDSPSleepEventDelegate> *sleepEventDelegate; // ivar: _sleepEventDelegate
@property (readonly, nonatomic) BOOL sleepFeaturesEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) NSUInteger sleepScheduleState;
@property (readonly, nonatomic) HDSPChargingReminderStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


+(id)monitorCriteria;
-(BOOL)isWaitingOrMonitoring;
-(id)_currentState;
-(id)devicePowerMonitor;
-(id)diagnosticDescription;
-(id)diagnosticInfo;
-(id)eventIdentifiers;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 monitoringScheduler:(id)arg1 ;
-(id)monitoringWindowAfterDate:(id)arg0 ;
-(id)upcomingEventsDueAfterDate:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)checkBatteryLevel;
-(void)deviceChangedChargingState:(BOOL)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)postChargingReminderNotification;
-(void)scheduleBatteryMonitoring;
-(void)significantTimeChangeDetected:(id)arg0 ;
-(void)sleepEventIsDue:(id)arg0 ;
-(void)sleepScheduleModelManager:(id)arg0 didUpdateSleepScheduleModel:(id)arg1 ;
-(void)sleepScheduleStateDidChange:(NSUInteger)arg0 previousState:(NSUInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)startBatteryMonitoring;
-(void)stopBatteryMonitoring;
-(void)unscheduleBatteryMonitoring;
-(void)updateState;


@end


#endif