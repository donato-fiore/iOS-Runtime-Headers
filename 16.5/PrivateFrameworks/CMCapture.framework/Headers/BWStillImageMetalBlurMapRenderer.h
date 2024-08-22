// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGEMETALBLURMAPRENDERER_H
#define BWSTILLIMAGEMETALBLURMAPRENDERER_H

@class NSDictionary, FigSDOFBlurMapRendering, NSString;
@protocol BWFilterRenderer, MTLCommandQueue;

#import <Foundation/Foundation.h>

#import "BWPixelBufferPool.h"

@interface BWStillImageMetalBlurMapRenderer : NSObject <BWFilterRenderer>

 {
    NSDictionary *_sdofRenderingTuningParameters;
    FigSDOFBlurMapRendering *_sdofBlurMapRenderer;
    BWPixelBufferPool *_blurMapPixelBufferPool;
    int _portraitRenderQuality;
    ? _imageDimensions;
    ? _depthDataMapDimensions;
    id<MTLCommandQueue> *_mtlCommandQueue;
}


@property (readonly, nonatomic) BOOL adjustsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAnimation;
@property (readonly, nonatomic) short type;


+(void)initialize;
-(id)initWithSDOFRenderingTuningParameters:(id)arg0 imageDimensions:(struct ? )arg1 depthDataMapDimensions:(struct ? )arg2 portraitRenderQuality:(int)arg3 metalCommandQueue:(id)arg4 ;
-(int)prepareForRenderingWithParameters:(id)arg0 inputVideoFormat:(id)arg1 inputDepthFormat:(id)arg2 ;
-(void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)renderUsingParameters:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 originalPixelBuffer:(struct __CVBuffer *)arg3 processedPixelBuffer:(struct __CVBuffer *)arg4 completionHandler:(id)arg5 ;


@end


#endif