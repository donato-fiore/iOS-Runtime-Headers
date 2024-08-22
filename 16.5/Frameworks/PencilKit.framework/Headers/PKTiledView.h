// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTILEDVIEW_H
#define PKTILEDVIEW_H

@class UIView, UIDropInteraction, NSUUID, UIScrollView, UITouch, NSArray, NSMutableArray, NSOrderedSet, NSString, _UIEditMenuInteraction, UIImage;
@protocol UIScrollViewDelegate, _UIScrollViewScrollObserver, _UIScrollViewLayoutObserver, UIDropInteractionDelegate_Private, UIGestureRecognizerDelegate, PKRulerDelegate, PKRulerHostingDelegate, PKDrawableView, PKHoverControllerDelegate, PKPaletteViewHoverDelegate, PKTiledCanvasViewDelegate, _UIEditMenuInteractionDelegate, PKDrawingUUID, PKDrawingVersion, PKDrawingPaletteStatistics, PKTiledViewDelegate;


#import "PKDrawing.h"
#import "PKAttachmentView.h"
#import "PKRulerController.h"
#import "PKHoverController.h"
#import "PKStrokePreviewView.h"
#import "PKToolPreviewView.h"
#import "PKPencilShadowView.h"
#import "PKPencilStatisticsManager.h"
#import "PKAnalyticsSession.h"
#import "PKTiledCanvasView.h"
#import "PKController.h"
#import "PKInk.h"
#import "PKLinedPaper.h"
#import "PKSelectionController.h"
#import "PKSelectionInteraction.h"
#import "PKTileController.h"

@interface PKTiledView : UIView <UIScrollViewDelegate, _UIScrollViewScrollObserver, _UIScrollViewLayoutObserver, UIDropInteractionDelegate_Private, UIGestureRecognizerDelegate, PKRulerDelegate, PKRulerHostingDelegate, PKDrawableView, PKHoverControllerDelegate, PKPaletteViewHoverDelegate, PKTiledCanvasViewDelegate, _UIEditMenuInteractionDelegate>

 {
    UIDropInteraction *_dropInteraction;
    PKDrawing *_dirtyDrawing;
    BOOL _rulerEnabled;
    id *_updateVisibleTilesAfterZoomOutBlock;
    ? _tiledViewFlags;
    BOOL _safeToStartDrawing;
    NSUUID *_previouslySelectedDrawingUUID;
    BOOL _shouldAdjustStrokeTransformAtEndOfStroke;
    BOOL _isLayingOut;
    BOOL _shouldHideCanvasAfterScroll;
    BOOL _isDoingInteractiveResize;
    BOOL _needUpdateAfterBackgroundTraitCollectionChange;
    BOOL _shouldBeginHoverPreview;
    BOOL _hoverPreviewActive;
    BOOL _symbolPreviewActive;
    BOOL _didDisableScrollViewPanGestureRecognizer;
    UIScrollView *_scrollView;
    UITouch *_drawingTouchThatHitNothing;
    CGFloat _tileSize;
    CGFloat _tileScale;
    NSInteger _tileLevel;
    UIView *_gestureView;
    PKAttachmentView *_liveAttachment;
    PKDrawing *_currentDrawingBeingCopiedToCanvas;
    CGFloat _lastZoomScale;
    PKRulerController *_rulerController;
    NSArray *_cachedAdditionalStrokes;
    NSArray *_cachedVisibleStrokesWithAdditionalStrokesForDirtyDrawing;
    id<PKDrawingUUID> *_cachedDrawingUUIDForAdditionalStrokes;
    id<PKDrawingVersion> *_cachedDrawingVersionForAdditionalStrokes;
    id *_didScrollBlock;
    id *_updateAttachmentBoundsBlock;
    id *_hideCanvasBlock;
    NSMutableArray *_undoManagersRegisteredWith;
    id<PKDrawingPaletteStatistics> *_drawingPaletteStatistics;
    PKHoverController *_hoverController;
    id *_hoverConvertToShapeBlock;
    CGFloat _delayHoverPreviewUntil;
    CGFloat _hoverPreviewStartTimestamp;
    PKStrokePreviewView *_strokePreviewView;
    NSOrderedSet *_eraseOrLassoPreviewStrokes;
    PKDrawing *_erasePreviewDrawing;
    PKToolPreviewView *_toolPreviewView;
    PKPencilShadowView *_pencilShadowView;
    NSUUID *_currentPreviewDrawingUUID;
    PKPencilStatisticsManager *_pencilStatisticsManager;
    PKAnalyticsSession *_analyticsSession;
    NSInteger _aggd_cachedVisibleStrokeCount;
    CGPoint _lastContentOffset;
    CGAffineTransform _strokeTransformAtStartOfStroke;
    CGAffineTransform _strokeTransformAdjustment;
}


@property (readonly, nonatomic) BOOL _hasSelection;
@property (nonatomic) NSInteger _maxFileFormatVersion; // ivar: __maxFileFormatVersion
@property (nonatomic) BOOL aggd_didMergeWithCollaborator; // ivar: _aggd_didMergeWithCollaborator
@property (readonly, nonatomic) BOOL allowsFingerDrawing;
@property (weak, nonatomic) UIView *attachmentContainerView; // ivar: _attachmentContainerView
@property (retain, nonatomic) PKTiledCanvasView *canvasView; // ivar: _canvasView
@property (nonatomic) NSInteger canvasViewZOrderPolicy; // ivar: _canvasViewZOrderPolicy
@property (weak, nonatomic) UIView *contentSnapshottingView; // ivar: _contentSnapshottingView
@property (nonatomic) BOOL cropDrawingAttachmentsWhenViewIsSmaller; // ivar: _cropDrawingAttachmentsWhenViewIsSmaller
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class defaultDrawingClass; // ivar: _defaultDrawingClass
@property (weak, nonatomic) NSObject<PKTiledViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKController *drawingController;
@property (nonatomic) NSUInteger drawingPolicy; // ivar: _drawingPolicy
@property (readonly, nonatomic) UITouch *drawingTouchThatHitNothing;
@property (nonatomic) SEL drawingUndoSelector; // ivar: _drawingUndoSelector
@property (weak, nonatomic) id *drawingUndoTarget; // ivar: _drawingUndoTarget
@property (readonly, nonatomic) _UIEditMenuInteraction *editMenuInteraction; // ivar: _editMenuInteraction
@property (nonatomic) BOOL editMenuVisible; // ivar: _editMenuVisible
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) PKInk *ink;
@property (nonatomic) BOOL insertSpaceEnabled;
@property (readonly, nonatomic) BOOL isReadOnlyView;
@property (copy, nonatomic) PKLinedPaper *linedPaper; // ivar: _linedPaper
@property (retain, nonatomic) UIImage *paperTexture;
@property (nonatomic) BOOL rulerEnabled;
@property (weak, nonatomic) NSObject<PKRulerHostingDelegate> *rulerHostingDelegate; // ivar: _rulerHostingDelegate
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) PKSelectionController *selectionController; // ivar: _selectionController
@property (readonly, nonatomic) PKSelectionInteraction *selectionInteraction;
@property (nonatomic) BOOL showDebugOutlines; // ivar: _showDebugOutlines
@property (readonly, nonatomic) BOOL sixChannelBlending; // ivar: _sixChannelBlending
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsCopyAsText; // ivar: _supportsCopyAsText
@property (retain, nonatomic) PKTileController *tileController; // ivar: _tileController


+(id)newInlineDrawingOfClass:(Class)arg0 ;
-(BOOL)_isScrollViewSizeAnimating;
-(BOOL)_isValidDropPointForStrokes:(struct CGPoint )arg0 ;
-(BOOL)_isValidDropPointForStrokes:(struct CGPoint )arg0 didInsertNewAttachment:(*BOOL)arg1 ;
-(BOOL)_isZoomingOrResizing;
-(BOOL)_shouldExpandBottomAttachmentForDragAndDrop;
-(BOOL)_shouldForwardSelectionAtPoint:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)_shouldPreventScrollViewPanGestureWhilePreviewing;
-(BOOL)_shouldSelectionBeginAtPoint:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)_shouldUpdateHeightOfAttachments;
-(BOOL)_toolPickerIsOrWillBeVisible;
-(BOOL)_updateHeightOfAttachmentIfNecessary:(id)arg0 ;
-(BOOL)canAddStroke;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canvasView:(id)arg0 shouldBeginDrawingWithTouch:(id)arg1 ;
-(BOOL)canvasView:(id)arg0 shouldDelayDrawingBeganWithTouch:(id)arg1 ;
-(BOOL)canvasViewShouldCombineStrokes:(id)arg0 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(BOOL)insertAttachmentIfInBlankSpace:(struct CGPoint )arg0 ;
-(BOOL)invertColors;
-(BOOL)isDrawing;
-(BOOL)needToUpdateViewFrame;
-(BOOL)rulerHostWantsSharedRuler;
-(BOOL)shouldStartToolPreviewWhenHovering;
-(BOOL)tileIsVisibleForOffset:(struct CGPoint )arg0 inAttachment:(id)arg1 distanceToMiddle:(*CGFloat)arg2 ;
-(BOOL)toolShadowShouldBeActive;
-(BOOL)toolShadowShouldBeRenderedInMetal;
-(CGFloat)_latestLatency;
-(CGFloat)_layerContentsScale;
-(NSInteger)_dropInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(NSInteger)_totalVisibleStrokes;
-(id)_accessibilityUserTestingChildren;
-(id)_adornmentViewsToHitTest;
-(id)_currentStroke;
-(id)_editMenuInteraction:(id)arg0 menuForConfiguration:(id)arg1 suggestedActions:(id)arg2 ;
-(id)_liveDrawing;
-(id)_tilesForAttachment:(id)arg0 bounds:(struct CGRect )arg1 invert:(BOOL)arg2 ;
-(id)_visibleTilesForAttachment:(id)arg0 ;
-(id)attachmentForHoverPreviewAt:(struct ? )arg0 ;
-(id)attachmentForUUID:(id)arg0 ;
-(id)attachments;
-(id)drawingGestureRecognizer;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)generateTile:(struct CGPoint )arg0 inAttachment:(id)arg1 rendering:(BOOL)arg2 offscreen:(BOOL)arg3 ;
-(id)hitAttachment:(struct CGPoint )arg0 ;
-(id)hitAttachment:(struct CGPoint )arg0 includeStandinAttachment:(BOOL)arg1 ;
-(id)hitAttachment:(struct CGPoint )arg0 includeStandinAttachment:(BOOL)arg1 expandBottomAttachment:(BOOL)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initInScrollView:(id)arg0 ;
-(id)initInScrollView:(id)arg0 defaultDrawingClass:(Class)arg1 ;
-(id)initInScrollView:(id)arg0 sixChannelBlending:(BOOL)arg1 defaultDrawingClass:(Class)arg2 ;
-(id)initInScrollView:(id)arg0 sixChannelBlending:(BOOL)arg1 defaultDrawingClass:(Class)arg2 readOnly:(BOOL)arg3 ;
-(id)liveAttachment;
-(id)paletteViewHoverView:(id)arg0 ;
-(id)rulerHostingView;
-(id)rulerView;
-(id)selectedStrokeIdsForAttachment:(id)arg0 ;
-(id)standInAttachmentView;
-(id)tileForOffset:(struct CGPoint )arg0 inAttachment:(id)arg1 offscreen:(BOOL)arg2 ;
-(id)topView;
-(id)topZAttachment;
-(id)viewForAttachmentAtBlankSpace;
-(id)visibleAttachments;
-(struct ? )convertInputPoint:(struct ? )arg0 toAttachment:(id)arg1 ;
-(struct CGAffineTransform )canvasView:(id)arg0 transformForStroke:(id)arg1 ;
-(struct CGAffineTransform )strokeTransform;
-(struct CGAffineTransform )transformFromStrokeSpaceToViewInAttachment:(id)arg0 ;
-(struct CGAffineTransform )transformFromStrokeSpaceToViewInDrawing:(id)arg0 ;
-(struct CGAffineTransform )transformFromViewToStrokeSpaceInAttachment:(id)arg0 ;
-(struct CGAffineTransform )transformFromViewToStrokeSpaceInDrawing:(id)arg0 ;
-(struct CGPoint )paletteViewHoverLocation:(id)arg0 ;
-(struct CGPoint )pointInStrokeSpace:(struct CGPoint )arg0 inDrawing:(id)arg1 ;
-(struct CGRect )_editMenuInteraction:(id)arg0 targetRectForConfiguration:(id)arg1 ;
-(struct CGRect )attachmentBoundsForDrawing:(id)arg0 ;
-(struct CGRect )boundsForDrawing:(id)arg0 ;
-(struct CGRect )newViewFrame;
-(struct CGRect )visibleOnscreenBoundsForDrawing:(id)arg0 ;
-(struct CGRect )visibleOnscreenBoundsForDrawing:(id)arg0 slack:(struct CGSize )arg1 ;
-(struct vector<AttachmentTileInfo, std::allocator<AttachmentTileInfo>> )getVisibleTiles:(id)arg0 ;
-(void)_beginAnalyticsSessionIfNecessary;
-(void)_cancelHideCanvasIfNecessary;
-(void)_canvasView:(id)arg0 didFinishRenderingNewStrokes:(id)arg1 inDrawing:(id)arg2 forPreview:(BOOL)arg3 ;
-(void)_canvasViewDidEraseStrokes:(id)arg0 ;
-(void)_canvasViewWillBeginDrawing:(id)arg0 ;
-(void)_clearSelectionIfNecessary;
-(void)_copyFromCanvas:(id)arg0 intoAttachment:(id)arg1 hideCanvas:(BOOL)arg2 strokes:(id)arg3 ;
-(void)_didAddDrawingAttachmentView;
-(void)_didEndInteractiveResize;
-(void)_disableScrollViewPanGestureIfNecessary;
-(void)_dismissInsertSpaceHandlesIfNecessary;
-(void)_editMenuInteraction:(id)arg0 didDismissMenuForConfiguration:(id)arg1 ;
-(void)_editMenuInteraction:(id)arg0 didPresentMenuForConfiguration:(id)arg1 ;
-(void)_endAnalyticsSessionsIfNecessary;
-(void)_endHoverToolPreview;
-(void)_findSelectionTranscriptionWithCompletion:(id)arg0 ;
-(void)_finishCombiningStrokesIfNecessaryForAttachment:(id)arg0 ;
-(void)_flushCaches;
-(void)_hideCanvas;
-(void)_layoutSubviews;
-(void)_layoutSubviewsUpdateTilesForRendering:(BOOL)arg0 ;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)_recordDrawingStatisticsForHitPoint:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)_reenableScrollViewPanGestureIfNecessary;
-(void)_resetDrawingState;
-(void)_resetSelectedStrokeStateForRenderer;
-(void)_sceneDidActivate:(id)arg0 ;
-(void)_sceneWillDeactivate:(id)arg0 ;
-(void)_scrollViewDidLayoutSubviews:(id)arg0 ;
-(void)_selectionRefreshWithChangeToDrawings:(id)arg0 completion:(id)arg1 ;
-(void)_setAdditionalStrokes:(id)arg0 inDrawing:(id)arg1 completion:(id)arg2 ;
-(void)_setAdditionalStrokes:(id)arg0 inDrawing:(id)arg1 invalidateTiles:(BOOL)arg2 ;
-(void)_setAdditionalStrokes:(id)arg0 inDrawing:(id)arg1 invalidateTiles:(BOOL)arg2 completion:(id)arg3 ;
-(void)_share:(id)arg0 ;
-(void)_showEditMenuFromLocation:(struct CGPoint )arg0 forAttachment:(id)arg1 ;
-(void)_transientlyUpdateHeightOfAttachment:(id)arg0 delta:(CGFloat)arg1 ;
-(void)_updateAttachmentHeightIfNecessaryForDrawing:(id)arg0 ;
-(void)_updateAttachmentOnscreenBounds;
-(void)_updateForToolPickerVisibilityChange:(id)arg0 ;
-(void)_updateSymbolPreviewViewForTouch:(struct ? )arg0 attachment:(id)arg1 alpha:(CGFloat)arg2 ;
-(void)_updateToolPreviewIndicatorInputPoint:(struct ? )arg0 ;
-(void)_willBeginInteractiveResize;
-(void)blitOldTilesIntoNewTiles:(id)arg0 completion:(id)arg1 ;
-(void)cancelTileGenerationInvalidateTiles:(BOOL)arg0 ;
-(void)canvasView:(id)arg0 beganStroke:(id)arg1 ;
-(void)canvasView:(id)arg0 cancelledStroke:(id)arg1 ;
-(void)canvasView:(id)arg0 drawingDidChange:(id)arg1 ;
-(void)canvasView:(id)arg0 endedStroke:(id)arg1 ;
-(void)canvasView:(id)arg0 registerMultiStepUndoCommands:(id)arg1 ;
-(void)canvasView:(id)arg0 registerUndoCommands:(id)arg1 ;
-(void)canvasViewDidBeginDrawing:(id)arg0 ;
-(void)canvasViewDidEndDrawing:(id)arg0 ;
-(void)canvasViewDrawingMoved:(id)arg0 withTouch:(id)arg1 ;
-(void)canvasViewInvalidateTiles:(id)arg0 ;
-(void)canvasViewWillBeginNewStroke:(id)arg0 location:(struct CGPoint )arg1 ;
-(void)canvasViewWillBeginNewStroke:(id)arg0 withTouch:(id)arg1 ;
-(void)canvasViewWillBeginNewStroke:(id)arg0 withTouch:(id)arg1 location:(struct CGPoint )arg2 ;
-(void)changeStrokesUsingTransformations:(id)arg0 strokeGroups:(id)arg1 drawing:(id)arg2 originalStrokes:(id)arg3 ;
-(void)commitSelectionIfNecessaryWithCompletion:(id)arg0 ;
-(void)convertToShapeAtLocation:(struct CGPoint )arg0 ;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)delete:(id)arg0 ;
-(void)didChangeDrawing:(id)arg0 ;
-(void)didMoveToWindow;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)duplicate:(id)arg0 ;
-(void)getAttachment:(id)arg0 tileTransform:(struct CGAffineTransform *)arg1 strokeTransform:(struct CGAffineTransform *)arg2 paperTransform:(struct CGAffineTransform *)arg3 ;
-(void)getAttachment:(id)arg0 tileTransform:(struct CGAffineTransform *)arg1 strokeTransform:(struct CGAffineTransform *)arg2 paperTransform:(struct CGAffineTransform *)arg3 scrollViewContentOffset:(struct CGPoint )arg4 ;
-(void)hoverController:(id)arg0 didBegin:(struct ? )arg1 ;
-(void)hoverController:(id)arg0 didUpdate:(struct ? )arg1 ;
-(void)hoverController:(id)arg0 holdGestureMeanTouch:(struct ? )arg1 latestTouch:(struct ? )arg2 ;
-(void)hoverController:(id)arg0 intentionalHoverWithDuration:(CGFloat)arg1 ;
-(void)hoverControllerDidEnd:(id)arg0 ;
-(void)hoverControllerHoldGestureEnded:(id)arg0 ;
-(void)insertCanvasView:(id)arg0 intoScrollView:(id)arg1 ;
-(void)insertSpace:(id)arg0 ;
-(void)layoutSubviews;
-(void)newCanvasView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)paletteViewHoverDidSwitchToolsViaPencilInteraction:(id)arg0 ;
-(void)paletteViewPencilDidTap:(id)arg0 ;
-(void)paste:(id)arg0 ;
-(void)performUndo:(id)arg0 ;
-(void)purgeNonVisibleTiles;
-(void)registerUndoCommand:(id)arg0 ;
-(void)renderAttachment:(id)arg0 intoCanvas:(id)arg1 showing:(BOOL)arg2 ;
-(void)replaceInkTexture:(id)arg0 image:(struct CGImage *)arg1 ;
-(void)resizeTiles:(id)arg0 completion:(id)arg1 ;
-(void)selectAll:(id)arg0 ;
-(void)selectionDidChange;
-(void)setSelectedStrokesColor:(id)arg0 ;
-(void)startToolPreviewIfPossibleForInputPoint:(struct ? )arg0 ;
-(void)startedDrawingInBlankSpaceWithTouch:(id)arg0 location:(struct CGPoint )arg1 ;
-(void)straighten:(id)arg0 strokes:(id)arg1 drawing:(id)arg2 ;
-(void)swapOffscreenCallback:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAfterTraitCollectionChange;
-(void)updateCurrentSelectionWithNewDrawingIfNecessary:(id)arg0 ;
-(void)updateEndAttachment;
-(void)updateExistingTiles:(BOOL)arg0 ;
-(void)updateForAllowedDrawingInput;
-(void)updateTilesForVisibleRect;
-(void)updateTilesForVisibleRectForceIfZooming:(BOOL)arg0 ;
-(void)updateTilesForVisibleRectOffscreenWithCallback:(id)arg0 ;
-(void)updateTilesForVisibleRectRendering:(BOOL)arg0 offscreen:(BOOL)arg1 ;


@end


#endif