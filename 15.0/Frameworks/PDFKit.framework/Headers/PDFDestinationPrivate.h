// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFDESTINATIONPRIVATE_H
#define PDFDESTINATIONPRIVATE_H


#import <Foundation/Foundation.h>

#import "PDFDocument.h"
#import "PDFPage.h"

@interface PDFDestinationPrivate : NSObject {
    PDFDocument *document;
    PDFPage *page;
    *CGPDFArray array;
    int type;
    CGFloat left;
    CGFloat top;
    CGFloat right;
    CGFloat bottom;
    CGFloat zoom;
}






@end


#endif