// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPPAGINATEDPAGECONTROLLER_H
#define TPPAGINATEDPAGECONTROLLER_H

@class NSMutableArray, TSUMutablePointerSet, TSWPLayoutMetricsCache, TPBackgroundPaginationController, TSWPLayoutManager, NSString;
@protocol TPPageLayoutInfoProvider, TSKChangeSourceObserver, TSWPLayoutOwner, TPPageControllerDelegate;


#import "TPPageController.h"
#import "_TtC14PagesQuicklook17TPPageLayoutCache.h"
#import "_TtC14PagesQuicklook17TPPaginationState.h"
#import "TPPageControllerCanvasDelegate.h"
#import "TPFootnoteLayoutController.h"
#import "TPTextFlowLayoutController.h"
#import "TPTextWrapController.h"

@interface TPPaginatedPageController : TPPageController <TPPageLayoutInfoProvider, TSKChangeSourceObserver, TSWPLayoutOwner>

 {
    uint8_t _isScrolling;
    uint8_t _isZooming;
    BOOL _isObservingNotifications;
    _TtC14PagesQuicklook17TPPageLayoutCache *_pageLayoutCache;
    _TtC14PagesQuicklook17TPPaginationState *_paginationState;
    _TtC14PagesQuicklook17TPPaginationState *_cachedPaginationState;
    TPPageControllerCanvasDelegate *_offscreenSearchDelegate;
    TPFootnoteLayoutController *_footnoteLayoutController;
    BOOL _checkedForBackUp;
    BOOL _isTornDown;
    NSMutableArray *_pageGeneratorStack;
    NSUInteger _lastKnownPageCount;
    NSUInteger _completePageCount;
    BOOL _shouldUpdatePageCount;
    BOOL _bodyLayoutInvalidated;
    NSUInteger _didLayOutPageIndex;
    NSUInteger _currentPageBeingLaidOut;
    TSUMutablePointerSet *_layoutObservers;
    TSWPLayoutMetricsCache *_bodyLayoutMetricsCache;
    TPTextFlowLayoutController *_flowController;
    TPTextWrapController *_wrapController;
    CGFloat _horizontalGapBetweenPages;
    CGFloat _verticalGapBetweenPages;
    NSUInteger _pageHeightCount;
    BOOL _layoutInvalidationPending;
    _NSRange _cachedBodyTextRange;
    NSUInteger _cachedPageIndex;
}


@property (nonatomic) BOOL allowParagraphMetrics; // ivar: _allowParagraphMetrics
@property (readonly, nonatomic) TPBackgroundPaginationController *backgroundPaginationController; // ivar: _backgroundPaginationController
@property (readonly, nonatomic) TSWPLayoutManager *bodyLayoutManager; // ivar: _bodyLayoutManager
@property (readonly, nonatomic) TPTextWrapController *d_wrapController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<TPPageControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat horizontalPageSeparation;
@property (readonly, nonatomic) BOOL isPageLayoutRightToLeft;
@property (nonatomic) BOOL isPaginating; // ivar: _isPaginating
@property (readonly, nonatomic) TPPageController *pageController;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat verticalPageSeparation;


+(id)existingOwnedPaginatedPageControllerForDelegate:(id)arg0 ;
+(id)ownedPaginatedPageControllerForDelegate:(id)arg0 ;
+(id)paginatedPageControllerForDelegate:(id)arg0 ;
+(void)disownPaginatedPageControllerForDelegate:(id)arg0 ;
+(void)initialize;
-(BOOL)backgroundPaginationWillBegin;
-(BOOL)canProvideInfoForPageIndex:(NSUInteger)arg0 ;
-(BOOL)canProvideNumberingInfoForPageIndex:(NSUInteger)arg0 ;
-(BOOL)caresAboutStorageChanges;
-(BOOL)isPaginationComplete;
-(BOOL)isPaginationCompleteForSelection:(id)arg0 inFlow:(id)arg1 ;
-(BOOL)isPaginationCompleteThroughPageIndex:(NSUInteger)arg0 ;
-(BOOL)isPaginationInProgress;
-(BOOL)isSectionInfo:(id)arg0 onPage:(NSUInteger)arg1 ;
-(BOOL)okToAnchorDrawable:(id)arg0 toPageIndex:(NSUInteger)arg1 ;
-(BOOL)okToAnchorDrawables:(id)arg0 toPageIndex:(NSUInteger)arg1 ;
-(BOOL)p_canAnchorDrawable:(id)arg0 toPageLayout:(id)arg1 ;
-(BOOL)p_couldBeFirstPageIndex:(NSUInteger)arg0 forPartitionedAttachmentCharIndex:(NSUInteger)arg1 ;
-(BOOL)p_didLayOut;
-(BOOL)p_isBodyLayoutComplete;
-(BOOL)p_isPaginationComplete;
-(BOOL)p_layOutNextPageOnceWithOffscreenLayoutController;
-(BOOL)pageAtIndexHasBody:(NSUInteger)arg0 ;
-(BOOL)pageBeginsWithPaginatedAttachment:(NSUInteger)arg0 ;
-(BOOL)pageEndsWithPaginatedAttachment:(NSUInteger)arg0 ;
-(BOOL)pageIndexIsFirstPageOfSection:(NSUInteger)arg0 ;
-(BOOL)performBackgroundPagination;
-(BOOL)shouldHeaderFooterBeVisibleForPageIndex:(NSUInteger)arg0 ;
-(BOOL)shouldUseFacingPagesForPageIndex:(NSUInteger)arg0 ;
-(CGFloat)footerHeight;
-(CGFloat)headerHeight;
-(NSUInteger)adjacentPageIndexForPageIndex:(NSUInteger)arg0 ;
-(NSUInteger)calculatePageIndexFromCanvasPoint:(struct CGPoint )arg0 ;
-(NSUInteger)contentFlagsForPageIndex:(NSUInteger)arg0 ;
-(NSUInteger)firstPageIndexNeedingLayout;
-(NSUInteger)lastLaidOutDocumentPageIndex;
-(NSUInteger)p_backupPageIndexForCharIndex:(NSUInteger)arg0 ;
-(NSUInteger)p_firstPageColumn;
-(NSUInteger)p_lastValidCharIndex;
-(NSUInteger)p_lastValidFootnoteIndex;
-(NSUInteger)p_lastValidTextPageIndex;
-(NSUInteger)p_pageHintIndexForAnchoredCharIndex:(NSUInteger)arg0 ;
-(NSUInteger)p_pageHintIndexForCharIndex:(NSUInteger)arg0 ;
-(NSUInteger)p_pageIndexContainingIndex:(NSUInteger)arg0 ofType:(NSUInteger)arg1 ;
-(NSUInteger)p_pageIndexForAnchoredCharIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 searchAfterPaginationPoint:(BOOL)arg2 ;
-(NSUInteger)p_pageIndexForCharIndex:(NSUInteger)arg0 includeEmptyPages:(BOOL)arg1 caretAffinity:(NSInteger)arg2 forcePagination:(BOOL)arg3 searchAfterPaginationPoint:(BOOL)arg4 ;
-(NSUInteger)p_pageIndexForFootnoteIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 searchAfterPaginationPoint:(BOOL)arg2 ;
-(NSUInteger)p_textPageIndexPrecedingPageIndex:(NSUInteger)arg0 ;
-(NSUInteger)pageCount;
-(NSUInteger)pageCountForPageIndex:(NSUInteger)arg0 ;
-(NSUInteger)pageHeightCountForPageViewState:(NSInteger)arg0 ;
-(NSUInteger)pageIndexForAnchoredAttachment:(id)arg0 forcePagination:(BOOL)arg1 ;
-(NSUInteger)pageIndexForAnchoredCharIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 ;
-(NSUInteger)pageIndexForCharIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 ;
-(NSUInteger)pageIndexForFootnoteIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 ;
-(NSUInteger)pageIndexFromCanvasPoint:(struct CGPoint )arg0 ;
-(NSUInteger)pageNumberForPageIndex:(NSUInteger)arg0 ;
-(NSUInteger)sectionIndexForPageIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 ;
-(NSUInteger)sectionPageIndexForPageIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 ;
-(id)anchoredDrawablesOnPageIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 ;
-(id)backgroundFillForPageIndex:(NSUInteger)arg0 ;
-(id)displayPageNumberForCharIndex:(NSUInteger)arg0 ;
-(id)displayPageNumberForPageIndex:(NSUInteger)arg0 ;
-(id)footnoteLayoutController;
-(id)headerFooterProviderForPageIndex:(NSUInteger)arg0 ;
-(id)i_columnAfterPageIndex:(NSUInteger)arg0 ;
-(id)i_columnPriorToPageIndex:(NSUInteger)arg0 ;
-(id)i_firstChildHintAfterPageIndex:(NSUInteger)arg0 ;
-(id)i_flowLayoutController;
-(id)i_pageHintForPageIndex:(NSUInteger)arg0 ;
-(id)i_pageIndexPathForPageIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 allowAfterPaginationPoint:(BOOL)arg2 ;
-(id)i_textPageHintPrecedingPageIndex:(*NSUInteger)arg0 ;
-(id)i_topicNumberHintsAfterPageIndex:(NSUInteger)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)metricsCacheForStorage:(id)arg0 ;
-(id)numberOfPagesInEachSection;
-(id)offscreenLayoutController;
-(id)p_cachedPageLayoutForPageIndex:(NSUInteger)arg0 preferredLayoutController:(id)arg1 ;
-(id)p_lastValidPageHint;
-(id)p_lastValidTextPageHint:(*NSUInteger)arg0 ;
-(id)p_pageHintForPageIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 allowAfterPaginationPoint:(BOOL)arg2 ;
-(id)p_pageHintForPageIndexPath:(id)arg0 ;
-(id)p_pageHintPrecedingPageIndexPath:(id)arg0 ;
-(id)p_pageIndicesForFlow:(id)arg0 withSelection:(id)arg1 forcePagination:(BOOL)arg2 ;
-(id)p_pageInfoForPageAtIndex:(NSUInteger)arg0 ;
-(id)p_pageInfosForBodySelection:(id)arg0 ;
-(id)p_pageInfosForFlow:(id)arg0 withSelection:(id)arg1 ;
-(id)p_pageMasterForPageIndex:(NSUInteger)arg0 inSection:(id)arg1 sectionHint:(id)arg2 ;
-(id)p_paginationState;
-(id)p_sectionAtSectionIndex:(NSUInteger)arg0 ;
-(id)p_sectionHintForPageIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 allowAfterPaginationPoint:(BOOL)arg2 ;
-(id)p_textPageHintFollowingPageIndexPath:(id)arg0 ;
-(id)p_textPageHintPrecedingPageIndexPath:(id)arg0 ;
-(id)pageIndicesForPartitionableAttachmentAtBodyCharIndex:(NSUInteger)arg0 selectionPath:(id)arg1 forcePagination:(BOOL)arg2 ;
-(id)pageInfoForPageIndex:(NSUInteger)arg0 ;
-(id)pageNumberFormatForSectionOnPageIndex:(NSUInteger)arg0 ;
-(id)sectionForPageIndex:(NSUInteger)arg0 ;
-(id)sectionTemplateDrawableProviderForPageIndex:(NSUInteger)arg0 ;
-(id)textWrapper;
-(id)topicNumbersForStorage:(id)arg0 ;
-(struct CGPoint )pageOriginForPageIndex:(NSUInteger)arg0 allowAfterPaginationPoint:(BOOL)arg1 ;
-(struct CGRect )pageRectForPageIndex:(NSUInteger)arg0 allowAfterPaginationPoint:(BOOL)arg1 ;
-(struct CGSize )canvasSizeToFitAllPagesForPageViewState:(NSInteger)arg0 ;
-(struct _NSRange )anchoredRangeForPageIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 ;
-(struct _NSRange )bodyRangeForPageIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 ;
-(struct _NSRange )documentPageRangeOfSectionIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 ;
-(struct _NSRange )footnoteLayoutRangeForPageIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 ;
-(struct _NSRange )p_anchoredRangeForPageIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 allowAfterPaginationPoint:(BOOL)arg2 ;
-(struct _NSRange )p_bodyRangeForPageIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 allowAfterPaginationPoint:(BOOL)arg2 ;
-(struct _NSRange )p_footnoteLayoutRangeForPageIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 allowAfterPaginationPoint:(BOOL)arg2 ;
-(struct _NSRange )p_pageRangeAffectedByInfo:(id)arg0 ;
-(struct _NSRange )p_pageRangeForSelection:(id)arg0 includingEmptyPages:(BOOL)arg1 outEndIsValid:(*BOOL)arg2 forcePagination:(BOOL)arg3 ;
-(struct _NSRange )p_rangeOfContinuousSectionsAtPageIndex:(NSUInteger)arg0 startPage:(*NSUInteger)arg1 ;
-(struct _NSRange )pageRangeForSelection:(id)arg0 includingEmptyPages:(BOOL)arg1 outEndIsValid:(*BOOL)arg2 ;
-(struct _NSRange )sectionBodyRangeForPageIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 ;
-(struct _NSRange )sectionPageRangeForPageIndex:(NSUInteger)arg0 forcePagination:(BOOL)arg1 outEndIsValid:(*BOOL)arg2 ;
-(struct _NSRange )validPageRangeForSelection:(id)arg0 ;
-(void)accquireLockAndPerformAction:(id)arg0 ;
-(void)addPaginationObserver:(id)arg0 ;
-(void)allowBackgroundPagination;
-(void)backgroundPaginationDidEnd;
-(void)canvasDidValidateLayouts:(id)arg0 ;
-(void)changeTrackingVisibilityDidChange;
-(void)d_timePaginationResettingMetrics:(BOOL)arg0 ;
-(void)dealloc;
-(void)didLayoutChangingDirtyRanges;
-(void)enumerateHeaderFooterFragmentsOnPageIndex:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)i_forceRestartPaginationForServer;
-(void)i_inflateColumnsInBodyLayout:(id)arg0 ;
-(void)i_inflateFootnotesInFootnoteContainer:(id)arg0 ;
-(void)i_inflateTextFlowsOnPage:(id)arg0 ;
-(void)i_invalidateFlows:(id)arg0 startingPage:(id)arg1 ;
-(void)i_invalidatePageIndex:(NSUInteger)arg0 ;
-(void)i_rebuildCachedLayoutChildrenFromStartPage:(NSUInteger)arg0 toEndPage:(NSUInteger)arg1 setNeedsLayout:(BOOL)arg2 ;
-(void)i_registerPageLayout:(id)arg0 ;
-(void)i_setNeedsDynamicLayoutForLayoutController:(id)arg0 onPageIndex:(NSUInteger)arg1 ;
-(void)i_trimPageAtIndex:(NSUInteger)arg0 toCharIndex:(NSUInteger)arg1 removeFootnoteReferenceCount:(NSUInteger)arg2 removeAutoNumberFootnoteCount:(NSUInteger)arg3 ;
-(void)i_unregisterPageLayout:(id)arg0 ;
-(void)invalidateAllPageLayoutsSizeAndPosition;
-(void)layoutManager:(id)arg0 didClearDirtyRangeWithDelta:(NSInteger)arg1 afterCharIndex:(NSUInteger)arg2 ;
-(void)layoutManagerNeedsLayout:(id)arg0 ;
-(void)p_advanceSectionIndex;
-(void)p_checkForBackUp;
-(void)p_destroyBodyLayoutState;
-(void)p_forceRestartPaginationAndResetMetricsCache:(BOOL)arg0 ;
-(void)p_hasBodyChanged:(id)arg0 ;
-(void)p_interruptBackgroundPagination;
-(void)p_invalidatePageIndex:(NSUInteger)arg0 ;
-(void)p_invalidateThumbnailForPageIndex:(NSUInteger)arg0 ;
-(void)p_invalidateThumbnailsFromSectionIndexToEnd:(NSUInteger)arg0 ;
-(void)p_invalidateThumbnailsFromSectionToEnd:(id)arg0 ;
-(void)p_layOutFootnotesIntoPageLayout:(id)arg0 ;
-(void)p_layOutIntoPageLayout:(id)arg0 outDidSync:(*BOOL)arg1 ;
-(void)p_layOutNextPageForLayoutController:(id)arg0 dirtyRange:(id)arg1 ;
-(void)p_layOutTextIntoPageLayout:(id)arg0 didSync:(*BOOL)arg1 initialFootnoteIndex:(*NSUInteger)arg2 ;
-(void)p_notifyObserversDidLayoutWhileSyncing:(BOOL)arg0 ;
-(void)p_paginateThroughPageIndex:(NSUInteger)arg0 forLayoutController:(id)arg1 clearOffscreenInfos:(BOOL)arg2 ;
-(void)p_performPaginationResetAndMetricsReset:(BOOL)arg0 ;
-(void)p_performWithCachedPageLayouts:(id)arg0 ;
-(void)p_preparePageHintForNextPage;
-(void)p_preparePaginationStateForNextPage;
-(void)p_prepareSectionHintForNextPage;
-(void)p_processBodyLayoutInvalidation;
-(void)p_processWidowsAndInflationForLayoutController:(id)arg0 ;
-(void)p_rebuildPageLayoutsContainingDrawableUUIDs:(id)arg0 ;
-(void)p_removeDeletedFootnotesOnPageLayout:(id)arg0 ;
-(void)p_removeFinishedPageGenerators;
-(void)p_resetPageGenerators;
-(void)p_setNeedsLayoutFromSectionIndexToEnd:(NSUInteger)arg0 ;
-(void)p_setNeedsLayoutOnPageIndex:(NSUInteger)arg0 ;
-(void)p_syncFromNextPageWithDirtyRanges:(id)arg0 pageTextRange:(struct _NSRange *)arg1 ;
-(void)p_updateNonTextHintAtPageIndexPath:(id)arg0 pageLayout:(id)arg1 ;
-(void)p_updatePageCount;
-(void)p_updateTextHintAtPageIndexPath:(id)arg0 withTarget:(id)arg1 ;
-(void)p_withPageLayoutAtIndex:(NSUInteger)arg0 preferredLayoutController:(id)arg1 executeBlock:(id)arg2 ;
-(void)paginateThroughPageIndex:(NSUInteger)arg0 ;
-(void)paginateThroughPageIndex:(NSUInteger)arg0 forLayoutController:(id)arg1 ;
-(void)performBlockForExport:(id)arg0 ;
-(void)preprocessChanges:(id)arg0 forChangeSource:(id)arg1 ;
-(void)removePaginationObserver:(id)arg0 ;
-(void)restoreFromLayoutState:(id)arg0 ;
-(void)saveIntoLayoutState:(id)arg0 ;
-(void)teardown;
-(void)withPageLayoutAtIndex:(NSUInteger)arg0 executeBlock:(id)arg1 ;
-(void)withPageLayoutAtIndex:(NSUInteger)arg0 preferredLayoutController:(id)arg1 executeBlock:(id)arg2 ;


@end


#endif