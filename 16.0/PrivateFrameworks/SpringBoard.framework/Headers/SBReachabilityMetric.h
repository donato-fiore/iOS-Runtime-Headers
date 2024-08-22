// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBREACHABILITYMETRIC_H
#define SBREACHABILITYMETRIC_H

@class PETDistributionEventTracker;


#import "SBAnalyticsStateMachineEventHandler.h"

@interface SBReachabilityMetric : SBAnalyticsStateMachineEventHandler {
    CGFloat _activateTimestamp;
    PETDistributionEventTracker *_tracker;
    NSUInteger _activateLocation;
    NSUInteger _deactivationReason;
}




-(id)init;


@end


#endif