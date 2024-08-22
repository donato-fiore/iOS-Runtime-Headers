// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUMAXIMUMCHANGERATEVALUEFILTER_H
#define PUMAXIMUMCHANGERATEVALUEFILTER_H



#import "PUDynamicValueFilter.h"

@interface PUMaximumChangeRateValueFilter : PUDynamicValueFilter

@property (nonatomic) CGFloat maximumChangeRate; // ivar: _maximumChangeRate


-(CGFloat)updatedValue:(CGFloat)arg0 withTargetValue:(CGFloat)arg1 timeInterval:(CGFloat)arg2 ;


@end


#endif