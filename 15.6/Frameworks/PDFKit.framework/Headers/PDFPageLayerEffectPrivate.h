// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFPAGELAYEREFFECTPRIVATE_H
#define PDFPAGELAYEREFFECTPRIVATE_H

@class NSUUID, NSMutableDictionary, NSMutableArray, CALayer;
@protocol PDFPageLayerInterface;

#import <Foundation/Foundation.h>

#import "PDFAnnotation.h"
#import "PDFScannerResult.h"
#import "PDFPageLayerEffect.h"

@interface PDFPageLayerEffectPrivate : NSObject {
    id<PDFPageLayerInterface> *pageLayer;
    NSUUID *uuid;
    CGRect pageFrame;
    BOOL shouldRotateContent;
    PDFAnnotation *annotation;
    NSMutableDictionary *markupEffectLayers;
    NSMutableArray *selections;
    NSMutableDictionary *selectionEffectLayers;
    PDFScannerResult *pdfResult;
    CALayer *rootSelectionLayer;
    PDFPageLayerEffect *noteLayer;
}






@end


#endif