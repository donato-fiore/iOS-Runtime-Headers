// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDEFFECTPARAMETERVALUE_H
#define TDEFFECTPARAMETERVALUE_H

@class NSManagedObject, NSNumber;


#import "TDEffectComponent.h"
#import "TDEffectParameterType.h"

@interface TDEffectParameterValue : NSManagedObject

@property (retain, nonatomic) NSNumber *angleValue;
@property (nonatomic) NSUInteger blueComponent;
@property (retain, nonatomic) NSNumber *colorValue;
@property (retain, nonatomic) TDEffectComponent *component;
@property (retain, nonatomic) NSNumber *floatValue;
@property (nonatomic) NSUInteger greenComponent;
@property (retain, nonatomic) NSNumber *intValue;
@property (retain, nonatomic) TDEffectParameterType *parameterType;
@property (nonatomic) NSUInteger redComponent;


+(id)keyPathsForValuesAffectingBlueComponent;
+(id)keyPathsForValuesAffectingColor;
+(id)keyPathsForValuesAffectingGreenComponent;
+(id)keyPathsForValuesAffectingRedComponent;


@end


#endif