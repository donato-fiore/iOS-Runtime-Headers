// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFPAGEVIEWCONTROLLERPRIVATE_H
#define PDFPAGEVIEWCONTROLLERPRIVATE_H

@class UIScrollView, UIImage;

#import <Foundation/Foundation.h>

#import "PDFRenderingProperties.h"
#import "PDFView.h"
#import "PDFPage.h"
#import "PDFTextInputView.h"
#import "PDFPageView.h"

@interface PDFPageViewControllerPrivate : NSObject {
    PDFRenderingProperties *renderingProperties;
    PDFView *pdfView;
    UIEdgeInsets pageMargins;
    PDFPage *page;
    UIScrollView *scrollView;
    PDFTextInputView *pageViewContainerView;
    PDFPageView *pageView;
    CGFloat minScale;
    CGFloat maxScale;
    UIImage *backgroundImage;
    int backgroundQuality;
}






@end


#endif