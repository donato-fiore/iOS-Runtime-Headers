// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFANNOTATIONCHANGEPRIVATE_H
#define PDFANNOTATIONCHANGEPRIVATE_H


#import <Foundation/Foundation.h>

#import "PDFAnnotation.h"

@interface PDFAnnotationChangePrivate : NSObject {
    int changeType;
    PDFAnnotation *annotation;
    NSUInteger changeTimestamp;
}






@end


#endif