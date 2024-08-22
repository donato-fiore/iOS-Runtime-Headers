// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIVIBRANCYEFFECT_H
#define UIVIBRANCYEFFECT_H



#import "UIVisualEffect.h"
#import "_UIVibrancyEffectImpl.h"

@interface UIVibrancyEffect : UIVisualEffect {
    _UIVibrancyEffectImpl *_impl;
}


@property (readonly, nonatomic, getter=_vibrancyStyle) NSInteger _vibrancyStyle;


+(BOOL)supportsSecureCoding;
+(id)_darkVibrantEffectWithLightenColor:(id)arg0 dodgeColor:(id)arg1 compositingColor:(id)arg2 ;
+(id)_effectForBlurEffect:(id)arg0 vibrancyStyle:(NSInteger)arg1 ;
+(id)_effectWithStyle:(NSInteger)arg0 ignoreSimpleVibrancy:(BOOL)arg1 ;
+(id)_lightVibrantEffectWithDarkenColor:(id)arg0 burnColor:(id)arg1 compositingColor:(id)arg2 ;
+(id)_vibrancyEntryWithType:(id)arg0 inputColor1:(id)arg1 inputColor2:(id)arg2 inputReversed:(BOOL)arg3 ;
+(id)_vibrantEffectForLightMaterial:(id)arg0 darkMaterial:(id)arg1 vibrancyStyle:(NSInteger)arg2 ;
+(id)_vibrantEffectWithCAColorMatrix:(struct CAColorMatrix )arg0 alpha:(CGFloat)arg1 ;
+(id)_vibrantEffectWithLightCAColorMatrix:(struct CAColorMatrix )arg0 darkCAColorMatrix:(struct CAColorMatrix )arg1 alpha:(CGFloat)arg2 ;
+(id)_vibrantShadowEffect;
+(id)darkVibrantEffectWithDodgeColor:(id)arg0 lightenColor:(id)arg1 compositingColor:(id)arg2 ;
+(id)effectForBlurEffect:(id)arg0 ;
+(id)effectForBlurEffect:(id)arg0 style:(NSInteger)arg1 ;
+(id)lightVibrantEffectWithBurnColor:(id)arg0 darkenColor:(id)arg1 compositingColor:(id)arg2 ;
+(id)vibrantChromeShadowEffect;
+(id)vibrantEffectWithCompositingMode:(NSInteger)arg0 compositingColor:(id)arg1 ;
+(id)vibrantHeavyShadowEffect;
+(id)vibrantMediumShadowEffect;
-(BOOL)_isATVStyle;
-(BOOL)_isAutomaticStyle;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg0 toEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_blurStyle;
-(NSInteger)_expectedUsage;
-(NSUInteger)hash;
-(id)_effectReplacingTintColor:(id)arg0 ;
-(id)_initWithImplementation:(id)arg0 ;
-(id)_reduceTransparencyEffectConfig;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)effectConfig;
-(id)effectConfigForQuality:(NSInteger)arg0 ;
-(id)effectConfigForReducedTransperancy:(BOOL)arg0 ;
-(id)effectForUserInterfaceStyle:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_updateEffectDescriptor:(id)arg0 forEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif