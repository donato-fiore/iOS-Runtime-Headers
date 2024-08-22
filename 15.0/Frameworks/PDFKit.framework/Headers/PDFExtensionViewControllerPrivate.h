// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFEXTENSIONVIEWCONTROLLERPRIVATE_H
#define PDFEXTENSIONVIEWCONTROLLERPRIVATE_H

@class NSString, NSMutableArray;
@protocol PDFHostProtocol;

#import <Foundation/Foundation.h>

#import "PDFView.h"
#import "PDFSelection.h"

@interface PDFExtensionViewControllerPrivate : NSObject {
    id<PDFHostProtocol> *hostProxy;
    PDFView *pdfView;
    CGSize documentViewSize;
    NSString *searchString;
    PDFSelection *searchSelection;
    NSMutableArray *searchResults;
    BOOL didCancelActiveSearch;
    NSInteger currentGestureState;
    BOOL hasSelection;
    CGPoint topLeftSelectionPoint;
    CGPoint bottomRightSelectionPoint;
}






@end


#endif