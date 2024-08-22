// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFVIEWCONTROLLERPRIVATE_H
#define PDFVIEWCONTROLLERPRIVATE_H

@class CALayer, NSMutableArray, UIMenuItem;

#import <Foundation/Foundation.h>

#import "PDFView.h"
#import "PDFAnnotation.h"
#import "PDFMarkupMenuView.h"

@interface PDFViewControllerPrivate : NSObject {
    PDFView *view;
    CGRect viewMarquee;
    CALayer *marqueeEffect;
    PDFAnnotation *activeAnnotation;
    NSUInteger textSelectionMenu;
    NSMutableArray *textSelectionMenuItems;
    UIMenuItem *highlightItem;
    UIMenuItem *showMarkupMenuItem;
    PDFMarkupMenuView *markupMenuView;
    CGFloat longPressGestureStartTime;
    BOOL didPostPDFExtensionViewAnnotationLongPress;
}






@end


#endif