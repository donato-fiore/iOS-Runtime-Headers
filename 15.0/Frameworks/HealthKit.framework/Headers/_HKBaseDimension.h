// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKBASEDIMENSION_H
#define _HKBASEDIMENSION_H

@class HKDimension, NSString;
@protocol _HKFactor;


#import "HKUnit.h"
#import "HKBaseUnit.h"

@interface _HKBaseDimension : HKDimension <_HKFactor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) HKUnit *reducedUnit; // ivar: _reducedUnit
@property (retain, nonatomic) HKBaseUnit *reducibleBaseUnit; // ivar: _reducibleBaseUnit
@property (nonatomic) CGFloat reductionCoefficient; // ivar: _reductionCoefficient
@property (readonly) Class superclass;


+(id)_uniquedDefinedDimensionWithName:(id)arg0 ;
+(id)_uniquedDimensionWithName:(id)arg0 configuration:(id)arg1 ;
+(id)conductance;
+(id)electricPotentialDifference;
+(id)energy;
+(id)equivalents;
+(id)frequency;
+(id)hearingSensitivity;
+(id)length;
+(id)mass;
+(id)nonConvertibleIU;
+(id)nonConvertibleMole;
+(id)nullDimension;
+(id)pressure;
+(id)soundPressureLevel;
+(id)temperature;
+(id)time;
+(id)titer;
+(id)volume;
-(BOOL)canBeReduced;
-(BOOL)isEqual:(id)arg0 ;
-(id)_baseDimensions;
-(id)_initWithName:(id)arg0 ;
-(id)dimension;
-(id)unitString;


@end


#endif