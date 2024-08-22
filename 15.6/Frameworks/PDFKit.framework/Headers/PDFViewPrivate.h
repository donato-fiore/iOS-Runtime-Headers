// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFVIEWPRIVATE_H
#define PDFVIEWPRIVATE_H

@class NSMutableArray, NSArray, UILongPressGestureRecognizer, UITapGestureRecognizer, NSDictionary, UIDragInteraction;
@protocol PDFViewDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PDFDocument.h"
#import "PDFScrollView.h"
#import "PDFViewController.h"
#import "PDFSelection.h"
#import "PDFViewLayout.h"
#import "PDFRenderingProperties.h"
#import "PDFPage.h"
#import "PDFTimer.h"
#import "PDFCoachMarkManager.h"
#import "PDFPasswordViewController.h"
#import "PDFAnnotation.h"
#import "PDFAKOverlayAdaptor.h"
#import "PDFDocumentViewController.h"

@interface PDFViewPrivate : NSObject {
    PDFDocument *document;
    PDFScrollView *scrollView;
    PDFViewController *controller;
    PDFSelection *currentSelection;
    BOOL autoScale;
    BOOL scaling;
    CGFloat zoomIncrement;
    id<PDFViewDelegate> *delegate;
    BOOL delegateWillScale;
    BOOL delegateOrdersPageDrawing;
    CGFloat gutterWide;
    BOOL displaysPageBreaks;
    UIEdgeInsets pageBreakMargins;
    UIEdgeInsets documentMargins;
    NSInteger displayMode;
    NSInteger displayDirection;
    PDFViewLayout *viewLayout;
    BOOL displaysAsBook;
    BOOL displaysRTL;
    PDFRenderingProperties *renderingProperties;
    NSUInteger lastVerticalScrollDirection;
    NSUInteger lastHorizontalScrollDirection;
    BOOL displaysBookmarksForPages;
    NSUInteger currentPageIndex;
    NSUInteger firstVisiblePage;
    NSUInteger lastVisiblePage;
    BOOL inhibitAutoScroll;
    PDFPage *fromPage;
    PDFPage *toPage;
    PDFTimer *pageSyncTimer;
    NSObject<OS_dispatch_queue> *pagePreloadQueue;
    NSMutableArray *destinationHistory;
    NSInteger historyIndex;
    NSArray *highlights;
    PDFCoachMarkManager *coachMarkManager;
    PDFPasswordViewController *passwordViewController;
    PDFAnnotation *currentTextWidget;
    PDFAKOverlayAdaptor *akOverlayAdaptor;
    BOOL showsScrollIndicators;
    BOOL dataDetectorsEnabled;
    BOOL debugDrawCGPDFNodeLayer;
    BOOL wantsForceUpdate;
    CGFloat blockingWaitDuration;
    NSUInteger activeMarkupStyle;
    CGRect lastBounds;
    UILongPressGestureRecognizer *longPressGestureRecognizer;
    UITapGestureRecognizer *tapGestureRecognizer;
    UITapGestureRecognizer *doubleTapGestureRecognizer;
    BOOL isUsingPageViewController;
    PDFDocumentViewController *documentViewController;
    NSDictionary *pageViewControllerOptions;
    UIDragInteraction *dragInteraction;
    UIEdgeInsets savedSafeAreaInsets;
    CGFloat horizontalScaleFactorBeforeRotation;
    CGPoint documentViewCenterBeforeRotation;
    CGRect extensionViewBoundsInDocument;
    CGRect extensionViewFrame;
    CGFloat extensionViewZoomScale;
    PDFTimer *tilesSyncTimer;
}






@end


#endif