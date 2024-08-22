// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTILLIMAGEFILTERNODE_H
#define BWSTILLIMAGEFILTERNODE_H

@class CIContext, NSDictionary, NSString;
@protocol BWRendererResourceProvider, OS_dispatch_queue, MTLCommandQueue;


#import "BWNode.h"
#import "BWRenderList.h"
#import "BWRenderListProcessor.h"
#import "BWStillImageMetalSDOFRenderer.h"
#import "BWStillImageMetalBlurMapRenderer.h"
#import "BWMetalColorCubeRenderer.h"
#import "BWColorLookupCache.h"
#import "BWVideoFormat.h"
#import "BWPixelBufferPool.h"

@interface BWStillImageFilterNode : BWNode <BWRendererResourceProvider>

 {
    BWRenderList *_renderList;
    BWRenderListProcessor *_renderListProcessor;
    id<BWRendererResourceProvider> *_rendererProvider;
    CIContext *_cachedCIContext;
    BWStillImageMetalSDOFRenderer *_metalSDOFRenderer;
    BWStillImageMetalBlurMapRenderer *_metalBlurMapRenderer;
    BWMetalColorCubeRenderer *_metalFilterRenderer;
    BWColorLookupCache *_colorLookupCache;
    BWVideoFormat *_outputFormat;
    ? _outputDimensions;
    ? _maskDimensions;
    BOOL _depthDataDeliveryEnabled;
    ? _depthDataMapDimensions;
    NSDictionary *_sdofRenderingTuningParameters;
    int _portraitRenderQuality;
    *OpaqueVTPixelTransferSession _portraitDownsamplingTransferSession;
    BWPixelBufferPool *_processingBufferPool;
    NSObject<OS_dispatch_queue> *_emitQueue;
    id<MTLCommandQueue> *_mtlCommandQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)_initWithNodeConfiguration:(id)arg0 depthDataDeliveryEnabled:(BOOL)arg1 personSegmentationEnabled:(BOOL)arg2 refinedDepthEnabled:(BOOL)arg3 portraitRenderQuality:(int)arg4 renderResourceProvider:(id)arg5 ;
-(id)initWithNodeConfiguration:(id)arg0 depthDataDeliveryEnabled:(BOOL)arg1 personSegmentationEnabled:(BOOL)arg2 refinedDepthEnabled:(BOOL)arg3 portraitRenderQuality:(int)arg4 ;
-(id)nodeSubType;
-(id)nodeType;
-(id)provideColorLookupCache;
-(id)provideCoreImageFilterRenderer;
-(id)provideMetalFilterRenderer;
-(id)provideStillImageMetalBlurMapRenderer;
-(id)provideStillImageMetalSDOFRenderer;
-(id)provideStreamingSDOFFilterRenderer;
-(id)sdofRenderingTuningParameters;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)handleStillImagePrewarmWithSettings:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setSdofRenderingTuningParameters:(id)arg0 ;


@end


#endif