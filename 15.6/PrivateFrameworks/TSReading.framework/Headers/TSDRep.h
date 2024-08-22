// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDREP_H
#define TSDREP_H

@class NSArray, CALayer, NSString, TSDRep<TSDContainerRep>, NSDictionary;
@protocol TSDMagicMoveMatching, TSDRepTextContaining, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSDLayoutGeometry.h"
#import "TSDTilingBackgroundQueue.h"
#import "TSDCanvas.h"
#import "TSDKnobTracker.h"
#import "TSDInteractiveCanvasController.h"
#import "TSDLayout.h"
#import "TSDTextureSet.h"
#import "TSDTextureContext.h"

@interface TSDRep : NSObject <TSDMagicMoveMatching, TSDRepTextContaining>

 {
    NSArray *mKnobs;
    BOOL mKnobPositionsInvalid;
    BOOL mShowKnobsWhenManipulated;
    BOOL mKnobsAreShowing;
    BOOL mSelectionHighlightLayerValid;
    CALayer *mSelectionHighlightLayer;
    BOOL mShowTemporaryHighlight;
    CALayer *mTemporaryHighlightLayer;
    BOOL mShowDragAndDropHighlight;
    CALayer *mDragAndDropHighlightLayer;
    NSUInteger mLayerUpdatesPausedCount;
    *CGColor mDefaultSelectionHighlightColor;
    TSDLayoutGeometry *mLastGeometryInRoot;
    CGRect mOriginalLayerFrameInScaledCanvas;
    TSDTilingBackgroundQueue *mTileQueue;
    NSInteger mTileQueueOnce;
    NSInteger mTileProviderQueueLock;
    NSObject<OS_dispatch_queue> *mTileProviderQueue;
    BOOL mHasBeenRemoved;
}


@property (readonly, nonatomic) TSDCanvas *canvas; // ivar: mCanvas
@property (nonatomic) TSDKnobTracker *currentKnobTracker; // ivar: mKnobTracker
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL forceRasterization; // ivar: mForceRasterization
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *hyperlinkRegions;
@property (readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
@property (readonly, nonatomic) BOOL isEditingPath;
@property (readonly, nonatomic) NSArray *knobs;
@property (readonly, nonatomic) TSDLayout *layout; // ivar: mLayout
@property (nonatomic) TSDRep<TSDContainerRep> *parentRep; // ivar: mParentRep
@property (nonatomic) *CGColor selectionHighlightColor;
@property (readonly) Class superclass;
@property (retain, nonatomic) TSDLayout *temporaryMixingLayout; // ivar: mTemporaryMixingLayout
@property (retain, nonatomic) TSDTextureSet *texture; // ivar: mTexture
@property (retain, nonatomic) NSDictionary *textureActionAttributes; // ivar: mTextureActionAttributes
@property (readonly, nonatomic) CGFloat textureAngle;
@property (retain, nonatomic) NSDictionary *textureAnimationInfo; // ivar: mTextureAnimationInfo
@property (nonatomic) int textureByGlyphStyle; // ivar: mTextureByGlyphStyle
@property (copy, nonatomic) TSDTextureContext *textureContext; // ivar: mTextureContext
@property (nonatomic) NSUInteger textureDeliveryStyle; // ivar: mTextureDeliveryStyle
@property (nonatomic) NSUInteger textureStage; // ivar: mTextureStage


-(BOOL)allowTrackingContainedRep:(id)arg0 ;
-(BOOL)canClipThemeContentToCanvas;
-(BOOL)canDrawInBackgroundDuringScroll;
-(BOOL)canDrawInParallel;
-(BOOL)canDrawTilingLayerInBackground:(id)arg0 ;
-(BOOL)canEditWithEditor:(id)arg0 ;
-(BOOL)canUseSpecializedHitRegionForKnob:(id)arg0 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 withSlop:(struct CGSize )arg1 ;
-(BOOL)directlyManagesLayerContent;
-(BOOL)directlyManagesVisibilityOfKnob:(id)arg0 ;
-(BOOL)forcesPlacementOnTop;
-(BOOL)handleDoubleTapAtPoint:(struct CGPoint )arg0 ;
-(BOOL)handleDoubleTapAtPoint:(struct CGPoint )arg0 onKnob:(id)arg1 ;
-(BOOL)handleSingleTapAtPoint:(struct CGPoint )arg0 ;
-(BOOL)handleSingleTapAtPoint:(struct CGPoint )arg0 onKnob:(id)arg1 ;
-(BOOL)handlesEditMenu;
-(BOOL)hasBeenRemoved;
-(BOOL)i_hasInteractiveCanvasController;
-(BOOL)intersectsUnscaledRect:(struct CGRect )arg0 ;
-(BOOL)isBeingRotated;
-(BOOL)isDraggable;
-(BOOL)isDrawingInFlippedContext;
-(BOOL)isInDynamicOperation;
-(BOOL)isLocked;
-(BOOL)isOpaque;
-(BOOL)isPlaceholder;
-(BOOL)isSelectable;
-(BOOL)isSelected;
-(BOOL)isSelectedIgnoringLocking;
-(BOOL)isVisibleOnCanvas;
-(BOOL)layerUpdatesPaused;
-(BOOL)masksToBounds;
-(BOOL)mustDrawOnMainThreadForInteractiveCanvas;
-(BOOL)mustDrawTilingLayerOnMainThread:(id)arg0 ;
-(BOOL)repDirectlyManagesContentsScaleOfLayer:(id)arg0 ;
-(BOOL)resizeFromCenterOnly;
-(BOOL)shouldBeginDrawingTilingLayerInBackground:(id)arg0 returningToken:(*id)arg1 andQueue:(*id)arg2 ;
-(BOOL)shouldCreateCommentKnob;
-(BOOL)shouldCreateKnobs;
-(BOOL)shouldCreateLockedKnobs;
-(BOOL)shouldCreateSelectionKnobs;
-(BOOL)shouldDisplayHyperlinkUI;
-(BOOL)shouldExpandHitRegionWhenSmall;
-(BOOL)shouldIgnoreEditMenuTapAtPoint:(struct CGPoint )arg0 withRecognizer:(id)arg1 ;
-(BOOL)shouldIgnoreSingleTapAtPoint:(struct CGPoint )arg0 withRecognizer:(id)arg1 ;
-(BOOL)shouldLayoutTilingLayer:(id)arg0 ;
-(BOOL)shouldShowCommentHighlight;
-(BOOL)shouldShowCommentUIDirectlyOverRep;
-(BOOL)shouldShowDragHUD;
-(BOOL)shouldShowKnobs;
-(BOOL)shouldShowSelectionHighlight;
-(BOOL)shouldShowSizesInRulers;
-(BOOL)wantsEditMenuForTapAtPoint:(struct CGPoint )arg0 onKnob:(id)arg1 ;
-(BOOL)wantsGuidesWhileResizing;
-(BOOL)wantsToDistortWithImagerContext;
-(BOOL)wantsToHandleTapsOnContainingGroup;
-(BOOL)wantsToHandleTapsWhenLocked;
-(CGFloat)additionalRotationForKnobOrientation;
-(CGFloat)angleForRotation;
-(CGFloat)angleInRoot;
-(CGFloat)opacity;
-(CGFloat)scaleToConvertNaturalToLayerRelative;
-(CGFloat)selectionHighlightWidth;
-(CGFloat)shortestDistanceToPoint:(struct CGPoint )arg0 countAsHit:(*BOOL)arg1 ;
-(Class)layerClass;
-(NSUInteger)adjustedKnobForComputingResizeGeometry:(NSUInteger)arg0 ;
-(NSUInteger)enabledKnobMask;
-(id)additionalLayersOverLayer;
-(id)additionalLayersUnderLayer;
-(id)additionalRepsForDragging;
-(id)allLayers;
-(id)beginEditing;
-(id)colorBehindLayer:(id)arg0 ;
-(id)connectedReps;
-(id)delegateConformingToProtocol:(id)arg0 forRep:(id)arg1 ;
-(id)hitRep:(struct CGPoint )arg0 ;
-(id)hitRep:(struct CGPoint )arg0 withGesture:(id)arg1 passingTest:(id)arg2 ;
-(id)hitRepChrome:(struct CGPoint )arg0 ;
-(id)hitRepChrome:(struct CGPoint )arg0 passingTest:(id)arg1 ;
-(id)hitReps:(struct CGPoint )arg0 withSlop:(struct CGSize )arg1 ;
-(id)hitReps:(struct CGPoint )arg0 withSlopBlock:(id)arg1 ;
-(id)i_queueForTileProvider;
-(id)i_tileQueue;
-(id)info;
-(id)infoForTransforming;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)itemsToAddToEditMenu;
-(id)knobForTag:(NSUInteger)arg0 ;
-(id)newSelectionKnobForType:(int)arg0 tag:(NSUInteger)arg1 ;
-(id)newTrackerForKnob:(id)arg0 ;
-(id)overlayLayers;
-(id)p_addLayersForKnobsToArray:(id)arg0 withDelegate:(id)arg1 isOverlay:(BOOL)arg2 ;
-(id)popoutLayers;
-(id)queueForDrawingTilingLayerInBackground:(id)arg0 ;
-(id)repForDragging;
-(id)repForHandleSingleTap;
-(id)repForRotating;
-(id)repForSelecting;
-(id)selectionHighlightLayer;
-(id)subviewsController;
-(id)textureForContext:(id)arg0 ;
-(int)dragHUDAndGuidesTypeAtCanvasPoint:(struct CGPoint )arg0 ;
-(int)dragTypeAtCanvasPoint:(struct CGPoint )arg0 ;
-(int)tilingMode;
-(struct CGAffineTransform )layerTransform;
-(struct CGAffineTransform )layerTransformInRootForZeroAnchor;
-(struct CGAffineTransform )parentLayerInverseTransformInRootForZeroAnchor;
-(struct CGAffineTransform )transformForHighlightLayer;
-(struct CGAffineTransform )transformToConvertNaturalFromLayerRelative;
-(struct CGAffineTransform )transformToConvertNaturalToLayerRelative;
-(struct CGAffineTransform )unRotatedTransform:(struct CGAffineTransform )arg0 ;
-(struct CGPath *)newPathInScaledCanvasFromNaturalRect:(struct CGRect )arg0 ;
-(struct CGPoint )centerForRotation;
-(struct CGPoint )convertKnobPositionToUnscaledCanvas:(struct CGPoint )arg0 ;
-(struct CGPoint )convertNaturalPointFromLayerRelative:(struct CGPoint )arg0 ;
-(struct CGPoint )convertNaturalPointFromUnscaledCanvas:(struct CGPoint )arg0 ;
-(struct CGPoint )convertNaturalPointToLayerRelative:(struct CGPoint )arg0 ;
-(struct CGPoint )convertNaturalPointToUnscaledCanvas:(struct CGPoint )arg0 ;
-(struct CGPoint )convertUnscaledPointFromLayerRelative:(struct CGPoint )arg0 ;
-(struct CGPoint )convertUnscaledPointToLayerRelative:(struct CGPoint )arg0 ;
-(struct CGPoint )i_dragOffset;
-(struct CGPoint )layerOffsetForDragging;
-(struct CGPoint )p_positionOfActionGhostKnobForBounds:(struct CGRect )arg0 ;
-(struct CGPoint )positionOfActionGhostKnob;
-(struct CGPoint )positionOfHyperlinkKnob;
-(struct CGPoint )positionOfStandardKnob:(id)arg0 forBounds:(struct CGRect )arg1 ;
-(struct CGPoint )unscaledGuidePosition;
-(struct CGRect )boundsForHighlightLayer;
-(struct CGRect )boundsForResizeGuideUI;
-(struct CGRect )boundsForStandardKnobs;
-(struct CGRect )clipRect;
-(struct CGRect )convertNaturalRectFromLayerRelative:(struct CGRect )arg0 ;
-(struct CGRect )convertNaturalRectFromUnscaledCanvas:(struct CGRect )arg0 ;
-(struct CGRect )convertNaturalRectToLayerRelative:(struct CGRect )arg0 ;
-(struct CGRect )convertNaturalRectToUnscaledCanvas:(struct CGRect )arg0 ;
-(struct CGRect )frameInScreenSpace;
-(struct CGRect )frameInUnscaledCanvas;
-(struct CGRect )frameInUnscaledCanvasIncludingChrome;
-(struct CGRect )i_layerFrameInScaledCanvasIgnoringDragging;
-(struct CGRect )i_originalLayerFrameInScaledCanvas;
-(struct CGRect )i_partition_deepClipRect;
-(struct CGRect )layerFrameInScaledCanvas;
-(struct CGRect )layerFrameInScaledCanvasRelativeToParent;
-(struct CGRect )naturalBounds;
-(struct CGRect )targetRectForEditMenu;
-(struct CGRect )trackingBoundsForStandardKnobs;
-(struct CGRect )visibleBoundsForTilingLayer:(id)arg0 ;
-(void)addActionGhostKnobToArrayIfNecessary:(id)arg0 ;
-(void)addBitmapsToRenderingQualityInfo:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)addCommentKnobToArray:(id)arg0 ;
-(void)addHyperlinkKnobToArray:(id)arg0 ;
-(void)addKnobsToArray:(id)arg0 ;
-(void)addLockedKnobsToArray:(id)arg0 ;
-(void)addSelectionKnobsToArray:(id)arg0 ;
-(void)addToSet:(id)arg0 ;
-(void)addTracking:(id)arg0 ;
-(void)addTrackingAboveChildren:(id)arg0 ;
-(void)antiAliasDefeatLayerFrame:(struct CGRect *)arg0 forTransform:(struct CGAffineTransform )arg1 ;
-(void)antiAliasDefeatLayerTransform:(struct CGAffineTransform *)arg0 forFrame:(struct CGRect )arg1 ;
-(void)becameNotSelected;
-(void)becameSelected;
-(void)beginDrawingOperation;
-(void)computeDirectLayerFrame:(struct CGRect *)arg0 andTransform:(struct CGAffineTransform *)arg1 ;
-(void)computeDirectLayerFrame:(struct CGRect *)arg0 andTransform:(struct CGAffineTransform *)arg1 basedOnLayoutGeometry:(id)arg2 ;
-(void)computeDirectLayerFrame:(struct CGRect *)arg0 andTransform:(struct CGAffineTransform *)arg1 basedOnTransform:(struct CGAffineTransform )arg2 andSize:(struct CGSize )arg3 ;
-(void)dealloc;
-(void)didCreateLayer:(id)arg0 ;
-(void)didDrawInLayer:(id)arg0 context:(struct CGContext *)arg1 ;
-(void)didEndDrawingTilingLayerInBackground:(id)arg0 withToken:(id)arg1 ;
-(void)didUpdateLayer:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)drawInLayerContext:(struct CGContext *)arg0 ;
-(void)dynamicRotateDidBegin;
-(void)endDrawingOperation;
-(void)fadeKnobsIn;
-(void)fadeKnobsOut;
-(void)i_configureFontSmoothingForContext:(struct CGContext *)arg0 layer:(id)arg1 ;
-(void)i_invalidateSelectionHighlightLayer;
-(void)i_shutdownTileQueue;
-(void)i_willBeRemoved;
-(void)i_willEnterForeground;
-(void)invalidateAnnotationColor;
-(void)invalidateComments;
-(void)invalidateKnobPositions;
-(void)invalidateKnobs;
-(void)layoutInRootChangedFrom:(id)arg0 to:(id)arg1 translatedOnly:(BOOL)arg2 ;
-(void)markTextureDirty;
-(void)p_actionGhostKnobHit;
-(void)p_dynamicRotateDidBegin;
-(void)p_setMagicMoveTextureAttributes:(id)arg0 ;
-(void)p_toggleHyperlinkUIVisibility;
-(void)pauseLayerUpdates;
-(void)processChangedProperty:(int)arg0 ;
-(void)processChanges:(id)arg0 ;
-(void)recursivelyDrawChildrenInContext:(struct CGContext *)arg0 ;
-(void)recursivelyDrawInContext:(struct CGContext *)arg0 ;
-(void)recursivelyPerformSelector:(SEL)arg0 ;
-(void)recursivelyPerformSelector:(SEL)arg0 withObject:(id)arg1 ;
-(void)recursivelyPerformSelector:(SEL)arg0 withObject:(id)arg1 withObject:(id)arg2 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg0 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg0 withObject:(id)arg1 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg0 withObject:(id)arg1 withObject:(id)arg2 ;
-(void)replaceContentsFromRep:(id)arg0 ;
-(void)resumeLayerUpdates;
-(void)resumeLayerUpdatesAndLayoutImmediately;
-(void)screenScaleDidChange;
-(void)scrollRectToVisible:(struct CGRect )arg0 animated:(BOOL)arg1 ;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setupForDrawingInLayer:(id)arg0 context:(struct CGContext *)arg1 ;
-(void)showKnobsDuringManipulation:(BOOL)arg0 ;
-(void)turnKnobsOn;
-(void)updateChildrenFromLayout;
-(void)updateFromLayout;
-(void)updateLayerGeometryFromLayout:(id)arg0 ;
-(void)updatePositionsOfKnobs:(id)arg0 ;
-(void)viewScaleDidChange;
-(void)viewScrollDidChange;
-(void)viewScrollWillChange;
-(void)viewScrollingEnded;
-(void)wasAddedToParent;
-(void)wideGamutValueDidChange;
-(void)willBeRemoved;
-(void)willBeRemovedFromParent;
-(void)willReplaceContentsFromRep:(id)arg0 ;
-(void)willUpdateLayer:(id)arg0 ;


@end


#endif