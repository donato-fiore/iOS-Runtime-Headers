// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITOUCHFORCEGESTURERECOGNIZER_H
#define UITOUCHFORCEGESTURERECOGNIZER_H

@class CADisplayLink, NSMutableSet;


#import "UIGestureRecognizer.h"
#import "_UIVelocityIntegrator.h"

@interface UITouchForceGestureRecognizer : UIGestureRecognizer {
    CADisplayLink *_continuousEvaluationDisplayLink;
    NSMutableSet *_currentTouches;
    NSUInteger _eventTouchCount;
    CGFloat _currentTouchForce;
    CGPoint _initialCentroidOfTouches;
    CGPoint _currentCentroidOfTouches;
    _UIVelocityIntegrator *_velocityIntegrator;
    BOOL _automaticallyIncreaseTouchForce;
    CGFloat _touchesBeganTimestamp;
}


@property (nonatomic) CGFloat allowableMovement; // ivar: _allowableMovement
@property (nonatomic) CGFloat automaticTouchForce; // ivar: _automaticTouchForce
@property (nonatomic) CGFloat automaticTouchForceDuration; // ivar: _automaticTouchForceDuration
@property (copy, nonatomic) id *configurationBlock; // ivar: _configurationBlock
@property (readonly, nonatomic) BOOL hasExceededAllowableMovement;
@property (nonatomic) NSUInteger maximumNumberOfTouches; // ivar: _maximumNumberOfTouches
@property (nonatomic) CGFloat minimumRequiredTouchForce; // ivar: _minimumRequiredTouchForce
@property (nonatomic, getter=isSteady) BOOL steady; // ivar: _steady
@property (readonly, nonatomic) CGFloat touchDuration;
@property (nonatomic) CGFloat touchForce; // ivar: _touchForce
@property (nonatomic) CGFloat velocity; // ivar: _velocity


-(BOOL)_hasExceededMaximumNumberOfTouches;
-(BOOL)_shouldReceiveTouch:(id)arg0 forEvent:(id)arg1 recognizerView:(id)arg2 ;
-(BOOL)_validateHysteresis;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(CGFloat)_evaluateAutomaticTouchForceForTimeInterval:(CGFloat)arg0 actualTouchForce:(CGFloat)arg1 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_beginForContinuousEvaluationForTouches:(id)arg0 ;
-(void)_endContinuousEvaluation;
-(void)_endIfNeeded:(BOOL)arg0 ;
-(void)_evaluateTouches:(id)arg0 withEvent:(id)arg1 ;
-(void)_evaluateWithTouchForce:(CGFloat)arg0 centroidAtLocation:(struct CGPoint )arg1 ;
-(void)_updateForContinuousEvaluation:(id)arg0 ;
-(void)_updateTouchForce:(CGFloat)arg0 ;
-(void)reset;
-(void)setView:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif