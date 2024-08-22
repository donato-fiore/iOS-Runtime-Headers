// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBARBACKGROUNDLAYOUTLEGACY_H
#define _UIBARBACKGROUNDLAYOUTLEGACY_H

@class UIBarBackgroundLayout, NSArray;


#import "UIImage.h"
#import "UIColor.h"
#import "UIVibrancyEffect.h"

@interface _UIBarBackgroundLayoutLegacy : UIBarBackgroundLayout {
    NSInteger _translucence;
    UIImage *_backgroundImage;
    UIColor *_backgroundTintColor;
    NSArray *_backgroundEffects;
    UIImage *_shadowImage;
    UIColor *_shadowColor;
    UIVibrancyEffect *_shadowEffect;
    BOOL _hasShadow;
}


@property (nonatomic) BOOL disableTinting;
@property (readonly, nonatomic) BOOL hasBackgroundEffect;
@property (readonly, nonatomic) UIImage *shadowImage;
@property (nonatomic) CGFloat topInset; // ivar: _topInset


-(BOOL)bg1HasShadow;
-(BOOL)shouldUseExplicitGeometry;
-(CGFloat)bg1Alpha;
-(CGFloat)bg1ImageAlpha;
-(CGFloat)bg1ShadowAlpha;
-(CGFloat)bgInset;
-(id)_blurWithStyle:(NSInteger)arg0 tint:(id)arg1 ;
-(id)_colorForStyle:(NSInteger)arg0 ;
-(id)bg1Color;
-(id)bg1Effects;
-(id)bg1Image;
-(id)bg1ShadowColor;
-(id)bg1ShadowEffect;
-(id)bg1ShadowImage;
-(id)initWithLayout:(id)arg0 ;
-(void)configureAsTransparent;
-(void)configureBackgroundColor:(id)arg0 barStyle:(NSInteger)arg1 translucent:(BOOL)arg2 ;
-(void)configureEffectForStyle:(NSInteger)arg0 backgroundTintColor:(id)arg1 forceOpaque:(BOOL)arg2 ;
-(void)configureImage:(id)arg0 forceOpaque:(BOOL)arg1 backgroundTintColor:(id)arg2 ;
-(void)configureImage:(id)arg0 forceOpaque:(BOOL)arg1 barStyle:(NSInteger)arg2 ;
-(void)configureImage:(id)arg0 forceTranslucent:(BOOL)arg1 ;
-(void)configureShadowForBarStyle:(NSInteger)arg0 ;
-(void)configureShadowImage:(id)arg0 ;
-(void)configureWithEffects:(id)arg0 ;
-(void)configureWithoutShadow;
-(void)describeInto:(id)arg0 ;
-(void)setUseExplicitGeometry:(BOOL)arg0 ;


@end


#endif