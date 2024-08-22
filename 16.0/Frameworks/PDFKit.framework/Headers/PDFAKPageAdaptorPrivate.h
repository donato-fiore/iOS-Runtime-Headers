// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFAKPAGEADAPTORPRIVATE_H
#define PDFAKPAGEADAPTORPRIVATE_H

@class AKPageModelController;

#import <Foundation/Foundation.h>

#import "PDFPage.h"

@interface PDFAKPageAdaptorPrivate : NSObject {
    BOOL isTornDown;
    PDFPage *pdfPage;
    AKPageModelController *akPageModelController;
    BOOL isObservingPageModel;
    BOOL isSyncingFromPDFPage;
    BOOL isSyncingFromAKPageModel;
}






@end


#endif