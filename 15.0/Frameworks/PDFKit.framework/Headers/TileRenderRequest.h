// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TILERENDERREQUEST_H
#define TILERENDERREQUEST_H

@protocol PDFTilePoolDelegate;

#import <Foundation/Foundation.h>

#import "PDFPage.h"
#import "PDFRenderingProperties.h"

@interface TileRenderRequest : NSObject {
    id<PDFTilePoolDelegate> *target;
    PDFPage *page;
    PDFRenderingProperties *renderingProperties;
    CGRect tileFrame;
    CGFloat zoomFactor;
    CGAffineTransform matrix;
    int tag;
}






@end


#endif