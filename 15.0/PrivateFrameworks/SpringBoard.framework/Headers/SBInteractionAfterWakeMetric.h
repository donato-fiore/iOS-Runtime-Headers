// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBINTERACTIONAFTERWAKEMETRIC_H
#define SBINTERACTIONAFTERWAKEMETRIC_H

@class PETGoalConversionEventTracker, PETDistributionEventTracker;


#import "SBAnalyticsStateMachineEventHandler.h"

@interface SBInteractionAfterWakeMetric : SBAnalyticsStateMachineEventHandler {
    PETGoalConversionEventTracker *_unlockTracker;
    PETDistributionEventTracker *_sessionTimeTracker;
    CGFloat _screenOnTimestamp;
    ? _sessionInteractions;
    BOOL _shouldReport;
}




-(BOOL)_determineIfShouldReport;
-(id)init;
-(void)_trackSessionWithDuration:(CGFloat)arg0 ;
-(void)_trackUnlockConversion:(BOOL)arg0 ;
-(void)_trackUnlockOpportunity;


@end


#endif