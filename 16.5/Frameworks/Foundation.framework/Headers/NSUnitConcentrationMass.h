// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSUNITCONCENTRATIONMASS_H
#define NSUNITCONCENTRATIONMASS_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitConcentrationMass : NSDimension <NSSecureCoding>





+(BOOL)supportsRegionalPreference;
+(id)baseUnit;
+(id)gramsPerLiter;
+(id)icuType;
+(id)milligramsPerDeciliter;
+(id)millimolesPerLiterWithGramsPerMole:(CGFloat)arg0 ;
+(void)initialize;


@end


#endif