// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEARTRATESENSORDATUM_H
#define HDHEARTRATESENSORDATUM_H

@class HKQuantity;


#import "HDQuantityDatum.h"

@interface HDHeartRateSensorDatum : HDQuantityDatum

@property (readonly, nonatomic) HKQuantity *heartRate;
@property (readonly, nonatomic) NSInteger heartRateContext; // ivar: _heartRateContext


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 dateInterval:(id)arg1 heartRate:(id)arg2 heartRateContext:(NSInteger)arg3 resumeContext:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif