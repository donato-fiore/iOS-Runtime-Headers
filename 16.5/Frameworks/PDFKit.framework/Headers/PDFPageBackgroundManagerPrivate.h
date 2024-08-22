// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFPAGEBACKGROUNDMANAGERPRIVATE_H
#define PDFPAGEBACKGROUNDMANAGERPRIVATE_H

@protocol PDFPageBackgroundManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PDFRenderingProperties.h"

@interface PDFPageBackgroundManagerPrivate : NSObject {
    id<PDFPageBackgroundManagerDelegate> *documentDelegate;
    PDFRenderingProperties *renderingProperties;
    NSUInteger activePageIndex;
    NSMutableDictionary" backgroundImageCache;
    NSObject<OS_dispatch_queue> *workQueue;
    BOOL isCancled;
    BOOL isWorking;
    BOOL willForceUpdate;
}






@end


#endif