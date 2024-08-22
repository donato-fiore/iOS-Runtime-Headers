// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFKITTEXTVIEWPRIVATE_H
#define PDFKITTEXTVIEWPRIVATE_H

@class UITextView;

#import <Foundation/Foundation.h>

#import "PDFView.h"
#import "PDFPageView.h"
#import "PDFAnnotation.h"

@interface PDFKitTextViewPrivate : NSObject {
    UITextView *textView;
    PDFView *pdfView;
    PDFPageView *pdfPageView;
    PDFAnnotation *annotation;
}






@end


#endif