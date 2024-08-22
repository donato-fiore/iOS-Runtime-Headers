// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPTIMEASLEEPTRACKERACTIVITYAFTERWAKEUPTRACKINGSTATE_H
#define HDSPTIMEASLEEPTRACKERACTIVITYAFTERWAKEUPTRACKINGSTATE_H



#import "HDSPTimeAsleepTrackerActivityTrackingState.h"

@interface HDSPTimeAsleepTrackerActivityAfterWakeUpTrackingState : HDSPTimeAsleepTrackerActivityTrackingState



-(id)determineExpirationDateForCurrentDate:(id)arg0 ;
-(id)stateName;
-(void)_updateStateSpecific;
-(void)activityDetectedOnDate:(id)arg0 ;
-(void)appLaunchedOnDate:(id)arg0 ;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;
-(void)didExitWithNextState:(id)arg0 context:(id)arg1 ;
-(void)willEnterWithPreviousState:(id)arg0 context:(id)arg1 ;


@end


#endif