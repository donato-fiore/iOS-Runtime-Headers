// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONFLOCKINGMETRIC_H
#define SBICONFLOCKINGMETRIC_H

@class PETDistributionEventTracker, PETScalarEventTracker;


#import "SBAnalyticsStateMachineEventHandler.h"

@interface SBIconFlockingMetric : SBAnalyticsStateMachineEventHandler {
    PETDistributionEventTracker *_flockingDistributionTracker;
    PETScalarEventTracker *_flockingUsageTracker;
}




-(id)init;


@end


#endif