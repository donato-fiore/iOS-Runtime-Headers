// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFSCROLLVIEWPRIVATE_H
#define PDFSCROLLVIEWPRIVATE_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "PDFView.h"
#import "PDFDocument.h"
#import "PDFDocumentView.h"
#import "PDFTimer.h"

@interface PDFScrollViewPrivate : NSObject {
    PDFView *pdfView;
    PDFDocument *document;
    PDFDocumentView *documentView;
    CGFloat oldMagnification;
    PDFTimer *boundsUpdateTimer;
    CGRect oldBounds;
    BOOL isZooming;
    BOOL scheduledPageSync;
    NSDate *pageSyncDate;
    BOOL forcesTopAlignment;
}






@end


#endif