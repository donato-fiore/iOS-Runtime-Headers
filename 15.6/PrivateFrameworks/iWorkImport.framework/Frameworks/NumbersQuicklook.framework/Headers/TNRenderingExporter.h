// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TNRENDERINGEXPORTER_H
#define TNRENDERINGEXPORTER_H

@class TSARenderingExporter, NSMapTable, NSMutableArray, NSArray;
@protocol TNAnnotationPrintingHelperDataSource;


#import "TNPageController.h"
#import "TNPdfHyperlinkController.h"
#import "TNAnnotationPrintingHelper.h"

@interface TNRenderingExporter : TSARenderingExporter <TNAnnotationPrintingHelperDataSource>

 {
    NSUInteger mSheetIndex;
    NSUInteger mPageIndex;
    NSMapTable *mPageCountCache;
    vector<unsigned long, std::allocator<unsigned long>> mSheetPageCountArray;
    vector<unsigned long, std::allocator<unsigned long>> mSheetPageStartArray;
    TNPageController *mPageController;
    TNPdfHyperlinkController *mHyperlinkController;
    NSMutableArray *mCanvasBasedSheets;
}


@property (readonly, nonatomic) NSArray *addendumContentProvidersForCurrentSheet; // ivar: _addendumContentProvidersForCurrentSheet
@property (nonatomic) NSUInteger addendumPageCount; // ivar: _addendumPageCount
@property (nonatomic) NSUInteger addendumPageIndex; // ivar: _addendumPageIndex
@property (readonly, nonatomic) TNAnnotationPrintingHelper *annotationPrintingHelper; // ivar: _annotationPrintingHelper
@property (nonatomic) NSUInteger exportState; // ivar: _exportState
@property (nonatomic) BOOL hasCompletedSetup; // ivar: _hasCompletedSetup
@property (retain, nonatomic) NSArray *overlayContentProvidersForCurrentSheet; // ivar: _overlayContentProvidersForCurrentSheet
@property (nonatomic, getter=isRenderingAllSheets) BOOL renderingAllSheets; // ivar: _renderingAllSheets
@property (nonatomic) NSUInteger renderingComments; // ivar: _renderingComments
@property (nonatomic) BOOL shouldGenerateTemporaryLayouts; // ivar: _shouldGenerateTemporaryLayouts


-(BOOL)drawCurrentPageInContext:(struct CGContext *)arg0 viewScale:(CGFloat)arg1 unscaledClipRect:(struct CGRect )arg2 createPage:(BOOL)arg3 ;
-(BOOL)exportToURL:(id)arg0 pageNumber:(NSUInteger)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(BOOL)incrementPage;
-(BOOL)isPageInPortraitOrientation:(NSUInteger)arg0 ;
-(BOOL)p_isActiveSheetForm;
-(BOOL)preparePage:(NSUInteger)arg0 ;
-(BOOL)shouldPrintComments;
-(BOOL)shouldPrintCommentsOfAnnotationPrintingHelper:(id)arg0 ;
-(BOOL)shouldSuppressBackgroundsForCurrentPage;
-(CGFloat)contentScaleOfAnnotationPrintingHelper:(id)arg0 ;
-(CGFloat)progressForCurrentPage;
-(CGFloat)totalProgess;
-(Class)imagerClass;
-(NSInteger)p_indexOfActiveSheet;
-(NSInteger)pageIndexFromQuickLookSheet:(id)arg0 ;
-(NSUInteger)inSheetPageIndexForPage:(NSUInteger)arg0 ;
-(NSUInteger)numberOfCanvasBasedSheets;
-(NSUInteger)pageCount;
-(NSUInteger)sheetIndexForPage:(NSUInteger)arg0 ;
-(id)_pageCountCache;
-(id)_printProperties;
-(id)_printableInfos;
-(id)addendumPageTitleOfAnnotationPrintingHelper:(id)arg0 ;
-(id)annotationPrintingHelper:(id)arg0 layoutsForPageIndex:(NSUInteger)arg1 ;
-(id)currentInfos;
-(id)initWithDocumentRoot:(id)arg0 ;
-(id)p_activeSheet;
-(id)p_canvasBasedSheets;
-(id)pageController;
-(id)quickLookSheets;
-(struct CGAffineTransform )annotationPrintingHelper:(id)arg0 inversePureTransformInRootForContentAtPageIndex:(NSUInteger)arg1 ;
-(struct CGRect )_unpaginatedBoundsRect;
-(struct CGRect )availableRectForAddendumContentOfAnnotationPrintingHelper:(id)arg0 ;
-(struct CGRect )boundsRect;
-(struct CGRect )p_boundsRectForFirstPage;
-(struct CGRect )rectForAddendumContentOfAnnotationPrintingHelper:(id)arg0 ;
-(struct CGRect )rectForFlagContentOfAnnotationPrintingHelper:(id)arg0 ;
-(struct CGRect )unscaledClipRect;
-(struct UIEdgeInsets )_printMargins;
-(struct vector<unsigned long, std::allocator<unsigned long>> )p_pageCountArray;
-(struct vector<unsigned long, std::allocator<unsigned long>> )p_pageStartArray;
-(void)_resetSheetDependentObjects;
-(void)_updateExportState;
-(void)annotationPrintingHelper:(id)arg0 enumerateLayoutsByPageWithBlock:(id)arg1 ;
-(void)dealloc;
-(void)drawCurrentPageWithContext:(struct CGContext *)arg0 returnSuccess:(*BOOL)arg1 ;
-(void)processHyperlinksForCanvas:(id)arg0 withContext:(struct CGContext *)arg1 andImager:(id)arg2 isFitToSheet:(BOOL)arg3 ;
-(void)setSheetIndex:(NSUInteger)arg0 andPageIndex:(NSUInteger)arg1 ;
-(void)setSheetIndex:(NSUInteger)arg0 pageIndex:(NSUInteger)arg1 addendumPageIndex:(NSUInteger)arg2 ;
-(void)setup;
-(void)teardown;


@end


#endif