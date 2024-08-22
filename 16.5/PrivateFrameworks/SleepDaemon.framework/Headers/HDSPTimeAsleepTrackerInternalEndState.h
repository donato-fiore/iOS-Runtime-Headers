// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPTIMEASLEEPTRACKERINTERNALENDSTATE_H
#define HDSPTIMEASLEEPTRACKERINTERNALENDSTATE_H



#import "HDSPTimeAsleepTrackerStateMachineState.h"

@interface HDSPTimeAsleepTrackerInternalEndState : HDSPTimeAsleepTrackerStateMachineState



-(CGFloat)expirationDuration;
-(id)stateName;
-(void)sleepSessionFinished;


@end


#endif