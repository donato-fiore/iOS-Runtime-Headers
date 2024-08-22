// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFPAGELAYERPRIVATE_H
#define PDFPAGELAYERPRIVATE_H

@class CALayer, NSDate, NSMutableArray, NSMutableDictionary;
@protocol PDFPageLayerGeometryInterface;

#import <Foundation/Foundation.h>

#import "PDFPage.h"
#import "PDFRenderingProperties.h"
#import "PDFTimer.h"

@interface PDFPageLayerPrivate : NSObject {
    PDFPage *page;
    NSObject<PDFPageLayerGeometryInterface> *geometryInterface;
    PDFRenderingProperties *renderingProperties;
    NSInteger oldPageRotation;
    CGRect oldBoundsForBox;
    CALayer *tilesLayer;
    CALayer *shadowLayer;
    int generationCount;
    CGFloat lastLayoutZoomFactor;
    CGRect lastLayerFrameInRootView;
    NSDate *lastZoomChange;
    BOOL zoomChangeScheduled;
    CGFloat zoomGenerationDelay;
    NSUInteger visibilityDelegateIndex;
    BOOL tileLayerHidden;
    NSMutableArray *tiles;
    BOOL allowUpdate;
    PDFTimer *forcedUpdateTimer;
    BOOL isForcingUpdate;
    uint8_t isTiling;
    uint8_t requestedTiling;
    CALayer *effectsLayer;
    NSMutableDictionary *pageLayerEffects;
}






@end


#endif