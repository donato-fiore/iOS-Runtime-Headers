// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUTHRESHOLDCROSSINGCOUNTVALUEFILTER_H
#define PUTHRESHOLDCROSSINGCOUNTVALUEFILTER_H



#import "PUValueFilter.h"

@interface PUThresholdCrossingCountValueFilter : PUValueFilter {
    NSInteger _crossingCount;
}


@property (nonatomic) NSInteger maximumCrossingCount; // ivar: _maximumCrossingCount
@property (nonatomic) CGFloat thresholdValue; // ivar: _thresholdValue


-(CGFloat)updatedValue:(CGFloat)arg0 withTargetValue:(CGFloat)arg1 ;


@end


#endif