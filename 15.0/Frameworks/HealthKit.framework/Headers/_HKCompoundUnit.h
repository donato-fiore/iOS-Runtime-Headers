// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKCOMPOUNDUNIT_H
#define _HKCOMPOUNDUNIT_H



#import "HKUnit.h"
#import "_HKFactorization.h"
#import "_HKDimension.h"

@interface _HKCompoundUnit : HKUnit {
    _HKFactorization *_baseUnits;
    _HKDimension *_dimension;
    os_unfair_lock_s _dimensionLock;
}




+(BOOL)supportsSecureCoding;
+(id)unitWithBaseUnits:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_baseUnits;
-(id)_computeBaseUnitReductionAndProportionalSize:(*CGFloat)arg0 withCycleSet:(id)arg1 ;
-(id)_initWithBaseUnits:(id)arg0 ;
-(id)dimension;
-(id)initWithCoder:(id)arg0 ;
-(id)unitString;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif