// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFHOSTVIEWCONTROLLERPRIVATE_H
#define PDFHOSTVIEWCONTROLLERPRIVATE_H

@class NSExtension, UIScrollView, NSString, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPointerInteraction;
@protocol PDFExtensionProtocol, PDFHostViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "PDFExtensionTopView.h"
#import "PDFPasswordViewController.h"
#import "PDFPageLabelView.h"
#import "PDFPanGestureRecognizer.h"

@interface PDFHostViewControllerPrivate : NSObject {
    NSExtension *extension;
    id<PDFExtensionProtocol> *extensionProxy;
    UIScrollView *hostScrollView;
    id<PDFHostViewControllerDelegate> *hostViewControllerDelegate;
    PDFExtensionTopView *topView;
    PDFPasswordViewController *passwordViewController;
    NSString *password;
    PDFPageLabelView *pageLabelView;
    BOOL isUnlocked;
    NSInteger currentPageIndex;
    NSInteger pageCount;
    CGSize documentViewSize;
    CGFloat minScaleFactor;
    CGFloat maxScaleFactor;
    BOOL hasSelection;
    CGPoint topLeftSelectionPoint;
    CGPoint bottomRightSelectionPoint;
    UITapGestureRecognizer *tapGestureRecognizer;
    UITapGestureRecognizer *doubleTapGestureRecognizer;
    UILongPressGestureRecognizer *longPressGestureRecognizer;
    PDFPanGestureRecognizer *panGestureRecognizer;
    BOOL recentGestureIsIndirectTouch;
    UIPointerInteraction *pointerInteraction;
    id *pdfPointerCompletionHandler;
    CGRect insetBoundsInDocument;
    CGRect scrollViewFrame;
    UIEdgeInsets contentInset;
    UIEdgeInsets pdfSafeAreaInsets;
    CGFloat horizontalScaleFactor;
    CGPoint documentViewCenter;
    BOOL pdfViewIsRotating;
    BOOL pdfViewNeedsUpdate;
    BOOL hostScrollViewObserverIsActive;
    id *snapshotCompletion;
}






@end


#endif