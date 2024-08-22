// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFKITTEXTVIEWPRIVATE_H
#define PDFKITTEXTVIEWPRIVATE_H

@class UIView;

#import <Foundation/Foundation.h>

#import "PDFTextWidgetTextView.h"
#import "PDFView.h"
#import "PDFPageView.h"
#import "PDFAnnotation.h"

@interface PDFKitTextViewPrivate : NSObject {
    UIView *topLevelView;
    PDFTextWidgetTextView *textView;
    PDFView *pdfView;
    PDFPageView *pdfPageView;
    PDFAnnotation *annotation;
}






@end


#endif