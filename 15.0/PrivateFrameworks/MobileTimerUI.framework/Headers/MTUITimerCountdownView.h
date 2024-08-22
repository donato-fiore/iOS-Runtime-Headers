// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTUITIMERCOUNTDOWNVIEW_H
#define MTUITIMERCOUNTDOWNVIEW_H

@class UIView, UIColor, CAShapeLayer, CALayer;



@interface MTUITimerCountdownView : UIView

@property (retain) UIColor *backgroundBarColor; // ivar: _backgroundBarColor
@property (retain) CAShapeLayer *backgroundCircleLayer; // ivar: _backgroundCircleLayer
@property (retain) UIColor *barColor; // ivar: _barColor
@property CGFloat barWidth; // ivar: _barWidth
@property (retain) CAShapeLayer *countdownCircleLayer; // ivar: _countdownCircleLayer
@property CGFloat duration; // ivar: _duration
@property (retain) CALayer *mainLayer; // ivar: _mainLayer
@property CGFloat remainingTime; // ivar: _remainingTime
@property NSInteger state; // ivar: _state


-(BOOL)isStarted;
-(CGFloat)angleForValue:(CGFloat)arg0 total:(CGFloat)arg1 ;
-(CGFloat)degToRad:(CGFloat)arg0 ;
-(id)initWithBarColor:(id)arg0 backgroundBarColor:(id)arg1 barWidth:(CGFloat)arg2 ;
-(id)initWithBarColor:(id)arg0 backgroundBarColor:(id)arg1 barWidth:(CGFloat)arg2 remainingTime:(CGFloat)arg3 duration:(CGFloat)arg4 ;
-(void)layoutSubviews;
-(void)pause;
-(void)resume;
-(void)setAnimationRemainingTime:(CGFloat)arg0 totalTime:(CGFloat)arg1 ;
-(void)setupBackgroundCircle;
-(void)start;
-(void)stop;


@end


#endif