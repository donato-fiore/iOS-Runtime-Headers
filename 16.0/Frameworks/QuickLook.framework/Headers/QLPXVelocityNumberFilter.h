// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLPXVELOCITYNUMBERFILTER_H
#define QLPXVELOCITYNUMBERFILTER_H



#import "QLPXNumberFilter.h"

@interface QLPXVelocityNumberFilter : QLPXNumberFilter {
    CGFloat _minimumSampleInterval;
    CGFloat _previousVelocityWeight;
    CGFloat _lastValue;
    CGFloat _lastTime;
    CGFloat _velocity;
    CGFloat _previousVelocity;
    CGFloat _filteredVelocity;
}




+(id)gestureVelocityFilter;
-(CGFloat)updatedOutput;
-(id)initWithInput:(CGFloat)arg0 ;


@end


#endif