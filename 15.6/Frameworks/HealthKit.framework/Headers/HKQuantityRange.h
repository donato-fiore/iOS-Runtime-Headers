// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKQUANTITYRANGE_H
#define HKQUANTITYRANGE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKQuantity.h"

@interface HKQuantityRange : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL isMaximumInclusive; // ivar: _isMaximumInclusive
@property (nonatomic) BOOL isMinimumInclusive; // ivar: _isMinimumInclusive
@property (copy, nonatomic) HKQuantity *maximum; // ivar: _maximum
@property (copy, nonatomic) HKQuantity *minimum; // ivar: _minimum


+(BOOL)areRangesDisjoint:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)ATTDEuglycemicRangeWithUnit:(id)arg0 ;
+(id)ATTDGlycemicRangesWithUnit:(id)arg0 ;
+(id)ATTDHyperglycemicRangeWithUnit:(id)arg0 ;
+(id)ATTDLevel1HypoglycemicRangeWithUnit:(id)arg0 ;
+(id)ATTDLevel2HypoglycemicRangeWithUnit:(id)arg0 ;
+(id)exclusiveRangeWithMinimum:(id)arg0 maximum:(id)arg1 ;
+(id)inclusiveRangeWithMinimum:(id)arg0 maximum:(id)arg1 ;
-(BOOL)containsQuantity:(id)arg0 ;
-(BOOL)intersectsRange:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMinimum:(id)arg0 maximum:(id)arg1 isMinimumInclusive:(BOOL)arg2 isMaximumInclusive:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif