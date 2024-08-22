// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSUNITAREA_H
#define NSUNITAREA_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitArea : NSDimension <NSSecureCoding>





+(BOOL)supportsRegionalPreference;
+(id)_measurementWithNaturalScale:(id)arg0 system:(NSUInteger)arg1 ;
+(id)acres;
+(id)ares;
+(id)baseUnit;
+(id)hectares;
+(id)icuType;
+(id)squareCentimeters;
+(id)squareFeet;
+(id)squareInches;
+(id)squareKilometers;
+(id)squareMegameters;
+(id)squareMeters;
+(id)squareMicrometers;
+(id)squareMiles;
+(id)squareMillimeters;
+(id)squareNanometers;
+(id)squareYards;
+(void)initialize;


@end


#endif