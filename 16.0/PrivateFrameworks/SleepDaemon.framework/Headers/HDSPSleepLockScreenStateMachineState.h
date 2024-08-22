// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSLEEPLOCKSCREENSTATEMACHINESTATE_H
#define HDSPSLEEPLOCKSCREENSTATEMACHINESTATE_H

@class HKSPPersistentStateMachineState, NSString;
@protocol HDSPSleepLockScreenStateMachineEventHandler;


#import "HDSPSleepLockScreenStateMachine.h"

@interface HDSPSleepLockScreenStateMachineState : HKSPPersistentStateMachineState <HDSPSleepLockScreenStateMachineEventHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger sleepLockScreenState;
@property (readonly, weak, nonatomic) HDSPSleepLockScreenStateMachine *stateMachine;
@property (readonly) Class superclass;


-(BOOL)_isSleepLockScreenDisabled;
-(id)_nextStateForSleepMode:(NSInteger)arg0 reason:(NSUInteger)arg1 context:(*id)arg2 ;
-(id)nextStateWithContext:(*id)arg0 ;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)dismissAlertForGoodMorning;
-(void)environmentDidBecomeReady;
-(void)presentAlertForGoodMorning;
-(void)sleepModeDidChange:(NSInteger)arg0 reason:(NSUInteger)arg1 ;


@end


#endif