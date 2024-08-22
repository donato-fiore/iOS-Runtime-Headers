// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTOUCHTEMPLATEGESTURERECOGNIZER_H
#define SBTOUCHTEMPLATEGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSTimer, NSMapTable, NSMutableDictionary;
@protocol SBTouchTemplateGestureRecognizerDelegate;


#import "SBPolygon.h"
#import "SBTouchTemplate.h"
#import "UIGestureRecognizerTransformAnalyzer.h"

@interface SBTouchTemplateGestureRecognizer : UIGestureRecognizer {
    BOOL _recognitionBegan;
}


@property (retain, nonatomic, setter=_setNoChangeCancellationTimer:) NSTimer *_noChangeCancellationTimer; // ivar: _noChangeCancellationTimer
@property (nonatomic) CGFloat animationDistance; // ivar: _animationDistance
@property (nonatomic, getter=_cumulativeMotion, setter=_setCumulativeMotion:) CGFloat cumulativeMotion; // ivar: _cumulativeMotion
@property (nonatomic, getter=_cumulativeMotionEnvelope, setter=_setCumulativeMotionEnvelope:) CGFloat cumulativeMotionEnvelope; // ivar: _cumulativeMotionEnvelope
@property (readonly, nonatomic) CGFloat cumulativePercentage;
@property (weak, nonatomic) NSObject<SBTouchTemplateGestureRecognizerDelegate> *delegate;
@property (nonatomic, getter=_failedRecognitionAttempts, setter=_setFailedRecognitionAttempts:) NSUInteger failedRecognitionAttempts; // ivar: _failedRecognitionAttempts
@property (readonly, nonatomic, getter=_initialTouchPointMap) NSMapTable *initialTouchPointMap; // ivar: _initialTouchPointMap
@property (retain, nonatomic, getter=_matchedPolygon, setter=_setMatchedPolygon:) SBPolygon *matchedPolygon; // ivar: _matchedPolygon
@property (retain, nonatomic, getter=_matchedTemplate, setter=_setMatchedTemplate:) SBTouchTemplate *matchedTemplate; // ivar: _matchedTemplate
@property (nonatomic) NSInteger requiredDirectionality; // ivar: _requiredDirectionality
@property (readonly, nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (nonatomic, getter=_smoothedIncrementalMotion, setter=_setSmoothedIncrementalMotion:) CGFloat smoothedIncrementalMotion; // ivar: _smoothedIncrementalMotion
@property (readonly, nonatomic) NSMutableDictionary *templatesForTouchType; // ivar: _templatesForTouchType
@property (nonatomic, getter=_trackingTouchCount, setter=_setTrackingTouchCount:) NSUInteger trackingTouchCount; // ivar: _trackingTouchCount
@property (readonly, nonatomic) UIGestureRecognizerTransformAnalyzer *transformAnalyzer; // ivar: _transformAnalyzer


-(BOOL)_directionallyAcceptMotion:(CGFloat)arg0 ;
-(BOOL)_shouldAddNewTouchesAfterGestureRecognition;
-(BOOL)hasSignificantMotionToBegin;
-(CGFloat)_projectedMotionForInterval:(CGFloat)arg0 ;
-(CGFloat)incrementalGestureMotionForCandidate:(id)arg0 withTransformAnalyzerInfo:(id)arg1 ;
-(NSInteger)projectedCompletionTypeForInterval:(CGFloat)arg0 ;
-(id)_matchedTemplateForTouches:(id)arg0 polygon:(id)arg1 ;
-(id)_polygonForTouches:(id)arg0 ;
-(id)_touchesByFilteringRestingTrackpadTouches:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)logCategory;
-(id)templatesForTouchType:(NSInteger)arg0 ;
-(void)_attemptTemplateMatchWithTouches:(id)arg0 polygon:(id)arg1 ;
-(void)_computeGestureMotionWithTouches:(id)arg0 polygon:(id)arg1 ;
-(void)_failMeForReason:(id)arg0 ;
-(void)_invalidateNoChangeCancellationTimer;
-(void)_log:(id)arg0 ;
-(void)_noChangeCancellationTimerFired:(id)arg0 ;
-(void)_pingNoChangeCancellationTimer;
-(void)_reset;
-(void)_resetNoChangeCancellationTimer;
-(void)_updateForTouchesBeganOrMoved:(id)arg0 ;
-(void)_updateForTouchesCancelledOrEnded:(id)arg0 state:(NSInteger)arg1 withEvent:(id)arg2 ;
-(void)_updateMatchedTemplateForTouchesBeganOrEnded:(id)arg0 ;
-(void)log:(id)arg0 ;
-(void)reset;
-(void)setState:(NSInteger)arg0 ;
-(void)setTemplates:(id)arg0 forTouchType:(NSInteger)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif