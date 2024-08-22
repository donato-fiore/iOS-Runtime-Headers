// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITALLPDFPRINTFORMATTER_H
#define UITALLPDFPRINTFORMATTER_H

@class NSURL;


#import "UIPrintFormatter.h"

@interface UITallPDFPrintFormatter : UIPrintFormatter {
    NSURL *_pdfPath;
    *CGPDFDocument _pdfDocRef;
    CGFloat _pdfScaleFactor;
    BOOL _rotate90;
    CGFloat _shiftUpLength;
}




-(NSInteger)_recalcPageCount;
-(id)initWithPDFData:(id)arg0 ;
-(id)initWithPDFURL:(id)arg0 ;
-(void)drawInRect:(struct CGRect )arg0 forPageAtIndex:(NSInteger)arg1 ;


@end


#endif