// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFBARTHEME_H
#define _SFBARTHEME_H

@class UIColor, NSArray, UIBlurEffect;

#import <Foundation/Foundation.h>

#import "_SFBarTheme.h"

@interface _SFBarTheme : NSObject {
    UIColor *_preferredControlsTintColor;
}


@property (readonly, nonatomic) NSArray *backdropAdjustmentEffects; // ivar: _backdropAdjustmentEffects
@property (readonly, nonatomic) UIBlurEffect *backdropEffect; // ivar: _backdropEffect
@property (readonly, nonatomic) NSArray *backdropEffects;
@property (readonly, nonatomic) BOOL backdropIsDark; // ivar: _backdropIsDark
@property (readonly, nonatomic) BOOL backdropIsTinted; // ivar: _backdropIsTinted
@property (readonly, nonatomic) UIColor *controlsTintColor; // ivar: _controlsTintColor
@property (readonly, nonatomic) _SFBarTheme *fallbackTheme;
@property (readonly, nonatomic) NSInteger overrideUserInterfaceStyle; // ivar: _overrideUserInterfaceStyle
@property (readonly, nonatomic) UIColor *platterProgressBarTintColor; // ivar: _platterProgressBarTintColor
@property (readonly, nonatomic) UIColor *preferredBarTintColor; // ivar: _preferredBarTintColor
@property (readonly, nonatomic) NSInteger tintStyle; // ivar: _tintStyle


+(BOOL)backdropIsDarkForStyle:(NSInteger)arg0 ;
+(BOOL)canTintPrivateStyles;
+(BOOL)prefersThemeColorEffect;
+(id)backdropEffectForStyle:(NSInteger)arg0 ;
+(id)controlsTintColorForStyle:(NSInteger)arg0 ;
+(id)themeWithBarTintStyle:(NSInteger)arg0 ;
+(id)themeWithBarTintStyle:(NSInteger)arg0 preferredBarTintColor:(id)arg1 controlsTintColor:(id)arg2 ;
+(id)themeWithTheme:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithBarTintStyle:(NSInteger)arg0 preferredBarTintColor:(id)arg1 controlsTintColor:(id)arg2 ;
-(void)applyBackdropEffectsToView:(id)arg0 ;


@end


#endif