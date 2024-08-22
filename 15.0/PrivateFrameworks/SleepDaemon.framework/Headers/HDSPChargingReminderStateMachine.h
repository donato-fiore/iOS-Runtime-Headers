// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPCHARGINGREMINDERSTATEMACHINE_H
#define HDSPCHARGINGREMINDERSTATEMACHINE_H

@class HKSPPersistentStateMachine, NSDate, NSString, HKSPSleepScheduleModel;
@protocol HDSPChargingReminderStateMachineDelegate, HDSPChargingReminderStateMachineInfoProvider, HDSPChargingReminderStateMachineEventHandler, NAScheduler;


#import "HDSPChargingReminderDisabledState.h"
#import "HDSPChargingReminderMonitoringState.h"
#import "HDSPChargingReminderNotifiedState.h"
#import "HDSPChargingReminderWaitingState.h"

@interface HDSPChargingReminderStateMachine : HKSPPersistentStateMachine <HDSPChargingReminderStateMachineDelegate, HDSPChargingReminderStateMachineInfoProvider, HDSPChargingReminderStateMachineEventHandler>



@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HDSPChargingReminderStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDSPChargingReminderDisabledState *disabledState; // ivar: _disabledState
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<HDSPChargingReminderStateMachineInfoProvider> *infoProvider;
@property (readonly, nonatomic) BOOL isCharging;
@property (readonly, nonatomic) HDSPChargingReminderMonitoringState *monitoringState; // ivar: _monitoringState
@property (readonly, nonatomic) HDSPChargingReminderNotifiedState *notifiedState; // ivar: _notifiedState
@property (readonly, nonatomic) BOOL sleepFeaturesEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) NSUInteger sleepScheduleState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDSPChargingReminderWaitingState *waitingState; // ivar: _waitingState


-(NSUInteger)loggingCategory;
-(id)initWithIdentifier:(id)arg0 persistence:(id)arg1 delegate:(id)arg2 infoProvider:(id)arg3 currentDateProvider:(id)arg4 ;
-(id)monitoringWindowAfterDate:(id)arg0 ;
-(void)batteryLevelChanged:(float)arg0 ;
-(void)batteryMonitoringEventDue;
-(void)postChargingReminderNotification;
-(void)scheduleBatteryMonitoring;
-(void)startBatteryMonitoring;
-(void)stopBatteryMonitoring;
-(void)unscheduleBatteryMonitoring;


@end


#endif