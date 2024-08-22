// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFSELECTIONPRIVATE_H
#define PDFSELECTIONPRIVATE_H

@class UIColor, NSMutableArray, NSUUID;

#import <Foundation/Foundation.h>

#import "PDFDocument.h"

@interface PDFSelectionPrivate : NSObject {
    PDFDocument *document;
    UIColor *color;
    NSMutableArray *pageRanges;
    BOOL forceBreaks;
    *__CFArray cgSelections;
    NSMutableArray *pages;
    NSUUID *pdfSelectionUUID;
}






@end


#endif