// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICONDELETEMETRIC_H
#define SBICONDELETEMETRIC_H

@class NSString, PETDistributionEventTracker;


#import "SBAnalyticsStateMachineEventHandler.h"

@interface SBIconDeleteMetric : SBAnalyticsStateMachineEventHandler {
    NSString *_location;
    NSUInteger _presentedOptions;
    PETDistributionEventTracker *_tracker;
}




-(id)_propertyValuesForTracker;
-(id)init;


@end


#endif