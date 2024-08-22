// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFVIEWCONTROLLERPRIVATE_H
#define PDFVIEWCONTROLLERPRIVATE_H

@class CALayer, UIEditMenuInteraction;

#import <Foundation/Foundation.h>

#import "PDFView.h"
#import "PDFAnnotation.h"

@interface PDFViewControllerPrivate : NSObject {
    PDFView *view;
    CGRect viewMarquee;
    CALayer *marqueeEffect;
    PDFAnnotation *activeAnnotation;
    UIEditMenuInteraction *editMenuInteraction;
    NSUInteger textSelectionMenu;
    CGFloat longPressGestureStartTime;
    BOOL didPostPDFExtensionViewAnnotationLongPress;
}






@end


#endif