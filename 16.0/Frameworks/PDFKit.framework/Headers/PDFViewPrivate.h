// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFVIEWPRIVATE_H
#define PDFVIEWPRIVATE_H

@class NSMutableArray, NSArray, UILongPressGestureRecognizer, UITapGestureRecognizer, NSDictionary, UIDragInteraction, UIFindInteraction;
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
    BOOL delegateRespondsToAllowFormFilling;
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
    PDFAnnotation *annotationOver;
    BOOL showsScrollIndicators;
    BOOL dataDetectorsEnabled;
    BOOL debugDrawCGPDFNodeLayer;
    BOOL debugDrawCGPDFTextBoundingBoxesLayer;
    BOOL debugDrawCGPDFNodeBoundingBoxesLayer;
    BOOL wantsForceUpdate;
    CGFloat blockingWaitDuration;
    NSUInteger activeMarkupStyle;
    BOOL inFormFillingMode;
    UILongPressGestureRecognizer *longPressGestureRecognizer;
    UITapGestureRecognizer *tapGestureRecognizer;
    UITapGestureRecognizer *doubleTapGestureRecognizer;
    BOOL isUsingPageViewController;
    PDFDocumentViewController *documentViewController;
    NSDictionary *pageViewControllerOptions;
    UIDragInteraction *dragInteraction;
    UIFindInteraction *findInteraction;
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