// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDSPSLEEPMODETURNEDOFFSTATE_H
#define _HDSPSLEEPMODETURNEDOFFSTATE_H



#import "HDSPSleepModeStateMachineState.h"

@interface _HDSPSleepModeTurnedOffState : HDSPSleepModeStateMachineState



-(BOOL)shouldUpdateSleepModeStateForState:(NSUInteger)arg0 changeReason:(NSUInteger)arg1 previousState:(NSUInteger)arg2 ;
-(id)expirationDate;
-(id)nextStateWithContext:(*id)arg0 ;
-(void)sleepScheduleStateChangedToBedtime:(NSUInteger)arg0 fromState:(NSUInteger)arg1 ;
-(void)sleepScheduleStateChangedToWindDown:(NSUInteger)arg0 fromState:(NSUInteger)arg1 ;
-(void)stateDidExpireWithContext:(id)arg0 ;
-(void)userTurnedOffSleepModeWithReason:(NSUInteger)arg0 ;


@end


#endif