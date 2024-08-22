// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPWAKEDETECTIONSTATEMACHINE_H
#define HDSPWAKEDETECTIONSTATEMACHINE_H

@class HKSPPersistentStateMachine, NSDate, NSString, HKSPSleepScheduleOccurrence, HKSPSleepScheduleModel;
@protocol HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, HDSPWakeDetectionStateMachineEventHandler, NAScheduler;


#import "HDSPWakeDetectionActivityDetectingState.h"
#import "HDSPWakeDetectionDisabledState.h"
#import "HDSPWakeDetectionExplicitDetectingState.h"
#import "HDSPWakeDetectionNotifiedState.h"
#import "HDSPWakeDetectionWaitingState.h"

@interface HDSPWakeDetectionStateMachine : HKSPPersistentStateMachine <HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, HDSPWakeDetectionStateMachineEventHandler>



@property (readonly, nonatomic) NSUInteger activeTypes;
@property (readonly, nonatomic) HDSPWakeDetectionActivityDetectingState *activityDetectingState; // ivar: _activityDetectingState
@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HDSPWakeDetectionStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDSPWakeDetectionDisabledState *disabledState; // ivar: _disabledState
@property (readonly, nonatomic) HDSPWakeDetectionExplicitDetectingState *explicitDetectingState; // ivar: _explicitDetectingState
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<HDSPWakeDetectionStateMachineInfoProvider> *infoProvider;
@property (readonly, nonatomic) BOOL isWatch;
@property (readonly, nonatomic) NSDate *nextWakeUp;
@property (readonly, nonatomic) HDSPWakeDetectionNotifiedState *notifiedState; // ivar: _notifiedState
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *relevantOccurrence;
@property (readonly, nonatomic) BOOL sleepModeIsOff;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) NSUInteger sleepScheduleState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *upcomingStartDetection;
@property (readonly, nonatomic) HDSPWakeDetectionWaitingState *waitingState; // ivar: _waitingState


-(NSUInteger)loggingCategory;
-(id)allStates;
-(id)detectionWindowForType:(NSUInteger)arg0 ;
-(id)initWithIdentifier:(id)arg0 persistence:(id)arg1 delegate:(id)arg2 infoProvider:(id)arg3 currentDateProvider:(id)arg4 ;
-(void)earlyWakeUpWasNotifiedRemotely;
-(void)postWakeDetectionNotification:(NSUInteger)arg0 ;
-(void)startWakeDetection:(NSUInteger)arg0 ;
-(void)stopWakeDetection;
-(void)wakeupEventDetected:(NSUInteger)arg0 date:(id)arg1 ;


@end


#endif