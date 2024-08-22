// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSLEEPMODESTATEMACHINESTATE_H
#define HDSPSLEEPMODESTATEMACHINESTATE_H

@class HKSPPersistentStateMachineState, NSString;
@protocol HDSPSleepModeStateMachineEventHandler;


#import "HDSPSleepModeStateMachine.h"

@interface HDSPSleepModeStateMachineState : HKSPPersistentStateMachineState <HDSPSleepModeStateMachineEventHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger defaultChangeReason;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger sleepMode;
@property (readonly, weak, nonatomic) HDSPSleepModeStateMachine *stateMachine;
@property (readonly) Class superclass;


-(id)_nextSleepModeStateCommon:(*id)arg0 ;
-(id)_nextSleepModeStateFromTimeline:(*id)arg0 ;
-(id)nextStateWithContext:(*id)arg0 ;
-(void)automationTurnedOffSleepModeWithReason:(NSUInteger)arg0 ;
-(void)automationTurnedOnSleepModeWithReason:(NSUInteger)arg0 ;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)sleepScheduleStateChangedToBedtime:(NSUInteger)arg0 fromState:(NSUInteger)arg1 ;
-(void)sleepScheduleStateChangedToDisabledFromState:(NSUInteger)arg0 ;
-(void)sleepScheduleStateChangedToWakeUp:(NSUInteger)arg0 ;
-(void)sleepScheduleStateChangedToWindDown:(NSUInteger)arg0 fromState:(NSUInteger)arg1 ;
-(void)userTurnedOffSleepModeWithReason:(NSUInteger)arg0 ;
-(void)userTurnedOnSleepModeWithReason:(NSUInteger)arg0 ;


@end


#endif