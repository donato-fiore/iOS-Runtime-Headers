// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKQUANTITYSERIESSAMPLEBUILDERTASKSERVERCONFIGURATION_H
#define HKQUANTITYSERIESSAMPLEBUILDERTASKSERVERCONFIGURATION_H

@class NSDate;


#import "HKTaskConfiguration.h"
#import "HKDevice.h"
#import "HKQuantityType.h"

@interface HKQuantitySeriesSampleBuilderTaskServerConfiguration : HKTaskConfiguration

@property (copy, nonatomic) HKDevice *device; // ivar: _device
@property (copy, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuantityType:(id)arg0 startDate:(id)arg1 device:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif