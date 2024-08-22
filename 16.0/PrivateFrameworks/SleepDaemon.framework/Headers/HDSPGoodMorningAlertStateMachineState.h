// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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


-(id)nextStateWithContext:(*id)arg0 ;
-(void)goodMorningAlertTimedOut;
-(void)sleepScheduleStateChangedToBedtime;
-(void)sleepScheduleStateChangedToWakeUp;


@end


#endif