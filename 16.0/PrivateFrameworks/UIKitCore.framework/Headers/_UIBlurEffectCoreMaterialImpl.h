// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBLUREFFECTCOREMATERIALIMPL_H
#define _UIBLUREFFECTCOREMATERIALIMPL_H

@class UIBlurEffectImpl, NSString, NSBundle;



@interface _UIBlurEffectCoreMaterialImpl : UIBlurEffectImpl {
    NSInteger _style;
    NSString *_lightMaterial;
    NSString *_darkMaterial;
    NSBundle *_bundle;
}




-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg0 toEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(BOOL)canProvideCoreMaterialVibrancyEffect;
-(BOOL)canProvideVibrancyEffect;
-(BOOL)invertAutomaticStyle;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)style;
-(NSUInteger)hash;
-(id)implementationForUserInterfaceStyle:(NSInteger)arg0 ;
-(id)initWithLightMaterial:(id)arg0 darkMaterial:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tintColor;
-(void)_updateEffectDescriptor:(id)arg0 forEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(void)appendDescriptionTo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif