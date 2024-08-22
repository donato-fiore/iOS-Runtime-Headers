// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TNPAGECONTROLLER_H
#define TNPAGECONTROLLER_H

@class NSMapTable, NSArray, TSUPointerKeyDictionary;
@protocol TNAnnotationPrintingHelperDataSource, TNPageControllerDelegate, TNPrintableInfoProviding;

#import <Foundation/Foundation.h>

#import "TNAnnotationPrintingHelper.h"
#import "TNDocumentRoot.h"
#import "TNPageCoordinateDictionary.h"
#import "TNPrintProperties.h"
#import "TNSheet.h"

@interface TNPageController : NSObject <TNAnnotationPrintingHelperDataSource>



@property (readonly, nonatomic) NSMapTable *addendumContentCache; // ivar: _addendumContentCache
@property (readonly, nonatomic) NSArray *additionalContentProviders;
@property (readonly, nonatomic) TNAnnotationPrintingHelper *annotationPrintingHelper; // ivar: _annotationPrintingHelper
@property (nonatomic) NSInteger cachedPageCountDuringDynamicContentScaleChange; // ivar: _cachedPageCountDuringDynamicContentScaleChange
@property (nonatomic) BOOL computingPageCounts; // ivar: _computingPageCounts
@property (readonly, nonatomic) CGRect contentFrame;
@property (readonly, nonatomic) CGFloat contentScale;
@property (weak, nonatomic) NSObject<TNPageControllerDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) TNDocumentRoot *documentRoot; // ivar: _documentRoot
@property (retain, nonatomic) TNPageCoordinateDictionary *footerLayerCache; // ivar: _footerLayerCache
@property (nonatomic) CGFloat footerTextHeight; // ivar: _footerTextHeight
@property (retain, nonatomic) TNPageCoordinateDictionary *headerLayerCache; // ivar: _headerLayerCache
@property (nonatomic) CGFloat headerTextHeight; // ivar: _headerTextHeight
@property (retain, nonatomic) TSUPointerKeyDictionary *hintCacheDictionary; // ivar: _hintCacheDictionary
@property (readonly, nonatomic) BOOL inDynamicContentScaleChange; // ivar: _inDynamicContentScaleChange
@property (weak, nonatomic) NSObject<TNPrintableInfoProviding> *infoProvider; // ivar: _infoProvider
@property (retain, nonatomic) TSUPointerKeyDictionary *infoProviderPageCountCache; // ivar: _infoProviderPageCountCache
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (nonatomic) TSUCellCoord maxPageCoordinate; // ivar: _maxPageCoordinate
@property (nonatomic) BOOL maxPageCoordinateValid; // ivar: _maxPageCoordinateValid
@property (readonly, nonatomic) NSUInteger numPages;
@property (nonatomic) BOOL pageCountsValid; // ivar: _pageCountsValid
@property (retain, nonatomic) TNPageCoordinateDictionary *pageLayoutCache; // ivar: _pageLayoutCache
@property (readonly, nonatomic) CGSize pageSize;
@property (readonly, nonatomic, getter=isPortrait) BOOL portrait;
@property (nonatomic) BOOL postAdditionalContentChangedNotificationAfterProcessingChanges; // ivar: _postAdditionalContentChangedNotificationAfterProcessingChanges
@property (nonatomic) BOOL postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges; // ivar: _postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges
@property (retain, nonatomic) TNPrintProperties *printProperties; // ivar: _printProperties
@property (nonatomic) NSInteger priorPageCount; // ivar: _priorPageCount
@property (nonatomic, getter=isProcessingChanges) BOOL processingChanges; // ivar: _processingChanges
@property (readonly, nonatomic) TNSheet *sheet;
@property (nonatomic) NSInteger subsequentPageCount; // ivar: _subsequentPageCount
@property (nonatomic) BOOL updateViewScaleForDrawablesChangeAfterProcessingChanges; // ivar: _updateViewScaleForDrawablesChangeAfterProcessingChanges
@property (nonatomic) CGFloat userViewScale; // ivar: _userViewScale


+(CGFloat)autoFitContentScaleForInfoProvider:(id)arg0 ;
+(CGFloat)p_unclampedAutoFitContentScaleForInfoProvider:(id)arg0 ;
+(id)cachedAutoFitContentScaleDictionary;
-(BOOL)_hasAddendumContent;
-(BOOL)_isPageAddendumAtPageCoordinate:(struct TSUCellCoord )arg0 ;
-(BOOL)_isPageAddendumAtPageIndex:(NSUInteger)arg0 ;
-(BOOL)_shouldPrintComments;
-(BOOL)isPagePlaceholderAtPageCoordinate:(struct TSUCellCoord )arg0 ;
-(BOOL)p_headersOrFootersContainPageNumberRelatedAttachments;
-(BOOL)shouldPrintCommentsOfAnnotationPrintingHelper:(id)arg0 ;
-(BOOL)shouldSuppressBackgroundsForPageIndex:(NSUInteger)arg0 ;
-(CGFloat)contentScaleOfAnnotationPrintingHelper:(id)arg0 ;
-(CGFloat)printViewDefaultUserViewScale;
-(CGFloat)userViewScaleForCanvasViewScale:(CGFloat)arg0 ;
-(NSInteger)p_pageCountForInfoProvider:(id)arg0 ;
-(NSInteger)p_updateCachedPageCountForCurrentInfoProvider;
-(NSUInteger)_pageIndexForPageCoordinate:(struct TSUCellCoord )arg0 ;
-(NSUInteger)pageCount;
-(NSUInteger)pageNumberForPageCoordinate:(struct TSUCellCoord )arg0 ;
-(id)_createPageLayoutForCoordinate:(struct TSUCellCoord )arg0 ;
-(id)_layoutsForPageIndex:(NSUInteger)arg0 ;
-(id)_printableInfos;
-(id)addendumPageTitleOfAnnotationPrintingHelper:(id)arg0 ;
-(id)additionalContentProviderAtPageIndex:(NSUInteger)arg0 outPageIndexInProvider:(*NSUInteger)arg1 ;
-(id)annotationPrintingHelper:(id)arg0 layoutsForPageIndex:(NSUInteger)arg1 ;
-(id)i_childLayersAtAddendumPageCoordinate:(struct TSUCellCoord )arg0 ;
-(id)i_layerForHeaderType:(NSInteger)arg0 fragment:(NSInteger)arg1 atPageCoordinate:(struct TSUCellCoord )arg2 ;
-(id)initWithDocumentRoot:(id)arg0 ;
-(id)p_hintCacheForInfo:(id)arg0 ;
-(id)p_layoutForInfo:(id)arg0 atCoordinate:(struct TSUCellCoord )arg1 parentLayout:(id)arg2 ;
-(id)p_pageInfoForPageAtIndex:(NSUInteger)arg0 ;
-(id)p_pageLayoutAtCoordinate:(struct TSUCellCoord )arg0 ;
-(id)p_pageLayoutAtCoordinate:(struct TSUCellCoord )arg0 shouldCachePageLayout:(BOOL)arg1 ;
-(id)pageInfoForPageIndex:(NSUInteger)arg0 ;
-(id)pageLayoutGeometryForPageCoordinate:(struct TSUCellCoord )arg0 ;
-(id)pageLayoutGeometryForPrintingAtPageCoordinate:(struct TSUCellCoord )arg0 ;
-(struct ? )pageRangeForContent;
-(struct ? )pageRangeForContentAndAddendaWithUpperBound:(struct TSUCellCoord )arg0 ;
-(struct ? )pageRangeForContentWithUpperBound:(struct TSUCellCoord )arg0 ;
-(struct ? )pageRangeForInfo:(id)arg0 upperBound:(struct TSUCellCoord )arg1 ;
-(struct ? )pageRangeForPageIndex:(NSUInteger)arg0 ;
-(struct ? )pageRangeWithPlaceholdersWithUpperBound:(struct TSUCellCoord )arg0 ;
-(struct CGAffineTransform )annotationPrintingHelper:(id)arg0 inversePureTransformInRootForContentAtPageIndex:(NSUInteger)arg1 ;
-(struct CGRect )availableRectForAddendumContentOfAnnotationPrintingHelper:(id)arg0 ;
-(struct CGRect )firstPartitionFrameForInfo:(id)arg0 outStartPageCoordinate:(struct TSUCellCoord *)arg1 ;
-(struct CGRect )printingLayoutRectForPageIndex:(NSUInteger)arg0 ;
-(struct CGRect )rectForAddendumContentOfAnnotationPrintingHelper:(id)arg0 ;
-(struct CGRect )rectForFlagContentOfAnnotationPrintingHelper:(id)arg0 ;
-(struct CGSize )contentSizeForCanvasLayer;
-(struct TSUCellCoord )_pageCoordinateWithPageSize:(struct CGSize )arg0 forPoint:(struct CGPoint )arg1 ;
-(struct TSUCellCoord )p_pageCoordinateForPageLayoutAtDevicePoint:(struct CGPoint )arg0 ;
-(struct TSUCellCoord )pageCoordinateForDrawableAtUnscaledPoint:(struct CGPoint )arg0 ;
-(struct TSUCellCoord )pageCoordinateForMaxVisiblePage;
-(struct TSUCellCoord )pageCoordinateForPageIndex:(NSUInteger)arg0 ;
-(struct TSUCellCoord )pageCoordinateForPageLayoutAtUnscaledPoint:(struct CGPoint )arg0 ;
-(void)_measureHeadersAndFootersIfNecessary;
-(void)_postAdditionalContentChangedNotification;
-(void)_updateCanvasViewScale;
-(void)annotationPrintingHelper:(id)arg0 enumerateLayoutsByPageWithBlock:(id)arg1 ;
-(void)canvasViewScaleDidChange:(CGFloat)arg0 ;
-(void)dealloc;
-(void)didEnterPrintPreview;
-(void)didExitPrintPreview;
-(void)drawAdditionalContentForPageIndex:(NSUInteger)arg0 inContext:(struct CGContext *)arg1 ;
-(void)enumerateAnnotationPagesWithBlock:(id)arg0 ;
-(void)enumerateLayoutsByPageWithBlock:(id)arg0 ;
-(void)i_addChildLayer:(id)arg0 atAddendumPageCoordinate:(struct TSUCellCoord )arg1 ;
-(void)i_invalidateForHeaderChange;
-(void)i_invalidateHintCache;
-(void)i_invalidatePageLayoutCache;
-(void)i_setLayer:(id)arg0 forHeaderType:(NSInteger)arg1 fragment:(NSInteger)arg2 atPageCoordinate:(struct TSUCellCoord )arg3 ;
-(void)invalidateCachedAutoFitContentScaleForInfoProvider:(id)arg0 ;
-(void)invalidateDrawableLayouts;
-(void)invalidatePageLayout;
-(void)invalidatePageLayoutGeometries;
-(void)layoutInPageRange:(struct ? )arg0 forLayoutController:(id)arg1 ;
-(void)layoutPrintableInfosIntoPageLayout:(id)arg0 atPageCoordinate:(struct TSUCellCoord )arg1 ;
-(void)p_clearHintCache;
-(void)p_computePriorPageCountForCurrentSheet;
-(void)p_computeSubsequentPageCountForCurrentSheet;
-(void)p_didEndDynamicContentScaleChange:(id)arg0 ;
-(void)p_invalidateCachedAutoFitContentScaleForInfoProvider:(id)arg0 notify:(BOOL)arg1 ;
-(void)p_invalidatePageCounts;
-(void)p_layoutInfo:(id)arg0 intoPageLayout:(id)arg1 atPageCoordinate:(struct TSUCellCoord )arg2 ;
-(void)p_measureHeadersAndFooters;
-(void)p_postAutoFitContentScaleDidChangeNotification;
-(void)p_updateVisiblePageRange:(struct ? )arg0 forLayoutController:(id)arg1 ;
-(void)p_willBeginDynamicContentScaleChange:(id)arg0 ;
-(void)registerPageLayout:(id)arg0 atPageCoordinate:(struct TSUCellCoord )arg1 ;
-(void)removeLayoutsFromPages;
-(void)updateContentScale;
-(void)updatePrintMargins;
-(void)updateUserViewScale;
-(void)updateViewScale;


@end


#endif