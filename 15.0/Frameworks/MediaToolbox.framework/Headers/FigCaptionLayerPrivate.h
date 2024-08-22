// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTIONLAYERPRIVATE_H
#define FIGCAPTIONLAYERPRIVATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface FigCaptionLayerPrivate : NSObject {
    *OpaqueFigCFCaptionRenderer renderer;
    NSMutableArray *captionElementLayers;
    *OpaqueFigSimpleMutex renderMutex;
    *OpaqueFigReentrantMutex layoutSublayersMutex;
    unsigned char shouldDrawGrid;
    NSMutableArray *captionBackdropLayers;
    unsigned char enableBackdrop;
    CGRect videoRelativeToViewport;
    FigGeometryMargins captionsAvoidanceMargins;
}






@end


#endif