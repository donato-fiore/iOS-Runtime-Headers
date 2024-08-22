// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMEDUSADRAGANDDROPMETRIC_H
#define SBMEDUSADRAGANDDROPMETRIC_H

@class PETGoalConversionEventTracker;


#import "SBAnalyticsStateMachineEventHandler.h"

@interface SBMedusaDragAndDropMetric : SBAnalyticsStateMachineEventHandler {
    NSUInteger _activateLocation;
    PETGoalConversionEventTracker *_medusaDropTracker;
}




-(id)init;


@end


#endif