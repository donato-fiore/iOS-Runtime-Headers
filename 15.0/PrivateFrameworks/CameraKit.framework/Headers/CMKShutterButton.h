// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMKSHUTTERBUTTON_H
#define CMKSHUTTERBUTTON_H

@class UIButton, UIView, UIImageView, UIActivityIndicatorView;



@interface CMKShutterButton : UIButton

@property (readonly, nonatomic) UIView *_innerView; // ivar: __innerView
@property (readonly, nonatomic) UIImageView *_outerImageView; // ivar: __outerImageView
@property (readonly, nonatomic) UIView *_outerView; // ivar: __outerView
@property (readonly, nonatomic) UIActivityIndicatorView *_progressActivityIndicatorView; // ivar: __progressActivityIndicatorView
@property (nonatomic) NSInteger buttonMode; // ivar: _buttonMode
@property (nonatomic, getter=isPulsing) BOOL pulsing; // ivar: _pulsing
@property (nonatomic) BOOL showDisabled; // ivar: _showDisabled
@property (nonatomic, setter=_setSpec:) CMKShutterButtonSpec spec; // ivar: _spec
@property (nonatomic, getter=isSpinning) BOOL spinning; // ivar: _spinning


+(id)shutterButton;
+(id)shutterButtonWithDesiredSpec:(struct CMKShutterButtonSpec )arg0 ;
+(id)smallShutterButton;
+(id)tinyShutterButton;
-(BOOL)_isStopMode:(NSInteger)arg0 ;
-(BOOL)_shouldUseImageViewForMode:(NSInteger)arg0 ;
-(BOOL)_shouldUseTimelapseOuterViewForMode:(NSInteger)arg0 ;
-(CGFloat)_borderWidthForMode:(NSInteger)arg0 ;
-(CGFloat)_cornerRadiusForMode:(NSInteger)arg0 ;
-(CGFloat)_innerCircleDiameter;
-(id)_colorForMode:(NSInteger)arg0 ;
-(id)_outerImageForMode:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_sizeForMode:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_commonCMKShutterButtonInitialization;
-(void)_performHighlightAnimation;
-(void)_performModeSwitchAnimationFromMode:(NSInteger)arg0 toMode:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)_updateOuterAndInnerLayers;
-(void)_updateSpinningAnimations;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif