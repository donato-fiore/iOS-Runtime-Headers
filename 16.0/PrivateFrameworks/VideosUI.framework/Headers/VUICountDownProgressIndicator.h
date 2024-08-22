// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUICOUNTDOWNPROGRESSINDICATOR_H
#define VUICOUNTDOWNPROGRESSINDICATOR_H

@class UIView, UIImage, CAShapeLayer, UIColor, UIImageView, CADisplayLink, UIVisualEffectView;



@interface VUICountDownProgressIndicator : UIView

@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (nonatomic) CGFloat autoFillDelta; // ivar: _autoFillDelta
@property (nonatomic) CGFloat autoFillStartTimeStamp; // ivar: _autoFillStartTimeStamp
@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (nonatomic) UIEdgeInsets backgroundImageInset; // ivar: _backgroundImageInset
@property (retain, nonatomic) CAShapeLayer *backgroundLayer; // ivar: _backgroundLayer
@property (retain, nonatomic) UIColor *backgroundTintColor; // ivar: _backgroundTintColor
@property (retain, nonatomic) UIImage *centerImage; // ivar: _centerImage
@property (nonatomic) UIEdgeInsets centerImageInset; // ivar: _centerImageInset
@property (retain, nonatomic) UIImageView *centerImageView; // ivar: _centerImageView
@property (retain, nonatomic) CAShapeLayer *centerLayer; // ivar: _centerLayer
@property (retain, nonatomic) UIColor *centerTintColor; // ivar: _centerTintColor
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) NSUInteger countDownProgressDirection; // ivar: _countDownProgressDirection
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (nonatomic) UIEdgeInsets progressInset; // ivar: _progressInset
@property (retain, nonatomic) CAShapeLayer *progressLayer; // ivar: _progressLayer
@property (retain, nonatomic) CAShapeLayer *progressMaskLayer; // ivar: _progressMaskLayer
@property (retain, nonatomic) UIColor *progressTintColor; // ivar: _progressTintColor
@property (nonatomic) CGFloat progressWidth; // ivar: _progressWidth
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


-(id)initWithFrame:(struct CGRect )arg0 duration:(CGFloat)arg1 ;
-(void)_animateValueOnDisplayLink:(id)arg0 ;
-(void)_configureBackground;
-(void)_configureProgressLayer;
-(void)_stopAutoAnimation;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)restartWithAnimation:(BOOL)arg0 ;
-(void)setTintColor:(id)arg0 ;


@end


#endif