// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFSCANNERRESULTPRIVATE_H
#define PDFSCANNERRESULTPRIVATE_H

@class DDScannerResult, NSArray;

#import <Foundation/Foundation.h>

#import "PDFPage.h"

@interface PDFScannerResultPrivate : NSObject {
    DDScannerResult *ddResult;
    PDFPage *page;
    CGRect bounds;
    NSArray *rects;
    BOOL resultIsPastDate;
    BOOL hasRunActionsForResult;
    BOOL hasActionsForResult;
    *__DDHighlight highlightRef;
}






@end


#endif