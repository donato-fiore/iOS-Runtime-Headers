// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPTIMEASLEEPTRACKERMANUALTRACKINGSTATE_H
#define HDSPTIMEASLEEPTRACKERMANUALTRACKINGSTATE_H



#import "HDSPTimeAsleepTrackerSleepTrackingState.h"

@interface HDSPTimeAsleepTrackerManualTrackingState : HDSPTimeAsleepTrackerSleepTrackingState



+(NSUInteger)defaultEndReason;
+(NSUInteger)defaultStartReason;
-(BOOL)isSleepTrackingSchedulingState;
-(id)stateName;
-(void)bedtimeOccurred;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)sleepModeExitedWithReason:(NSUInteger)arg0 ;
-(void)sleepTrackingEventDue;
-(void)startWakeDetectionOccurred;
-(void)willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;


@end


#endif