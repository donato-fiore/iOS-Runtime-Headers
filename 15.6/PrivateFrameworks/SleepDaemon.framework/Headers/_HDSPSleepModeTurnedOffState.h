// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDSPSLEEPMODETURNEDOFFSTATE_H
#define _HDSPSLEEPMODETURNEDOFFSTATE_H



#import "HDSPSleepModeStateMachineState.h"

@interface _HDSPSleepModeTurnedOffState : HDSPSleepModeStateMachineState



-(id)determineExpirationDateForCurrentDate:(id)arg0 ;
-(void)sleepScheduleStateChangedToBedtime:(NSUInteger)arg0 fromState:(NSUInteger)arg1 ;
-(void)sleepScheduleStateChangedToWindDown:(NSUInteger)arg0 fromState:(NSUInteger)arg1 ;
-(void)updateState;
-(void)userTurnedOffSleepModeWithReason:(NSUInteger)arg0 ;
-(void)willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;


@end


#endif