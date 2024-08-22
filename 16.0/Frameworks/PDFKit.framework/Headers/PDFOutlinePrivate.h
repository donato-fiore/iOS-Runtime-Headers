// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFOUTLINEPRIVATE_H
#define PDFOUTLINEPRIVATE_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "PDFDocument.h"
#import "PDFAction.h"
#import "PDFOutline.h"

@interface PDFOutlinePrivate : NSObject {
    PDFDocument *document;
    NSString *title;
    PDFAction *action;
    PDFOutline *parent;
    NSMutableArray *children;
    BOOL childrenLoaded;
    *__CFDictionary dictionary;
    BOOL open;
    *CGPDFDictionary srcDictionary;
}






@end


#endif