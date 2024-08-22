// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPTIMEASLEEPTRACKERWAITINGSTATE_H
#define HDSPTIMEASLEEPTRACKERWAITINGSTATE_H



#import "HDSPTimeAsleepTrackerStateMachineState.h"

@interface HDSPTimeAsleepTrackerWaitingState : HDSPTimeAsleepTrackerStateMachineState



-(BOOL)schedulesExpiration;
-(id)expirationDate;
-(id)stateName;
-(void)bedtimeOccurred;
-(void)startWakeDetectionOccurred;
-(void)stateDidExpireWithContext:(id)arg0 ;
-(void)userEngagedSleepMode;


@end


#endif