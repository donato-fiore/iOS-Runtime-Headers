// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKINKVIEW_H
#define DKINKVIEW_H

@class UIView, NSMutableArray, NSString, CADisplayLink, UIView<DKInkRenderer>, UIColor, NSUndoManager;
@protocol DKInkRendererDelegate, DKInkViewRenderDelegate;


#import "DKDrawingStroke.h"
#import "DKDrawing.h"
#import "DKPointSmoothing.h"

@interface DKInkView : UIView <DKInkRendererDelegate>

 {
    CGPoint _lastPoint;
    CGFloat _lastTouchTime;
    CGPoint _velocityInWindow;
    id *_trackingTouchID;
    id *_animationCompletionHandler;
    ? _lastVectorPoint;
}


@property (nonatomic) CGRect aggregateInvalid; // ivar: _aggregateInvalid
@property (nonatomic) BOOL allowInput; // ivar: _allowInput
@property (nonatomic) NSUInteger animationType; // ivar: _animationType
@property (retain, nonatomic) NSMutableArray *cachedInterpolatedAnimationPoints; // ivar: _cachedInterpolatedAnimationPoints
@property (retain, nonatomic) NSMutableArray *cachedInterpolatedAnimationStrokes; // ivar: _cachedInterpolatedAnimationStrokes
@property (retain, nonatomic) NSMutableArray *cachedInterpolatedBrushStrokes; // ivar: _cachedInterpolatedBrushStrokes
@property (readonly, nonatomic) BOOL canvasHasInk;
@property (retain, nonatomic) NSMutableArray *computedAnimationFrames; // ivar: _computedAnimationFrames
@property (readonly, nonatomic) NSInteger countOfCurrentStroke;
@property (retain, nonatomic) DKDrawingStroke *currentBrushStroke; // ivar: _currentBrushStroke
@property (copy, nonatomic) DKDrawing *currentDrawing; // ivar: _currentDrawing
@property (retain, nonatomic) NSMutableArray *currentInterpolatedBrushStroke; // ivar: _currentInterpolatedBrushStroke
@property (nonatomic) CGFloat currentWeight; // ivar: _currentWeight
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (nonatomic) CGFloat drawingScale; // ivar: _drawingScale
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect inkBounds;
@property (retain, nonatomic) DKPointSmoothing *inputFIFO; // ivar: _inputFIFO
@property BOOL isAddingPointWithoutSmoothing; // ivar: _isAddingPointWithoutSmoothing
@property (readonly, nonatomic) BOOL isRenderingPaused; // ivar: _isRenderingPaused
@property ? lastVectorPoint;
@property (nonatomic) CGFloat maxPressure; // ivar: _maxPressure
@property (nonatomic) CGFloat maxThickness; // ivar: _maxThickness
@property (nonatomic) CGFloat minPressure; // ivar: _minPressure
@property (nonatomic) CGFloat minThickness; // ivar: _minThickness
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (weak, nonatomic) NSObject<DKInkViewRenderDelegate> *renderPreviewDelegate; // ivar: _renderPreviewDelegate
@property (nonatomic) NSUInteger renderPreviewMode; // ivar: _renderPreviewMode
@property (retain, nonatomic) UIView<DKInkRenderer> *renderer; // ivar: _renderer
@property (nonatomic) BOOL scaleDrawingToFitCanvas; // ivar: _scaleDrawingToFitCanvas
@property (retain, nonatomic) UIColor *strokeColor; // ivar: _strokeColor
@property CGPoint strokeLastLocation; // ivar: _strokeLastLocation
@property CGPoint strokeStartLocation; // ivar: _strokeStartLocation
@property CGFloat strokeStartTime; // ivar: _strokeStartTime
@property (retain, nonatomic) NSUndoManager *strokeUndoManager; // ivar: _strokeUndoManager
@property (readonly) Class superclass;
@property NSUInteger totalPointsAdded; // ivar: _totalPointsAdded
@property (readonly, nonatomic) BOOL trackingTouches; // ivar: _trackingTouches
@property (nonatomic) CGRect unionDrawingRect; // ivar: _unionDrawingRect


+(CGFloat)lengthOfVector:(struct CGVector )arg0 ;
+(CGFloat)windowBackingScaleFactor:(id)arg0 ;
+(struct CGPoint )normalizeVectorPoint:(struct CGPoint )arg0 ;
+(struct CGVector )normalizeVector:(struct CGVector )arg0 ;
-(BOOL)ak_forceAvailableForTouch:(id)arg0 ;
-(CGFloat)weightForTouch:(id)arg0 ;
-(CGFloat)weightForValue:(CGFloat)arg0 ;
-(id)_vector4ForTouchSettingWeightAndVelocity:(BOOL)arg0 average;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )_velocityForTouch:(id)arg0 ;
-(void)_addUninterpolatedPoints:(**NSUInteger)arg0 controlPoint:(BOOL)arg1 countflushing;
-(void)_computeAnimationFramesFittingInMaxDuration:(CGFloat)arg0 ;
-(void)_postTouchesBeganNotification:(struct CGPoint )arg0 ;
-(void)_postTouchesEndedNotification:(struct CGPoint )arg0 ;
-(void)_renderEmittedPoints:(*NSUInteger)arg0 count;
-(void)_replayAnimationTick:(id)arg0 ;
-(void)_undoLastStroke:(id)arg0 ;
-(void)_updateVelocityWithTouch:(id)arg0 average:(BOOL)arg1 ;
-(void)continueStroke;
-(void)continueStrokeWithoutSmoothing;
-(void)handleCoalescedTouches:(id)arg0 forTouch:(id)arg1 average:(BOOL)arg2 ;
-(void)inkDidCompleteRender:(id)arg0 ;
-(void)inkDidRender:(id)arg0 ;
-(void)startStroke;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif