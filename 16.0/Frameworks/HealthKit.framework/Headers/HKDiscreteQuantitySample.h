// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDISCRETEQUANTITYSAMPLE_H
#define HKDISCRETEQUANTITYSAMPLE_H

@class NSDateInterval;


#import "HKQuantitySample.h"
#import "HKQuantity.h"

@interface HKDiscreteQuantitySample : HKQuantitySample

@property (nonatomic) BOOL _hasMaximumQuantity; // ivar: __hasMaximumQuantity
@property (nonatomic) BOOL _hasMinimumQuantity; // ivar: __hasMinimumQuantity
@property (nonatomic) BOOL _hasMostRecentQuantity; // ivar: __hasMostRecentQuantity
@property (nonatomic) BOOL _hasMostRecentQuantityDateInterval; // ivar: __hasMostRecentQuantityDateInterval
@property (copy, nonatomic, setter=_setAverageQuantity:) HKQuantity *averageQuantity;
@property (copy, nonatomic, setter=_setMaximumQuantity:) HKQuantity *maximumQuantity; // ivar: _maximumQuantity
@property (copy, nonatomic, setter=_setMinimumQuantity:) HKQuantity *minimumQuantity; // ivar: _minimumQuantity
@property (copy, nonatomic, setter=_setMostRecentQuantity:) HKQuantity *mostRecentQuantity; // ivar: _mostRecentQuantity
@property (copy, nonatomic, setter=_setMostRecentQuantityDateInterval:) NSDateInterval *mostRecentQuantityDateInterval; // ivar: _mostRecentQuantityDateInterval


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsSecureCoding;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif