// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPRENDERINGEXPORTER_H
#define TPRENDERINGEXPORTER_H

@class TSARenderingExporter, NSMutableArray;


#import "TPPdfHyperlinkController.h"
#import "TPPaginatedPageController.h"

@interface TPRenderingExporter : TSARenderingExporter

@property (nonatomic) BOOL didLimitPageLayout; // ivar: _didLimitPageLayout
@property (retain, nonatomic) TPPdfHyperlinkController *hyperlinkController; // ivar: _hyperlinkController
@property (nonatomic) BOOL includeBackgrounds; // ivar: _includeBackgrounds
@property (nonatomic) BOOL includeComments; // ivar: _includeComments
@property (nonatomic) BOOL includePencilAnnotations; // ivar: _includePencilAnnotations
@property (nonatomic) NSUInteger internalPageCount; // ivar: _internalPageCount
@property (nonatomic) NSInteger lastPageIndexForLayout; // ivar: _lastPageIndexForLayout
@property (retain, nonatomic) NSMutableArray *outputPageList; // ivar: _outputPageList
@property (retain, nonatomic) TPPaginatedPageController *pageController; // ivar: _pageController
@property (nonatomic) NSUInteger pageIndex; // ivar: _pageIndex
@property (nonatomic) BOOL tornDown; // ivar: _tornDown


-(BOOL)drawCurrentPageInContext:(struct CGContext *)arg0 viewScale:(CGFloat)arg1 unscaledClipRect:(struct CGRect )arg2 createPage:(BOOL)arg3 ;
-(BOOL)incrementPage;
-(BOOL)preparePage:(NSUInteger)arg0 ;
-(BOOL)shouldSuppressBackgroundsForCurrentPage;
-(CGFloat)progressForCurrentPage;
-(CGFloat)totalProgess;
-(NSUInteger)pageCount;
-(id)currentInfos;
-(id)initWithDocumentRoot:(id)arg0 ;
-(struct CGRect )boundsRect;
-(struct CGRect )unscaledClipRect;
-(void)p_addHyperLinksInContext:(struct CGContext *)arg0 forCanvas:(id)arg1 ;
-(void)setup;
-(void)setupPencilAnnotationsAndHyperlinks;
-(void)teardown;


@end


#endif