// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEREP_H
#define TSTTABLEREP_H

@class TSWPTextHostRep, NSMutableArray, TSTSelectionDragController, NSString, CAShapeLayer, TSTTableReferences, NSArray, NSSet;
@protocol TSWPRepParent, TSTTableRepInternal, UITextFieldDelegate, CALayerDelegate, TSTTableAnimationController, TSTCanvasReferenceController, TSDContainerInfo, TSTTableRepDelegate, TSTTableChromeProvider;


#import "TSTAnimation.h"
#import "TSTCellRegionGatherer.h"
#import "TSTLayoutEngine.h"
#import "TSTCellSelection.h"
#import "TSTTableInfo.h"
#import "TSTLayout.h"

@interface TSTTableRep : TSWPTextHostRep <TSWPRepParent, TSTTableRepInternal, UITextFieldDelegate, CALayerDelegate>



@property (weak, nonatomic) NSObject<TSTTableAnimationController> *animationController; // ivar: _animationController
@property (readonly, nonatomic) NSMutableArray *animationStack; // ivar: _animationStack
@property (nonatomic) BOOL aspectOperationIsInProgress; // ivar: _aspectOperationIsInProgress
@property (readonly, weak, nonatomic) NSObject<TSTCanvasReferenceController> *canvasReferenceController; // ivar: _canvasReferenceController
@property (readonly, nonatomic) CGRect canvasVisibleRect;
@property (weak, nonatomic) TSTSelectionDragController *cellDragController; // ivar: _cellDragController
@property (retain, nonatomic) NSMutableArray *cellEditingMaskLayers; // ivar: _cellEditingMaskLayers
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, nonatomic) TSTAnimation *currentAnimation;
@property (nonatomic) CGFloat currentScreenScale; // ivar: _currentScreenScale
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<TSTTableRepDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TSTCellRegionGatherer *dirtyCellRegionGatherer; // ivar: _dirtyCellRegionGatherer
@property (readonly, nonatomic) BOOL dragByHandleOnly; // ivar: _dragByHandleOnly
@property (retain, nonatomic) CAShapeLayer *findSelectionHighlightLayer; // ivar: _findSelectionHighlightLayer
@property (readonly, nonatomic) BOOL hasVisibleCellWarnings;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isZoomToEditOperationInProgress; // ivar: _isZoomToEditOperationInProgress
@property (readonly, nonatomic) BOOL layoutDirectionIsLeftToRight;
@property (readonly, nonatomic) TSTLayoutEngine *layoutEngine;
@property (nonatomic) TSUCellCoord ratingsDragCellID; // ivar: _ratingsDragCellID
@property (nonatomic, getter=isRecursivelyDrawingInContext) BOOL recursivelyDrawingInContext; // ivar: _recursivelyDrawingInContext
@property (readonly, nonatomic) TSTTableReferences *references; // ivar: _references
@property (nonatomic) CGRect searchSelectionBounds; // ivar: _searchSelectionBounds
@property (readonly, nonatomic) TSTCellSelection *selection;
@property (nonatomic) BOOL selectionDragAbortedOnNewSelection; // ivar: _selectionDragAbortedOnNewSelection
@property (readonly, nonatomic) NSInteger selectionType;
@property (readonly, nonatomic) BOOL selectionUsesBezierPath; // ivar: _selectionUsesBezierPath
@property (readonly, nonatomic) BOOL selectsCellOnInitialTap; // ivar: _selectsCellOnInitialTap
@property (nonatomic) BOOL shouldRepositionStockPopover; // ivar: _shouldRepositionStockPopover
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<TSTTableChromeProvider> *tableChrome; // ivar: _tableChrome
@property (readonly, nonatomic) TSTTableInfo *tableInfo;
@property (readonly, nonatomic) TSTLayout *tableLayout;
@property (nonatomic, getter=isTableNameValid) BOOL tableNameValid; // ivar: _tableNameValid
@property BOOL tableRepIsBeingRemovedFromBackgroundLayout; // ivar: _tableRepIsBeingRemovedFromBackgroundLayout
@property (readonly, nonatomic) CGAffineTransform transformFromCanvas;
@property (readonly, nonatomic) CGAffineTransform transformToCanvas;
@property (readonly, nonatomic) BOOL usesSelectionChromeResizer; // ivar: _usesSelectionChromeResizer
@property (readonly, nonatomic) NSArray *viewsOverlappingTableCells;
@property (copy, nonatomic) NSSet *visibleFillKnobs; // ivar: _visibleFillKnobs
@property (nonatomic) BOOL zoomOperationIsInProgress; // ivar: _zoomOperationIsInProgress
@property (nonatomic) BOOL zoomToEditOperationIsInProgress; // ivar: _zoomToEditOperationIsInProgress
@property (nonatomic) TSUCellRect zoomToEditVisibleCellRange; // ivar: _zoomToEditVisibleCellRange


+(CGFloat)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg0 incomingObject:(id)arg1 mixingTypeContext:(id)arg2 ;
+(Class)tableRepDelegateClass;
+(NSUInteger)p_countOfIdenticalCellsBetweenOutgoingTableInfo:(id)arg0 incomingTableInfo:(id)arg1 ;
-(BOOL)canDrawInBackgroundDuringScroll;
-(BOOL)canDrawInParallel;
-(BOOL)isDraggable;
-(BOOL)isFullyVisibleWithBorder:(int)arg0 ;
-(BOOL)mustDrawOnMainThreadForInteractiveCanvas;
-(BOOL)p_drawingCheckboxOrRatingInCell:(id)arg0 cellID:(struct TSUCellCoord )arg1 ;
-(BOOL)p_isTableRenderingRotated;
-(BOOL)tappedControlCellAtUnscaledPoint:(struct CGPoint )arg0 ;
-(BOOL)tappedStockCellAtUnscaledPoint:(struct CGPoint )arg0 ;
-(BOOL)wantsActivityLine;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)attachmentCellRepForCellID:(struct TSUCellCoord )arg0 optionalCell:(id)arg1 ;
-(id)editorSelection;
-(id)hitRep:(struct CGPoint )arg0 withPrecision:(BOOL)arg1 ;
-(id)hyperlinkContainerRep;
-(id)hyperlinkRegions;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)p_cellAtUnscaledPoint:(struct CGPoint )arg0 ;
-(id)p_columnForCellID:(struct TSUCellCoord )arg0 useCache:(BOOL)arg1 ;
-(id)p_fontColorAtCellID:(struct TSUCellCoord )arg0 cell:(id)arg1 ;
-(id)textureForDescription:(id)arg0 ;
-(struct CGAffineTransform )p_horizontalAlignmentTransformForHyperlinkWithBounds:(struct CGRect )arg0 inCell:(struct TSUCellCoord )arg1 ;
-(struct CGAffineTransform )p_horizontalAlignmentTransformForHyperlinkWithColumn:(id)arg0 cell:(id)arg1 cellID:(struct TSUCellCoord )arg2 ;
-(struct CGRect )boundsForCellSelection:(struct TSUCellCoord )arg0 ;
-(struct CGRect )canvasBoundsForCellRange:(struct TSUCellRect )arg0 ;
-(struct CGRect )deviceBoundsForCellRange:(struct TSUCellRect )arg0 ;
-(struct CGRect )layerFrameInScaledCanvas;
-(struct CGRect )naturalBoundsRectForHyperlinkField:(id)arg0 ;
-(struct CGRect )p_alignedLayerFrameForLayoutSpace:(id)arg0 transform:(struct CGAffineTransform )arg1 ;
-(struct CGRect )p_contentFrameWithCellID:(struct TSUCellCoord )arg0 ;
-(struct CGRect )p_getImageFrameForAnimation:(id)arg0 ;
-(struct CGRect )p_naturalBoundsRectForHyperlinkField:(id)arg0 cellID:(struct TSUCellCoord )arg1 column:(id)arg2 contentFrame:(struct CGRect )arg3 horizontalAlignmentTransform:(struct CGAffineTransform )arg4 ;
-(struct CGRect )p_scaledCanvasFrame;
-(struct TSUCellCoord )logicalCellIDForUnscaledCanvasPoint:(struct CGPoint )arg0 ;
-(struct TSUCellCoord )p_cellIDForHyperlinkField:(id)arg0 ;
-(void)asyncPostTextChangedInRange:(struct TSUCellRect )arg0 ;
-(void)contentsRectForCellRangeAcrossSpaces:(struct TSUCellRect )arg0 contentsCenterInfo:(struct ? *)arg1 canvasFrame:(struct CGRect *)arg2 contentsRect:(struct CGRect *)arg3 ;
-(void)dealloc;
-(void)didDrawCellImageFill:(id)arg0 inCellRange:(struct TSUCellRect )arg1 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)invalidateEditingCell;
-(void)invalidateFrozenHeaders;
-(void)p_addObservers;
-(void)p_addTexture:(id)arg0 forAnimationStage:(NSUInteger)arg1 isFinal:(BOOL)arg2 description:(id)arg3 ;
-(void)p_deleteEmptyPivotMessage;
-(void)p_drawAnimation:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)p_drawBackgroundFillInLayoutSpace:(id)arg0 gridRange:(struct ? )arg1 context:(struct CGContext *)arg2 ;
-(void)p_drawCheckboxOrRatingInContext:(struct CGContext *)arg0 viewScale:(CGFloat)arg1 contentFrame:(struct CGRect )arg2 cell:(id)arg3 cellID:(struct TSUCellCoord )arg4 ;
-(void)p_drawFinalElements:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)p_drawGroupingArrowInContext:(struct CGContext *)arg0 contentFrame:(struct CGRect )arg1 cell:(id)arg2 cellID:(struct TSUCellCoord )arg3 groupingArrowState:(NSInteger)arg4 alignedClipFrame:(struct CGRect )arg5 verticalAlignment:(int)arg6 wpColumn:(id)arg7 ;
-(void)p_drawLayoutSpace:(id)arg0 dirtyRect:(struct CGRect )arg1 inContext:(struct CGContext *)arg2 ;
-(void)p_drawLayoutSpace:(id)arg0 range:(struct TSUCellRect )arg1 inContext:(struct CGContext *)arg2 ;
-(void)p_drawTableNameInContext:(struct CGContext *)arg0 animation:(id)arg1 ;
-(void)p_lockAndDrawLayoutSpace:(id)arg0 checkFrameHasWidthAndHeight:(BOOL)arg1 dirtyRect:(struct CGRect )arg2 inContext:(struct CGContext *)arg3 ;
-(void)p_manageEmptyPivotMessage;
-(void)p_positionEmptyPivotMessage;
-(void)p_removeObservers;
-(void)p_resetDynamicModePropertiesForContainedTextEditing;
-(void)p_updateDynamicModePropertiesForContainedTextEditing;
-(void)p_updateDynamicModePropertiesForContainedTextEditingWithSpillingTextRange:(struct TSUCellRect )arg0 ;
-(void)popAnimation;
-(void)pushAnimation:(id)arg0 ;
-(void)recursivelyDrawInContext:(struct CGContext *)arg0 keepingChildrenPassingTest:(id)arg1 ;
-(void)updateChildrenFromLayout;
-(void)updateFromLayout;
-(void)validateFrozenHeaderColumns;
-(void)validateFrozenHeaderCorner;
-(void)validateFrozenHeaderRows;
-(void)validateFrozenHeaderTableBodyMask;
-(void)validateStrokesInEditingSpillingTextRange;
-(void)validateVisibleRect;
-(void)willBeRemoved;


@end


#endif