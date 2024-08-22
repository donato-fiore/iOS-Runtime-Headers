// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFVIEWLAYOUTPRIVATE_H
#define PDFVIEWLAYOUTPRIVATE_H

@class NSLock;

#import <Foundation/Foundation.h>

#import "PDFDocument.h"

@interface PDFViewLayoutPrivate : NSObject {
    id *delegate;
    BOOL delegateKnowsMargins;
    BOOL delegateKnowsDisplayMode;
    BOOL delegateKnowsDisplayAsBook;
    BOOL delegateKnowsDisplayBox;
    BOOL delegateKnowsDisplayRTL;
    BOOL delegateKnowsDisplaysDirection;
    BOOL delegateKnowsDocumentMargins;
    BOOL delegateKnowsIsUsingPageViewController;
    PDFDocument *document;
    NSUInteger pageCount;
    NSLock *pageLayoutLock;
    *CGRect pageLayoutBounds;
    CGSize singlePageContinuousSize;
    CGSize twoUpContinousSize;
    NSInteger cachedContinuousSizeDisplayDirection;
}






@end


#endif