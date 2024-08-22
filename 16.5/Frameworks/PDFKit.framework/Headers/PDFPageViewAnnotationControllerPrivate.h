// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFPAGEVIEWANNOTATIONCONTROLLERPRIVATE_H
#define PDFPAGEVIEWANNOTATIONCONTROLLERPRIVATE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PDFPageView.h"
#import "PDFPage.h"
#import "PDFView.h"
#import "PDFAnnotation.h"

@interface PDFPageViewAnnotationControllerPrivate : NSObject {
    PDFPageView *pageView;
    PDFPage *page;
    PDFView *view;
    PDFAnnotation *activeAnnotation;
    NSMutableDictionary *activeControls;
}






@end


#endif