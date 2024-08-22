// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCFIRSTFAILUREDETECTOR_H
#define MPCFIRSTFAILUREDETECTOR_H


#import <Foundation/Foundation.h>

#import "MPCAudioFailure.h"

@interface MPCFirstFailureDetector : NSObject {
    NSInteger _state;
    CGFloat _dT;
    CGFloat _limit;
    NSUInteger _currentSample;
    NSUInteger _currentFailureStartSample;
    NSUInteger _lastFailureSample;
    NSUInteger _failureCount;
}


@property (readonly, nonatomic) MPCAudioFailure *multiSamplesFailure; // ivar: _multiSamplesFailure
@property (readonly, nonatomic) CGFloat samplingTime;
@property (readonly, nonatomic) MPCAudioFailure *singleSampleFailure; // ivar: _singleSampleFailure


-(BOOL)processSample:(id)arg0 ;
-(id)initWithSamplingTime:(CGFloat)arg0 renderingLimit:(CGFloat)arg1 ;


@end


#endif