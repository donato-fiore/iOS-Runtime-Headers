// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKWEBVIEWPRINTFORMATTER_H
#define _WKWEBVIEWPRINTFORMATTER_H

@class UIViewPrintFormatter;


#import "_WKFrameHandle.h"

@interface _WKWebViewPrintFormatter : UIViewPrintFormatter {
    RetainPtr<_WKFrameHandle> _frameToPrint;
    BOOL _suppressPageCountRecalc;
    Lock _printLock;
    Condition _printCompletionCondition;
    RetainPtr<CGPDFDocument *> _printedDocument;
}


@property (retain, nonatomic) _WKFrameHandle *frameToPrint;
@property (nonatomic) BOOL snapshotFirstPage; // ivar: _snapshotFirstPage


-(BOOL)requiresMainThread;
-(NSInteger)_recalcPageCount;
-(id)_webView;
-(struct CGPDFDocument *)_printedDocument;
-(struct CGRect )rectForPageAtIndex:(NSInteger)arg0 ;
-(void)_setNeedsRecalc;
-(void)_setPrintedDocument:(struct CGPDFDocument *)arg0 ;
-(void)_setSnapshotPaperRect:(struct CGRect )arg0 ;
-(void)_waitForPrintedDocument;
-(void)drawInRect:(struct CGRect )arg0 forPageAtIndex:(NSInteger)arg1 ;


@end


#endif