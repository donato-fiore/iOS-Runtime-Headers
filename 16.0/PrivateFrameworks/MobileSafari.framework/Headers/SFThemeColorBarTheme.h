// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFTHEMECOLORBARTHEME_H
#define SFTHEMECOLORBARTHEME_H

@class SFBarTheme, NSString, UIBlurEffect, UIColor, UITraitCollection;



@interface SFThemeColorBarTheme : SFBarTheme

@property (nonatomic) BOOL appliesDarkeningOverlay; // ivar: _appliesDarkeningOverlay
@property (copy, nonatomic) NSString *backdropGroupName; // ivar: _backdropGroupName
@property (retain, nonatomic) UIBlurEffect *overrideBackdropEffect; // ivar: _overrideBackdropEffect
@property (readonly, nonatomic) UIColor *overrideTintColor; // ivar: _overrideTintColor
@property (readonly, nonatomic) UIColor *themeColor; // ivar: _themeColor
@property (readonly, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle


+(BOOL)canTintPrivateStyles;
+(BOOL)prefersThemeColorEffect;
-(BOOL)isEqual:(id)arg0 ;
-(id)backdropEffect;
-(id)backdropEffects;
-(id)initWithBarTintStyle:(NSInteger)arg0 preferredBarTintColor:(id)arg1 controlsTintColor:(id)arg2 ;
-(void)applyBackdropEffectsToView:(id)arg0 ;


@end


#endif