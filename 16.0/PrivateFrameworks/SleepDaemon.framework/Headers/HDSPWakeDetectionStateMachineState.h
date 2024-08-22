// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPWAKEDETECTIONSTATEMACHINESTATE_H
#define HDSPWAKEDETECTIONSTATEMACHINESTATE_H

@class HKSPPersistentStateMachineState, NSString;
@protocol HDSPWakeDetectionStateMachineEventHandler;


#import "HDSPWakeDetectionStateMachine.h"

@interface HDSPWakeDetectionStateMachineState : HKSPPersistentStateMachineState <HDSPWakeDetectionStateMachineEventHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDetectingState;
@property (readonly, weak, nonatomic) HDSPWakeDetectionStateMachine *stateMachine;
@property (readonly) Class superclass;


-(BOOL)isWakeDetectionDisabled;
-(id)nextStateWithContext:(*id)arg0 ;
-(void)earlyWakeUpWasNotifiedRemotely;
-(void)wakeDetectionEventDue;
-(void)wakeupEventDetected:(NSUInteger)arg0 date:(id)arg1 ;


@end


#endif