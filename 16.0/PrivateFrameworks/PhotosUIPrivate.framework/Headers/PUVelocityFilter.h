// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUVELOCITYFILTER_H
#define PUVELOCITYFILTER_H



#import "PUDynamicValueFilter.h"

@interface PUVelocityFilter : PUDynamicValueFilter {
    CGFloat _lastValue;
    CGFloat _lastTime;
    CGFloat _velocity;
    CGFloat _previousVelocity;
    CGFloat _filteredVelocity;
}


@property (nonatomic, setter=_setMinimumSampleInterval:) CGFloat _minimumSampleInterval; // ivar: __minimumSampleInterval
@property (nonatomic, setter=_setPreviousVelocityWeight:) CGFloat _previousVelocityWeight; // ivar: __previousVelocityWeight


+(id)gestureVelocityFilter;
-(CGFloat)outputValue;
-(id)init;
-(void)setInputValue:(CGFloat)arg0 ;


@end


#endif