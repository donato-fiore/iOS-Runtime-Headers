// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPTIMEASLEEPTRACKERAUTOTRACKINGSTATE_H
#define HDSPTIMEASLEEPTRACKERAUTOTRACKINGSTATE_H



#import "HDSPTimeAsleepTrackerSleepTrackingState.h"

@interface HDSPTimeAsleepTrackerAutoTrackingState : HDSPTimeAsleepTrackerSleepTrackingState



-(BOOL)inExpectedAutoTrackingWindow;
-(id)nextStateWithContext:(*id)arg0 ;
-(id)stateName;
-(void)sleepModeExitedWithReason:(NSUInteger)arg0 ;
-(void)startWakeDetectionOccurred;
-(void)wakeUpOccurredWithReason:(NSUInteger)arg0 ;


@end


#endif