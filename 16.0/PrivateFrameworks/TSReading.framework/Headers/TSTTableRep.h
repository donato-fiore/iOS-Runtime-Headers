// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEREP_H
#define TSTTABLEREP_H

@class CALayer, NSMutableArray, TSTTableCellTextEditingRep, TSWPTextEditing, TSTTableReferences, CAShapeLayer, NSSet, TSTSelectionDragController, NSString, TSDKnobTracker<TSTTableKnobTrackerVisitorProtocol>;
@protocol TSDTilingLayerDelegate, UITextFieldDelegate, TSTTableAnimationController, TSTCanvasReferenceController, TSTTableRepDelegate, TSTTableChromeProvider;


#import "TSWPTextHostRep.h"
#import "TSDTilingLayer.h"
#import "TSTTableSelection.h"
#import "TSWPStorage.h"
#import "TSWPHyperlinkField.h"
#import "TSTSearchReference.h"
#import "TSDCanvasView.h"
#import "TSTAnimation.h"
#import "TSTEditingState.h"
#import "TSDEditorController.h"
#import "TSTMasterLayout.h"
#import "TSTCellRegion.h"
#import "TSTTableInfo.h"
#import "TSTLayout.h"
#import "TSTTableModel.h"

@interface TSTTableRep : TSWPTextHostRep <TSDTilingLayerDelegate, UITextFieldDelegate>

 {
    CGRect mCanvasVisibleRect;
    CGRect mSearchSelectionBounds;
    TSDTilingLayer *mOverlayTableName;
    TSDTilingLayer *mOverlayFrozenHeaderCorner;
    TSDTilingLayer *mOverlayFrozenHeaderRows;
    TSDTilingLayer *mOverlayFrozenHeaderColumns;
    CALayer *mOverlayFrozenHeaderRowsMask;
    CALayer *mOverlayFrozenHeaderColumnsMask;
    CALayer *mOverlayFrozenHeaderTableBodyMask;
    CALayer *mOverlayFrozenHeaderTableNameMask;
    CGFloat mCurrentScreenScale;
    ? mDirtyCellRange;
    BOOL mRecursivelyDrawingInContext;
    NSMutableArray *mAnimationStack;
    TSTTableCellTextEditingRep *mContainedTextEditingRep;
    TSWPTextEditing *mTableNameTextEditing;
    ? mControlCellID;
    TSTTableReferences *mReferences;
    CAShapeLayer *mHighlightedHyperlinkLayer;
    BOOL mIsAspectOperationInProgress;
    BOOL mIsZoomOperationInProgress;
    ? mZoomToEditVisibleCellRange;
    CAShapeLayer *mFindSelectionHighlightLayer;
    TSTTableSelection *mSourceFillSelection;
    TSTTableSelection *mTargetFillSelection;
    BOOL mWPEndedTableNameEditing;
    BOOL _settingSelection;
    BOOL mDragByHandleOnly;
    BOOL mSelectionUsesBezierPath;
    BOOL mSelectsCellOnInitialTap;
    BOOL mUsesWholeChromeResizer;
    NSSet *mVisibleFillKnobs;
    ? mEditingHyperlinkCellID;
    TSWPStorage *mHyperlinkParentStorage;
    BOOL mHyperlinkModified;
    BOOL mInspectingHyperlinkInEditingStorage;
    TSWPHyperlinkField *mHyperlinkField;
    CAShapeLayer *mCellEditingMaskLayer;
}


@property (retain, nonatomic) TSTSearchReference *activeSearchReference;
@property (nonatomic) NSObject<TSTTableAnimationController> *animationController; // ivar: mAnimationController
@property (readonly, nonatomic) NSObject<TSTCanvasReferenceController> *canvasReferenceController; // ivar: mCanvasReferenceController
@property (readonly, nonatomic) TSDCanvasView *canvasView;
@property (readonly, nonatomic) CGRect canvasVisibleRect;
@property (nonatomic) TSTSelectionDragController *cellDragController; // ivar: mCellDragController
@property (readonly, nonatomic) TSTAnimation *currentAnimation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<TSTTableRepDelegate> *delegate; // ivar: mDelegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSTEditingState *editingState;
@property (readonly, nonatomic) TSDEditorController *editorController;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isZoomToEditOperationInProgress; // ivar: mIsZoomToEditOperationInProgress
@property (readonly, nonatomic) CALayer *layerForRep;
@property (readonly, nonatomic) TSTMasterLayout *masterLayout;
@property (nonatomic) ? ratingsDragCellID; // ivar: mRatingsDragCellID
@property (readonly, nonatomic) TSTCellRegion *selectionRegion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<TSTTableChromeProvider> *tableChrome; // ivar: mTableChrome
@property (readonly, nonatomic) TSTTableInfo *tableInfo;
@property (readonly, nonatomic) TSTLayout *tableLayout;
@property (readonly, nonatomic) TSTTableModel *tableModel;
@property (readonly, nonatomic) CGAffineTransform transformFromCanvas;
@property (readonly, nonatomic) CGAffineTransform transformToCanvas;
@property (readonly, nonatomic) TSDKnobTracker<TSTTableKnobTrackerVisitorProtocol> *visitorKnobTracker; // ivar: mVisitorKnobTracker


+(Class)tableRepDelegateClass;
-(BOOL)canDrawInBackgroundDuringScroll;
-(BOOL)canDrawInParallel;
-(BOOL)canDrawTilingLayerInBackground:(id)arg0 ;
-(BOOL)handlesEditMenu;
-(BOOL)isDraggable;
-(BOOL)isFullyVisibleWithBorder:(int)arg0 ;
-(BOOL)mustDrawOnMainThreadForInteractiveCanvas;
-(BOOL)shouldCommitPendingTextEdit;
-(BOOL)shouldRestartTextEditing;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)additionalLayersOverLayer;
-(id)additionalLayersUnderLayer;
-(id)editorSelection;
-(id)hitRep:(struct CGPoint )arg0 ;
-(id)hitRepChrome:(struct CGPoint )arg0 ;
-(id)imageForSearchReference:(id)arg0 forPath:(struct CGPath *)arg1 shouldPulsate:(BOOL)arg2 ;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)newCommandToApplyGeometry:(id)arg0 toInfo:(id)arg1 ;
-(id)overlayLayers;
-(id)p_frozenHeaderOverlayLayers;
-(id)p_tableNameOverlayLayers;
-(id)p_textImageForPath:(struct CGPath *)arg0 shouldPulsate:(BOOL)arg1 ;
-(id)repForDragging;
-(int)tilingMode;
-(struct CGPath *)newPathForSearchReference:(id)arg0 ;
-(struct CGPath *)p_newPathForSearchReference:(id)arg0 ;
-(struct CGRect )boundsForCellSelection:(struct ? )arg0 ;
-(struct CGRect )boundsForResizeGuideUI;
-(struct CGRect )canvasBoundsForCellRange:(struct ? )arg0 ;
-(struct CGRect )deviceBoundsForCellRange:(struct ? )arg0 ;
-(struct CGRect )layerFrameInScaledCanvas;
-(struct CGRect )p_alignedLayerFrameForLayoutSpace:(id)arg0 transform:(struct CGAffineTransform )arg1 ;
-(void)addAdditionalChildLayersToArray:(id)arg0 ;
-(void)asyncPostTextChangedInRange:(struct ? )arg0 strokeRange:(struct ? )arg1 ;
-(void)beginDragInsertFromPalette;
-(void)contentsRectForCellRangeAcrossSpaces:(struct ? )arg0 contentsCenterInfo:(struct ? *)arg1 canvasFrame:(struct CGRect *)arg2 contentsRect:(struct CGRect *)arg3 ;
-(void)dealloc;
-(void)dirtyCellRange:(struct ? )arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)endDragInsertFromPalette;
-(void)invalidateAnnotationColor;
-(void)invalidateCellRange:(struct ? )arg0 ;
-(void)invalidateCellRange:(struct ? )arg0 fittingRange:(struct ? )arg1 invalidateSize:(BOOL)arg2 ;
-(void)invalidateComments;
-(void)invalidateEditingCell;
-(void)invalidateFrozenHeaders;
-(void)invalidateSelection;
-(void)invalidateTableName;
-(void)layoutInRootChangedFrom:(id)arg0 to:(id)arg1 translatedOnly:(BOOL)arg2 ;
-(void)orientationDidChange:(id)arg0 ;
-(void)p_editingDidEnd;
-(void)p_hideSelectionLayers;
-(void)p_invalidateCellCommentBadges;
-(void)popAnimation;
-(void)pushAnimation:(id)arg0 ;
-(void)recursivelyDrawInContext:(struct CGContext *)arg0 ;
-(void)screenScaleDidChange;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInCellRange:(struct ? )arg0 ;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)updateChildrenFromLayout;
-(void)updateDynamicModeForEditingSpillText;
-(void)updateFromLayout;
-(void)validateFrozenHeaderColumns;
-(void)validateFrozenHeaderCorner;
-(void)validateFrozenHeaderRows;
-(void)validateFrozenHeaderTableBodyMask;
-(void)validateStrokesInEditingSpillingTextRange;
-(void)validateTableName;
-(void)validateVisibleRect;
-(void)viewScaleDidChange;
-(void)willBeRemoved;


@end


#endif