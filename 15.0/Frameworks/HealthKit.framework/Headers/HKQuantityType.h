// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKQUANTITYTYPE_H
#define HKQUANTITYTYPE_H



#import "HKSampleType.h"
#import "HKUnit.h"
#import "_HKDimension.h"

@interface HKQuantityType : HKSampleType {
    HKUnit *_canonicalUnit;
    os_unfair_lock_s _canonicalUnitLock;
}


@property (readonly) NSInteger aggregationStyle;
@property (readonly, nonatomic) HKUnit *canonicalUnit;
@property (readonly, nonatomic) _HKDimension *dimension;


+(id)_quantityTypeWithCode:(NSInteger)arg0 ;
-(BOOL)_validateMetadata:(id)arg0 sample:(id)arg1 error:(*id)arg2 ;
-(BOOL)isCompatibleWithUnit:(id)arg0 ;
-(id)_initWithCode:(NSInteger)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)validateUnit:(id)arg0 ;
-(void)validateUnitFromString:(id)arg0 ;


@end


#endif