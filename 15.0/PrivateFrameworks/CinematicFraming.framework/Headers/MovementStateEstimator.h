// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOVEMENTSTATEESTIMATOR_H
#define MOVEMENTSTATEESTIMATOR_H


#import <Foundation/Foundation.h>

#import "MovementStateEstimatorOptions.h"

@interface MovementStateEstimator : NSObject {
    *Measurement _measurementHistory;
    NSUInteger _historySize;
    NSUInteger _historyTailInd;
    NSUInteger _historyMaxSize;
    MovementStateEstimatorOptions *_options;
    ? _lastMovingStateStartTime;
    ? _lastStillStartTime;
    float _sumSpeeds;
}


@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(NSInteger)_estimateNewStateForMeasurement:(struct Measurement )arg0 oldState:(NSInteger)arg1 atTime:(struct ? )arg2 ;
-(NSInteger)processMeasurementWithPosition:(float)arg0 referenceLength:(float)arg1 atTime:(struct ? )arg2 ;
-(float)averageSpeed;
-(id)initWithOptions:(id)arg0 ;
-(void)dealloc;


@end


#endif