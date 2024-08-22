// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVVIDEOCOMPOSITIONRENDERCONTEXT_H
#define AVVIDEOCOMPOSITIONRENDERCONTEXT_H


#import <Foundation/Foundation.h>

#import "AVVideoCompositionRenderContextInternal.h"
#import "AVVideoComposition.h"

@interface AVVideoCompositionRenderContext : NSObject {
    AVVideoCompositionRenderContextInternal *_internal;
}


@property (readonly, nonatomic) ? edgeWidths;
@property (readonly, nonatomic) BOOL highQualityRendering;
@property (readonly, nonatomic) ? pixelAspectRatio;
@property (readonly, nonatomic) float renderScale;
@property (readonly, nonatomic) CGAffineTransform renderTransform;
@property (readonly, nonatomic) CGSize size;
@property (readonly, nonatomic) AVVideoComposition *videoComposition;


+(id)renderContextPropertiesFromFigCompositor:(struct OpaqueFigVideoCompositor *)arg0 ;
-(BOOL)hasEqualPropertiesToFigVideoCompositor:(struct OpaqueFigVideoCompositor *)arg0 ;
-(BOOL)isBufferYCbCr:(struct __CVBuffer *)arg0 ;
-(id)initWithFigVideoCompositor:(struct OpaqueFigVideoCompositor *)arg0 clientRequiredPixelBufferAttributes:(id)arg1 videoComposition:(id)arg2 pixelBufferPool:(struct __CVPixelBufferPool *)arg3 ;
-(struct __CVBuffer *)newPixelBuffer;
-(struct __CVPixelBufferPool *)pixelBufferPool;
-(void)_willDeallocOrFinalize;
-(void)dealloc;


@end


#endif