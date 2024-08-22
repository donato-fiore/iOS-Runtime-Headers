// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKQUANTITY_H
#define HKQUANTITY_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKUnit.h"

@interface HKQuantity : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic, getter=_unit) HKUnit *unit; // ivar: _unit
@property (readonly, nonatomic, getter=_value) CGFloat value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)_quantityWithBeatsPerMinute:(CGFloat)arg0 ;
+(id)hk_quantityWithMinutes:(id)arg0 ;
+(id)hk_quantityWithSeconds:(id)arg0 ;
+(id)quantityWithUnit:(id)arg0 doubleValue:(CGFloat)arg1 ;
-(BOOL)_isZero;
-(BOOL)hk_isGreaterThanQuantity:(id)arg0 ;
-(BOOL)hk_isLessThanQuantity:(id)arg0 ;
-(BOOL)isCompatibleWithUnit:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_beatsPerMinute;
-(CGFloat)doubleValueForUnit:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)_foundationMeasurement;
-(id)_initWithUnit:(id)arg0 doubleValue:(CGFloat)arg1 ;
-(id)_quantityByAddingQuantity:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)hk_minutesNumber;
-(id)hk_secondsNumber;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif