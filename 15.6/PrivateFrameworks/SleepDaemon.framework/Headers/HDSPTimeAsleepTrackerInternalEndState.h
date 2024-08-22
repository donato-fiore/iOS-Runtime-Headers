// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPTIMEASLEEPTRACKERINTERNALENDSTATE_H
#define HDSPTIMEASLEEPTRACKERINTERNALENDSTATE_H



#import "HDSPTimeAsleepTrackerStateMachineState.h"

@interface HDSPTimeAsleepTrackerInternalEndState : HDSPTimeAsleepTrackerStateMachineState



-(id)stateName;
-(void)sleepSessionFinished;
-(void)willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;


@end


#endif