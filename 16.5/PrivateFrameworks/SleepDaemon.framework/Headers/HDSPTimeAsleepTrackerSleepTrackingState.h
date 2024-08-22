// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPTIMEASLEEPTRACKERSLEEPTRACKINGSTATE_H
#define HDSPTIMEASLEEPTRACKERSLEEPTRACKINGSTATE_H



#import "HDSPTimeAsleepTrackerStateMachineState.h"

@interface HDSPTimeAsleepTrackerSleepTrackingState : HDSPTimeAsleepTrackerStateMachineState



+(NSUInteger)defaultEndReason;
+(NSUInteger)defaultStartReason;
-(BOOL)isSleepTrackingState;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)sleepSessionEndRequestedInternally;


@end


#endif