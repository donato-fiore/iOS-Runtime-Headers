// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTILEDCANVASVIEW_H
#define PKTILEDCANVASVIEW_H

@class UIView, NSMutableArray, UITouch, UIColor, NSString, CADisplayLink, UIGestureRecognizer<PKDrawingGestureRecognizerProtocol>, UIImage, NSMutableSet;
@protocol PKDrawingGestureRecognizerDelegate, PKControllerDelegate, PKShapeDrawingControllerDelegate, PKDrawingGestureTarget, PKTiledCanvasViewDelegate;


#import "PKDrawing.h"
#import "PKUndoCommand.h"
#import "PKController.h"
#import "PKMetalRendererController.h"
#import "PKAlternativeStrokesAnimation.h"
#import "PKInk.h"
#import "PKInterpolateColorAnimation.h"
#import "PKMetalView.h"
#import "PKDrawingPowerSavingController.h"
#import "PKRulerController.h"
#import "PKSelectionController.h"
#import "PKShapeDrawingController.h"
#import "PKMetalFramebuffer.h"

@interface PKTiledCanvasView : UIView <PKDrawingGestureRecognizerDelegate, PKControllerDelegate, PKShapeDrawingControllerDelegate, PKDrawingGestureTarget>

 {
    NSUInteger _numSkippedDoubleBufferedFrames;
    ? _canvasViewFlags;
    NSMutableArray *_finishedStrokes;
    NSInteger _liveInteractionCount;
    UITouch *_currentStrokeTouch;
    UIColor *_canvasBackgroundColor;
    PKDrawing *_liveDrawing;
    PKUndoCommand *_liveDrawingUndoCommand;
}


@property (readonly, nonatomic) PKController *_drawingController; // ivar: _drawingController
@property (nonatomic) CGFloat _fixedDrawingScale; // ivar: __fixedDrawingScale
@property (nonatomic) CGSize _fixedPixelSize; // ivar: __fixedPixelSize
@property (nonatomic) CGPoint _oldEraseLocation; // ivar: __oldEraseLocation
@property (readonly, nonatomic) PKMetalRendererController *_rendererController;
@property (readonly, nonatomic) PKDrawing *activeDrawing;
@property BOOL allowLiveInteraction; // ivar: _allowLiveInteraction
@property (retain, nonatomic) PKAlternativeStrokesAnimation *alternativeStrokesAnimation; // ivar: _alternativeStrokesAnimation
@property (nonatomic) CGPoint canvasOffset; // ivar: _canvasOffset
@property (weak, nonatomic) PKDrawing *currentDrawingBeingCopiedToCanvas; // ivar: _currentDrawingBeingCopiedToCanvas
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKTiledCanvasViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAXDrawingAnnouncements; // ivar: _disableAXDrawingAnnouncements
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (retain, nonatomic) PKDrawing *drawing; // ivar: _drawing
@property (retain, nonatomic) UIGestureRecognizer<PKDrawingGestureRecognizerProtocol> *drawingGestureRecognizer; // ivar: _drawingGestureRecognizer
@property CGFloat drawingStartTimestamp; // ivar: _drawingStartTimestamp
@property (nonatomic) BOOL enableCanvasOffsetSupport; // ivar: _enableCanvasOffsetSupport
@property (retain, nonatomic) NSMutableArray *fadeOutStrokeAnimations; // ivar: _fadeOutStrokeAnimations
@property (readonly, nonatomic) BOOL hasVisibleStrokes; // ivar: _hasVisibleStrokes
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKInk *ink; // ivar: _ink
@property (nonatomic) BOOL isDrawing; // ivar: _isDrawing
@property (nonatomic) BOOL isErasingObjects; // ivar: _isErasingObjects
@property (nonatomic) CGFloat liveAnimationStartTime; // ivar: _liveAnimationStartTime
@property (retain, nonatomic) UIColor *liveRenderingOverrideColor; // ivar: _liveRenderingOverrideColor
@property (retain, nonatomic) PKInterpolateColorAnimation *liveRenderingOverrideColorAnimation; // ivar: _liveRenderingOverrideColorAnimation
@property (nonatomic) CGSize liveStrokeMaxSize; // ivar: _liveStrokeMaxSize
@property (nonatomic) BOOL liveStrokeMode; // ivar: _liveStrokeMode
@property (nonatomic) NSInteger maxNumPredictionPoints; // ivar: _maxNumPredictionPoints
@property (nonatomic) CGFloat metalLayerContentsScaleOverride; // ivar: _metalLayerContentsScaleOverride
@property (retain, nonatomic) PKMetalView *metalView; // ivar: _metalView
@property (retain, nonatomic) UIImage *paperTexture; // ivar: _paperTexture
@property (nonatomic) CGAffineTransform paperTransform; // ivar: _paperTransform
@property (retain, nonatomic) NSMutableArray *particlesToDestinationAnimations; // ivar: _particlesToDestinationAnimations
@property (retain, nonatomic) PKDrawingPowerSavingController *powerSavingController; // ivar: _powerSavingController
@property (nonatomic) BOOL predictionDisabled; // ivar: _predictionDisabled
@property (copy, nonatomic) id *purgeResourcesBlock; // ivar: _purgeResourcesBlock
@property (readonly, nonatomic) CGRect renderedStrokesBounds;
@property (weak, nonatomic) PKRulerController *rulerController; // ivar: _rulerController
@property (weak, nonatomic) PKSelectionController *selectionController; // ivar: _selectionController
@property (retain, nonatomic) PKShapeDrawingController *shapeDrawingController; // ivar: _shapeDrawingController
@property (nonatomic) BOOL shouldPause; // ivar: _shouldPause
@property (nonatomic) BOOL singleComponent; // ivar: _singleComponent
@property (nonatomic) BOOL sixChannelBlending; // ivar: _sixChannelBlending
@property (retain, nonatomic) PKInk *sixChannelInk; // ivar: _sixChannelInk
@property (retain, nonatomic) PKMetalFramebuffer *snapshotFramebuffer; // ivar: _snapshotFramebuffer
@property (retain, nonatomic) NSMutableSet *strokeIDsToErase; // ivar: _strokeIDsToErase
@property (retain, nonatomic) NSMutableArray *strokeRenderCachesToPurge; // ivar: _strokeRenderCachesToPurge
@property (nonatomic) CGAffineTransform strokeTransform; // ivar: _strokeTransform
@property (retain, nonatomic) NSMutableSet *strokeUUIDsAboutToBeRemoved; // ivar: _strokeUUIDsAboutToBeRemoved
@property (retain, nonatomic) NSMutableArray *strokesToErase; // ivar: _strokesToErase
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *transformStrokesAnimations; // ivar: _transformStrokesAnimations
@property (nonatomic) BOOL useLuminanceColorFilter;
@property (nonatomic) BOOL usePrivateResourceHandler; // ivar: _usePrivateResourceHandler
@property (nonatomic) CGRect viewScissor; // ivar: _viewScissor
@property (readonly, nonatomic) CGRect visibleStrokesBounds;
@property (readonly, nonatomic) BOOL wantsCanvasVisible;


+(void)initialize;
+(void)prewarmFutureCanvasesIfNecessarySecureRendering:(BOOL)arg0 ;
+(void)setupDefaults;
-(BOOL)_isLiveAnimating;
-(BOOL)_isShapeRecognitionEnabled;
-(BOOL)drawingGestureRecognizer:(id)arg0 shouldBeginDrawingWithTouches:(id)arg1 event:(id)arg2 ;
-(BOOL)eraserBegan:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(CGFloat)_inputScale;
-(CGFloat)layerContentsScale;
-(id)_strokeUUIDsForStrokes:(id)arg0 ;
-(id)_touchView;
-(id)currentStroke;
-(id)currentStrokeWithStrokeDataCopy;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 usePrivateResourceHandler:(BOOL)arg1 singleComponent:(BOOL)arg2 sixChannelBlending:(BOOL)arg3 ;
-(id)liveDrawing;
-(id)shapeDrawingControllerRendererController:(id)arg0 ;
-(id)snapshotFramebufferWithSize:(struct CGSize )arg0 ;
-(struct CGPoint )applyTransformToTouchLocation:(struct CGPoint )arg0 ;
-(void)_didFinishErasingStrokes:(BOOL)arg0 ;
-(void)_drawingDisplay:(CGFloat)arg0 ;
-(void)_endAlternativeStrokeIfNecessaryAccepted:(BOOL)arg0 ;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_handleEndOfStroke:(id)arg0 groupedUndoCommands:(id)arg1 invalidateTiles:(BOOL)arg2 ;
-(void)_postAXAnnouncement:(id)arg0 ;
-(void)_postBeganErasingAXAnnouncement;
-(void)_postBeganSketchingAXAnnouncement;
-(void)_postEndedErasingAXAnnouncement;
-(void)_postEndedSketchingAXAnnouncement;
-(void)_replayDrawingBegan:(struct ? )arg0 ;
-(void)_replayDrawingCancelled;
-(void)_replayDrawingEnded;
-(void)_replayDrawingMoved:(struct ? )arg0 ;
-(void)_setFixedPointSize:(struct CGSize )arg0 drawingScale:(CGFloat)arg1 ;
-(void)_updateMetalLayerOpacity;
-(void)_updateMetalLayerOpacityIsDoingBitmapErase:(BOOL)arg0 ;
-(void)adjustedPixelSize:(struct CGSize *)arg0 drawingSize:(struct CGSize *)arg1 ;
-(void)animateStrokes:(id)arg0 destinationFrame:(struct CGRect )arg1 duration:(CGFloat)arg2 particles:(BOOL)arg3 ;
-(void)cancelCurrentStroke;
-(void)cancelPurgeResourcesBlock;
-(void)checkAnimationsDidEndAtTime:(CGFloat)arg0 ;
-(void)dealloc;
-(void)delayCompletionBlockUntilPresentation:(id)arg0 ;
-(void)didEndLiveInteractionWithStrokes:(id)arg0 drawing:(id)arg1 cancelled:(BOOL)arg2 ;
-(void)drawingBegan:(id)arg0 ;
-(void)drawingChanged:(id)arg0 ;
-(void)drawingEnded:(id)arg0 ;
-(void)drawingEstimatedPropertiesUpdated:(id)arg0 ;
-(void)drawingGestureRecognizer:(id)arg0 touchesEndedWithDrawingTouch:(id)arg1 ;
-(void)drawingMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)enumerateRenderedStrokesBounds:(id)arg0 ;
-(void)eraseStrokesForPoint:(struct CGPoint )arg0 prevPoint:(struct CGPoint )arg1 ;
-(void)eraserCancelled;
-(void)eraserEnded:(id)arg0 ;
-(void)eraserMoved:(id)arg0 ;
-(void)fadeOutAndHideStrokes:(id)arg0 duration:(CGFloat)arg1 ;
-(void)handleDrawingShouldPause:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)liveStrokeParticlesToDestinationFrame:(struct CGRect )arg0 ;
-(void)removeStuckStrokesAndSimulateCrashIfNecessary;
-(void)resizeBackingBuffersForPixelSize:(struct CGSize )arg0 drawingScale:(CGFloat)arg1 ;
-(void)schedulePurgeResourcesBlock;
-(void)setCanvasBackgroundColor:(id)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setNeedsDrawingDisplay;
-(void)setOpaque:(BOOL)arg0 ;
-(void)setResourceCacheSize:(NSUInteger)arg0 ;
-(void)setupDrawing;
-(void)setupGestures;
-(void)setupMetalViewForPixelFormat:(NSUInteger)arg0 withPixelSize:(struct CGSize )arg1 ;
-(void)setupViewWithPixelSize:(struct CGSize )arg0 drawingSize:(struct CGSize )arg1 ;
-(void)shapeDrawingControllerShapeDetectionCancelled:(id)arg0 ;
-(void)shapeDrawingControllerShapeGestureDetected:(id)arg0 ;
-(void)testHideOldestStroke;
-(void)updateHasVisibleStrokes;
-(void)willBeginLiveInteractionWithTouch:(id)arg0 ;


@end


#endif