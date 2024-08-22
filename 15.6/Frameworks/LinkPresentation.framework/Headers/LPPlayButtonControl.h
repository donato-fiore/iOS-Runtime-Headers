// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPPLAYBUTTONCONTROL_H
#define LPPLAYBUTTONCONTROL_H

@class UIControl, CAShapeLayer, UILongPressGestureRecognizer, UIView, NSString, UIImageView;
@protocol UIGestureRecognizerDelegate, LPComponentMediaPlayable;


#import "LPAudioPlayButtonStyle.h"
#import "LPAudioPlayButtonTheme.h"

@interface LPPlayButtonControl : UIControl <UIGestureRecognizerDelegate, LPComponentMediaPlayable>

 {
    LPAudioPlayButtonStyle *_style;
    LPAudioPlayButtonTheme *_theme;
    CAShapeLayer *_borderLayer;
    CAShapeLayer *_innerProgressLayer;
    CAShapeLayer *_outerProgressLayer;
    CAShapeLayer *_highlightLayer;
    UILongPressGestureRecognizer *_highlightRecognizer;
    UIView *_backgroundView;
    BOOL _showingProgress;
    BOOL _isPlaying;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate; // ivar: _indeterminate
@property (nonatomic) float progress; // ivar: _progress
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)isFlipped;
-(float)buttonCornerRadius;
-(id)_createProgressIndicatorLayerWithBounds:(struct CGRect )arg0 lineWidth:(CGFloat)arg1 ;
-(id)defaultBackgroundColor;
-(id)initWithStyle:(id)arg0 theme:(id)arg1 ;
-(id)outerBorderColor;
-(id)pauseImage;
-(id)playImage;
-(id)playable;
-(struct CGSize )buttonSize;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_createBackgroundView;
-(void)_createBorderView;
-(void)_createHighlightLayer;
-(void)_createImageView;
-(void)_createInnerProgressView;
-(void)_createOuterProgressView;
-(void)_didScroll;
-(void)_hideTapHighlight;
-(void)_highlightLongPressRecognized:(id)arg0 ;
-(void)_showPlayIndicator:(BOOL)arg0 ;
-(void)_toggleToPlayState;
-(void)_updateEnabledState;
-(void)_updateInnerProgressLayerStroke;
-(void)_updateOuterProgressLayerStroke;
-(void)beginIndeterminateAnimation;
-(void)buttonPressed:(id)arg0 ;
-(void)endIndeterminateAnimation;
-(void)hideProgressAnimated:(BOOL)arg0 ;
-(void)installRecognizersOnView:(id)arg0 ;
-(void)layoutPlayButton;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setPlayButtonState:(NSUInteger)arg0 ;
-(void)setShowBorder:(BOOL)arg0 ;
-(void)setShowOuterBorder:(BOOL)arg0 ;
-(void)showPlayIndicator:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif