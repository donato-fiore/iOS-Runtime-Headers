// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLGPUDEBUGFUNCTION_H
#define MTLGPUDEBUGFUNCTION_H



#import "MTLToolsFunction.h"
#import "MTLGPUDebugImageData.h"

@interface MTLGPUDebugFunction : MTLToolsFunction {
    MTLGPUDebugImageData *data;
    mutex _argumentLayoutsMutex;
    unordered_map<unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, std::unique_ptr<GPUDebugArgumentEncoderLayout>>>> _argumentLayouts;
}




+(id)convertUserType:(id)arg0 ;
+(id)internalArrayTypeFromUserArrayType:(id)arg0 ;
+(id)internalStructTypeFromUserStructType:(id)arg0 ;
-(id)initWithFunction:(id)arg0 library:(id)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 pipelineLibrary:(id)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 reflection:(*id)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 reflection:(*id)arg1 binaryArchives:(id)arg2 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 reflection:(*id)arg1 pipelineLibrary:(id)arg2 ;
-(id)newArgumentEncoderWithBufferIndex:(NSUInteger)arg0 reflection:(*id)arg1 pipelineLibrary:(id)arg2 binaryArchives:(id)arg3 ;
-(void)_initImageData;
-(void)dealloc;
-(void)prepareForBinaryFunctionUsage;
-(void)prepareForComputePipelineUsage;
-(void)prepareForRenderPipelineUsage;


@end


#endif