// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNMTLRESOURCEMANAGER_H
#define SCNMTLRESOURCEMANAGER_H

@class NSMutableArray, MTKTextureLoader;
@protocol MTLTexture, MTLDepthStencilState, MTLCommandQueue, MTLDevice;

#import <Foundation/Foundation.h>

#import "SCNMTLShaderBindingsGenerator.h"
#import "SCNMTLBufferAllocator.h"
#import "SCNMTLShadableKey.h"
#import "SCNMTLLibraryManager.h"

@interface SCNMTLResourceManager : NSObject {
    *__C3DEngineStats __engineStats;
    SCNMTLShaderBindingsGenerator *_bindingsGenerator;
    *__CFDictionary _availablePipelineStates;
    os_unfair_lock_s _availablePipelineStatesLock;
    SCNMTLBufferAllocator *_commonProfileBuffersAllocator;
    ? _availableLightingSystemReflectionProbeTextures;
    ? _availableIrradianceTextures;
    ? _availableRadianceTextures;
    ? _availableImages;
    ? _availableImageProxy;
    ? _availableSamplers;
    ? _availableIESTextures;
    ? _availableBuffers;
    ? _availableMeshes;
    ? _availableMeshSources;
    ? _availableMeshElements;
    ? _availableRasterizerStates;
    ? _availableMorphs;
    ? _availableSkins;
    ? _availableComputePipelines;
    ? _availableComputePipelinesWithStageDescriptor;
    ? _availableTessellators;
    ? _availableWireframeMaterials;
    ? _availableShadables;
    SCNMTLShadableKey *_availableShadablesSearchKey;
    NSMutableArray *_availableStageDescriptors;
    os_unfair_lock_s _stageDescriptorsLock;
    id *_nullStageDescriptor;
    id<MTLTexture> *_areaLightPrecomputedDataTexture;
    id<MTLTexture> *_specularDFGTexture;
    ? _defaultProgram;
    ? _defaultProgramForTessellation;
    ? _isolateProgram;
    id<MTLDepthStencilState> *_depthAndStencilStateWithReadWriteDepthDisabled;
    id<MTLTexture> *_defaultTexture;
    id<MTLTexture> *_defaultTexture3D;
    id<MTLTexture> *_defaultCubeTexture;
    id<MTLTexture> *_defaultLightingEnvironmentIrradianceTexture;
    id<MTLTexture> *_defaultLightingEnvironmentRadianceTexture;
    MTKTextureLoader *_mtkTextureLoader;
}


@property (readonly, nonatomic) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (retain, nonatomic) SCNMTLLibraryManager *libraryManager; // ivar: _libraryManager


+(id)resourceManagerForDevice:(id)arg0 ;
+(void)unregisterManagerForDevice:(id)arg0 ;
-(?)defaultProgramUsingTessellation;
-(?)renderResourceForMaterial:(?)arg0 geometry:(?)arg1 renderPipelineengineContext;
-(?)renderResourceForMorphbaseGeometry;
-(?)renderResourceForSkinner:(?)arg0 baseMeshbaseGeometry;
-(?)renderResourceForTessellatedGeometry;
-(BOOL)_copyImage:(struct __C3DImage *)arg0 toTexture:(id)arg1 desc:(id)arg2 textureOptions:(int)arg3 needsMipMapGeneration:(BOOL)arg4 ;
-(BOOL)hasCommonProfilePrecompiledFunctions;
-(id)_bufferForData:(struct __CFData *)arg0 bytesPerIndex:(NSUInteger)arg1 ;
-(id)_bufferForMTLBuffer:(*void)arg0 ;
-(id)_newComputeDescriptorForPipelineDesc:(struct ? )arg0 library:(id)arg1 ;
-(id)_textureDescriptorFromImage:(struct __C3DImage *)arg0 needsMipMap:(BOOL)arg1 textureOptions:(int)arg2 ;
-(id)areaLightPrecomputedDataTexture;
-(id)computePipelineStateForKernel:(id)arg0 ;
-(id)computePipelineStateForKernel:(id)arg0 threadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)arg1 ;
-(id)copyTextureByConvertingToCubeMapIfApplicable:(id)arg0 engineContext:(struct __C3DEngineContext *)arg1 needsMipmap:(BOOL)arg2 ;
-(id)defaultCubeTexture;
-(id)defaultLightingEnvironmentIrradianceTexture;
-(id)defaultLightingEnvironmentRadianceTexture;
-(id)defaultTexture;
-(id)defaultTexture3D;
-(id)depthAndStencilStateWithReadWriteDepthDisabled;
-(id)getUniqueStageDescriptor:(id)arg0 ;
-(id)iesTextureForProfile:(id)arg0 renderContext:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)irradianceTextureForEnvironmentTexture:(id)arg0 renderContext:(id)arg1 applySH:(id)arg2 ;
-(id)latlongTextureForCubemap:(id)arg0 pixelFormat:(NSUInteger)arg1 renderContext:(id)arg2 needsMipmap:(BOOL)arg3 ;
-(id)newBufferWithBytes:(*void)arg0 length:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(id)newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)newComputePipelineStateForDesc:(struct ? )arg0 library:(id)arg1 ;
-(id)newComputePipelineStateForKernel:(id)arg0 withStageDescriptor:(id)arg1 constants:(id)arg2 constantsHash:(id)arg3 ;
-(id)newComputePipelineStateWithFunctionName:(id)arg0 ;
-(id)newComputePipelineStateWithFunctionName:(id)arg0 constantValues:(id)arg1 ;
-(id)newComputePipelineStateWithFunctionName:(id)arg0 library:(id)arg1 ;
-(id)newComputePipelineStateWithFunctionName:(id)arg0 library:(id)arg1 constantValues:(id)arg2 ;
-(id)newConstantBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)newCubemapTextureForLatlongTexture:(id)arg0 pixelFormat:(NSUInteger)arg1 engineContext:(struct __C3DEngineContext *)arg2 needsMipmap:(BOOL)arg3 ;
-(id)newIndexBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)newRadianceTextureForEnvironmentTexture:(id)arg0 engineContext:(struct __C3DEngineContext *)arg1 cpuAccessible:(BOOL)arg2 commandBuffer:(id)arg3 ;
-(id)newRenderPipelineStateWithDesc:(struct ? )arg0 ;
-(id)newTextureUsingMTKTextureLoaderWithURL:(id)arg0 options:(id)arg1 ;
-(id)newTextureWithDescriptor:(id)arg0 ;
-(id)radianceTextureForEnvironmentTexture:(id)arg0 engineContext:(struct __C3DEngineContext *)arg1 commandBuffer:(id)arg2 ;
-(id)renderResourceForEffectSlot:(struct __C3DEffectSlot *)arg0 withEngineContext:(struct __C3DEngineContext *)arg1 didFallbackToDefaultTexture:(*BOOL)arg2 ;
-(id)renderResourceForImage:(struct __C3DImage *)arg0 sampler:(struct __C3DTextureSampler *)arg1 options:(int)arg2 engineContext:(struct __C3DEngineContext *)arg3 didFallbackToDefaultTexture:(*BOOL)arg4 ;
-(id)renderResourceForImageProxy:(struct __C3DImageProxy *)arg0 sampler:(struct __C3DTextureSampler *)arg1 engineContext:(struct __C3DEngineContext *)arg2 didFallbackToDefaultTexture:(*BOOL)arg3 ;
-(id)renderResourceForMesh:(struct __C3DMesh *)arg0 dataKind:(unsigned char)arg1 ;
-(id)renderResourceForMeshElement:(struct __C3DMeshElement *)arg0 ;
-(id)renderResourceForMeshSource:(struct __C3DMeshSource *)arg0 ;
-(id)renderResourceForProgramDesc:(struct ? )arg0 renderPassDescriptor:(id)arg1 ;
-(id)renderResourceForRasterizerState:(struct __C3DRasterizerStates *)arg0 reverseZ:(BOOL)arg1 ;
-(id)renderResourceForSampler:(struct __C3DTextureSampler *)arg0 ;
-(id)shFromCPU:(id)arg0 commandBuffer:(id)arg1 ;
-(id)specularDFGTextureWithRenderContext:(id)arg0 ;
-(id)sphericalHarmonicsForEnvironmentTexture:(id)arg0 order:(NSUInteger)arg1 commandBuffer:(id)arg2 ;
-(id)textureForSamplingTexture:(id)arg0 atSize:(NSUInteger)arg1 mipmapLevelCount:(*NSUInteger)arg2 renderContext:(id)arg3 ;
-(id)unstageTexture:(id)arg0 commandBuffer:(id)arg1 ;
-(id)wireframeResourceForRendererElement:(struct __C3DRendererElement *)arg0 engineContext:(struct __C3DEngineContext *)arg1 passInstance:(struct __C3DFXPassInstance *)arg2 hashPass:(NSUInteger)arg3 ;
-(struct __C3DEngineStats *)stats;
-(void)__updateMutableMesh:(struct __C3DMesh *)arg0 withMetalMesh:(id)arg1 ;
-(void)_bakeSphericalHamonicsBasedIrradianceTexture:(id)arg0 forEnvironmentTexture:(id)arg1 renderContext:(id)arg2 applySH:(id)arg3 ;
-(void)_bakeStochasticIrradianceTexture:(id)arg0 forEnvironmentTexture:(id)arg1 mipmapLevelForSampling:(NSUInteger)arg2 useTextureView:(BOOL)arg3 renderContext:(id)arg4 ;
-(void)_configureComputePipeline:(id)arg0 withDescriptor:(id)arg1 ;
-(void)_createPipelineStateWithDescriptor:(id)arg0 desc:(struct ? )arg1 pipeline:(id)arg2 ;
-(void)_enqueueCopyFromTexture:(id)arg0 toTexture:(id)arg1 blitEncoder:(struct SCNMTLBlitCommandEncoder *)arg2 generateMipMaps:(BOOL)arg3 ;
-(void)_geometryWillDie:(id)arg0 ;
-(void)_imageProxyWillDie:(id)arg0 ;
-(void)_imageWillDie:(id)arg0 ;
-(void)_materialWillDie:(id)arg0 ;
-(void)_meshElementWillDie:(id)arg0 ;
-(void)_meshSourceWillDie:(id)arg0 ;
-(void)_meshWillDie:(id)arg0 ;
-(void)_morphWillDie:(id)arg0 ;
-(void)_passWillDie:(id)arg0 ;
-(void)_programHashCodeWillDie:(id)arg0 ;
-(void)_programWillDie:(id)arg0 ;
-(void)_rasterizerStateDidDie:(*void)arg0 ;
-(void)_removeMatchingProgram:(struct __C3DFXMetalProgram *)arg0 pass:(struct __C3DFXPass *)arg1 ;
-(void)_skinWillDie:(id)arg0 ;
-(void)commandBufferDidCompleteWithError:(id)arg0 ;
-(void)dealloc;
-(void)dispatchForCubemap:(id)arg0 computeEncoder:(id)arg1 pipelineState:(id)arg2 ;
-(void)dispatchForTexture:(id)arg0 computeEncoder:(id)arg1 pipelineState:(id)arg2 ;
-(void)flush;
-(void)reloadPipelinesIfNeeded;
-(void)removeAllShaders;
-(void)resetRasterizerStates;


@end


#endif