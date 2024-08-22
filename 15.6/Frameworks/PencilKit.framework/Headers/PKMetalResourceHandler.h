// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKMETALRESOURCEHANDLER_H
#define PKMETALRESOURCEHANDLER_H

@class NSMutableDictionary, MTLRenderPipelineDescriptor;
@protocol MTLComputePipelineState, MTLRenderPipelineState, MTLBuffer, MTLLibrary, MTLTexture, OS_dispatch_queue, MTLPipelineLibrarySPI, MTLDevice;

#import <Foundation/Foundation.h>

#import "PKMetalShader.h"
#import "PKLRUCache.h"
#import "PKMetalResourceHandlerBuffer.h"

@interface PKMetalResourceHandler : NSObject {
    id<MTLComputePipelineState> *_particleShaderKernelPipelineState;
    id<MTLComputePipelineState> *_particleShaderKernelPipelineStateWithVariableSpacing;
    id<MTLComputePipelineState> *_paintShaderKernelPipelineState;
    id<MTLComputePipelineState> *_paintShaderKernelPipelineStateWithLiveStrokeMode;
    id<MTLComputePipelineState> *_paintShaderKernelPipelineStateWithLiveStrokeParticles;
    PKMetalShader *_particleShader;
    PKMetalShader *_particleShaderWithAspectRatioSupport;
    PKMetalShader *_sixChannelParticleShader;
    PKMetalShader *_sixChannelParticleShaderWithAspectRatioSupport;
    PKMetalShader *_paintShader;
    PKMetalShader *_sixChannelPaintShader;
    PKMetalShader *_paintShaderForLiveStrokeMode;
    PKMetalShader *_erasePaintShader;
    PKMetalShader *_sixChannelErasePaintShader;
    PKMetalShader *_eraseOriginalBackShader;
    PKMetalShader *_paperShader;
    PKMetalShader *_blitIntoPaintShader;
    PKMetalShader *_blitShader;
    PKMetalShader *_singleAttachmentBlitShader;
    PKMetalShader *_sixChannelBlitShader;
    PKMetalShader *_sixChannelSingleAttachmentBlitShader;
    PKMetalShader *_sixChannelBlitShaderIntoDestinationTexture;
    PKMetalShader *_eraseShader;
    PKMetalShader *_linesShader;
    PKMetalShader *_paintCircleShader;
    PKMetalShader *_sixChannelPaintCircleShader;
    PKMetalShader *_invertShader;
    PKMetalShader *_fillColorShader;
    PKMetalShader *_singleAttachmentFillColorShader;
    id<MTLRenderPipelineState> *_sixChannelCopyToCanvasPipelineState;
    id<MTLBuffer> *_cachedQuadVertexBuffer;
    id<MTLBuffer> *_cachedQuadTexCoordBuffer;
    NSMutableDictionary *_inkTextures;
    unordered_map<unsigned long long, PKMetalShader *, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, PKMetalShader *>>> _uberShaders;
    unordered_map<unsigned long long, PKMetalShader *, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, PKMetalShader *>>> _sixChannelShaders;
    id<MTLLibrary> *_defaultLibrary;
    id<MTLTexture> *_paperTexture;
    CGSize _paperTextureSize;
    MTLRenderPipelineDescriptor *_sharedPipelineDescriptor;
    MTLRenderPipelineDescriptor *_singleColorPipelineDescriptor;
    MTLRenderPipelineDescriptor *_singlePaintPipelineDescriptor;
    MTLRenderPipelineDescriptor *_sixChannelSingleColorPipelineDescriptor;
    MTLRenderPipelineDescriptor *_sixChannelSharedPipelineDescriptor;
    PKLRUCache *_strokeRenderCache;
    id<MTLBuffer> *_particleIndexBuffer;
    id<MTLBuffer> *_randomNumberBuffer;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSUInteger _signpost_id;
    PKMetalResourceHandlerBuffer *_purgeableResourceBuffer;
    PKMetalResourceHandlerBuffer *_resourceBuffer;
    PKMetalResourceHandlerBuffer *_gpuResourceBuffer;
    id<MTLPipelineLibrarySPI> *_pipelineLibrary;
    BOOL _generatePipelineDescriptors;
    BOOL _generateForScribble;
    BOOL _deviceSupportsAppleFamily;
    BOOL _deviceSupportsMacFamily;
    BOOL _deviceSupportsCatalystFamily;
    BOOL _deviceSupportsFramebufferFetch;
    BOOL _sixChannelUsesWideGamut;
    id<MTLDevice> *_device;
    NSUInteger _pixelFormat;
    NSUInteger _sixChannelOriginalBackPixelFormat;
    NSUInteger _sixChannelMetalLayerPixelFormat;
    NSUInteger _paintAndParticlePixelFormat;
    NSUInteger _stencilPixelFormat;
}




+(id)generatePipelineDescriptorsForDevice:(id)arg0 ;
-(id)init;


@end


#endif