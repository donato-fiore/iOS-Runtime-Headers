// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDEFFECTCOMPONENT_H
#define TDEFFECTCOMPONENT_H

@class NSManagedObject, NSSet;


#import "TDEffectType.h"
#import "TDEffectRenditionSpec.h"

@interface TDEffectComponent : NSManagedObject

@property (retain, nonatomic) TDEffectType *effectType;
@property (nonatomic) BOOL isEnabled;
@property (retain, nonatomic) NSSet *parameters;
@property (retain, nonatomic) TDEffectRenditionSpec *rendition;


+(id)keyPathsForValuesAffectingCUIEffectParameterAngle;
+(id)keyPathsForValuesAffectingCUIEffectParameterBevelStyle;
+(id)keyPathsForValuesAffectingCUIEffectParameterBlendMode;
+(id)keyPathsForValuesAffectingCUIEffectParameterBlurSize;
+(id)keyPathsForValuesAffectingCUIEffectParameterColor1;
+(id)keyPathsForValuesAffectingCUIEffectParameterColor2;
+(id)keyPathsForValuesAffectingCUIEffectParameterOffset;
+(id)keyPathsForValuesAffectingCUIEffectParameterOpacity;
+(id)keyPathsForValuesAffectingCUIEffectParameterOpacity2;
+(id)keyPathsForValuesAffectingCUIEffectParameterSoftenSize;
+(id)keyPathsForValuesAffectingCUIEffectParameterSpread;
+(id)keyPathsForValuesAffectingCUIEffectParameterTintable;
-(id)CUIEffectParameterAngle;
-(id)CUIEffectParameterBevelStyle;
-(id)CUIEffectParameterBlendMode;
-(id)CUIEffectParameterBlurSize;
-(id)CUIEffectParameterColor1;
-(id)CUIEffectParameterColor2;
-(id)CUIEffectParameterOffset;
-(id)CUIEffectParameterOpacity;
-(id)CUIEffectParameterOpacity2;
-(id)CUIEffectParameterSoftenSize;
-(id)CUIEffectParameterSpread;
-(id)CUIEffectParameterTintable;
-(id)parameterOfType:(unsigned int)arg0 ;
-(void)addParametersToPreset:(id)arg0 ;
-(void)setEffectParametersFromPreset:(id)arg0 atIndex:(NSUInteger)arg1 withDocument:(id)arg2 ;


@end


#endif