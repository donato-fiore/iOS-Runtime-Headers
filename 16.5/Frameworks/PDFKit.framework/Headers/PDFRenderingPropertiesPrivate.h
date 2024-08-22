// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFRENDERINGPROPERTIESPRIVATE_H
#define PDFRENDERINGPROPERTIESPRIVATE_H

@class PDFLayerController, UIColor;

#import <Foundation/Foundation.h>

#import "PDFView.h"

@interface PDFRenderingPropertiesPrivate : NSObject {
    PDFView *pdfView;
    PDFLayerController *pdfLayerController;
    NSInteger displayBox;
    BOOL shouldAntiAlias;
    CGFloat greekingThreshold;
    NSInteger interpolationQuality;
    CGFloat lineWidthThreshold;
    UIColor *pageColor;
    BOOL enablePageShadows;
    BOOL enableTileEdgeColoring;
    BOOL enableAccessibilityDrawing;
    CGFloat screenScaleFactor;
    BOOL enableTileUpdates;
    BOOL enableBackgroundImages;
    BOOL isUsingPDFExtensionView;
    *CGColorSpace deviceColorSpace;
}






@end


#endif