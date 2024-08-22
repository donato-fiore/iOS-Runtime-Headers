// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBARBACKGROUNDAPPEARANCEDATA_H
#define _UIBARBACKGROUNDAPPEARANCEDATA_H

@class UIBarAppearanceData, NSArray;


#import "UIColor.h"
#import "UIBlurEffect.h"
#import "UIImage.h"
#import "UIVibrancyEffect.h"

@interface _UIBarBackgroundAppearanceData : UIBarAppearanceData {
    ? _flags;
}


@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (copy, nonatomic) UIBlurEffect *backgroundEffect;
@property (copy, nonatomic) NSArray *backgroundEffects; // ivar: _backgroundEffects
@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (nonatomic) NSInteger backgroundImageContentMode; // ivar: _backgroundImageContentMode
@property (readonly, nonatomic) BOOL hasBackground;
@property (readonly, nonatomic) BOOL hasShadow;
@property (retain, nonatomic) UIVibrancyEffect *overrideTabBarVibrancyEffect; // ivar: _overrideTabBarVibrancyEffect
@property (copy, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (copy, nonatomic) UIVibrancyEffect *shadowEffect; // ivar: _shadowEffect
@property (retain, nonatomic) UIImage *shadowImage; // ivar: _shadowImage
@property (readonly, nonatomic) UIColor *shadowViewBackgroundColor;
@property (readonly, nonatomic) UIVibrancyEffect *shadowViewEffect; // ivar: _shadowViewEffect
@property (readonly, nonatomic) UIColor *shadowViewTintColor;
@property (readonly, nonatomic) UIVibrancyEffect *tabBarVibrancyEffect; // ivar: _tabBarVibrancyEffect


+(id)decodeFromCoder:(id)arg0 prefix:(id)arg1 ;
+(id)opaqueBackgroundData;
+(id)standardBackgroundData;
+(id)transparentBackgroundData;
-(BOOL)checkEqualTo:(id)arg0 ;
-(NSInteger)behaviorForTransitioningTo:(id)arg0 ;
-(NSInteger)hashInto:(NSInteger)arg0 ;
-(id)replicate;
-(void)_updateBackgroundFlags;
-(void)_updateShadowFlags;
-(void)configureWithDefaultShadow;
-(void)configureWithoutShadow;
-(void)describeInto:(id)arg0 ;
-(void)encodeToCoder:(id)arg0 prefix:(id)arg1 ;


@end


#endif