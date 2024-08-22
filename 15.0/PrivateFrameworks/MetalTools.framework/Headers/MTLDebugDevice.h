// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLDEBUGDEVICE_H
#define MTLDEBUGDEVICE_H



#import "MTLToolsDevice.h"

@interface MTLDebugDevice : MTLToolsDevice {
    MTLSamplerDescriptorHashMap _argumentBufferSamplers;
    os_unfair_lock_s _referenceTrackingCommandBufferLock;
    unordered_set<MTLDebugCommandBuffer *, std::hash<MTLDebugCommandBuffer *>, std::equal_to<MTLDebugCommandBuffer *>, std::allocator<MTLDebugCommandBuffer *>> _referenceTrackingCommandBuffers;
    CheckerboardRenderTargetPipelineCache _checkerboardRTPipelineCache;
}


@property (readonly) BOOL loadValidationEnabled; // ivar: _loadValidationEnabled
@property (readonly) BOOL storeValidationEnabled; // ivar: _storeValidationEnabled


+(BOOL)complainAboutSloppyTextureUsage;
-(BOOL)validateDynamicLibrary:(id)arg0 state:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)validateDynamicLibraryURL:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)minLinearTextureAlignmentForPixelFormat:(NSUInteger)arg0 ;
-(NSUInteger)minimumLinearTextureAlignmentForPixelFormat:(NSUInteger)arg0 ;
-(id)_newComputePipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)_newComputePipelineStateWithFunction:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)_newRenderPipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)_newRenderPipelineStateWithTileDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)getDepthStencilStateForBaseObject:(id)arg0 descriptor:(id)arg1 ;
-(id)getDynamicLibraryForBaseObject:(id)arg0 ;
-(id)getFunctionForBaseObject:(id)arg0 library:(id)arg1 ;
-(id)getSamplerStateForBaseObject:(id)arg0 descriptor:(id)arg1 ;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(id)loadDynamicLibrariesForComputeDescriptor:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)loadDynamicLibrariesForFunction:(id)arg0 insertLibraries:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)newAccelerationStructureWithBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(id)newAccelerationStructureWithDescriptor:(id)arg0 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 resourceIndex:(NSUInteger)arg1 ;
-(id)newArgumentEncoderWithArguments:(id)arg0 ;
-(id)newArgumentEncoderWithLayout:(id)arg0 ;
-(id)newBinaryArchiveWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newBinaryLibraryWithOptions:(NSUInteger)arg0 url:(id)arg1 error:(*id)arg2 ;
-(id)newBufferWithBytes:(*void)arg0 length:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(id)newBufferWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 options:(NSUInteger)arg2 deallocator:(id)arg3 ;
-(id)newBufferWithDescriptor:(id)arg0 ;
-(id)newBufferWithIOSurface:(struct __IOSurface *)arg0 ;
-(id)newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)newCommandQueue;
-(id)newCommandQueueWithDescriptor:(id)arg0 ;
-(id)newCommandQueueWithMaxCommandBufferCount:(NSUInteger)arg0 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)newComputePipelineStateWithFunction:(id)arg0 error:(*id)arg1 ;
-(id)newComputePipelineStateWithFunction:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg0 imageFilterFunctionInfo:(struct ? *)arg1 error:(*id)arg2 ;
-(id)newCounterSampleBufferWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newDagStringWithGraphs:(id)arg0 ;
-(id)newDefaultLibrary;
-(id)newDefaultLibraryWithBundle:(id)arg0 error:(*id)arg1 ;
-(id)newDepthStencilStateWithDescriptor:(id)arg0 ;
-(id)newDynamicLibrary:(id)arg0 computeDescriptor:(id)arg1 error:(*id)arg2 ;
-(id)newDynamicLibrary:(id)arg0 error:(*id)arg1 ;
-(id)newDynamicLibraryFromURL:(id)arg0 error:(*id)arg1 ;
-(id)newDynamicLibraryWithURL:(id)arg0 error:(*id)arg1 ;
-(id)newDynamicLibraryWithURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)newEvent;
-(id)newFence;
-(id)newHeapWithDescriptor:(id)arg0 ;
-(id)newIndirectCommandBufferWithDescriptor:(id)arg0 maxCommandCount:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newLateEvalEvent;
-(id)newLibraryWithDAG:(id)arg0 functions:(id)arg1 error:(*id)arg2 ;
-(id)newLibraryWithData:(id)arg0 error:(*id)arg1 ;
-(id)newLibraryWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newLibraryWithDescriptorSPI:(id)arg0 error:(*id)arg1 ;
-(id)newLibraryWithFile:(id)arg0 error:(*id)arg1 ;
-(id)newLibraryWithImageFilterFunctionsSPI:(id)arg0 imageFilterFunctionInfo:(struct ? *)arg1 error:(*id)arg2 ;
-(id)newLibraryWithSource:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)newLibraryWithStitchedDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newLibraryWithStitchedDescriptorSPI:(id)arg0 error:(*id)arg1 ;
-(id)newLibraryWithURL:(id)arg0 error:(*id)arg1 ;
-(id)newPipelineLibraryWithFilePath:(id)arg0 error:(*id)arg1 ;
-(id)newRasterizationRateMapWithDescriptor:(id)arg0 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)newRenderPipelineStateWithTileDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newRenderPipelineStateWithTileDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)newSamplerStateWithDescriptor:(id)arg0 ;
-(id)newSharedEvent;
-(id)newSharedEventWithHandle:(id)arg0 ;
-(id)newSharedEventWithMachPort:(unsigned int)arg0 ;
-(id)newSharedTextureWithDescriptor:(id)arg0 ;
-(id)newSharedTextureWithHandle:(id)arg0 ;
-(id)newTextureLayoutWithDescriptor:(id)arg0 isHeapOrBufferBacked:(BOOL)arg1 ;
-(id)newTextureWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 descriptor:(id)arg2 deallocator:(id)arg3 ;
-(id)newTextureWithDescriptor:(id)arg0 ;
-(id)newTextureWithDescriptor:(id)arg0 iosurface:(struct __IOSurface *)arg1 plane:(NSUInteger)arg2 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg0 ;
-(struct ? )accelerationStructureSizesWithDescriptor:(id)arg0 ;
-(struct ? )heapBufferSizeAndAlignWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(struct ? )heapTextureSizeAndAlignWithDescriptor:(id)arg0 ;
-(struct MTLTargetDeviceArch *)targetDeviceInfo;
-(void)_newComputePipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)_newComputePipelineStateWithFunction:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)_newRenderPipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)_newRenderPipelineStateWithTileDescriptor:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)addReferenceTrackingCommandBuffer:(id)arg0 ;
-(void)clearRenderEncoder:(id)arg0 writeMask:(NSUInteger)arg1 withCheckerboard:(*float)arg2 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg0 completionHandler:(id)arg1 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)newComputePipelineStateWithFunction:(id)arg0 completionHandler:(id)arg1 ;
-(void)newComputePipelineStateWithFunction:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)newLibraryWithDescriptor:(id)arg0 completionHandler:(id)arg1 ;
-(void)newLibraryWithSource:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)newLibraryWithStitchedDescriptor:(id)arg0 completionHandler:(id)arg1 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg0 completionHandler:(id)arg1 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)newRenderPipelineStateWithTileDescriptor:(id)arg0 completionHandler:(id)arg1 ;
-(void)newRenderPipelineStateWithTileDescriptor:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)notifyExternalReferencesNonZeroOnDealloc:(id)arg0 ;
-(void)notifySamplerStateDeallocated:(id)arg0 ;
-(void)removeReferenceTrackingCommandBuffer:(id)arg0 ;
-(void)validateLinkedFunctions:(id)arg0 context:(struct _MTLMessageContext *)arg1 ;
-(void)validateMemorylessResource:(id)arg0 context:(struct _MTLMessageContext *)arg1 ;
-(void)validateNewBufferArgs:(NSUInteger)arg0 options:(NSUInteger)arg1 context:(struct _MTLMessageContext *)arg2 ;
-(void)validateRaytracing;
-(void)validateResourceOptions:(NSUInteger)arg0 isTexture:(BOOL)arg1 isIOSurface:(BOOL)arg2 context:(struct _MTLMessageContext *)arg3 ;
-(void)validateTraceBuffer:(NSUInteger)arg0 maxBufferCount:(NSUInteger)arg1 options:(NSUInteger)arg2 ;


@end


#endif