// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIBLUREFFECT_H
#define UIBLUREFFECT_H



#import "UIVisualEffect.h"
#import "_UIBlurEffectImpl.h"
#import "UIColor.h"

@interface UIBlurEffect : UIVisualEffect {
    _UIBlurEffectImpl *_impl;
}


@property (readonly, nonatomic) BOOL _canProvideCoreMaterialVibrancyEffect;
@property (readonly, nonatomic) BOOL _canProvideVibrancyEffect;
@property (readonly, nonatomic) BOOL _invertAutomaticStyle;
@property (readonly, nonatomic) NSInteger _style;
@property (readonly, nonatomic) UIColor *_tintColor;


+(BOOL)supportsSecureCoding;
+(id)_effectForLightMaterial:(id)arg0 darkMaterial:(id)arg1 bundle:(id)arg2 ;
+(id)_effectWithBlurRadius:(CGFloat)arg0 scale:(CGFloat)arg1 ;
+(id)_effectWithInfiniteRadius;
+(id)_effectWithInfiniteRadiusScale:(CGFloat)arg0 ;
+(id)_effectWithStyle:(NSInteger)arg0 invertAutomaticStyle:(BOOL)arg1 ;
+(id)_effectWithStyle:(NSInteger)arg0 tintColor:(id)arg1 invertAutomaticStyle:(BOOL)arg2 ;
+(id)_effectWithTintColor:(id)arg0 ;
+(id)effectWithBlurRadius:(CGFloat)arg0 ;
+(id)effectWithStyle:(NSInteger)arg0 ;
-(BOOL)_isATVStyle;
-(BOOL)_isAutomaticStyle;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg0 toEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_expectedUsage;
-(NSUInteger)hash;
-(id)_initWithImplementation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)effectForUserInterfaceStyle:(NSInteger)arg0 ;
-(id)effectSettings;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_updateEffectDescriptor:(id)arg0 forEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif