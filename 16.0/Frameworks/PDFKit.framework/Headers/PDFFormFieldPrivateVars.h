// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFFORMFIELDPRIVATEVARS_H
#define PDFFORMFIELDPRIVATEVARS_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PDFDocument.h"

@interface PDFFormFieldPrivateVars : NSObject {
    PDFDocument *document;
    CGRect bounds;
    int fieldType;
    NSInteger buttonType;
    NSString *fieldName;
    NSString *stringValue;
    NSString *defaultStringValue;
    BOOL writeDefaultValue;
    *__CFDictionary dictionary;
}






@end


#endif