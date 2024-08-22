// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLRENDERPIPELINEDESCRIPTORINTERNAL_H
#define MTLRENDERPIPELINEDESCRIPTORINTERNAL_H



#import "MTLRenderPipelineDescriptor.h"

@interface MTLRenderPipelineDescriptorInternal : MTLRenderPipelineDescriptor {
    MTLRenderPipelineDescriptorPrivate _private;
    FlatBufferBuilder _builder;
}


@property (nonatomic) BOOL forceSoftwareVertexFetch;
@property (nonatomic) NSUInteger postVertexDumpBufferIndex;


-(*void)getPipelineScript;
-(BOOL)forceResourceIndex;
-(BOOL)isAlphaTestEnabled;
-(BOOL)isAlphaToCoverageEnabled;
-(BOOL)isAlphaToOneEnabled;
-(BOOL)isDepthStencilWriteDisabled;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLogicOperationEnabled;
-(BOOL)isPointCoordLowerLeft;
-(BOOL)isPointSizeOutputVS;
-(BOOL)isPointSmoothEnabled;
-(BOOL)isRasterizationEnabled;
-(BOOL)isTessellationFactorScaleEnabled;
-(BOOL)isTwoSideEnabled;
-(BOOL)needsCustomBorderColorSamplers;
-(BOOL)openGLModeEnabled;
-(BOOL)sampleCoverageInvert;
-(BOOL)supportAddingFragmentBinaryFunctions;
-(BOOL)supportAddingVertexBinaryFunctions;
-(BOOL)supportIndirectCommandBuffers;
-(BOOL)validateWithDevice:(id)arg0 error:(*id)arg1 ;
-(NSInteger)textureWriteRoundingMode;
-(NSUInteger)alphaTestFunction;
-(NSUInteger)colorSampleCount;
-(NSUInteger)depthAttachmentPixelFormat;
-(NSUInteger)hash;
-(NSUInteger)inputPrimitiveTopology;
-(NSUInteger)logicOperation;
-(NSUInteger)maxFragmentCallStackDepth;
-(NSUInteger)maxTessellationFactor;
-(NSUInteger)maxVertexAmplificationCount;
-(NSUInteger)maxVertexCallStackDepth;
-(NSUInteger)rasterSampleCount;
-(NSUInteger)resourceIndex;
-(NSUInteger)sampleCount;
-(NSUInteger)sampleMask;
-(NSUInteger)stencilAttachmentPixelFormat;
-(NSUInteger)tessellationControlPointIndexType;
-(NSUInteger)tessellationFactorFormat;
-(NSUInteger)tessellationFactorStepFunction;
-(NSUInteger)tessellationOutputWindingOrder;
-(NSUInteger)tessellationPartitionMode;
-(NSUInteger)vertexAmplificationMode;
-(float)sampleCoverage;
-(id)binaryArchives;
-(id)colorAttachments;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)driverCompilerOptions;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)fragmentBuffers;
-(id)fragmentFunction;
-(id)fragmentLinkedFunctions;
-(id)fragmentPreloadedLibraries;
-(id)init;
-(id)insertFragmentLibraries;
-(id)insertVertexLibraries;
-(id)label;
-(id)newSerializedFragmentDataWithFlags:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)newSerializedVertexDataWithFlags:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)newSerializedVertexDataWithFlags:(NSUInteger)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)pipelineLibrary;
-(id)pluginData;
-(id)serializeFragmentData;
-(id)vertexBuffers;
-(id)vertexDescriptor;
-(id)vertexFunction;
-(id)vertexLinkedFunctions;
-(id)vertexPreloadedLibraries;
-(struct MTLRenderPipelineDescriptorPrivate *)_descriptorPrivate;
-(unsigned char)clipDistanceEnableMask;
-(unsigned int)fragmentDepthCompareClampMask;
-(unsigned int)vertexDepthCompareClampMask;
-(void)attachVertexDescriptor:(id)arg0 ;
-(void)dealloc;
-(void)reset;
-(void)setAlphaTestEnabled:(BOOL)arg0 ;
-(void)setAlphaTestFunction:(NSUInteger)arg0 ;
-(void)setAlphaToCoverageEnabled:(BOOL)arg0 ;
-(void)setAlphaToOneEnabled:(BOOL)arg0 ;
-(void)setBinaryArchives:(id)arg0 ;
-(void)setClipDistanceEnableMask:(unsigned char)arg0 ;
-(void)setColorSampleCount:(NSUInteger)arg0 ;
-(void)setDepthAttachmentPixelFormat:(NSUInteger)arg0 ;
-(void)setDepthStencilWriteDisabled:(BOOL)arg0 ;
-(void)setDriverCompilerOptions:(id)arg0 ;
-(void)setForceResourceIndex:(BOOL)arg0 ;
-(void)setFragmentDepthCompareClampMask:(unsigned int)arg0 ;
-(void)setFragmentFunction:(id)arg0 ;
-(void)setFragmentLinkedFunctions:(id)arg0 ;
-(void)setFragmentPreloadedLibraries:(id)arg0 ;
-(void)setInputPrimitiveTopology:(NSUInteger)arg0 ;
-(void)setInsertFragmentLibraries:(id)arg0 ;
-(void)setInsertVertexLibraries:(id)arg0 ;
-(void)setLabel:(id)arg0 ;
-(void)setLogicOperation:(NSUInteger)arg0 ;
-(void)setLogicOperationEnabled:(BOOL)arg0 ;
-(void)setMaxFragmentCallStackDepth:(NSUInteger)arg0 ;
-(void)setMaxTessellationFactor:(NSUInteger)arg0 ;
-(void)setMaxVertexAmplificationCount:(NSUInteger)arg0 ;
-(void)setMaxVertexCallStackDepth:(NSUInteger)arg0 ;
-(void)setNeedsCustomBorderColorSamplers:(BOOL)arg0 ;
-(void)setOpenGLModeEnabled:(BOOL)arg0 ;
-(void)setPipelineLibrary:(id)arg0 ;
-(void)setPluginData:(id)arg0 ;
-(void)setPointCoordLowerLeft:(BOOL)arg0 ;
-(void)setPointSizeOutputVS:(BOOL)arg0 ;
-(void)setPointSmoothEnabled:(BOOL)arg0 ;
-(void)setRasterSampleCount:(NSUInteger)arg0 ;
-(void)setRasterizationEnabled:(BOOL)arg0 ;
-(void)setResourceIndex:(NSUInteger)arg0 ;
-(void)setSampleCount:(NSUInteger)arg0 ;
-(void)setSampleCoverage:(float)arg0 ;
-(void)setSampleCoverageInvert:(BOOL)arg0 ;
-(void)setSampleMask:(NSUInteger)arg0 ;
-(void)setStencilAttachmentPixelFormat:(NSUInteger)arg0 ;
-(void)setSupportAddingFragmentBinaryFunctions:(BOOL)arg0 ;
-(void)setSupportAddingVertexBinaryFunctions:(BOOL)arg0 ;
-(void)setSupportIndirectCommandBuffers:(BOOL)arg0 ;
-(void)setTessellationControlPointIndexType:(NSUInteger)arg0 ;
-(void)setTessellationFactorFormat:(NSUInteger)arg0 ;
-(void)setTessellationFactorScaleEnabled:(BOOL)arg0 ;
-(void)setTessellationFactorStepFunction:(NSUInteger)arg0 ;
-(void)setTessellationOutputWindingOrder:(NSUInteger)arg0 ;
-(void)setTessellationPartitionMode:(NSUInteger)arg0 ;
-(void)setTextureWriteRoundingMode:(NSInteger)arg0 ;
-(void)setTwoSideEnabled:(BOOL)arg0 ;
-(void)setVertexAmplificationMode:(NSUInteger)arg0 ;
-(void)setVertexDepthCompareClampMask:(unsigned int)arg0 ;
-(void)setVertexDescriptor:(id)arg0 ;
-(void)setVertexFunction:(id)arg0 ;
-(void)setVertexLinkedFunctions:(id)arg0 ;
-(void)setVertexPreloadedLibraries:(id)arg0 ;
-(void)validateWithDevice:(id)arg0 ;


@end


#endif