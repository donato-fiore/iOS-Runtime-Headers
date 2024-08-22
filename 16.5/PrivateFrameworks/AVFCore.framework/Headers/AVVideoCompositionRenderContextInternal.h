// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVVIDEOCOMPOSITIONRENDERCONTEXTINTERNAL_H
#define AVVIDEOCOMPOSITIONRENDERCONTEXTINTERNAL_H

@class NSDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVVideoComposition.h"

@interface AVVideoCompositionRenderContextInternal : NSObject {
    NSDictionary *_basisProperties;
    CGSize _size;
    CGAffineTransform _renderTransform;
    float _renderScale;
    ? _pixelAspectRatio;
    ? _edgeWidths;
    BOOL _highQualityRendering;
    NSDictionary *_clientRequiredPixelBufferAttributes;
    NSDictionary *_destinationDesiredPixelBufferAttributes;
    NSString *_destinationDesiredPixelBufferYCbCrMatrix;
    NSString *_destinationDesiredPixelBufferColorPrimaries;
    NSString *_destinationDesiredPixelBufferTransferFunction;
    NSString *_blendingTransferFunction;
    int pixelFormatFamily;
    *__CFDictionary _pixelAspectRatioDict;
    *__CFDictionary _cleanApertureDict;
    ? _destinationPixelBufferDimensions;
    *OpaqueFigSimpleMutex _bufferPoollInitMutex;
    NSObject<OS_dispatch_queue> *_pixelBufferPoolQ;
    *__CVPixelBufferPool _pixelBufferPool;
    AVVideoComposition *_videoComposition;
}




-(void)_willDeallocOrFinalize;
-(void)dealloc;


@end


#endif