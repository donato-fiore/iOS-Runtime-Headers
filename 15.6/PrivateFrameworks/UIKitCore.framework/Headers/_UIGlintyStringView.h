// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIGLINTYSTRINGVIEW_H
#define _UIGLINTYSTRINGVIEW_H

@class NSMutableSet, UIFont, NSString;
@protocol _UIGlintyStringViewDelegate;


#import "UIView.h"
#import "UIColor.h"
#import "UIImage.h"
#import "UILabel.h"
#import "_UILegibilitySettings.h"
#import "_UIVibrantSettings.h"

@interface _UIGlintyStringView : UIView

@property (nonatomic) BOOL adjustsFontSizeToFitWidth; // ivar: _adjustsFontSizeToFitWidth
@property (nonatomic) BOOL allowsLuminanceAdjustments; // ivar: _allowsLuminanceAdjustments
@property (nonatomic) BOOL animating; // ivar: _animating
@property (nonatomic) BOOL animationRepeats; // ivar: _animationRepeats
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (nonatomic) CGFloat blurAlpha; // ivar: _blurAlpha
@property (retain, nonatomic) NSMutableSet *blurHiddenRequesters; // ivar: _blurHiddenRequesters
@property (retain, nonatomic) UIView *blurView; // ivar: _blurView
@property (retain, nonatomic) UIImage *chevron; // ivar: _chevron
@property (retain, nonatomic) UIColor *chevronBackgroundColor; // ivar: _chevronBackgroundColor
@property (nonatomic) CGRect chevronFrame; // ivar: _chevronFrame
@property (nonatomic) NSInteger chevronStyle; // ivar: _chevronStyle
@property (nonatomic) NSObject<_UIGlintyStringViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIView *effectView; // ivar: _effectView
@property (nonatomic) BOOL fading; // ivar: _fading
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) BOOL hasCustomBackgroundColor; // ivar: _hasCustomBackgroundColor
@property (nonatomic) BOOL highlight; // ivar: _highlight
@property (retain, nonatomic) UIView *highlightView; // ivar: _highlightView
@property (nonatomic) CGFloat horizontalPadding; // ivar: _horizontalPadding
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (readonly, nonatomic) CGRect labelFrame;
@property (nonatomic) CGSize labelSize; // ivar: _labelSize
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) BOOL needsTextUpdate; // ivar: _needsTextUpdate
@property (retain, nonatomic) UIView *reflectionImageView; // ivar: _reflectionImageView
@property (retain, nonatomic) UIView *shimmerImageView; // ivar: _shimmerImageView
@property (nonatomic) BOOL showing; // ivar: _showing
@property (retain, nonatomic) UIView *spotlightView; // ivar: _spotlightView
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) int textIndex; // ivar: _textIndex
@property (copy, nonatomic) NSString *textLanguage; // ivar: _textLanguage
@property (nonatomic) BOOL usesBackgroundDimming; // ivar: _usesBackgroundDimming
@property (retain, nonatomic) _UIVibrantSettings *vibrantSettings; // ivar: _vibrantSettings


-(BOOL)isAnimating;
-(CGFloat)_chevronWidthWithPaddingCompression:(CGFloat)arg0 ;
-(CGFloat)baselineOffsetFromBottom;
-(CGFloat)baselineOffsetFromBottomWithSize:(struct CGSize )arg0 ;
-(id)_chevronImageForStyle:(NSInteger)arg0 ;
-(id)initWithText:(id)arg0 andFont:(id)arg1 ;
-(id)shapeViewForCharactersInString:(id)arg0 withFont:(id)arg1 centeredInFrame:(struct CGRect )arg2 ;
-(struct CGSize )_labelSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateHighlight;
-(void)_updateLabelWithFrame:(struct CGRect )arg0 ;
-(void)addGlintyAnimations;
-(void)addReflectionAnimationToLayer:(id)arg0 ;
-(void)addShimmerAnimationToLayer:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)fadeIn;
-(void)fadeInWithDuration:(CGFloat)arg0 ;
-(void)fadeOut;
-(void)fadeOutWithDuration:(CGFloat)arg0 ;
-(void)hide;
-(void)hideBlur;
-(void)hideEffects;
-(void)layoutSubviews;
-(void)removeGlintyAnimations;
-(void)setBlurHidden:(BOOL)arg0 forRequester:(id)arg1 ;
-(void)show;
-(void)showBlur;
-(void)showEffects;
-(void)startAnimating;
-(void)stopAnimating;
-(void)updateBlurForHiddenRequesters;
-(void)updateText;
-(void)updateTextWithBounds:(struct CGRect )arg0 ;


@end


#endif