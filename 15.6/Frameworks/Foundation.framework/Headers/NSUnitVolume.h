// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSUNITVOLUME_H
#define NSUNITVOLUME_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitVolume : NSDimension <NSSecureCoding>





+(id)_measurementWithNaturalScale:(id)arg0 system:(NSUInteger)arg1 ;
+(id)acreFeet;
+(id)baseUnit;
+(id)bushels;
+(id)centiliters;
+(id)cubicCentimeters;
+(id)cubicDecimeters;
+(id)cubicFeet;
+(id)cubicInches;
+(id)cubicKilometers;
+(id)cubicMeters;
+(id)cubicMiles;
+(id)cubicMillimeters;
+(id)cubicYards;
+(id)cups;
+(id)deciliters;
+(id)fluidOunces;
+(id)gallons;
+(id)icuType;
+(id)imperialFluidOunces;
+(id)imperialGallons;
+(id)imperialPints;
+(id)imperialQuarts;
+(id)imperialTablespoons;
+(id)imperialTeaspoons;
+(id)kiloliters;
+(id)liters;
+(id)megaliters;
+(id)metricCups;
+(id)milliliters;
+(id)pints;
+(id)quarts;
+(id)tablespoons;
+(id)teaspoons;
+(void)initialize;


@end


#endif