// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKUNIT_H
#define HKUNIT_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_HKFactorization.h"
#import "_HKDimension.h"

@interface HKUnit : NSObject <NSSecureCoding, NSCopying>

 {
    _HKFactorization *_dimensionReduction;
    _HKFactorization *_baseUnitReduction;
    os_unfair_lock_s _dimensionReductionLock;
    CGFloat _reducedProportionalSize;
}


@property (readonly, nonatomic) _HKFactorization *_baseUnits;
@property (readonly, nonatomic) _HKDimension *dimension;
@property (readonly, nonatomic) CGFloat scaleOffset; // ivar: _scaleOffset
@property (readonly) NSString *unitString;


+(BOOL)_isValidUnitString:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSInteger)energyFormatterUnitFromUnit:(id)arg0 ;
+(NSInteger)lengthFormatterUnitFromUnit:(id)arg0 ;
+(NSInteger)massFormatterUnitFromUnit:(id)arg0 ;
+(id)_changeInDegreeCelsiusUnit;
+(id)_changeInDegreeFahrenheitUnit;
+(id)_changeInUnit:(id)arg0 ;
+(id)_countPerMinuteUnit;
+(id)_countPerSecondUnit;
+(id)_distanceUnitForLocale:(id)arg0 ;
+(id)_foodEnergyUnitForLocale:(id)arg0 ;
+(id)_foundationBaseUnits;
+(id)_heightUnitForLocale:(id)arg0 ;
+(id)_internationalUnitWithMassEquivalent;
+(id)_internationalUnitWithMassEquivalent:(CGFloat)arg0 ;
+(id)_internationalUnitWithMetricPrefix:(NSInteger)arg0 massEquivalent:(CGFloat)arg1 ;
+(id)_internationalUnitWithMetricPrefix:(NSInteger)arg0 volumeEquivalent:(CGFloat)arg1 ;
+(id)_internationalUnitWithVolumeEquivalent;
+(id)_internationalUnitWithVolumeEquivalent:(CGFloat)arg0 ;
+(id)_milligramsPerDeciliterUnit;
+(id)_millimolesBloodGlucosePerLiterUnit;
+(id)_nullUnit;
+(id)_personMassUnitForLocale:(id)arg0 ;
+(id)_prefixStringForMetricPrefix:(NSInteger)arg0 ;
+(id)_temperatureUnitForLocale:(id)arg0 ;
+(id)_unitForStringPrewarmCache;
+(id)_voltBaseUnit;
+(id)atmosphereUnit;
+(id)calorieUnit;
+(id)centimeterOfWaterUnit;
+(id)countUnit;
+(id)cupImperialUnit;
+(id)cupUSUnit;
+(id)dayUnit;
+(id)decibelAWeightedSoundPressureLevelUnit;
+(id)decibelHearingLevelUnit;
+(id)degreeAngleUnit;
+(id)degreeCelsiusUnit;
+(id)degreeFahrenheitUnit;
+(id)diopterUnit;
+(id)equivalentsUnit;
+(id)equivalentsUnitWithMolarMass:(CGFloat)arg0 valence:(NSInteger)arg1 ;
+(id)fluidOunceImperialUnit;
+(id)fluidOunceUSUnit;
+(id)footUnit;
+(id)gramUnit;
+(id)gramUnitWithMetricPrefix:(NSInteger)arg0 ;
+(id)hertzUnit;
+(id)hertzUnitWithMetricPrefix:(NSInteger)arg0 ;
+(id)hourUnit;
+(id)inchUnit;
+(id)inchesOfMercuryUnit;
+(id)internationalUnit;
+(id)jouleUnit;
+(id)jouleUnitWithMetricPrefix:(NSInteger)arg0 ;
+(id)kelvinUnit;
+(id)kilocalorieUnit;
+(id)kilojoulesUnit;
+(id)largeCalorieUnit;
+(id)literUnit;
+(id)literUnitWithMetricPrefix:(NSInteger)arg0 ;
+(id)meterUnit;
+(id)meterUnitWithMetricPrefix:(NSInteger)arg0 ;
+(id)mileUnit;
+(id)millimeterOfMercuryUnit;
+(id)milliseconds;
+(id)minuteUnit;
+(id)moleUnitWithMetricPrefix:(NSInteger)arg0 molarMass:(CGFloat)arg1 ;
+(id)moleUnitWithMolarMass:(CGFloat)arg0 ;
+(id)moles;
+(id)ounceUnit;
+(id)pascalUnit;
+(id)pascalUnitWithMetricPrefix:(NSInteger)arg0 ;
+(id)perMilleUnit;
+(id)percentUnit;
+(id)pintImperialUnit;
+(id)pintUSUnit;
+(id)poundUnit;
+(id)prismDiopterUnit;
+(id)radianAngleUnit;
+(id)radianAngleUnitWithMetricPrefix:(NSInteger)arg0 ;
+(id)secondUnit;
+(id)secondUnitWithMetricPrefix:(NSInteger)arg0 ;
+(id)siemenUnit;
+(id)siemenUnitWithMetricPrefix:(NSInteger)arg0 ;
+(id)smallCalorieUnit;
+(id)stoneUnit;
+(id)titerUnit;
+(id)unitFromEnergyFormatterUnit:(NSInteger)arg0 ;
+(id)unitFromLengthFormatterUnit:(NSInteger)arg0 ;
+(id)unitFromMassFormatterUnit:(NSInteger)arg0 ;
+(id)unitFromString:(id)arg0 ;
+(id)voltUnit;
+(id)voltUnitWithMetricPrefix:(NSInteger)arg0 ;
+(id)wattUnit;
+(id)wattUnitWithMetricPrefix:(NSInteger)arg0 ;
+(id)yardUnit;
+(void)_prewarmUnitForStringCache;
-(BOOL)_isCompatibleWithDimension:(id)arg0 ;
-(BOOL)_isCompatibleWithUnit:(id)arg0 ;
-(BOOL)_isMetricDistance;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNull;
-(CGFloat)_convertFromBaseUnit:(CGFloat)arg0 ;
-(CGFloat)_convertToBaseUnit:(CGFloat)arg0 ;
-(CGFloat)_reducedProportionalSize;
-(CGFloat)_valueByConvertingValue:(CGFloat)arg0 toUnit:(id)arg1 ;
-(NSUInteger)hash;
-(id)_baseUnitReduction;
-(id)_baseUnitReductionAndProportionalSize:(*CGFloat)arg0 withCycleSet:(id)arg1 ;
-(id)_computeBaseUnitReductionAndProportionalSize:(*CGFloat)arg0 withCycleSet:(id)arg1 ;
-(id)_foundationUnit;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reciprocalUnit;
-(id)unitDividedByUnit:(id)arg0 ;
-(id)unitMultipliedByUnit:(id)arg0 ;
-(id)unitRaisedToPower:(NSInteger)arg0 ;
-(void)_reduceIfNecessaryWithCycleSet:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif