// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSUNITMASS_H
#define NSUNITMASS_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitMass : NSDimension <NSSecureCoding>





+(BOOL)supportsRegionalPreference;
+(id)_measurementWithNaturalScale:(id)arg0 system:(NSUInteger)arg1 ;
+(id)baseUnit;
+(id)carats;
+(id)centigrams;
+(id)decigrams;
+(id)grams;
+(id)icuType;
+(id)kilograms;
+(id)metricTons;
+(id)micrograms;
+(id)milligrams;
+(id)nanograms;
+(id)ounces;
+(id)ouncesTroy;
+(id)picograms;
+(id)poundsMass;
+(id)shortTons;
+(id)slugs;
+(id)stones;
+(void)initialize;


@end


#endif