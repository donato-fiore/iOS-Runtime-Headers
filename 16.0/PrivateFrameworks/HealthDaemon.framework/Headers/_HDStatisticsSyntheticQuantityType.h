// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDSTATISTICSSYNTHETICQUANTITYTYPE_H
#define _HDSTATISTICSSYNTHETICQUANTITYTYPE_H

@class HKQuantityType, HKUnit, HKSampleType;
@protocol NSSecureCoding;



@interface _HDStatisticsSyntheticQuantityType : HKQuantityType <NSSecureCoding>



@property (readonly, nonatomic) NSInteger overriddenAggregationStyle; // ivar: _overriddenAggregationStyle
@property (readonly, copy, nonatomic) HKUnit *overriddenCanonicalUnit; // ivar: _overriddenCanonicalUnit
@property (readonly, copy, nonatomic) HKSampleType *underlyingSampleType; // ivar: _underlyingSampleType


+(BOOL)supportsSecureCoding;
+(id)syntheticQuantityTypeWithConfigurationProviding:(id)arg0 ;
+(id)syntheticQuantityTypeWithUnderlyingSampleType:(id)arg0 aggregationStyle:(NSInteger)arg1 canonicalUnit:(id)arg2 ;
-(Class)dataObjectClass;
-(NSInteger)aggregationStyle;
-(id)canonicalUnit;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif