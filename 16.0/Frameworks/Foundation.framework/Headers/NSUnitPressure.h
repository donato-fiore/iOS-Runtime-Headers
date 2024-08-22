// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSUNITPRESSURE_H
#define NSUNITPRESSURE_H

@protocol NSSecureCoding;


#import "NSDimension.h"

@interface NSUnitPressure : NSDimension <NSSecureCoding>





+(id)_measurementWithNaturalScale:(id)arg0 system:(NSUInteger)arg1 ;
+(id)bars;
+(id)baseUnit;
+(id)gigapascals;
+(id)hectopascals;
+(id)icuType;
+(id)inchesOfMercury;
+(id)kilopascals;
+(id)megapascals;
+(id)millibars;
+(id)millimetersOfMercury;
+(id)newtonsPerMetersSquared;
+(id)poundsForcePerSquareInch;
+(void)initialize;


@end


#endif