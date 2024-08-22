// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFVIEWLAYOUT_H
#define PDFVIEWLAYOUT_H


#import <Foundation/Foundation.h>

#import "PDFViewLayoutPrivate.h"
#import "PDFDocument.h"

@interface PDFViewLayout : NSObject {
    PDFViewLayoutPrivate *_private;
}


@property (weak, nonatomic) id *delegate;
@property (weak, nonatomic) PDFDocument *document;


-(NSInteger)functionalDisplayMode;
-(id)facingPageForPage:(id)arg0 ;
-(id)init;
-(id)pageNearestPoint:(struct CGPoint )arg0 currentPage:(id)arg1 ;
-(id)visiblePagesInBounds:(struct CGRect )arg0 currentPage:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromPage:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromPage:(id)arg1 forScaleFactor:(CGFloat)arg2 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toPage:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toPage:(id)arg1 forScaleFactor:(CGFloat)arg2 ;
-(struct CGRect )boundsForPage:(id)arg0 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromPage:(id)arg1 forScaleFactor:(CGFloat)arg2 ;
-(struct CGRect )normalizedPageBounds:(id)arg0 ;
-(struct CGSize )contentSizeWithCurrentPage:(id)arg0 ;
-(struct _NSRange )visiblePageRangeInBounds:(struct CGRect )arg0 currentPage:(id)arg1 ;
-(void)dealloc;
-(void)generateInternalDocumentGeometry;
-(void)invalidateInternalDocumentGeometry;


@end


#endif