// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFDOCUMENTVIEWCONTROLLERPRIVATE_H
#define PDFDOCUMENTVIEWCONTROLLERPRIVATE_H

@class NSHashTable, UIScrollView;

#import <Foundation/Foundation.h>

#import "PDFView.h"
#import "PDFRenderingProperties.h"
#import "PDFPageViewController.h"
#import "PDFPageBackgroundManager.h"

@interface PDFDocumentViewControllerPrivate : NSObject {
    PDFView *pdfView;
    PDFRenderingProperties *renderingProperties;
    PDFPageViewController *activePageView;
    PDFPageBackgroundManager *pageBackgroundManager;
    os_unfair_lock_s weakPageViewControllersLock;
    NSHashTable *weakPageViewControllers;
    CGFloat minScale;
    CGFloat maxScale;
    BOOL displaysRTL;
    UIScrollView *scrollView;
}






@end


#endif