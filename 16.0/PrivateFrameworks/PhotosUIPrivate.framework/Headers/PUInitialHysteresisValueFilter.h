// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUINITIALHYSTERESISVALUEFILTER_H
#define PUINITIALHYSTERESISVALUEFILTER_H



#import "PUValueFilter.h"

@interface PUInitialHysteresisValueFilter : PUValueFilter {
    BOOL _didReachThreshold;
    CGFloat _initialHysteresis;
}


@property (readonly, nonatomic) CGFloat outputValueDerivative;
@property (nonatomic) CGFloat thresholdValue; // ivar: _thresholdValue


-(CGFloat)updatedValue:(CGFloat)arg0 withTargetValue:(CGFloat)arg1 ;


@end


#endif