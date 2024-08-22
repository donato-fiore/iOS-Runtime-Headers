// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPTIMEASLEEPTRACKERACTIVITYTRACKINGSTATE_H
#define HDSPTIMEASLEEPTRACKERACTIVITYTRACKINGSTATE_H



#import "HDSPTimeAsleepTrackerAutoTrackingState.h"

@interface HDSPTimeAsleepTrackerActivityTrackingState : HDSPTimeAsleepTrackerAutoTrackingState



-(BOOL)inExpectedAutoTrackingWindow;
-(BOOL)isActivityTrackingState;
-(id)stateName;
-(void)activityDetectedOnDate:(id)arg0 ;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;


@end


#endif