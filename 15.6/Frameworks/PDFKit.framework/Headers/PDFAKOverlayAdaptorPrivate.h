// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFAKOVERLAYADAPTORPRIVATE_H
#define PDFAKOVERLAYADAPTORPRIVATE_H

@class NSMutableIndexSet;

#import <Foundation/Foundation.h>

#import "PDFView.h"
#import "PDFDocument.h"

@interface PDFAKOverlayAdaptorPrivate : NSObject {
    BOOL isTornDown;
    PDFView *pdfView;
    PDFDocument *pdfDocument;
    NSMutableIndexSet *observedPageIndices;
}






@end


#endif