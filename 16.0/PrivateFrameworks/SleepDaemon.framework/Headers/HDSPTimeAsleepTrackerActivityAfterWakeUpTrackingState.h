// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPTIMEASLEEPTRACKERACTIVITYAFTERWAKEUPTRACKINGSTATE_H
#define HDSPTIMEASLEEPTRACKERACTIVITYAFTERWAKEUPTRACKINGSTATE_H



#import "HDSPTimeAsleepTrackerActivityTrackingState.h"

@interface HDSPTimeAsleepTrackerActivityAfterWakeUpTrackingState : HDSPTimeAsleepTrackerActivityTrackingState



-(BOOL)inExpectedAutoTrackingWindow;
-(CGFloat)expirationDuration;
-(id)stateName;
-(void)activityDetectedOnDate:(id)arg0 ;
-(void)appLaunchedOnDate:(id)arg0 ;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)stateDidExpireWithContext:(id)arg0 ;


@end


#endif