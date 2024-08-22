// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPWAKEDETECTIONSTATEMACHINE_H
#define HDSPWAKEDETECTIONSTATEMACHINE_H

@class HKSPPersistentStateMachine, NSDate, NSString, HKSPSleepScheduleOccurrence, HKSPSleepScheduleModel;
@protocol HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, HDSPWakeDetectionStateMachineEventHandler, NAScheduler;


#import "HDSPWakeDetectionDetectingState.h"
#import "HDSPWakeDetectionDisabledState.h"
#import "HDSPWakeDetectionNotifiedState.h"
#import "HDSPWakeDetectionWaitingState.h"

@interface HDSPWakeDetectionStateMachine : HKSPPersistentStateMachine <HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, HDSPWakeDetectionStateMachineEventHandler>



@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HDSPWakeDetectionStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDSPWakeDetectionDetectingState *detectingState; // ivar: _detectingState
@property (readonly, nonatomic) HDSPWakeDetectionDisabledState *disabledState; // ivar: _disabledState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inDetectionWindow;
@property (readonly, weak, nonatomic) NSObject<HDSPWakeDetectionStateMachineInfoProvider> *infoProvider;
@property (readonly, nonatomic) BOOL isWatch;
@property (readonly, nonatomic) HDSPWakeDetectionNotifiedState *notifiedState; // ivar: _notifiedState
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *relevantOccurrence;
@property (readonly, nonatomic) BOOL sleepModeIsOff;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) NSUInteger sleepScheduleState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDSPWakeDetectionWaitingState *waitingState; // ivar: _waitingState


-(NSUInteger)loggingCategory;
-(id)initWithIdentifier:(id)arg0 persistence:(id)arg1 delegate:(id)arg2 infoProvider:(id)arg3 currentDateProvider:(id)arg4 ;
-(id)nextWakeUpAfterDate:(id)arg0 ;
-(id)upcomingStartDetectionDateAfterDate:(id)arg0 ;
-(void)earlyWakeUpWasNotifiedRemotely;
-(void)postWakeDetectionNotification;
-(void)scheduleWakeDetection;
-(void)startWakeDetection;
-(void)stopWakeDetection;
-(void)unscheduleWakeDetection;
-(void)wakeDetectionEventDue;
-(void)wakeupEventDetected:(id)arg0 ;


@end


#endif