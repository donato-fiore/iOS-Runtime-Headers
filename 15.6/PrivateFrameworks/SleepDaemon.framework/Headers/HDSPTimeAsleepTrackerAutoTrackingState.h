// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPTIMEASLEEPTRACKERAUTOTRACKINGSTATE_H
#define HDSPTIMEASLEEPTRACKERAUTOTRACKINGSTATE_H



#import "HDSPTimeAsleepTrackerSleepTrackingState.h"

@interface HDSPTimeAsleepTrackerAutoTrackingState : HDSPTimeAsleepTrackerSleepTrackingState



-(id)stateName;
-(void)_updateStateSpecific;
-(void)sleepModeExitedWithReason:(NSUInteger)arg0 ;
-(void)startWakeDetectionOccurred;
-(void)wakeUpOccurredWithReason:(NSUInteger)arg0 ;


@end


#endif