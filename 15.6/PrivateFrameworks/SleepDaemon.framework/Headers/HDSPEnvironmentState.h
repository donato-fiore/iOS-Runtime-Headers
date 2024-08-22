// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPENVIRONMENTSTATE_H
#define HDSPENVIRONMENTSTATE_H

@class HKSPStateMachineState, NSString;
@protocol HDSPEnvironmentStateMachineEventHandler;


#import "HDSPEnvironmentStateMachine.h"

@interface HDSPEnvironmentState : HKSPStateMachineState <HDSPEnvironmentStateMachineEventHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDSPEnvironmentStateMachine *stateMachine;
@property (readonly) Class superclass;


-(void)dataMigrationDidComplete;
-(void)systemDidBecomeReady;


@end


#endif