// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKRATIOVALUE_H
#define HKRATIOVALUE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKCodedQuantity.h"

@interface HKRatioValue : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) HKCodedQuantity *denominator; // ivar: _denominator
@property (readonly, copy, nonatomic) HKCodedQuantity *numerator; // ivar: _numerator


+(BOOL)supportsSecureCoding;
+(id)ratioValueWithNumerator:(id)arg0 andDenominator:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithNumerator:(id)arg0 denominator:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif