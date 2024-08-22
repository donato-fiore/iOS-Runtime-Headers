// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKQUANTITYSAMPLE_H
#define HKQUANTITYSAMPLE_H

@class HDCodableQuantitySample;


#import "HKSample.h"
#import "HKQuantity.h"
#import "HKQuantityType.h"

@interface HKQuantitySample : HKSample {
    HKQuantity *_quantity;
    NSInteger _freezeState;
}


@property (retain, nonatomic, setter=_setCodableQuantitySample:) HDCodableQuantitySample *codableQuantitySample; // ivar: _codableQuantitySample
@property (readonly) NSInteger count; // ivar: _count
@property (nonatomic, getter=_frozen, setter=_setFrozen:) BOOL frozen;
@property (readonly, copy) HKQuantity *quantity;
@property (readonly, copy) HKQuantityType *quantityType;


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsSecureCoding;
+(id)_quantitySamplesEnforcingDurationWithType:(id)arg0 quantity:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 ;
+(id)_unfrozenQuantitySampleWithQuantityType:(id)arg0 quantity:(id)arg1 startDate:(id)arg2 device:(id)arg3 ;
+(id)quantitySampleWithType:(id)arg0 quantity:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(id)quantitySampleWithType:(id)arg0 quantity:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 ;
+(id)quantitySampleWithType:(id)arg0 quantity:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4 ;
-(BOOL)_shouldNotifyOnInsert;
-(NSInteger)_compareFreezeStateWithSample:(id)arg0 ;
-(id)_init;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)_valueDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)_setFreezing;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif