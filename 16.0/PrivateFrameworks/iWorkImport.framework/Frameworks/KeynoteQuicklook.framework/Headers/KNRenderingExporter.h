// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNRENDERINGEXPORTER_H
#define KNRENDERINGEXPORTER_H

@class TSARenderingExporter, NSMutableArray, NSString, NSOrderedSet, NSArray;
@protocol TSDCanvasDelegate, TSDCanvasProxyDelegate;


#import "KNPdfHyperlinkController.h"
#import "KNSlideNode.h"
#import "KNOffscreenController.h"

@interface KNRenderingExporter : TSARenderingExporter <TSDCanvasDelegate>

 {
    NSMutableArray *_currentSlidesOnPage;
    KNPdfHyperlinkController *_hyperlinkController;
    NSUInteger _currentPage;
    BOOL _hasObjectComments;
    NSUInteger _rangeStart;
    NSUInteger _rangeEnd;
    NSUInteger _maxRangeValue;
}


@property (readonly, nonatomic) NSObject<TSDCanvasProxyDelegate> *canvasProxyDelegate;
@property (readonly, nonatomic) NSUInteger currentBuildIndex; // ivar: _currentBuildIndex
@property (retain, nonatomic) KNSlideNode *currentSlideNode; // ivar: _currentSlideNode
@property (readonly, nonatomic) NSUInteger currentSlideNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat heightOfPrintedText;
@property (readonly, nonatomic) BOOL isPrintingCommentsSidebar; // ivar: _isPrintingCommentsSidebar
@property (retain, nonatomic) KNOffscreenController *offscreenController; // ivar: _offscreenController
@property (nonatomic) CGFloat pageMargin; // ivar: _pageMargin
@property (nonatomic) NSInteger printLayout; // ivar: _printLayout
@property (retain, nonatomic) NSString *printTitle; // ivar: _printTitle
@property (nonatomic) id *printView; // ivar: _printView
@property (nonatomic, getter=isPrintingBackgrounds) BOOL printingBackgrounds; // ivar: _printingBackgrounds
@property (nonatomic, getter=isPrintingBorders) BOOL printingBorders; // ivar: _printingBorders
@property (nonatomic, getter=isPrintingBuilds) BOOL printingBuilds; // ivar: _printingBuilds
@property (nonatomic, getter=isPrintingComments) BOOL printingComments; // ivar: _printingComments
@property (nonatomic, getter=isPrintingDate) BOOL printingDate; // ivar: _printingDate
@property (readonly, nonatomic, getter=isPrintingDraftQuality) BOOL printingDraftQuality; // ivar: _printingDraftQuality
@property (nonatomic, getter=isPrintingNotes) BOOL printingNotes; // ivar: _printingNotes
@property (nonatomic, getter=isPrintingPageMargins) BOOL printingPageMargins; // ivar: _printingPageMargins
@property (nonatomic, getter=isPrintingRuledLines) BOOL printingRuledLines; // ivar: _printingRuledLines
@property (nonatomic, getter=isPrintingSelectedSlides) BOOL printingSelectedSlides; // ivar: _printingSelectedSlides
@property (nonatomic, getter=isPrintingSkippedSlides) BOOL printingSkippedSlides; // ivar: _printingSkippedSlides
@property (readonly, nonatomic, getter=isPrintingSlideBackgroundsWithAlpha) BOOL printingSlideBackgroundsWithAlpha; // ivar: _printingSlideBackgroundsWithAlpha
@property (nonatomic, getter=isPrintingSlideNumbers) BOOL printingSlideNumbers; // ivar: _printingSlideNumbers
@property (readonly, nonatomic) NSUInteger rangeEnd;
@property (readonly, nonatomic) NSUInteger rangeStart;
@property (copy, nonatomic) NSOrderedSet *selectedSlideNodes; // ivar: _selectedSlideNodes
@property (readonly, nonatomic) NSArray *slidesForPrinting;
@property (nonatomic) NSUInteger slidesPerPage; // ivar: _slidesPerPage
@property (readonly, nonatomic) CGFloat spaceForBottomText;
@property (readonly) Class superclass;
@property (nonatomic) CGRect unscaledClipRectForPageCount; // ivar: _unscaledClipRectForPageCount
@property (readonly, nonatomic) BOOL usesViewForDrawing;
@property (readonly, nonatomic) BOOL verticalTextAllowed;
@property (nonatomic) CGFloat viewScaleForPageCount; // ivar: _viewScaleForPageCount


-(BOOL)drawImageForSlideNode:(id)arg0 event:(NSUInteger)arg1 slideSize:(struct CGSize )arg2 intoRect:(struct CGRect )arg3 annotationFlagsScale:(CGFloat)arg4 context:(struct CGContext *)arg5 createPage:(BOOL)arg6 ;
-(BOOL)exportToURL:(id)arg0 delegate:(id)arg1 error:(*id)arg2 ;
-(BOOL)exportToURL:(id)arg0 pageNumber:(NSUInteger)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(BOOL)incrementPage;
-(BOOL)isCanvasDrawingIntoPDF:(id)arg0 ;
-(BOOL)isPrintingCanvas;
-(BOOL)preparePage:(NSUInteger)arg0 ;
-(BOOL)shouldShowCommentsForCanvas:(id)arg0 ;
-(BOOL)shouldShowTextCommentHighlightsForCanvas:(id)arg0 ;
-(BOOL)shouldSuppressBackgrounds;
-(BOOL)supportsPrintingComments;
-(CGFloat)progressForCurrentPage;
-(NSInteger)pageIndexFromQuickLookSlideNode:(id)arg0 ;
-(NSUInteger)maximumRangeValue;
-(NSUInteger)p_slideNumberForSlideNode:(id)arg0 ;
-(NSUInteger)pageCount;
-(id)currentInfos;
-(id)documentRoot;
-(id)initWithDocumentRoot:(id)arg0 ;
-(id)p_slideNumberStringForSlideNode:(id)arg0 buildIndex:(NSUInteger)arg1 ;
-(id)p_sourceNodes;
-(id)quickLookSlideNodes;
-(struct CGRect )boundsRect;
-(void)addAnchorPointForSlide:(id)arg0 context:(struct CGContext *)arg1 ;
-(void)drawBorderForRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;
-(void)drawDateForRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;
-(void)drawInView:(id)arg0 rect:(struct CGRect )arg1 ;
-(void)drawNSStringDateForRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 ;
-(void)drawSlideNumberForNode:(id)arg0 buildIndex:(NSUInteger)arg1 forRect:(struct CGRect )arg2 context:(struct CGContext *)arg3 position:(NSInteger)arg4 ;
-(void)enableRenderAllContent;
-(void)setOptions:(id)arg0 ;
-(void)setSlideRangeEnd:(NSUInteger)arg0 ;
-(void)setSlideRangeStart:(NSUInteger)arg0 ;
-(void)setup;
-(void)teardown;


@end


#endif