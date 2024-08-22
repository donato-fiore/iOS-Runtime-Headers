// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIEDGEFEEDBACKGENERATOR_H
#define _UIEDGEFEEDBACKGENERATOR_H

@class _UIFeedback<_UIFeedbackContinuousPlayable>;
@protocol UIFeedbackGeneratorUserInteractionDriven;


#import "UIFeedbackGenerator.h"
#import "_UIFeedbackEngine.h"
#import "_UIEdgeFeedbackGeneratorConfiguration.h"

@interface _UIEdgeFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

 {
    _UIFeedbackEngine *_feedbackEngine;
    BOOL _playedOvershotThresholdFeedback;
}


@property (nonatomic) NSInteger axis; // ivar: _axis
@property (nonatomic, getter=_isCloseToEdge, setter=_setCloseToEdge:) BOOL closeToEdge; // ivar: _closeToEdge
@property (nonatomic, getter=_closeToEdgeUpdateTime, setter=_setCloseToEdgeUpdateTime:) CGFloat closeToEdgeUpdateTime; // ivar: _closeToEdgeUpdateTime
@property (nonatomic) CGFloat distance; // ivar: _distance
@property (readonly, nonatomic, getter=_edgeConfiguration) _UIEdgeFeedbackGeneratorConfiguration *edgeConfiguration;
@property (readonly, nonatomic, getter=_effectiveDistance) CGFloat effectiveDistance;
@property (nonatomic) CGFloat extentBeyondDistance; // ivar: _extentBeyondDistance
@property (nonatomic, getter=_lastState, setter=_setLastState:) NSInteger lastState; // ivar: _lastState
@property (nonatomic, getter=_lastValueUpdateTime, setter=_setLastValueUpdateTime:) CGFloat lastValueUpdateTime; // ivar: _lastValueUpdateTime
@property (readonly, nonatomic, getter=_isOvershot) BOOL overshot;
@property (readonly, nonatomic, getter=_percentBeyondDistance) float percentBeyondDistance;
@property (retain, nonatomic, getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback; // ivar: _playingContinuousFeedback
@property (nonatomic, getter=_previousValue, setter=_setPreviousValue:) CGFloat previousValue; // ivar: _previousValue
@property (nonatomic, getter=_previousValueUpdateTime, setter=_setPreviousValueUpdateTime:) CGFloat previousValueUpdateTime; // ivar: _previousValueUpdateTime
@property (nonatomic, getter=_state, setter=_setState:) NSInteger state; // ivar: _state
@property (nonatomic, getter=_value, setter=_setValue:) CGFloat value; // ivar: _value
@property (nonatomic, getter=_velocity, setter=_setVelocity:) CGFloat velocity; // ivar: _velocity


+(Class)_configurationClass;
-(BOOL)_valueIsOvershot:(CGFloat)arg0 ;
-(id)_stats_key;
-(id)initWithConfiguration:(id)arg0 coordinateSpace:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 coordinateSpace:(id)arg1 ;
-(void)_animationEnded;
-(void)_animationStarted;
-(void)_animationStartedUsingTimeout:(BOOL)arg0 ;
-(void)_cancelStopAnimatingTimeout;
-(void)_deactivate;
-(void)_positionUpdated:(CGFloat)arg0 withVelocity:(CGFloat)arg1 ;
-(void)_stopAnimatingWithTimeout:(CGFloat)arg0 ;
-(void)_updateCloseToEdge;
-(void)positionUpdated:(CGFloat)arg0 ;
-(void)userInteractionCancelled;
-(void)userInteractionEnded;
-(void)userInteractionStarted;


@end


#endif