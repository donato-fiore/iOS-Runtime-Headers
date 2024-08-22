// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTLAYOUT_H
#define TSTLAYOUT_H

@class NSString;
@protocol TSKSearchTarget, TSWPColumnMetrics, TSWPLayoutParent, TSWPStorageObserver;


#import "TSWPTextHostLayout.h"
#import "TSWPLayout.h"
#import "TSTEditingState.h"
#import "TSTLayoutHint.h"
#import "TSWPPadding.h"
#import "TSTMasterLayout.h"
#import "TSTLayoutSpaceBundle.h"
#import "TSTTableInfo.h"
#import "TSTTableModel.h"

@interface TSTLayout : TSWPTextHostLayout <TSKSearchTarget, TSWPColumnMetrics, TSWPLayoutParent, TSWPStorageObserver>

 {
    CGRect mCanvasVisibleRect;
    CGRect mPreviousVisibleStrokeFrame;
    BOOL mTabsVisible;
    BOOL mTableNameVisibilityIsValid;
    BOOL mTableNameVisible;
    ? mCached;
    CGRect mRenderingFrameForLayoutGeometryFromInfo;
    CGRect mComputedEditingCellContentFrame;
    unsigned int mCachedVerticalAlignmentForEditingCell;
    CGSize mTableSizeWithoutStrokes;
    CGSize mStrokeDelta;
    CGSize mCapturedStrokeFrameSizeForInline;
    unsigned int mContainedTextEditorParagraphAlignment;
    BOOL mContainedTextEditorTextWraps;
    BOOL mContainedTextEditorSpills;
    CGSize mSpillingTextSize;
    int mCoordinatesChangedMaskForChrome;
}


@property (readonly, nonatomic) CGSize adjustedInsets;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) CGRect computedEditingCellContentFrame;
@property (retain, nonatomic) TSWPLayout *containedTextEditingLayout; // ivar: mContainedTextEditingLayout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? editingSpillingTextRange; // ivar: mEditingSpillingTextRange
@property (readonly, nonatomic) TSTEditingState *editingState;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL layoutDirectionIsLeftToRight; // ivar: mLayoutDirectionIsLeftToRight
@property (retain, nonatomic) TSTLayoutHint *layoutHint; // ivar: mLayoutHint
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (retain, nonatomic) TSTMasterLayout *masterLayout; // ivar: mMasterLayout
@property (nonatomic) BOOL newCanvasRevealedHorizontally; // ivar: mNewCanvasRevealedHorizontally
@property (nonatomic) BOOL newCanvasRevealedVertically; // ivar: mNewCanvasRevealedVertically
@property (readonly, nonatomic) UIEdgeInsets paddingForEditingCell; // ivar: mCachedPaddingForEditingCell
@property (nonatomic) BOOL processChangesFiltering; // ivar: mProcessChangesFiltering
@property (nonatomic) CGSize scaleToFit;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (retain, nonatomic) TSTLayoutSpaceBundle *spaceBundle; // ivar: mSpaceBundle
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSTTableInfo *tableInfo;
@property (readonly, nonatomic) TSTTableModel *tableModel;
@property (readonly, nonatomic) CGFloat textScaleFactor;


-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)canRotateChildLayout:(id)arg0 ;
-(BOOL)inFindReplaceMode;
-(BOOL)inPrintPreviewMode;
-(BOOL)isBeingManipulated;
-(BOOL)isZoomedEditing;
-(BOOL)orderedBefore:(id)arg0 ;
-(BOOL)p_getLayoutDirectionLeftToRight;
-(BOOL)p_layoutWhollyContainsGridRange:(struct ? )arg0 ;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)supportsRotation;
-(BOOL)textIsVertical;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)maxAutoGrowWidthForTextLayout:(id)arg0 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 outWidth:(*CGFloat)arg2 outGap:(*CGFloat)arg3 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(Class)repClassForTextLayout:(id)arg0 ;
-(id)childSearchTargets;
-(id)children;
-(id)computeLayoutGeometry;
-(id)dependentLayouts;
-(id)dependentsOfTextLayout:(id)arg0 ;
-(id)initWithInfo:(id)arg0 ;
-(id)initWithInfo:(id)arg0 layoutHint:(id)arg1 ;
-(id)initialInfoGeometry;
-(id)layoutGeometryFromInfo;
-(int)reapCoordinatesChangedMaskForChrome;
-(int)wrapFitType;
-(struct CGPoint )calculatePointFromSearchReference:(id)arg0 ;
-(struct CGPoint )capturedInfoPositionForAttachment;
-(struct CGPoint )infoGeometryPositionForCurrentAttachedLayoutGeometry;
-(struct CGRect )alignmentFrame;
-(struct CGRect )alignmentFrameForProvidingGuidesInRoot;
-(struct CGRect )autosizedFrameForTextLayout:(id)arg0 textSize:(struct CGSize )arg1 ;
-(struct CGRect )maskRectForTextLayout:(id)arg0 ;
-(struct CGRect )nonAutosizedFrameForTextLayout:(id)arg0 ;
-(struct CGRect )p_computeSpillingTextFrameForLayout:(id)arg0 textSize:(struct CGSize )arg1 editingSpillRange:(struct ? *)arg2 ;
-(struct CGRect )rectForPresentingAnnotationPopoverForSelection:(id)arg0 ;
-(struct CGRect )rectForSelection:(id)arg0 ;
-(struct CGSize )initialTextSize;
-(struct CGSize )minimumSize;
-(struct CGSize )p_rangeUpAndLeftOfIntersectionRangeOfGridRange:(struct ? )arg0 ;
-(unsigned int)autosizeFlagsForTextLayout:(id)arg0 ;
-(unsigned int)naturalAlignmentForTextLayout:(id)arg0 ;
-(unsigned int)p_defaultAlignmentForTableWritingDirection;
-(unsigned int)p_naturalAlignmentForCellID:(struct ? )arg0 ;
-(unsigned int)verticalAlignmentForTextLayout:(id)arg0 ;
-(void)bezierPathsForCellRegion:(id)arg0 transform:(struct CGAffineTransform )arg1 viewScale:(CGFloat)arg2 inset:(CGFloat)arg3 block:(id)arg4 ;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateForAutosizingTextLayout:(id)arg0 ;
-(void)invalidateSize;
-(void)invalidateTableNameVisibility;
-(void)layoutSearchForAnnotationWithHitBlock:(id)arg0 ;
// -(void)layoutSearchForSpellingErrorsWithHitBlock:(id)arg0 stop:(unk)arg1  ;
-(void)layoutSearchForString:(id)arg0 options:(NSUInteger)arg1 hitBlock:(id)arg2 ;
-(void)offsetGeometryBy:(struct CGPoint )arg0 ;
-(void)p_processChange:(id)arg0 forChangeSource:(id)arg1 actions:(id)arg2 ;
-(void)p_processChangeActions:(id)arg0 ;
-(void)p_updateCachedStyleInformationFromCellID:(struct ? )arg0 ;
-(void)processChanges:(id)arg0 ;
-(void)removeContainedTextEditingLayout;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setupContainedTextEditingLayout:(struct ? )arg0 ;
-(void)storage:(id)arg0 didChangeRange:(struct _NSRange )arg1 delta:(NSInteger)arg2 broadcastKind:(int)arg3 ;
-(void)updateChildrenFromInfo;
-(void)validate;
-(void)validateTableNameVisibility;
-(void)willBeAddedToLayoutController:(id)arg0 ;
-(void)willBeRemovedFromLayoutController:(id)arg0 ;


@end


#endif