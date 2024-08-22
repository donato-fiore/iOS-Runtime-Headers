// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUSHUTTERBUTTON_H
#define CUSHUTTERBUTTON_H

@class UIButton, UIView, UIImageView, UIColor;
@protocol CAMShutterButtonDelegate;


#import "CAMShutterButtonRingView.h"
#import "CAMTimelapseShutterRingView.h"

@interface CUShutterButton : UIButton

@property (readonly, nonatomic) UIView *_innerView; // ivar: __innerView
@property (readonly, nonatomic) UIView *_innerViewContrastView; // ivar: __innerViewContrastView
@property (readonly, nonatomic) UIImageView *_outerImageView; // ivar: __outerImageView
@property (readonly, nonatomic) CAMShutterButtonRingView *_outerView; // ivar: __outerView
@property (retain, nonatomic) UIView *_spinnerView; // ivar: __spinnerView
@property (retain, nonatomic) UIView *_stopModeBackground; // ivar: __stopModeBackground
@property (readonly, nonatomic) CAMTimelapseShutterRingView *_timelapseOuterView; // ivar: __timelapseOuterView
@property (retain, nonatomic) UIColor *contentColor; // ivar: _contentColor
@property (weak, nonatomic) NSObject<CAMShutterButtonDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) BOOL showDisabled; // ivar: _showDisabled
@property (nonatomic) CAMShutterButtonSpec spec; // ivar: _spec
@property (nonatomic, getter=isSpinning) BOOL spinning; // ivar: _spinning
@property (retain, nonatomic) UIColor *stopModeBackgroundColor; // ivar: _stopModeBackgroundColor
@property (nonatomic) UIEdgeInsets tappableEdgeInsets; // ivar: _tappableEdgeInsets


+(id)shutterButton;
+(id)shutterButtonWithLayoutStyle:(NSInteger)arg0 ;
+(id)shutterButtonWithSpec:(struct CAMShutterButtonSpec )arg0 ;
+(id)smallShutterButton;
+(id)smallShutterButtonWithLayoutStyle:(NSInteger)arg0 ;
-(BOOL)_isSpinningSupportedForLayoutStyle:(NSInteger)arg0 ;
-(BOOL)_shouldShowBackgroundViewForMode:(NSInteger)arg0 ;
-(BOOL)_shouldShowContrastBorderForMode:(NSInteger)arg0 layoutStyle:(NSInteger)arg1 ;
-(CGFloat)_cornerRadiusForMode:(NSInteger)arg0 ;
-(id)_innerCircleColorForMode:(NSInteger)arg0 spinning:(BOOL)arg1 ;
-(id)_outerImageForMode:(NSInteger)arg0 layoutStyle:(NSInteger)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 layoutStyle:(NSInteger)arg1 spec:(struct CAMShutterButtonSpec )arg2 ;
-(struct ? )_timelapseRingSpecForLayoutStyle:(NSInteger)arg0 ;
-(struct CGSize )_sizeForMode:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_commonCAMShutterButtonInitializationWithLayoutStyle:(NSInteger)arg0 spec:(struct CAMShutterButtonSpec )arg1 ;
-(void)_performHighlightAnimation;
-(void)_performModeSwitchAnimationFromMode:(NSInteger)arg0 toMode:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)_updateOuterAndInnerLayers;
-(void)_updateSpinningAnimations;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif