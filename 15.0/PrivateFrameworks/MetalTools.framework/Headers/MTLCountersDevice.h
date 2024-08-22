// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLCOUNTERSDEVICE_H
#define MTLCOUNTERSDEVICE_H



#import "MTLToolsDevice.h"

@interface MTLCountersDevice : MTLToolsDevice

@property (readonly, nonatomic) BOOL APITimingEnabled; // ivar: _APITimingEnabled


-(id)_newRenderPipelineStateWithTileDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
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
-(id)newDagStringWithGraphs:(id)arg0 ;
-(id)newDefaultLibrary;
-(id)newDefaultLibraryWithBundle:(id)arg0 error:(*id)arg1 ;
-(id)newDepthStencilStateWithDescriptor:(id)arg0 ;
-(id)newDynamicLibrary:(id)arg0 computeDescriptor:(id)arg1 error:(*id)arg2 ;
-(id)newDynamicLibrary:(id)arg0 error:(*id)arg1 ;
-(id)newDynamicLibraryFromURL:(id)arg0 error:(*id)arg1 ;
-(id)newDynamicLibraryWithURL:(id)arg0 error:(*id)arg1 ;
-(id)newFence;
-(id)newFunctionWithGLCoreIR:(*void)arg0 functionType:(NSUInteger)arg1 ;
-(id)newFunctionWithGLCoreIR:(*void)arg0 inputsDescription:(id)arg1 functionType:(NSUInteger)arg2 ;
-(id)newFunctionWithGLESIR:(*void)arg0 functionType:(NSUInteger)arg1 ;
-(id)newFunctionWithGLESIR:(*void)arg0 inputsDescription:(id)arg1 functionType:(NSUInteger)arg2 ;
-(id)newFunctionWithGLIR:(*void)arg0 functionType:(NSUInteger)arg1 ;
-(id)newFunctionWithGLIR:(*void)arg0 inputsDescription:(id)arg1 functionType:(NSUInteger)arg2 ;
-(id)newHeapWithDescriptor:(id)arg0 ;
-(id)newLibraryWithCIFilters:(id)arg0 imageFilterFunctionInfo:(struct ? *)arg1 error:(*id)arg2 ;
-(id)newLibraryWithCIFiltersForComputePipeline:(id)arg0 imageFilterFunctionInfo:(struct ? *)arg1 error:(*id)arg2 ;
-(id)newLibraryWithDAG:(id)arg0 functions:(id)arg1 error:(*id)arg2 ;
-(id)newLibraryWithData:(id)arg0 error:(*id)arg1 ;
-(id)newLibraryWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newLibraryWithDescriptorSPI:(id)arg0 error:(*id)arg1 ;
-(id)newLibraryWithFile:(id)arg0 error:(*id)arg1 ;
-(id)newLibraryWithGraphs:(id)arg0 functions:(id)arg1 error:(*id)arg2 ;
-(id)newLibraryWithGraphsSPI:(id)arg0 functions:(id)arg1 error:(*id)arg2 ;
-(id)newLibraryWithImageFilterFunctionsSPI:(id)arg0 imageFilterFunctionInfo:(struct ? *)arg1 error:(*id)arg2 ;
-(id)newLibraryWithSource:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)newLibraryWithStitchedDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newLibraryWithStitchedDescriptorSPI:(id)arg0 error:(*id)arg1 ;
-(id)newLibraryWithURL:(id)arg0 error:(*id)arg1 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)newRenderPipelineStateWithTileDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)newRenderPipelineStateWithTileDescriptor:(id)arg0 options:(NSUInteger)arg1 reflection:(*id)arg2 error:(*id)arg3 ;
-(id)newSamplerStateWithDescriptor:(id)arg0 ;
-(id)newTextureWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 descriptor:(id)arg2 deallocator:(id)arg3 ;
-(id)newTextureWithDescriptor:(id)arg0 ;
-(id)newTextureWithDescriptor:(id)arg0 iosurface:(struct __IOSurface *)arg1 plane:(NSUInteger)arg2 ;
-(void)_newRenderPipelineStateWithTileDescriptor:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
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


@end


#endif