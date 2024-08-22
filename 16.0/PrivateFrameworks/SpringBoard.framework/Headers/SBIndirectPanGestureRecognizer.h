// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBINDIRECTPANGESTURERECOGNIZER_H
#define SBINDIRECTPANGESTURERECOGNIZER_H

@class UIGestureRecognizer, UIEvent, UITouch, NSString, NSValue, NSTimer;
@protocol _UIHoverEventRespondable, SBIndirectTouchLifecycleObserving, SBGestureRecognizerTouchHistoryProviding, SBGestureRecognizerPanGestureProviding, SBSystemGestureRecognizerDelegate, SBIndirectPanGestureRecognizerOrientationProviding;


#import "SBSystemGestureManager.h"
#import "SBTouchHistory.h"

@interface SBIndirectPanGestureRecognizer : UIGestureRecognizer <_UIHoverEventRespondable, SBIndirectTouchLifecycleObserving, SBGestureRecognizerTouchHistoryProviding, SBGestureRecognizerPanGestureProviding>



@property (nonatomic) NSUInteger activatedEdge; // ivar: _activatedEdge
@property (nonatomic) NSUInteger activatingEdge; // ivar: _activatingEdge
@property (nonatomic) CGFloat activationRecognitionDistance; // ivar: _activationRecognitionDistance
@property (nonatomic) BOOL avoidActivatingForExternallyOwnedEdges; // ivar: _avoidActivatingForExternallyOwnedEdges
@property (retain, nonatomic) UIEvent *currentHoverEvent; // ivar: _currentHoverEvent
@property (readonly, nonatomic) NSUInteger currentInputType; // ivar: _currentInputType
@property (retain, nonatomic) UITouch *currentTouch; // ivar: _currentTouch
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSystemGestureRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edges; // ivar: _edges
@property (readonly, nonatomic) NSUInteger endReason; // ivar: _endReason
@property (nonatomic) BOOL gesturePassedThroughScreenCenterRegion; // ivar: _gesturePassedThroughScreenCenterRegion
@property (retain, nonatomic) NSValue *gestureStartLocation; // ivar: _gestureStartLocation
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastKnownMouseEventTimestamp; // ivar: _lastKnownMouseEventTimestamp
@property (nonatomic) CGPoint lastKnownPoint; // ivar: _lastKnownPoint
@property (nonatomic) CGFloat lastKnownTrackpadEventTimestamp; // ivar: _lastKnownTrackpadEventTimestamp
@property (nonatomic) CGFloat lastMouseActivationTimestamp; // ivar: _lastMouseActivationTimestamp
@property (nonatomic) CGFloat mouseEnteredNearEdgeRegionTimestamp; // ivar: _mouseEnteredNearEdgeRegionTimestamp
@property (nonatomic) CGFloat mouseHysteresis; // ivar: _mouseHysteresis
@property (retain, nonatomic) NSTimer *mouseIdleTimer; // ivar: _mouseIdleTimer
@property (weak, nonatomic) NSObject<SBIndirectPanGestureRecognizerOrientationProviding> *orientationProvider; // ivar: _orientationProvider
@property (nonatomic) CGPoint origin; // ivar: _origin
@property (nonatomic) BOOL pausedUntilTouchedUpOrMovedAwayFromEdge; // ivar: _pausedUntilTouchedUpOrMovedAwayFromEdge
@property (nonatomic) BOOL shouldActivateWithThreshold; // ivar: _shouldActivateWithThreshold
@property (nonatomic) BOOL shouldCancelAfterMovingAwayFromEdge; // ivar: _shouldCancelAfterMovingAwayFromEdge
@property (nonatomic) BOOL shouldInvertXAxis; // ivar: _shouldInvertXAxis
@property (nonatomic) BOOL shouldInvertYAxis; // ivar: _shouldInvertYAxis
@property (nonatomic) BOOL shouldRequireGestureToStartAtEdge; // ivar: _shouldRequireGestureToStartAtEdge
@property (readonly) Class superclass;
@property (weak, nonatomic) SBSystemGestureManager *systemGestureManager; // ivar: _systemGestureManager
@property (retain, nonatomic) SBTouchHistory *touchHistory; // ivar: _touchHistory
@property (nonatomic) CGFloat trackpadHysteresis; // ivar: _trackpadHysteresis
@property (retain, nonatomic) NSTimer *trackpadIdleTimer; // ivar: _trackpadIdleTimer
@property (copy, nonatomic) id *translationAdjustmentBlock; // ivar: _translationAdjustmentBlock
@property (nonatomic) CGPoint translationWithinHysteresisRange; // ivar: _translationWithinHysteresisRange


-(BOOL)_hasTranslationReachedThreshold:(CGFloat)arg0 withTranslation:(struct CGPoint )arg1 forEdge:(NSUInteger)arg2 ;
-(BOOL)_isPointOnRoundedCorner:(struct CGPoint )arg0 corner:(NSUInteger)arg1 radius:(CGFloat)arg2 inView:(id)arg3 ;
-(BOOL)_isPointerOnTopScreenCorner:(struct CGPoint )arg0 radius:(CGFloat)arg1 ;
-(BOOL)_shouldReceiveEvent:(id)arg0 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(CGFloat)averageTouchPathAngleOverTimeDuration:(CGFloat)arg0 ;
-(CGFloat)hysteresisForInputType:(NSUInteger)arg0 ;
-(CGFloat)peakSpeed;
-(NSInteger)_effectiveOrientation;
-(NSUInteger)_axisForEdge:(NSUInteger)arg0 ;
-(NSUInteger)_edgeForPointerModelLocation:(struct CGPoint )arg0 inView:(id)arg1 inset:(CGFloat)arg2 ;
-(id)containerView;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 edges:(NSUInteger)arg2 systemGestureManager:(id)arg3 ;
-(struct CGPoint )_centerOfCircleForRoundedCorner:(NSUInteger)arg0 radius:(CGFloat)arg1 inView:(id)arg2 ;
-(struct CGPoint )_convertPoint:(struct CGPoint )arg0 fromView:(id)arg1 toView:(id)arg2 ;
-(struct CGPoint )_pointerModelLocation;
-(struct CGPoint )averageTouchVelocityOverTimeDuration:(CGFloat)arg0 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(struct CGPoint )translationInView:(id)arg0 ;
-(struct CGPoint )velocityInView:(id)arg0 ;
-(void)_hoverCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverEntered:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverExited:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)_mouseIdleTimerFired:(id)arg0 ;
-(void)_resetTranslationState;
-(void)_trackpadIdleTimerFired:(id)arg0 ;
-(void)_updateTranslationWithPointerEventAttributes:(id)arg0 activeEdge:(NSUInteger)arg1 ;
-(void)conformsToSBGestureRecognizerTouchHistoryProviding;
-(void)dealloc;
-(void)reset;
-(void)setAllowedTouchTypes:(id)arg0 ;
-(void)setHysteresis:(CGFloat)arg0 forInputType:(NSUInteger)arg1 ;
-(void)trackpadDidTouchUpWithEvent:(id)arg0 ;
-(void)updateTouchHistoryWithTouches:(id)arg0 ;


@end


#endif