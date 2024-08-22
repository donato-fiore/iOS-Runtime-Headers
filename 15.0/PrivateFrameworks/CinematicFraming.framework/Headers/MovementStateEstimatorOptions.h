// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOVEMENTSTATEESTIMATOROPTIONS_H
#define MOVEMENTSTATEESTIMATOROPTIONS_H


#import <Foundation/Foundation.h>


@interface MovementStateEstimatorOptions : NSObject

@property (nonatomic) float movingToStationaryTransitionThresholdSpeed; // ivar: movingToStationaryTransitionThresholdSpeed
@property (nonatomic) float movingToStationaryTransitionThresholdWaitSec; // ivar: movingToStationaryTransitionThresholdWaitSec
@property (nonatomic) NSUInteger velocityAverageWindowSize; // ivar: velocityAverageWindowSize


-(id)init;


@end


#endif