// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKWEBVIEWPRINTFORMATTER_H
#define _WKWEBVIEWPRINTFORMATTER_H

@class UIViewPrintFormatter;


#import "_WKFrameHandle.h"

@interface _WKWebViewPrintFormatter : UIViewPrintFormatter {
    RetainPtr<_WKFrameHandle> _frameToPrint;
    RetainPtr<CGPDFDocument *> _printedDocument;
    BOOL _suppressPageCountRecalc;
}


@property (retain, nonatomic) _WKFrameHandle *frameToPrint;
@property (nonatomic) BOOL snapshotFirstPage; // ivar: _snapshotFirstPage


-(NSInteger)_recalcPageCount;
-(id)_webView;
-(struct CGRect )rectForPageAtIndex:(NSInteger)arg0 ;
-(void)_setNeedsRecalc;
-(void)_setSnapshotPaperRect:(struct CGRect )arg0 ;
-(void)drawInRect:(struct CGRect )arg0 forPageAtIndex:(NSInteger)arg1 ;


@end


#endif