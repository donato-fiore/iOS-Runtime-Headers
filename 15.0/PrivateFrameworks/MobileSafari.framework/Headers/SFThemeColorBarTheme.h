// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFTHEMECOLORBARTHEME_H
#define SFTHEMECOLORBARTHEME_H

@class SFBarTheme, NSString, UIColor, UITraitCollection;



@interface SFThemeColorBarTheme : SFBarTheme

@property (copy, nonatomic) NSString *backdropGroupName; // ivar: _backdropGroupName
@property (readonly, nonatomic) UIColor *overrideTintColor; // ivar: _overrideTintColor
@property (readonly, nonatomic) UIColor *themeColor; // ivar: _themeColor
@property (readonly, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle


+(BOOL)canTintPrivateStyles;
+(BOOL)prefersThemeColorEffect;
-(id)initWithBarTintStyle:(NSInteger)arg0 preferredBarTintColor:(id)arg1 controlsTintColor:(id)arg2 ;
-(void)applyBackdropEffectsToView:(id)arg0 ;


@end


#endif