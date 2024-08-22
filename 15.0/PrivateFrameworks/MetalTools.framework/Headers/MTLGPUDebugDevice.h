// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLGPUDEBUGDEVICE_H
#define MTLGPUDEBUGDEVICE_H

@class NSData, NSMutableArray;
@protocol MTLRenderPipelineState, MTLDepthStencilState, MTLComputePipelineState;


#import "MTLToolsDevice.h"

@interface MTLGPUDebugDevice : MTLToolsDevice {
    MetalBufferHeap bufferHeap;
    Options boundsCheckOptions;
    GPUDebugDeviceOptions deviceOptions;
    GPUDebugBufferDescriptorHeap globalBufferHeap;
    GPUDebugConstantBufferCache constantBufferCache;
    GlobalResidentBufferList globalICBBufferResidentList;
    NSData *_boundsCheckOptionsData;
    NSMutableArray *_argumentDescriptors;
    once_flag _deviceInitFlag;
    once_flag _icbPipelineInit;
    id<MTLRenderPipelineState> *_icbInheritVertexPipelineState;
    id<MTLRenderPipelineState> *_icbInheritNoneVertexPipelineState;
    id<MTLRenderPipelineState> *_icbInheritBuffersVertexPipelineState;
    id<MTLDepthStencilState> *_icbDepthStencilState;
    id<MTLComputePipelineState> *_icbInheritComputePipelineState;
    id<MTLComputePipelineState> *_icbInheritNoneComputePipelineState;
    id<MTLComputePipelineState> *_icbInheritBuffersComputePipelineState;
    id<MTLComputePipelineState> *_icbInheritBothComputePipelineState;
}


@property (readonly, nonatomic) NSObject<MTLDepthStencilState> *ICB_DepthStencilState;
@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *ICB_Inherit_Both_ComputePipelineState;
@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *ICB_Inherit_Buffers_ComputePipelineState;
@property (readonly, nonatomic) NSObject<MTLRenderPipelineState> *ICB_Inherit_Buffers_VertexPipelineState;
@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *ICB_Inherit_None_ComputePipelineState;
@property (readonly, nonatomic) NSObject<MTLRenderPipelineState> *ICB_Inherit_None_VertexPipelineState;
@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *ICB_Inherit_PSO_ComputePipelineState;
@property (readonly, nonatomic) NSObject<MTLRenderPipelineState> *ICB_Inherit_PSO_VertexPipelineState;
@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *accelerationStructureComputePipelineState; // ivar: _accelerationStructureComputePipelineState


-(BOOL)supportsArgumentBuffersTier2;
-(BOOL)supportsCMPIndirectCommandBuffers;
-(BOOL)supportsForkJoin;
-(BOOL)supportsFunctionPointersFromRender;
-(BOOL)supportsGFXIndirectCommandBuffers;
-(BOOL)supportsRaytracing;
-(BOOL)supportsRaytracingFromRender;
-(BOOL)supportsRenderDynamicLibraries;
-(BOOL)supportsSharedFunctionTables;
-(BOOL)supportsStackOverflowErrorCode;
-(id)_modifyComputePipelineDescriptor:(id)arg0 ;
-(id)_modifyPluginData:(id)arg0 ;
-(id)_modifyRenderPipelineDescriptor:(id)arg0 ;
-(id)_modifyTilePipelineDescriptor:(id)arg0 ;
-(id)getDynamicLibraryForBaseObject:(id)arg0 ;
-(id)getFunctionForBaseObject:(id)arg0 library:(id)arg1 ;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(id)loadDynamicLibrariesForComputeDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)loadDynamicLibrariesForComputeDescriptor:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)loadDynamicLibrariesForFunction:(id)arg0 insertLibraries:(id)arg1 error:(*id)arg2 ;
-(id)loadDynamicLibrariesForFunction:(id)arg0 insertLibraries:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)newAccelerationStructureWithBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(id)newAccelerationStructureWithDescriptor:(id)arg0 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 resourceIndex:(NSUInteger)arg1 ;
-(id)newArgumentEncoderWithArguments:(id)arg0 ;
-(id)newArgumentEncoderWithArguments:(id)arg0 structType:(*id)arg1 ;
-(id)newArgumentEncoderWithLayout:(id)arg0 ;
-(id)newBinaryArchiveWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newBinaryLibraryWithOptions:(NSUInteger)arg0 url:(id)arg1 error:(*id)arg2 ;
-(id)newBufferWithBytes:(*void)arg0 length:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(id)newBufferWithBytes:(*void)arg0 length:(NSUInteger)arg1 options:(NSUInteger)arg2 gpuAddress:(NSUInteger)arg3 ;
-(id)newBufferWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 options:(NSUInteger)arg2 deallocator:(id)arg3 ;
-(id)newBufferWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 options:(NSUInteger)arg2 gpuAddress:(NSUInteger)arg3 deallocator:(id)arg4 ;
-(id)newBufferWithDescriptor:(id)arg0 ;
-(id)newBufferWithIOSurface:(struct __IOSurface *)arg0 ;
-(id)newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 gpuAddress:(NSUInteger)arg2 ;
-(id)newCommandQueue;
-(id)newCommandQueueWithDescriptor:(id)arg0 ;
-(id)newCommandQueueWithMaxCommandBufferCount:(NSUInteger)arg0 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)newComputePipelineStateWithFunction:(id)arg0 error:(*id)arg1 ;
-(id)newComputePipelineStateWithFunction:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)newDagStringWithGraphs:(id)arg0 ;
-(id)newDefaultLibrary;
-(id)newDefaultLibraryWithBundle:(id)arg0 error:(*id)arg1 ;
-(id)newDynamicLibrary:(id)arg0 computeDescriptor:(id)arg1 error:(*id)arg2 ;
-(id)newDynamicLibrary:(id)arg0 error:(*id)arg1 ;
-(id)newDynamicLibraryFromURL:(id)arg0 error:(*id)arg1 ;
-(id)newDynamicLibraryWithURL:(id)arg0 error:(*id)arg1 ;
-(id)newDynamicLibraryWithURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)newHeapWithDescriptor:(id)arg0 ;
-(id)newIndirectCommandBufferWithDescriptor:(id)arg0 maxCommandCount:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(id)newInternalBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newLibraryWithCIFilters:(id)arg0 imageFilterFunctionInfo:(struct ? *)arg1 error:(*id)arg2 ;
-(id)newLibraryWithCIFiltersForComputePipeline:(id)arg0 imageFilterFunctionInfo:(struct ? *)arg1 error:(*id)arg2 ;
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
-(id)newRenderPipelineStateWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)newRenderPipelineStateWithTileDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newRenderPipelineStateWithTileDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)newStageArgumentBuffer;
-(id)newStageBufferArgumentEncoder;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg0 ;
-(id)unwrapAndModifyComputePipelineDescriptor:(*id)arg0 options:(*NSUInteger)arg1 ;
-(id)unwrapAndModifyRenderPipelineDescriptor:(*id)arg0 options:(*NSUInteger)arg1 ;
-(id)unwrapAndModifyTileRenderPipelineDescriptor:(*id)arg0 options:(*NSUInteger)arg1 ;
-(id)unwrapStitchedLibraryDescriptor:(id)arg0 ;
-(struct ? )accelerationStructureSizesWithDescriptor:(id)arg0 ;
-(void)_modifyCompileOptions:(*NSUInteger)arg0 ;
-(void)_prepareBinaryLinkedFunctions:(id)arg0 ;
-(void)_prepareInsertLibraries:(id)arg0 ;
-(void)dealloc;
-(void)modifyFunctionDescriptor:(id)arg0 ;
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
-(void)onComputePipelineCreated:(id)arg0 ;
-(void)onRenderPipelineCreated:(id)arg0 ;
-(void)validateRaytracing;


@end


#endif