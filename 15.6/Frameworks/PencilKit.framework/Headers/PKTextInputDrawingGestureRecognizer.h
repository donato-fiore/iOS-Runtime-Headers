// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTDRAWINGGESTURERECOGNIZER_H
#define PKTEXTINPUTDRAWINGGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSString, UITouch;
@protocol PKDrawingGestureRecognizerProtocol, PKTextInputDebugStateReporting, PKTextInputDrawingGestureRecognizerDelegate, PKDrawingGestureTarget;


#import "PKTextInputElement.h"

@interface PKTextInputDrawingGestureRecognizer : UIGestureRecognizer <PKDrawingGestureRecognizerProtocol, PKTextInputDebugStateReporting>

 {
    BOOL _waitingForTargetElementSearch;
    BOOL _requiresTargetElementToBegin;
    BOOL _requiresPastTapToBegin;
    CGFloat _drawStartTime;
    CGFloat _touchesBeganTimestamp;
    CGPoint _drawTouchStartPoint;
    id *_timeoutBlock;
    id *_longPressTentativeBlock;
    id *_longPressSuccessBlock;
    id *_notMovingCancelBlock;
    id *_gestureEnvironmentResetTimeoutBlock;
}


@property (readonly, nonatomic) NSUInteger activeInputProperties; // ivar: _activeInputProperties
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKTextInputDrawingGestureRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PKDrawingGestureTarget> *drawingTarget; // ivar: drawingTarget
@property (nonatomic, setter=_setDrawingTargetIsDrawing:) BOOL drawingTargetIsDrawing; // ivar: _drawingTargetIsDrawing
@property (retain, nonatomic) UITouch *drawingTouch; // ivar: _drawingTouch
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isReplaying; // ivar: _isReplaying
@property (nonatomic, setter=_setLongPressState:) NSInteger longPressState; // ivar: _longPressState
@property (nonatomic, setter=_setPanDirection:) NSInteger panDirection; // ivar: _panDirection
@property (nonatomic, setter=_setPanState:) NSInteger panState; // ivar: _panState
@property (nonatomic, setter=_setStrokeAcceptanceState:) NSInteger strokeAcceptanceState; // ivar: _strokeAcceptanceState
@property (readonly) Class superclass;
@property (retain, nonatomic) PKTextInputElement *targetElement; // ivar: _targetElement


+(id)_systemGestureClassesToAvoid;
-(BOOL)_gestureStartedInsideTargetElement;
-(BOOL)_hasMovedPastMinimumPanThresholdForTouch:(id)arg0 ;
-(BOOL)_hasMovedPastScrollThresholdForTouch:(id)arg0 ;
-(BOOL)_isValidLongPress;
-(BOOL)_isValidLongPressOverDuration:(CGFloat)arg0 ;
-(BOOL)_isWithinLongPressDistanceForTouch:(id)arg0 ;
-(BOOL)hasMovedPastTapUseTimestampFromTouch:(BOOL)arg0 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg0 ;
-(CGFloat)_distanceFromStartPositionForTouch:(id)arg0 ;
-(CGFloat)timeIntervalSinceStartOfGesture;
-(CGFloat)timeIntervalSinceTouchesBeganForTouch:(id)arg0 ;
-(NSInteger)_panDirectionForTouch:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)_acceptStrokeTimeoutTriggered;
-(void)_beginDrawingIfNeeded;
-(void)_cancelLongPressTimerBlocks;
-(void)_cancelNotMovingCancellationBlock;
-(void)_cancelOrFailGesture;
-(void)_cancelScheduledStrokeAcceptanceBlock;
-(void)_drawingBegan;
-(void)_drawingEnded;
-(void)_drawingMoved:(id)arg0 ;
-(void)_endDrawing;
-(void)_enumerateTouchesForUpdateWithEvent:(id)arg0 block:(id)arg1 ;
-(void)_evaluateCancelIfNotMoving;
-(void)_evaluateMovingToBeganStateUseTimestampFromTouch:(BOOL)arg0 ;
-(void)_longPressSuccessTimerFired;
-(void)_longPressTentativeTimerFired;
-(void)_replayDrawingBegan:(struct ? )arg0 ;
-(void)_replayDrawingCancelled;
-(void)_replayDrawingEnded;
-(void)_replayDrawingMoved:(struct ? )arg0 ;
-(void)_scheduleLongPressTimerBlocks;
-(void)_updateLongPressValidityForTouch:(id)arg0 ;
-(void)_updatePanGestureStateForTouch:(id)arg0 ;
-(void)_updatePanStateForCandidateElements:(id)arg0 ;
-(void)_updateStrokeAcceptanceStateUseTimestampFromTouch:(BOOL)arg0 ;
-(void)cancel;
-(void)cancelDrawing;
-(void)end;
-(void)finishedElementFindingWithElement:(id)arg0 candidateElements:(id)arg1 ;
-(void)reportDebugStateDescription:(id)arg0 ;
-(void)reset;
-(void)setState:(NSInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEstimatedPropertiesUpdated:(id)arg0 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif