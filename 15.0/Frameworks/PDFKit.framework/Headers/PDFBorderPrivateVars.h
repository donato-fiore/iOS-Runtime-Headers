// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFBORDERPRIVATEVARS_H
#define PDFBORDERPRIVATEVARS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PDFAnnotation.h"

@interface PDFBorderPrivateVars : NSObject {
    PDFAnnotation *annotation;
    NSInteger style;
    CGFloat hCornerRadius;
    CGFloat vCornerRadius;
    CGFloat lineWidth;
    NSInteger dashCount;
    NSArray *dashPattern;
    *CGFloat dashPatternRaw;
}






@end


#endif