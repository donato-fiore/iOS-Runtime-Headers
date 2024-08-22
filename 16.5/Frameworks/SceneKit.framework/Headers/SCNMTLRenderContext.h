// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNMTLRENDERCONTEXT_H
#define SCNMTLRENDERCONTEXT_H

@class CAMetalLayer, MTLRenderPassDescriptor, NSMutableArray, NSMutableDictionary, NSString;
@protocol SCNBufferStream, MTLDevice, MTLCommandQueue, OS_dispatch_semaphore, MTLTexture, CAMetalDrawable, MTLCommandBuffer, MTLDepthStencilState, MTLSamplerState, OS_dispatch_queue, OS_dispatch_group, MTLBuffer, MTLRenderCommandEncoder, SCNMTLRenderContextCommandBufferStatusMonitor, SCNMTLRenderContextResourceManagerMonitor;

#import <Foundation/Foundation.h>

#import "SCNMTLRenderPipeline.h"
#import "SCNMTLResourceManager.h"

@interface SCNMTLRenderContext : NSObject <SCNBufferStream>

 {
    NSInteger _currentFrameIndex;
    *__C3DEngineStats __engineStats;
    SCNMatrix4 _screenTransform;
    NSInteger _sampleCount;
    BOOL _needSuperSampling;
    id<MTLDevice> *_device;
    BOOL _isValidationEnabled;
    int _profile;
    unsigned int _features;
    *__C3DEngineContext _engineContext;
    BOOL _wantsWideGamut;
    BOOL _isOpaque;
    BOOL _disableLinearRendering;
    BOOL _enableARMode;
    BOOL _shouldDelegateARCompositing;
    BOOL _useFunctionConstants;
    BOOL _reverseZ;
    id<MTLCommandQueue> *_ownedCommandQueue;
    NSObject<OS_dispatch_semaphore> *_inFlightSemaphore;
    atomic<int> _pendingGPUFrameCount;
    id<MTLTexture> *_textureTarget;
    CAMetalLayer *_layerTarget;
    id<CAMetalDrawable> *_drawable;
    float _targetedFrameInterval;
    BOOL _shouldPresentWithTransaction;
    MTLRenderPassDescriptor *_currentRenderPassDescriptor;
    MTLRenderPassDescriptor *_originalRenderPassDescriptor;
    ? _renderSize;
    id<MTLCommandBuffer> *_currentCommandBuffer;
    id<MTLCommandBuffer> *_resourceCommandBuffer;
    SCNMTLBlitCommandEncoder _resourceBlitEncoder;
    SCNMTLComputeCommandEncoder _resourceComputeEncoder;
    ? _renderPassParameters;
    ? _currentStreamBufferIndices;
    ? _volatileBufferPools;
    *void _frameVolatileBufferPool;
    NSMutableArray *_volatileMeshes;
    NSMutableArray *_bufferPool;
    NSMutableArray *_usedVolatileMeshElements;
    NSMutableArray *_freeVolatileMeshElements;
    ? _constantBufferPools;
    *void _frameConstantBufferPool;
    id<MTLDepthStencilState> *_defaultDepthStencilState;
    id<MTLSamplerState> *_defaultSamplerState;
    ? _background2DProgram;
    ? _backgroundCubeProgram;
    ? _backgroundVideoProgram;
    ? _backgroundVideoAlpha0Program;
    *__C3DRasterizerStates _backgroundRasterizerStates;
    CGFloat _initialTime;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSObject<OS_dispatch_group> *_resourceGroup;
    id<MTLBuffer> *_shadowKernelBuffer;
    ? _processingContext;
    unsigned int _seed;
    SCNSceneBuffer _frameUniforms;
    ? _sceneUniforms;
    ? _lightsData;
    ? _nodeUniforms;
    ? _lighting;
    Cache _cache;
    ? _deferredRendering;
    ? _compositeRendering;
    SCNMTLRenderPipeline *_downSamplePipeline;
    ? _skCompositing;
    ? _debug;
    BOOL _showsAuthoringEnvironment;
    ? _compilationIssues;
    ? _counters;
    ? _renderGraph;
    id *_commandBufferScheduledHandlers;
    id *_commandBufferCompletedHandlers;
    id *_drawablePresentedHandlers;
}


@property (retain, nonatomic) NSObject<MTLCommandBuffer> *clientCommandBuffer; // ivar: _clientCommandBuffer
@property (retain, nonatomic) NSObject<MTLCommandQueue> *clientCommandQueue; // ivar: _clientCommandQueue
@property (retain, nonatomic) NSObject<MTLRenderCommandEncoder> *clientRenderCommandEncoder; // ivar: _clientRenderCommandEncoder
@property (retain, nonatomic) MTLRenderPassDescriptor *clientRenderPassDescriptor; // ivar: _clientRenderPassDescriptor
@property (nonatomic) BOOL collectsCompilationErrors;
@property (weak, nonatomic) NSObject<SCNMTLRenderContextCommandBufferStatusMonitor> *commandBufferStatusMonitor; // ivar: _commandBufferStatusMonitor
@property (readonly, nonatomic) NSObject<MTLCommandQueue> *commandQueue;
@property (readonly, nonatomic) NSMutableDictionary *compilationErrors;
@property (nonatomic) CGFloat contentScaleFactor; // ivar: _contentScaleFactor
@property (readonly, nonatomic) NSObject<MTLCommandBuffer> *currentCommandBuffer;
@property (readonly, nonatomic) NSInteger currentFrameIndex;
@property (readonly, nonatomic) NSObject<MTLRenderCommandEncoder> *currentRenderCommandEncoder;
@property (readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger debugOptions; // ivar: _debugOptions
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<MTLDevice> *device;
@property (nonatomic) BOOL disableLinearRendering;
@property (nonatomic) BOOL enableARMode;
@property (nonatomic) BOOL enablesDeferredShading; // ivar: enablesDeferredShading
@property (readonly, nonatomic) *__C3DEngineContext engineContext;
@property (readonly, nonatomic) unsigned int features;
@property (readonly, nonatomic) *void frameConstantBufferPool;
@property (readonly, nonatomic) *void frameTexturePool; // ivar: _frameTexturePool
@property (retain, nonatomic) NSString *generatedTexturePath; // ivar: _generatedTexturePath
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) CAMetalLayer *layerTarget;
@property (readonly, nonatomic) NSInteger pendingGPUFrameCount;
@property (nonatomic) NSInteger preferredFramesPerSecond;
@property (readonly, nonatomic) int profile;
@property (readonly, nonatomic) *void renderEncoder; // ivar: _renderEncoder
@property (readonly, nonatomic) *SCNMTLBlitCommandEncoder resourceBlitEncoder;
@property (readonly, nonatomic) NSObject<MTLCommandBuffer> *resourceCommandBuffer;
@property (readonly, nonatomic) *SCNMTLComputeCommandEncoder resourceComputeEncoder;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *resourceGroup;
@property (readonly, nonatomic) SCNMTLResourceManager *resourceManager; // ivar: _resourceManager
@property (weak, nonatomic) NSObject<SCNMTLRenderContextResourceManagerMonitor> *resourceManagerMonitor; // ivar: _resourceManagerMonitor
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue;
@property (nonatomic) BOOL reverseZ;
@property (nonatomic) NSInteger sampleCount;
@property (nonatomic) SCNMatrix4 screenTransform;
@property (nonatomic) BOOL shouldDelegateARCompositing;
@property (nonatomic) BOOL shouldPresentAfterMinimumDuration; // ivar: _shouldPresentAfterMinimumDuration
@property (nonatomic) BOOL showsAuthoringEnvironment;
@property (nonatomic) CGFloat superSamplingFactor; // ivar: _superSamplingFactor
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<MTLTexture> *textureTarget;
@property (nonatomic) BOOL wantsWideGamut;


+(void)registerBindings;
-(*void)_clusterInfo;
-(?)_createPassWithVertexfragment;
-(?)createVolatileMeshElementOfType:(?)arg0 primitiveCountbytesPerIndex;
-(?)drawFullScreenQuadForPass;
-(?)drawRenderElementwithPass;
-(?)drawWireframeOverlayForElements:(?)arg0 range:(?)arg1 storepassInstance;
-(?)irradianceTextureForEffectSlot;
-(?)radianceTextureForEffectSlot;
-(?)renderBackground:(?)arg0 engineContextpassInstance;
-(?)renderLight:(?)arg0 lightTypelightData;
-(?)renderMesh:(?)arg0 meshElement:(?)arg1 withProgram:(?)arg2 engineContext:(?)arg3 transform:(?)arg4 color:(?)arg5 rasterizerStates:(?)arg6 blendState:(?)arg7 texturedepthBias;
-(?)renderVideoBackground:(?)arg0 engineContextslot;
-(?)textureForEffectSlot;
-(?)unmapVolatileMeshElement;
-(BOOL)constantOffsetAndSize:(int)arg0 ;
-(BOOL)mapVolatileMesh:(struct __C3DMesh *)arg0 verticesCount:(NSInteger)arg1 ;
-(BOOL)supportsMTLFeatureSet:(NSUInteger)arg0 ;
-(BOOL)vrrEnabled;
-(NSUInteger)colorPixelFormatAtIndex:(NSInteger)arg0 ;
-(NSUInteger)cubeArrayTypeIfSupported;
-(NSUInteger)depthStencilPixelFormat;
-(NSUInteger)getCurrentPassHash;
-(char *)constantData:(int)arg0 ;
-(float)_zFarForSkyboxRenderingProjectionMatrix:(*unsigned char)arg0 defaultZFar:(int)arg1 ;
-(float)renderTime;
-(id)_finalRenderTexture;
-(id)_newMTLBufferFromPoolWithLength:(NSUInteger)arg0 ;
-(id)_reflectionProbeArrayTexture;
-(id)buffer:(int)arg0 ;
-(id)initWithDevice:(id)arg0 engineContext:(struct __C3DEngineContext *)arg1 ;
-(id)newRenderTargetWithDescription:(struct ? *)arg0 size:(NSUInteger)arg1 arrayLength;
-(id)renderSize;
-(id)renderTargetInfo;
-(id)sampler:(int)arg0 ;
-(id)texture:(int)arg0 ;
-(struct __C3DEngineStats *)stats;
-(struct __C3DMaterial *)getCurrentPassMaterial;
-(void)_clearRenderCaches;
-(void)_clearUnusedBindingPoints;
-(void)_createResourceCommandBufferIfNeeded;
-(void)_drawFullScreenTexture:(id)arg0 over:(BOOL)arg1 ;
-(void)_drawMeshElement:(id)arg0 instanceCount:(NSUInteger)arg1 ;
-(void)_drawPBRTextures;
-(void)_drawPatchForMeshElement:(id)arg0 instanceCount:(NSUInteger)arg1 ;
-(void)_drawShadowMaps;
-(void)_logLightingInformation;
-(void)_prepareMaterialTextures:(struct __C3DMaterial *)arg0 ;
-(void)_recycleMTLBufferToPool:(id)arg0 ;
-(void)_reduceStatsOfConstantBuffer:(id)arg0 ;
-(void)_setMeshBuffers:(id)arg0 ;
-(void)_setReflectionProbeArrayTexture:(id)arg0 ;
-(void)_setSceneBufferAtVertexIndex:(NSInteger)arg0 fragmentIndex:(NSInteger)arg1 ;
-(void)_updateProjectionMatrixForOrthographicSkyboxRenderingIfNeeded:(*unsigned char)arg0 ;
-(void)addCommandBufferCompletedHandler:(id)arg0 ;
-(void)addCommandBufferScheduledHandler:(id)arg0 ;
-(void)addDrawablePresentedHandler:(id)arg0 ;
-(void)beginDeferredLighting;
-(void)beginFrame:(id)arg0 ;
-(void)beginRenderPass:(id)arg0 renderEncoder:(*void)arg1 parameters:(struct ? )arg2 ;
-(void)dealloc;
-(void)endDeferredLighting;
-(void)endFrameSceneSpecifics;
-(void)endFrameWaitingUntilCompleted:(BOOL)arg0 status:(*NSUInteger)arg1 error:(*id)arg2 ;
-(void)endRenderCommandEncoding;
-(void)endRenderPass;
-(void)popDebugGroup;
-(void)processRendererElements:(struct ? *)arg0 count:(unsigned int)arg1 engineIterationContext:(struct ? *)arg2 ;
-(void)pushDebugGroup:(id)arg0 ;
-(void)renderSKSceneWithRenderer:(id)arg0 overlay:(BOOL)arg1 atTime:(CGFloat)arg2 ;
-(void)resetVolatileMeshElements;
-(void)resetVolatileMeshes;
-(void)setCurrentPassHash:(NSUInteger)arg0 ;
-(void)setCurrentPassMaterial:(struct __C3DMaterial *)arg0 ;
-(void)setRasterizerStates:(struct __C3DRasterizerStates *)arg0 ;
-(void)startProcessingRendererElementsWithEngineIterationContext:(struct ? *)arg0 ;
-(void)stopProcessingRendererElements:(BOOL)arg0 ;
-(void)unmapVolatileMesh:(struct __C3DMesh *)arg0 modifiedVerticesCount:(NSInteger)arg1 ;
-(void)viewports:(**void)arg0 ;
-(void)writeBytes:(*void)arg0 length:(NSUInteger)arg1 ;


@end


#endif