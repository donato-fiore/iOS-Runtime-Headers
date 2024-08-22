// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCUMULATIVEQUANTITYSAMPLE_H
#define HKCUMULATIVEQUANTITYSAMPLE_H



#import "HKQuantitySample.h"
#import "HKQuantity.h"

@interface HKCumulativeQuantitySample : HKQuantitySample

@property (copy, nonatomic, setter=_setSumQuantity:) HKQuantity *sumQuantity;


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsSecureCoding;
-(id)sum;


@end


#endif