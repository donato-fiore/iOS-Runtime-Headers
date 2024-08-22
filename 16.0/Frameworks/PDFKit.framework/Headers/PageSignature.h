// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAGESIGNATURE_H
#define PAGESIGNATURE_H

@class CALayer;

#import <Foundation/Foundation.h>

#import "PDFAnnotation.h"

@interface PageSignature : NSObject {
    PDFAnnotation *annotation;
    CALayer *signatureLayer;
}






@end


#endif