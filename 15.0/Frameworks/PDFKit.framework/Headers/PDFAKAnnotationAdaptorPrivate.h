// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFAKANNOTATIONADAPTORPRIVATE_H
#define PDFAKANNOTATIONADAPTORPRIVATE_H

@class AKAnnotation;

#import <Foundation/Foundation.h>

#import "PDFAnnotation.h"

@interface PDFAKAnnotationAdaptorPrivate : NSObject {
    BOOL isTornDown;
    PDFAnnotation *pdfAnnotation;
    AKAnnotation *akAnnotation;
    BOOL isObservingAKAnnotation;
    BOOL isSyncingFromPDFAnnotation;
    BOOL isSyncingFromAKAnnotation;
}






@end


#endif