// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPLAYBUTTONCONTROL_H
#define SKUIPLAYBUTTONCONTROL_H

@class UIControl, _UIBackdropView, UIColor, UIView, NSArray, NSString, UIImage, UIImageView;


#import "SKUIPlayButtonShapeView.h"
#import "SKUIPlayButtonGradientView.h"
#import "SKUIButtonViewElement.h"

@interface SKUIPlayButtonControl : UIControl {
    _UIBackdropView *_backdropView;
    UIColor *_backgroundColor;
    SKUIPlayButtonShapeView *_borderLayer;
    UIView *_backgroundView;
    UIColor *_bufferProgressIndicatorColor;
    id *_bufferProgressIndicatorCompositingFilter;
    BOOL _didInitialHighlightForTouch;
    SKUIPlayButtonGradientView *_gradientBackgroundView;
    NSArray *_gradientColors;
    NSInteger _gradientType;
    SKUIPlayButtonShapeView *_innerProgressLayer;
    SKUIPlayButtonShapeView *_outerProgressLayer;
    SKUIPlayButtonShapeView *_selectedLayer;
    id *_progressIndicatorCompositingFilter;
    UIColor *_selectionColor;
    id *_selectionCompositingFilter;
    BOOL _usesBlurredBackground;
    BOOL _showBorder;
}


@property (copy, nonatomic) NSString *backdropGroupName; // ivar: _backdropGroupName
@property (weak, nonatomic) UIImage *backgroundImageForBlurring; // ivar: _backgroundImageForBlurring
@property (readonly, nonatomic) NSInteger backgroundType; // ivar: _backgroundType
@property (nonatomic) UIEdgeInsets bigHitInsets; // ivar: _bigHitInsets
@property (readonly, nonatomic) UIColor *controlForeGroundColor; // ivar: _controlForeGroundColor
@property (retain, nonatomic) UIImage *customPlayImage; // ivar: _customPlayImage
@property (retain, nonatomic) UIImage *customToggleImage; // ivar: _customToggleImage
@property (nonatomic, getter=isDisabledButSelectable) BOOL disabledButSelectable; // ivar: _disabledButSelectable
@property (retain, nonatomic) SKUIButtonViewElement *element; // ivar: _element
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate; // ivar: _indeterminate
@property (nonatomic) float progress; // ivar: _progress
@property (copy, nonatomic) UIColor *progressIndicatorColor; // ivar: _progressIndicatorColor
@property (nonatomic) BOOL showOuterBorder; // ivar: _showOuterBorder
@property (readonly, nonatomic) BOOL showingPlayIndicator; // ivar: _showingPlayIndicator
@property (readonly, nonatomic) BOOL showingProgress; // ivar: _showingProgress


+(id)blurColorForColor:(id)arg0 ;
+(id)blurColorForImage:(id)arg0 forButtonSize:(struct CGSize )arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3 ;
+(struct ? )_calculateStatistics:(struct CGImage *)arg0 withSize:(struct CGSize )arg1 ;
-(BOOL)_renderAsEnabled;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(float)buttonCornerRadius;
-(float)playButtonDefaultAlpha;
-(id)_backgroundView;
-(id)_borderLayer;
-(id)_cancelImage;
-(id)_classicBackdropView;
-(id)_defaultBackgroundView;
-(id)_gradientBackgroundView;
-(id)_innerProgressLayer;
-(id)_newShapeViewWithBounds:(struct CGRect )arg0 lineWidth:(CGFloat)arg1 ;
-(id)_outerProgressLayer;
-(id)_playImage;
-(id)_selectedLayer;
-(id)_simpleBackdrop;
-(id)cancelImage;
-(id)defaultBackgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)outerBorderColor;
-(id)playImage;
-(struct CGRect )hitRect;
-(struct CGSize )buttonSize;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_beginIndeterminateAnimation;
-(void)_createGradient:(id)arg0 withGradientType:(NSInteger)arg1 ;
-(void)_prepareForReuse;
-(void)_showPlayIndicator:(BOOL)arg0 ;
-(void)_toggleToPlayState;
-(void)_updateBackdropView;
-(void)_updateBackgroundBlur:(id)arg0 withOffsetRight:(float)arg1 withOffsetBottom:(float)arg2 ;
-(void)_updateEnabledState;
-(void)_updateInnerProgressLayerStroke;
-(void)_useBlurredBackground:(BOOL)arg0 ;
-(void)beginIndeterminateAnimation;
-(void)endIndeterminateAnimation;
-(void)hideProgressAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)playIndicatorDidChange:(BOOL)arg0 ;
-(void)refresh;
-(void)setBackgroundGradientColors:(id)arg0 withGradientType:(NSInteger)arg1 ;
-(void)setBufferProgressIndicatorColor:(id)arg0 withCompositingFilter:(id)arg1 ;
-(void)setControlColor:(id)arg0 ;
-(void)setControlForegroundColor:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSelectionColor:(id)arg0 withCompositingFilter:(id)arg1 ;
-(void)setShowBorder:(BOOL)arg0 ;
-(void)showPlayIndicator:(BOOL)arg0 ;
-(void)showPlayIndicator:(BOOL)arg0 force:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)updateOuterProgressLayerStroke;


@end


#endif