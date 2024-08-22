// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFPAGEVIEWPRIVATE_H
#define PDFPAGEVIEWPRIVATE_H

@class CALayer<PDFPageLayerInterface>, NSMutableArray, NSMutableDictionary, NSTextStorage, CALayer, UIImage;
@protocol PDFPageLayerGeometryInterface;

#import <Foundation/Foundation.h>

#import "PDFRenderingProperties.h"
#import "PDFPage.h"
#import "PDFPageLayerEffect.h"
#import "PDFAnnotation.h"
#import "PDFPageViewAnnotationController.h"

@interface PDFPageViewPrivate : NSObject {
    NSObject<PDFPageLayerGeometryInterface> *geometryInterface;
    PDFRenderingProperties *renderingProperties;
    PDFPage *page;
    CALayer<PDFPageLayerInterface> *pageLayer;
    PDFPageLayerEffect *searchLayer;
    NSMutableArray *pageAnnotationEffects;
    PDFAnnotation *activeAnnotation;
    NSMutableDictionary *activeControls;
    NSTextStorage *activeTextStorage;
    NSMutableArray *pageSignatures;
    PDFPageViewAnnotationController *annotationController;
    CALayer *backgroundLayer;
    UIImage *backgroundImage;
    int backgroundQuality;
    NSUInteger visibilityDelegateIndex;
    BOOL isPerformingUndo;
    CALayer *bookmarkLayer;
    CGSize bookmarkSize;
}






@end


#endif