// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSLEEPSCHEDULESTATECOORDINATORSTATEMACHINESTATE_H
#define HDSPSLEEPSCHEDULESTATECOORDINATORSTATEMACHINESTATE_H

@class HKSPPersistentStateMachineState, NSString;
@protocol HDSPSleepScheduleStateCoordinatorStateMachineEventHandler;


#import "HDSPSleepScheduleStateCoordinatorStateMachine.h"

@interface HDSPSleepScheduleStateCoordinatorStateMachineState : HKSPPersistentStateMachineState <HDSPSleepScheduleStateCoordinatorStateMachineEventHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger scheduleState; // ivar: _scheduleState
@property (readonly, weak, nonatomic) HDSPSleepScheduleStateCoordinatorStateMachine *stateMachine;
@property (readonly) Class superclass;


-(BOOL)isAlarmEnabled;
-(BOOL)isSleepScheduleDisabled;
-(id)_determineNextStateFromTimeline;
-(id)_timelineForDate:(id)arg0 ;
-(id)nextStateWithContext:(*id)arg0 ;
-(id)nextStateWithContext:(*id)arg0 forceUpdate:(BOOL)arg1 ;
-(void)_forceUpdateStateWithChangeReason:(NSUInteger)arg0 ;
-(void)bedtimeReached;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)scheduleModelChanged:(id)arg0 ;
-(void)significantScheduleChangeOccurred:(NSUInteger)arg0 ;
-(void)significantTimeChange;
-(void)stateDidExpireWithContext:(id)arg0 ;
-(void)timeZoneChange;
-(void)wakeTimeReached;
-(void)wakeUpConfirmed;
-(void)windDownReached;


@end


#endif