// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSUNITCONVERTERLINEAR_H
#define NSUNITCONVERTERLINEAR_H

@protocol NSSecureCoding;


#import "NSUnitConverter.h"

@interface NSUnitConverterLinear : NSUnitConverter <NSSecureCoding>



@property (readonly) CGFloat coefficient; // ivar: _coefficient
@property (readonly) CGFloat constant; // ivar: _constant


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)baseUnitValueFromValue:(CGFloat)arg0 ;
-(CGFloat)valueFromBaseUnitValue:(CGFloat)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoefficient:(CGFloat)arg0 ;
-(id)initWithCoefficient:(CGFloat)arg0 constant:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif