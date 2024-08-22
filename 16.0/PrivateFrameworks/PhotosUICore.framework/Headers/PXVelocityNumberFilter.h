// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXVELOCITYNUMBERFILTER_H
#define PXVELOCITYNUMBERFILTER_H



#import "PXNumberFilter.h"

@interface PXVelocityNumberFilter : PXNumberFilter {
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