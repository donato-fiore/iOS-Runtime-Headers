// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFDOCUMENTVIEWPRIVATE_H
#define PDFDOCUMENTVIEWPRIVATE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PDFView.h"
#import "PDFDocument.h"
#import "PDFRenderingProperties.h"
#import "PDFDocumentContentView.h"
#import "PDFPageBackgroundManager.h"
#import "PDFAnnotationPointerTrackingView.h"

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
    PDFAnnotationPointerTrackingView *pointerTrackingView;
}






@end


#endif