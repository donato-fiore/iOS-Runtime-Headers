// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLCOMPUTEPIPELINEDESCRIPTORINTERNAL_H
#define MTLCOMPUTEPIPELINEDESCRIPTORINTERNAL_H



#import "MTLComputePipelineDescriptor.h"

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {
    MTLComputePipelineDescriptorPrivate _private;
    FlatBufferBuilder _builder;
}




-(*void)getPipelineScript;
-(BOOL)forceResourceIndex;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)needsCustomBorderColorSamplers;
-(BOOL)openCLModeEnabled;
-(BOOL)openGLModeEnabled;
-(BOOL)supportAddingBinaryFunctions;
-(BOOL)supportIndirectCommandBuffers;
-(BOOL)threadGroupSizeIsMultipleOfThreadExecutionWidth;
-(BOOL)validateWithDevice:(id)arg0 error:(*id)arg1 ;
-(NSInteger)textureWriteFPRoundingMode;
-(NSInteger)textureWriteRoundingMode;
-(NSUInteger)hash;
-(NSUInteger)maxCallStackDepth;
-(NSUInteger)maxTotalThreadsPerThreadgroup;
-(NSUInteger)resourceIndex;
-(id)binaryArchives;
-(id)binaryLibraries;
-(id)buffers;
-(id)computeFunction;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)driverCompilerOptions;
-(id)dynamicLibraries;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)functionPointers;
-(id)gpuCompilerSPIOptions;
-(id)init;
-(id)insertLibraries;
-(id)label;
-(id)linkedFunctions;
-(id)newSerializedComputeData;
-(id)newSerializedComputeDataWithFlags:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)pipelineLibrary;
-(id)pluginData;
-(id)preloadedLibraries;
-(id)profileControl;
-(id)stageInputDescriptor;
-(struct MTLComputePipelineDescriptorPrivate *)_descriptorPrivate;
-(void)dealloc;
-(void)reset;
-(void)setBinaryArchives:(id)arg0 ;
-(void)setBinaryLibraries:(id)arg0 ;
-(void)setComputeFunction:(id)arg0 ;
-(void)setDriverCompilerOptions:(id)arg0 ;
-(void)setDynamicLibraries:(id)arg0 ;
-(void)setForceResourceIndex:(BOOL)arg0 ;
-(void)setFunctionPointers:(id)arg0 ;
-(void)setGpuCompilerSPIOptions:(id)arg0 ;
-(void)setInsertLibraries:(id)arg0 ;
-(void)setLabel:(id)arg0 ;
-(void)setLinkedFunctions:(id)arg0 ;
-(void)setMaxCallStackDepth:(NSUInteger)arg0 ;
-(void)setMaxTotalThreadsPerThreadgroup:(NSUInteger)arg0 ;
-(void)setNeedsCustomBorderColorSamplers:(BOOL)arg0 ;
-(void)setOpenCLModeEnabled:(BOOL)arg0 ;
-(void)setOpenGLModeEnabled:(BOOL)arg0 ;
-(void)setPipelineLibrary:(id)arg0 ;
-(void)setPluginData:(id)arg0 ;
-(void)setPreloadedLibraries:(id)arg0 ;
-(void)setProfileControl:(id)arg0 ;
-(void)setResourceIndex:(NSUInteger)arg0 ;
-(void)setStageInputDescriptor:(id)arg0 ;
-(void)setSupportAddingBinaryFunctions:(BOOL)arg0 ;
-(void)setSupportIndirectCommandBuffers:(BOOL)arg0 ;
-(void)setTextureWriteFPRoundingMode:(NSInteger)arg0 ;
-(void)setTextureWriteRoundingMode:(NSInteger)arg0 ;
-(void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)arg0 ;
-(void)validateWithDevice:(id)arg0 ;


@end


#endif