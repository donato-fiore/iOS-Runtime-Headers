// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIVIBRANTBUTTON_H
#define SBUIVIBRANTBUTTON_H

@class UIControl, UIView, UILabel, UIImageView, NSString, UIImage, _UILegibilitySettings, _SBFVibrantSettings;
@protocol _SBFVibrantView, SBUILegibility;


#import "SBUILegibilityView.h"
#import "SBUILegibilityLabel.h"

@interface SBUIVibrantButton : UIControl <_SBFVibrantView, SBUILegibility>

 {
    UIView *_vibrantMaskView;
    UILabel *_vibrantMaskLabel;
    UIImageView *_vibrantMaskGlyphView;
    UIView *_vibrantGlyph;
    UIView *_vibrantGlyphBackgroundView;
    UIView *_vibrantGlyphTintView;
    UIView *_nonVibrantGlyph;
    SBUILegibilityView *_nonVibrantGlyphLegibilityView;
    SBUILegibilityLabel *_nonVibrantLegibilityLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIImage *glyphImage; // ivar: _glyphImage
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) NSInteger lineBreakMode; // ivar: _lineBreakMode
@property (nonatomic) CGFloat minimumTitleScaleFactor; // ivar: _minimumTitleScaleFactor
@property (nonatomic) NSInteger numberOfLines; // ivar: _numberOfLines
@property (nonatomic) CGFloat strength; // ivar: _strength
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic, getter=isVibrancyAllowed) BOOL vibrancyAllowed; // ivar: _vibrancyAllowed
@property (retain, nonatomic) _SBFVibrantSettings *vibrantSettings; // ivar: _vibrantSettings


+(id)_labelFont;
-(BOOL)_shouldUseVibrancy;
-(CGFloat)_alphaForState;
-(id)_lazyGlyphLegibilityView;
-(id)backgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_glyphFrameForSize:(struct CGSize )arg0 inRect:(struct CGRect )arg1 ;
-(struct CGRect )_labelFrameForSize:(struct CGSize )arg0 baselineOffset:(CGFloat)arg1 inRect:(struct CGRect )arg2 ;
-(struct CGSize )_sizeThatFitsForLabelView:(id)arg0 ;
-(struct CGSize )_sizeThatFitsWithVibrancy;
-(struct CGSize )_sizeThatFitsWithoutVibrancy;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutNonVibrantSubviews;
-(void)_layoutVibrantSubviews;
-(void)_setUpForCurrentVibrancy;
-(void)_updateForState;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBackgroundView:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif