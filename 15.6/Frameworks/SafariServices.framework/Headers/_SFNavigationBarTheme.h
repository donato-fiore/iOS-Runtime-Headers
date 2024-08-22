// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFNAVIGATIONBARTHEME_H
#define _SFNAVIGATIONBARTHEME_H

@class SFBarTheme, UIColor;



@interface _SFNavigationBarTheme : SFBarTheme

@property (readonly, nonatomic) UIColor *annotationTextColor; // ivar: _annotationTextColor
@property (readonly, nonatomic) BOOL backdropIsExtreme; // ivar: _backdropIsExtreme
@property (readonly, nonatomic) BOOL backdropIsGreen; // ivar: _backdropIsGreen
@property (readonly, nonatomic) BOOL backdropIsRed; // ivar: _backdropIsRed
@property (readonly, nonatomic) UIColor *platterAnnotationTextColor; // ivar: _platterAnnotationTextColor
@property (readonly, nonatomic) BOOL platterBackdropIsDark; // ivar: _platterBackdropIsDark
@property (readonly, nonatomic) NSInteger platterKeyboardOverrideAppearance; // ivar: _platterKeyboardOverrideAppearance
@property (readonly, nonatomic) NSInteger platterOverrideUserInterfaceStyle; // ivar: _platterOverrideUserInterfaceStyle
@property (readonly, nonatomic) UIColor *platterPlaceholderTextColor; // ivar: _platterPlaceholderTextColor
@property (readonly, nonatomic) UIColor *platterSecureTextColor; // ivar: _platterSecureTextColor
@property (readonly, nonatomic) UIColor *platterSelectionColor; // ivar: _platterSelectionColor
@property (readonly, nonatomic) UIColor *platterTextColor; // ivar: _platterTextColor
@property (readonly, nonatomic) NSInteger platterTextFieldOverrideUserInterfaceStyle; // ivar: _platterTextFieldOverrideUserInterfaceStyle
@property (readonly, nonatomic) UIColor *platterWarningTextColor; // ivar: _platterWarningTextColor
@property (readonly, nonatomic) UIColor *progressBarTintColor; // ivar: _progressBarTintColor
@property (readonly, nonatomic) UIColor *secureTextColor; // ivar: _secureTextColor
@property (readonly, nonatomic) UIColor *textColor; // ivar: _textColor
@property (readonly, nonatomic) UIColor *warningTextColor; // ivar: _warningTextColor


-(id)URLAccessoryButtonTintColorForInputMode:(NSUInteger)arg0 ;
-(id)_colorForPlatterTextColor:(id)arg0 regularColor:(id)arg1 withPlatterAlpha:(CGFloat)arg2 ;
-(id)annotationTextColorForPlatterAlpha:(CGFloat)arg0 ;
-(id)initWithBarTintStyle:(NSInteger)arg0 preferredBarTintColor:(id)arg1 controlsTintColor:(id)arg2 ;
-(id)platterSecureTextColorForPlatterAlpha:(CGFloat)arg0 ;
-(id)platterTextColorForPlatterAlpha:(CGFloat)arg0 ;
-(id)platterWarningTextColorForPlatterAlpha:(CGFloat)arg0 ;


@end


#endif