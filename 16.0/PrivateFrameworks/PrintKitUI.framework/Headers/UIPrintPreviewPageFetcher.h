// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTPREVIEWPAGEFETCHER_H
#define UIPRINTPREVIEWPAGEFETCHER_H

@class NSOperationQueue, NSMutableArray, NSMutableDictionary, NSArray, NSURL;

#import <Foundation/Foundation.h>

#import "UIPrintPreviewInfo.h"

@interface UIPrintPreviewPageFetcher : NSObject {
    *CGPDFDocument _pdfDocRef;
    NSOperationQueue *_pageRendererQueue;
}


@property (retain) NSMutableArray *catchedInRangeIndexes; // ivar: _catchedInRangeIndexes
@property (retain) NSMutableDictionary *catchedSheetImages; // ivar: _catchedSheetImages
@property NSInteger catchedSheetNumber; // ivar: _catchedSheetNumber
@property NSInteger catchedTotalPageCount; // ivar: _catchedTotalPageCount
@property NSInteger catchedTotalSheetCount; // ivar: _catchedTotalSheetCount
@property CGFloat minPageWith; // ivar: _minPageWith
@property NSInteger numNUpColumns; // ivar: _numNUpColumns
@property NSInteger numNUpRows; // ivar: _numNUpRows
@property CGSize pageItemSize; // ivar: _pageItemSize
@property CGSize pageSize; // ivar: _pageSize
@property (retain) NSArray *pageSizes; // ivar: _pageSizes
@property CGSize paperSize; // ivar: _paperSize
@property (retain) NSURL *pdfURL; // ivar: _pdfURL
@property (retain) UIPrintPreviewInfo *previewInfo; // ivar: _previewInfo
@property CGSize previewSize; // ivar: _previewSize
@property (retain) NSURL *quickLookPDFURL; // ivar: _quickLookPDFURL
@property BOOL showingPageLayout; // ivar: _showingPageLayout


-(BOOL)_mirrorHorizontal:(id)arg0 ;
-(BOOL)_pageIndexIsInRange:(NSInteger)arg0 printInfo:(id)arg1 ;
-(BOOL)_reversePageOrientation:(id)arg0 ;
-(BOOL)needDrawPageWithLayout;
-(CGFloat)_paperAspectRatio;
-(CGFloat)caculateFooterWidth:(CGFloat)arg0 ;
-(CGFloat)caculateHeaderWidth:(CGFloat)arg0 ;
-(NSInteger)_caculateSheetNumber:(id)arg0 ;
-(NSInteger)_pageOffsetForRow:(NSInteger)arg0 column:(NSInteger)arg1 printInfo:(id)arg2 ;
-(NSInteger)fetchNumberOfItems;
-(NSInteger)sheetIndexToPrintForItemAt:(NSInteger)arg0 ;
-(id)_drawPageContextIntoImage:(NSInteger)arg0 printInfo:(id)arg1 ;
-(id)_drawPageWithLayoutIntoImage:(NSInteger)arg0 printInfo:(id)arg1 ;
-(id)cachedSheetImageForItemAt:(NSInteger)arg0 ;
-(id)init;
-(id)quicklookPageThumbnailAtIndex:(NSInteger)arg0 ;
-(struct CGSize )_pagesLayout:(id)arg0 ;
-(struct CGSize )_paperSize:(id)arg0 ;
-(struct CGSize )imageSizeAtPageIndex:(NSInteger)arg0 ;
-(struct CGSize )itemSizeAtPageIndex:(NSInteger)arg0 flowlayout:(id)arg1 ;
-(struct CGSize )pageSizeAtPageIndex:(NSInteger)arg0 flowlayout:(id)arg1 ;
-(struct CGSize )sheetSizeAtPageIndex:(NSInteger)arg0 flowlayout:(id)arg1 ;
-(void)_drawBorderOfType:(NSInteger)arg0 withScaleFactor:(CGFloat)arg1 context:(struct CGContext *)arg2 pageRect:(struct CGRect )arg3 ;
-(void)_removeQuickLookPDFURL;
-(void)_resetPageNUp:(id)arg0 ;
-(void)_resetPagesIndexsInRange;
-(void)dealloc;
-(void)fetchImageInBackground:(NSInteger)arg0 completion:(id)arg1 ;
-(void)redrawQuicklookPDF:(id)arg0 ;
-(void)resetAllPageImages;
-(void)resetAllPages:(id)arg0 ;
-(void)updatePdfURL:(id)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif