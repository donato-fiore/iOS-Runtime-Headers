// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDOCKINTERACTIONMETRIC_H
#define SBDOCKINTERACTIONMETRIC_H

@class PETGoalConversionEventTracker;


#import "SBAnalyticsStateMachineEventHandler.h"

@interface SBDockInteractionMetric : SBAnalyticsStateMachineEventHandler {
    PETGoalConversionEventTracker *_swipeInTracker;
    PETGoalConversionEventTracker *_dismissTracker;
    NSUInteger _locationAtSwipeIn;
}




-(id)init;


@end


#endif