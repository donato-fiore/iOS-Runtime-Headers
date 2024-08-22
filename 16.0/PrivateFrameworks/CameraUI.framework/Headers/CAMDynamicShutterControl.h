// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMDYNAMICSHUTTERCONTROL_H
#define CAMDYNAMICSHUTTERCONTROL_H

@class UIControl, UIImageView, UIView, UILabel, CADisplayLink, NSArray, NSString;
@protocol CAMMetalViewDelegate, UIGestureRecognizerDelegate, CAMDynamicShutterControlDelegate;


#import "CAMShutterButtonRingView.h"
#import "CAMTimelapseShutterRingView.h"
#import "CAMDisplayLinkTarget.h"
#import "CAMSpring.h"
#import "CAMTrackingSpring.h"
#import "CAMFeedbackController.h"
#import "CAMDynamicShutterGestureRecognizer.h"
#import "CAMLiquidShutterRenderer.h"
#import "CAMMetalView.h"

@interface CAMDynamicShutterControl : UIControl <CAMMetalViewDelegate, UIGestureRecognizerDelegate>

 {
    ? _delegateFlags;
}


@property (nonatomic) BOOL _canZoom; // ivar: __canZoom
@property (retain, nonatomic) UIImageView *_centerOuterImageView; // ivar: __centerOuterImageView
@property (readonly, nonatomic) UIView *_centerOuterLegibilityView; // ivar: __centerOuterLegibilityView
@property (readonly, nonatomic) CAMShutterButtonRingView *_centerOuterView; // ivar: __centerOuterView
@property (retain, nonatomic) CAMTimelapseShutterRingView *_centerTimelapseOuterView; // ivar: __centerTimelapseOuterView
@property (readonly, nonatomic) UILabel *_counterLabel; // ivar: __counterLabel
@property (nonatomic, setter=_setCounterValue:) NSInteger _counterValue; // ivar: __counterValue
@property (readonly, nonatomic) CADisplayLink *_displayLink; // ivar: __displayLink
@property (readonly, nonatomic) CAMDisplayLinkTarget *_displayLinkTarget; // ivar: __displayLinkTarget
@property (readonly, nonatomic) CAMSpring *_dragHandleAlphaSpring; // ivar: __dragHandleAlphaSpring
@property (readonly, nonatomic) CAMSpring *_dragHandleColorIsWhiteSpring; // ivar: __dragHandleColorIsWhiteSpring
@property (readonly, nonatomic) CAMTrackingSpring *_dragHandleOffsetSpring; // ivar: __dragHandleOffsetSpring
@property (nonatomic, setter=_setDragHandleState:) NSInteger _dragHandleState; // ivar: __dragHandleState
@property (readonly, nonatomic) CAMSpring *_dragHandleWidthSpring; // ivar: __dragHandleWidthSpring
@property (readonly, nonatomic) CGFloat _dragHandleXPosition;
@property (readonly, nonatomic, getter=_isDraggingEnabled) BOOL _draggingEnabled;
@property (readonly, nonatomic) CAMSpring *_drawLockUISpring; // ivar: __drawLockUISpring
@property (readonly, nonatomic) CAMSpring *_expandLockRingSpring; // ivar: __expandLockRingSpring
@property (nonatomic, getter=_isExternalLockButtonPressed, setter=_setExternalLockButtonPressed:) BOOL _externalLockButtonPressed; // ivar: __externalLockButtonPressed
@property (nonatomic) NSInteger _externalShutterLongPressBehavior; // ivar: __externalShutterLongPressBehavior
@property (nonatomic, getter=_isExternalShutterPressed, setter=_setExternalShutterPressed:) BOOL _externalShutterPressed; // ivar: __externalShutterPressed
@property (readonly, nonatomic) CAMFeedbackController *_feedbackController; // ivar: __feedbackController
@property (nonatomic, setter=_setFirstTouch:) ? _firstTouch; // ivar: __firstTouch
@property (readonly, nonatomic) CAMDynamicShutterGestureRecognizer *_gestureRecognizer; // ivar: __gestureRecognizer
@property (nonatomic, setter=_setIgnoreNextCancelledGesture:) BOOL _ignoreNextCancelledGesture; // ivar: __ignoreNextCancelledGesture
@property (nonatomic) CGFloat _initalZoomGestureOffsetY; // ivar: __initalZoomGestureOffsetY
@property (readonly, nonatomic) CAMSpring *_innerShapeAlphaSpring; // ivar: __innerShapeAlphaSpring
@property (readonly, nonatomic) CAMSpring *_innerShapeColorIsRedSpring; // ivar: __innerShapeColorIsRedSpring
@property (readonly, nonatomic) CAMSpring *_innerShapePowerSpring; // ivar: __innerShapePowerSpring
@property (nonatomic, setter=_setInnerShapeState:) NSInteger _innerShapeState; // ivar: __innerShapeState
@property (readonly, nonatomic) CAMSpring *_innerShapeWidthSpring; // ivar: __innerShapeWidthSpring
@property (readonly, nonatomic) UIView *_leftLineLegibilityView; // ivar: __leftLineLegibilityView
@property (readonly, nonatomic) UIView *_leftLineView; // ivar: __leftLineView
@property (readonly, nonatomic) CAMLiquidShutterRenderer *_liquidShutterRenderer; // ivar: __liquidShutterRenderer
@property (readonly, nonatomic) CAMShutterButtonSpec _lockButtonActiveSpec; // ivar: __lockButtonActiveSpec
@property (readonly, nonatomic) CGPoint _lockButtonCenter;
@property (readonly, nonatomic) CAMShutterButtonSpec _lockButtonInactiveSpec; // ivar: __lockButtonInactiveSpec
@property (readonly, nonatomic) UIView *_lockButtonOuterLegibilityView; // ivar: __lockButtonOuterLegibilityView
@property (readonly, nonatomic) UIView *_lockButtonOuterView; // ivar: __lockButtonOuterView
@property (readonly, nonatomic) CAMMetalView *_metalView; // ivar: __metalView
@property (nonatomic, setter=_setMostRecentTouch:) ? _mostRecentTouch; // ivar: __mostRecentTouch
@property (readonly, nonatomic, getter=_isPastCounterDragThreshold) BOOL _pastCounterDragThreshold;
@property (readonly, nonatomic, getter=_isPastStartStopDragThreshold) BOOL _pastStartStopDragThreshold;
@property (readonly, nonatomic) UIView *_rightLineLegibilityView; // ivar: __rightLineLegibilityView
@property (readonly, nonatomic) UIView *_rightLineView; // ivar: __rightLineView
@property (nonatomic) BOOL _shouldCheckTouchUpEvents; // ivar: __shouldCheckTouchUpEvents
@property (readonly, nonatomic) CGPoint _shutterButtonCenter;
@property (readonly, nonatomic) CAMShutterButtonSpec _shutterButtonSpec; // ivar: __shutterButtonSpec
@property (nonatomic, setter=_setShutterState:) NSInteger _shutterState; // ivar: __shutterState
@property (retain, nonatomic) UIView *_spinnerView; // ivar: __spinnerView
@property (readonly, nonatomic) NSArray *_springs; // ivar: __springs
@property (nonatomic, setter=_setTouchBeganTime:) CGFloat _touchBeganTime; // ivar: __touchBeganTime
@property (nonatomic, setter=_setTouchSequencePhase:) NSInteger _touchSequencePhase; // ivar: __touchSequencePhase
@property (readonly, nonatomic) UIImageView *_videoLockImageView; // ivar: __videoLockImageView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMDynamicShutterControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lockButtonCenterRightInset; // ivar: _lockButtonCenterRightInset
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) ? settings; // ivar: _settings
@property (nonatomic) BOOL showContrastBorder; // ivar: _showContrastBorder
@property (nonatomic) BOOL showDisabled; // ivar: _showDisabled
@property (nonatomic, getter=isSpinning) BOOL spinning; // ivar: _spinning
@property (readonly) Class superclass;
@property (nonatomic, getter=isZooming, setter=setZooming:) BOOL zooming; // ivar: _zooming


+(struct CAMShutterButtonSpec )shutterButtonSpecForLayoutStyle:(NSInteger)arg0 ;
-(BOOL)_canDragCounter;
-(BOOL)_canDragStartStop;
-(BOOL)_isActiveTouchSequencePhase:(NSInteger)arg0 ;
-(BOOL)_isHandleWithinLockRing;
-(BOOL)_isPointWithinLockRingTouchArea:(struct CGPoint )arg0 ;
-(BOOL)_isPointWithinShutterButtonTouchArea:(struct CGPoint )arg0 ;
-(BOOL)_isStartStopShutterState:(NSInteger)arg0 ;
-(BOOL)_isTrackingHandleState:(NSInteger)arg0 ;
-(BOOL)_isValidChangeFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(BOOL)_shouldReceiveTouch:(struct ? )arg0 ;
-(BOOL)_shouldShortPressOnTouchDown;
-(BOOL)_shouldShortPressOnTouchUp;
-(BOOL)_shouldStartStopOnTouchDown;
-(BOOL)_shouldStartTrackingHandle;
-(BOOL)externalButtonPressedWithBehavior:(NSInteger)arg0 ;
-(BOOL)externalButtonReleased;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_absoluteShutterToBottomDistance;
-(NSInteger)_consumeAndUpdateTouchSequencePhase;
-(NSInteger)_startGestureForShutterState:(NSInteger)arg0 ;
-(NSInteger)incrementCounter;
-(id)_outerImage;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithMetalDevice:(id)arg0 commandQueue:(id)arg1 ;
-(id)initWithMetalDevice:(id)arg0 commandQueue:(id)arg1 layoutStyle:(NSInteger)arg2 ;
-(struct ? )_dragHandleColor;
-(struct ? )_innerShapeColor;
-(struct ? )_touchForPoint:(struct CGPoint )arg0 ;
-(struct CGRect )_lockButtonFrame;
-(struct CGRect )_shutterButtonFrame;
-(struct CGRect )frameForAlignmentRect:(struct CGRect )arg0 availableWidth:(CGFloat)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_cancelTouchSequenceForReset:(BOOL)arg0 ;
-(void)_handlePress:(id)arg0 ;
-(void)_handleTapToStartStop;
-(void)_resetShutterState;
-(void)_touchSequenceBegan:(struct ? )arg0 ;
-(void)_touchSequenceCancelledForReset:(BOOL)arg0 ;
-(void)_touchSequenceChanged:(struct ? )arg0 ;
-(void)_touchSequenceEnded:(struct ? )arg0 forReset:(BOOL)arg1 ;
-(void)_updateCenterLegibilityView;
-(void)_updateCounterAlpha;
-(void)_updateCounterLabelText;
-(void)_updateDragHandleAlphaTarget;
-(void)_updateDragHandleColorIsWhiteTarget;
-(void)_updateDragHandleWidthTarget;
-(void)_updateDrawLockUITarget;
-(void)_updateExpandLockRingTarget;
-(void)_updateForTargetTimestamp:(CGFloat)arg0 ;
-(void)_updateInnerShapeAlphaTarget;
-(void)_updateInnerShapeColorIsRedTarget;
-(void)_updateInnerShapePowerTarget;
-(void)_updateInnerShapeWidthTarget;
-(void)_updateLeftLine;
-(void)_updateLockGlyphTransformAndAlpha;
-(void)_updateLockUI;
-(void)_updateMetalViewAlpha;
-(void)_updateOuterAndInnerLayersAnimated:(BOOL)arg0 ;
-(void)_updateRendererShapes;
-(void)_updateRightLine;
-(void)_updateSpinningAnimations;
-(void)_updateSpringTargetsAnimated:(BOOL)arg0 ;
-(void)_updateStateForTouchPoint:(struct CGPoint )arg0 ;
-(void)_updateStateToLongPressIfNeededWithPhase:(NSInteger)arg0 ;
-(void)_updateStaticDragHandleOffsetTargetAnimated:(BOOL)arg0 ;
-(void)_updateTrackingDragHandleOffsetTargetWithPoint:(struct CGPoint )arg0 ;
-(void)_updateTrackingSpringTargets;
-(void)_updateViewsFromCurrentState;
-(void)cancelZoom;
-(void)dealloc;
-(void)externalButtonCancelled;
-(void)externalLockButtonPressed;
-(void)externalLockButtonReleased;
-(void)layoutSubviews;
-(void)metalViewDidChangeDrawableSize:(id)arg0 ;
-(void)resetAnimated:(BOOL)arg0 ;
-(void)resetCounter;


@end


#endif