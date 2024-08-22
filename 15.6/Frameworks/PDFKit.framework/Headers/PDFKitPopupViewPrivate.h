// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFKITPOPUPVIEWPRIVATE_H
#define PDFKITPOPUPVIEWPRIVATE_H

@class UITextView, NSUndoManager, UIViewController, NSString;

#import <Foundation/Foundation.h>

#import "PDFAnnotation.h"
#import "PDFPageView.h"
#import "PDFView.h"

@interface PDFKitPopupViewPrivate : NSObject {
    PDFAnnotation *parentAnnotation;
    PDFPageView *pageView;
    PDFView *view;
    UITextView *popupTextView;
    NSUndoManager *popupTextViewUndoManager;
    UIViewController *popupController;
    NSString *contents;
    BOOL deviceIsiPhone;
    BOOL deviceIsiPad;
    id *savedFirstResponder;
}






@end


#endif