// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPGOODMORNINGALERTSTATEMACHINESTATE_H
#define HDSPGOODMORNINGALERTSTATEMACHINESTATE_H

@class HKSPPersistentStateMachineState, NSString;
@protocol HDSPGoodMorningAlertStateMachineEventHandler;


#import "HDSPGoodMorningAlertStateMachine.h"

@interface HDSPGoodMorningAlertStateMachineState : HKSPPersistentStateMachineState <HDSPGoodMorningAlertStateMachineEventHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDSPGoodMorningAlertStateMachine *stateMachine;
@property (readonly) Class superclass;


-(id)determineNextState;
-(void)goodMorningAlertTimedOut;
-(void)sleepScheduleStateChangedToBedtime;
-(void)sleepScheduleStateChangedToWakeUp;
-(void)updateState;


@end


#endif