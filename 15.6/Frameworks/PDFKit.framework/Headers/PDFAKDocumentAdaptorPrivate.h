// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFAKDOCUMENTADAPTORPRIVATE_H
#define PDFAKDOCUMENTADAPTORPRIVATE_H

@class AKController, AKToolbarView;
@protocol PDFAKControllerDelegateProtocol;

#import <Foundation/Foundation.h>

#import "PDFDocument.h"
#import "PDFView.h"

@interface PDFAKDocumentAdaptorPrivate : NSObject {
    BOOL isTornDown;
    PDFDocument *pdfDocument;
    PDFView *pdfView;
    AKController *akController;
    id<PDFAKControllerDelegateProtocol> *pdfAKControllerDelegate;
    AKToolbarView *akToolbarView;
    CGFloat modelBaseScaleFactor;
}






@end


#endif