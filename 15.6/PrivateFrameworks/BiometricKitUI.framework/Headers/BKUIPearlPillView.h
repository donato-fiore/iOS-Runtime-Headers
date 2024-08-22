// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKUIPEARLPILLVIEW_H
#define BKUIPEARLPILLVIEW_H

@class UIView, CADisplayLink, NSDate, CAShapeLayer, NSTimer;



@interface BKUIPearlPillView : UIView

@property (nonatomic) CGFloat arc; // ivar: _arc
@property (readonly, nonatomic, getter=isCompleted) BOOL completed;
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (nonatomic) CGFloat height; // ivar: _height
@property (nonatomic) CGFloat numberOfPills; // ivar: _numberOfPills
@property (nonatomic) CGFloat pillCompletedHeight; // ivar: _pillCompletedHeight
@property (nonatomic) CGFloat pillCornerRadius; // ivar: _pillCornerRadius
@property (nonatomic) CGFloat pillInitialHeight; // ivar: _pillInitialHeight
@property (nonatomic) CGFloat radius; // ivar: _radius
@property (copy, nonatomic) id *radiusAnimationCompletion; // ivar: _radiusAnimationCompletion
@property (nonatomic) CGFloat radiusAnimationDuration; // ivar: _radiusAnimationDuration
@property (retain, nonatomic) NSDate *radiusAnimationStart; // ivar: _radiusAnimationStart
@property (nonatomic) CGFloat ringHeight; // ivar: _ringHeight
@property (retain, nonatomic) CAShapeLayer *shapeLayer; // ivar: _shapeLayer
@property (nonatomic) CGFloat startArc; // ivar: _startArc
@property (nonatomic) CGFloat startCornerRadius; // ivar: _startCornerRadius
@property (nonatomic) CGFloat startHeight; // ivar: _startHeight
@property (nonatomic) CGFloat startRadius; // ivar: _startRadius
@property (nonatomic) NSUInteger state; // ivar: _state
@property (copy, nonatomic) id *stateAnimationCompletion; // ivar: _stateAnimationCompletion
@property (nonatomic) CGFloat stateAnimationDuration; // ivar: _stateAnimationDuration
@property (retain, nonatomic) NSDate *stateAnimationStart; // ivar: _stateAnimationStart
@property (retain, nonatomic) NSTimer *stateDelayTimer; // ivar: _stateDelayTimer
@property (nonatomic) CGFloat targetArc; // ivar: _targetArc
@property (nonatomic) CGFloat targetCornerRadius; // ivar: _targetCornerRadius
@property (nonatomic) CGFloat targetHeight; // ivar: _targetHeight
@property (nonatomic) CGFloat targetRadius; // ivar: _targetRadius


-(CGFloat)pillMaxLength;
-(CGFloat)ringArcLength;
-(id)init;
-(struct CGPath *)pillPath;
-(void)dealloc;
-(void)displayTick;
-(void)layoutSubviews;
-(void)startAnimationWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)tearDownPillView;


@end


#endif