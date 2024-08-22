// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFDOCUMENTVIEWPRIVATE_H
#define PDFDOCUMENTVIEWPRIVATE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PDFView.h"
#import "PDFDocument.h"
#import "PDFRenderingProperties.h"
#import "PDFDocumentContentView.h"
#import "PDFPageBackgroundManager.h"

@interface PDFDocumentViewPrivate : NSObject {
    PDFView *pdfView;
    PDFDocument *document;
    PDFRenderingProperties *renderingProperties;
    CGSize documentViewSize;
    PDFDocumentContentView *contentView;
    NSMutableDictionary *pageViews;
    NSMutableDictionary *pageFrames;
    PDFPageBackgroundManager *pageBackgroundManager;
    BOOL ignoreChangedBoundsForBoxNotification;
}






@end


#endif