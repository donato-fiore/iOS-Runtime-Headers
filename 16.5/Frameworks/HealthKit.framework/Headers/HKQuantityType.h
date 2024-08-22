// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKQUANTITYTYPE_H
#define HKQUANTITYTYPE_H

@class NSString;
@protocol _HKStatisticsSampleTypeConfigurationProviding;


#import "HKSampleType.h"
#import "HKUnit.h"
#import "_HKDimension.h"

@interface HKQuantityType : HKSampleType <_HKStatisticsSampleTypeConfigurationProviding>

 {
    HKUnit *_canonicalUnit;
    os_unfair_lock_s _canonicalUnitLock;
}


@property (readonly) NSInteger aggregationStyle;
@property (readonly, nonatomic) HKUnit *canonicalUnit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _HKDimension *dimension;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_quantityTypeWithCode:(NSInteger)arg0 ;
-(BOOL)_validateMetadata:(id)arg0 sample:(id)arg1 error:(*id)arg2 ;
-(BOOL)isCompatibleWithUnit:(id)arg0 ;
-(BOOL)supportsStatisticOptions:(NSUInteger)arg0 ;
-(id)_initWithCode:(NSInteger)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)underlyingSampleType;
-(void)validateUnit:(id)arg0 ;
-(void)validateUnitForStatistic:(id)arg0 ;
-(void)validateUnitFromString:(id)arg0 ;


@end


#endif