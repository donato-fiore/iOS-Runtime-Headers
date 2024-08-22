// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSUNITLENGTH_H
#define NSUNITLENGTH_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitLength : NSDimension <NSSecureCoding>





+(id)_measurementWithNaturalScale:(id)arg0 system:(NSUInteger)arg1 ;
+(id)astronomicalUnits;
+(id)baseUnit;
+(id)centimeters;
+(id)decameters;
+(id)decimeters;
+(id)fathoms;
+(id)feet;
+(id)furlongs;
+(id)hectometers;
+(id)icuType;
+(id)inches;
+(id)kilometers;
+(id)lightyears;
+(id)megameters;
+(id)meters;
+(id)micrometers;
+(id)miles;
+(id)millimeters;
+(id)nanometers;
+(id)nauticalMiles;
+(id)parsecs;
+(id)picometers;
+(id)scandinavianMiles;
+(id)yards;
+(void)initialize;


@end


#endif