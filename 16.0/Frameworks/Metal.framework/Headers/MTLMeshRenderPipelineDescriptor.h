// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLMESHRENDERPIPELINEDESCRIPTOR_H
#define MTLMESHRENDERPIPELINEDESCRIPTOR_H

@class NSString;
@protocol NSCopying, MTLFunction;

#import <Foundation/Foundation.h>

#import "MTLRenderPipelineColorAttachmentDescriptorArray.h"
#import "MTLPipelineBufferDescriptorArray.h"

@interface MTLMeshRenderPipelineDescriptor : NSObject <NSCopying>

 {
    MTLMeshRenderPipelineDescriptorPrivate _private;
}


@property (nonatomic, getter=isAlphaToCoverageEnabled) BOOL alphaToCoverageEnabled;
@property (nonatomic, getter=isAlphaToOneEnabled) BOOL alphaToOneEnabled;
@property (readonly) MTLRenderPipelineColorAttachmentDescriptorArray *colorAttachments;
@property (nonatomic) NSUInteger depthAttachmentPixelFormat;
@property (readonly) MTLPipelineBufferDescriptorArray *fragmentBuffers;
@property (retain, nonatomic) NSObject<MTLFunction> *fragmentFunction;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) NSUInteger maxTotalThreadgroupsPerMeshGrid;
@property (nonatomic) NSUInteger maxTotalThreadsPerMeshThreadgroup;
@property (nonatomic) NSUInteger maxTotalThreadsPerObjectThreadgroup;
@property (nonatomic) NSUInteger maxVertexAmplificationCount;
@property (readonly) MTLPipelineBufferDescriptorArray *meshBuffers;
@property (retain, nonatomic) NSObject<MTLFunction> *meshFunction;
@property (nonatomic) BOOL meshThreadgroupSizeIsMultipleOfThreadExecutionWidth;
@property (readonly) MTLPipelineBufferDescriptorArray *objectBuffers;
@property (retain, nonatomic) NSObject<MTLFunction> *objectFunction;
@property (nonatomic) BOOL objectThreadgroupSizeIsMultipleOfThreadExecutionWidth;
@property (nonatomic) NSUInteger payloadMemoryLength;
@property (nonatomic) NSUInteger rasterSampleCount;
@property (nonatomic, getter=isRasterizationEnabled) BOOL rasterizationEnabled;
@property (nonatomic) NSUInteger stencilAttachmentPixelFormat;


-(*void)getPipelineScript;
-(BOOL)forceResourceIndex;
-(BOOL)isAlphaTestEnabled;
-(BOOL)isDepthStencilWriteDisabled;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLogicOperationEnabled;
-(BOOL)isPointCoordLowerLeft;
-(BOOL)isPointSizeOutputVS;
-(BOOL)isPointSmoothEnabled;
-(BOOL)isTwoSideEnabled;
-(BOOL)needsCustomBorderColorSamplers;
-(BOOL)openGLModeEnabled;
-(BOOL)sampleCoverageInvert;
-(BOOL)supportAddingFragmentBinaryFunctions;
-(BOOL)supportAddingMeshBinaryFunctions;
-(BOOL)supportAddingObjectBinaryFunctions;
-(BOOL)supportIndirectCommandBuffers;
-(BOOL)validateWithDevice:(id)arg0 error:(*id)arg1 ;
-(NSInteger)textureWriteRoundingMode;
-(NSUInteger)alphaTestFunction;
-(NSUInteger)colorSampleCount;
-(NSUInteger)hash;
-(NSUInteger)logicOperation;
-(NSUInteger)maxFragmentCallStackDepth;
-(NSUInteger)maxMeshCallStackDepth;
-(NSUInteger)maxObjectCallStackDepth;
-(NSUInteger)resourceIndex;
-(NSUInteger)sampleMask;
-(NSUInteger)vertexAmplificationMode;
-(float)sampleCoverage;
-(id)binaryArchives;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)driverCompilerOptions;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)fragmentLinkedFunctions;
-(id)fragmentPreloadedLibraries;
-(id)init;
-(id)insertFragmentLibraries;
-(id)insertMeshLibraries;
-(id)insertObjectLibraries;
-(id)meshLinkedFunctions;
-(id)meshPreloadedLibraries;
-(id)newRenderPipelineDescriptor;
-(id)newRenderPipelineDescriptorWithDevice:(id)arg0 error:(*id)arg1 ;
-(id)newSerializedFragmentDataWithFlags:(NSUInteger)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)newSerializedMeshDataWithFlags:(NSUInteger)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)newSerializedObjectDataWithFlags:(NSUInteger)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)objectLinkedFunctions;
-(id)objectPreloadedLibraries;
-(id)pipelineLibrary;
-(id)pluginData;
-(id)profileControl;
-(struct ? )maxThreadgroupsPerMeshGrid;
-(struct MTLMeshRenderPipelineDescriptorPrivate *)_descriptorPrivate;
-(unsigned char)clipDistanceEnableMask;
-(unsigned int)explicitVisibilityGroupID;
-(unsigned int)fragmentDepthCompareClampMask;
-(void)_initMembers;
-(void)_releaseMembers;
-(void)dealloc;
-(void)reset;
-(void)setAlphaTestEnabled:(BOOL)arg0 ;
-(void)setAlphaTestFunction:(NSUInteger)arg0 ;
-(void)setBinaryArchives:(id)arg0 ;
-(void)setClipDistanceEnableMask:(unsigned char)arg0 ;
-(void)setColorSampleCount:(NSUInteger)arg0 ;
-(void)setDepthStencilWriteDisabled:(BOOL)arg0 ;
-(void)setDriverCompilerOptions:(id)arg0 ;
-(void)setExplicitVisibilityGroupID:(unsigned int)arg0 ;
-(void)setForceResourceIndex:(BOOL)arg0 ;
-(void)setFragmentDepthCompareClampMask:(unsigned int)arg0 ;
-(void)setFragmentLinkedFunctions:(id)arg0 ;
-(void)setFragmentPreloadedLibraries:(id)arg0 ;
-(void)setInsertFragmentLibraries:(id)arg0 ;
-(void)setInsertMeshLibraries:(id)arg0 ;
-(void)setInsertObjectLibraries:(id)arg0 ;
-(void)setLogicOperation:(NSUInteger)arg0 ;
-(void)setLogicOperationEnabled:(BOOL)arg0 ;
-(void)setMaxFragmentCallStackDepth:(NSUInteger)arg0 ;
-(void)setMaxMeshCallStackDepth:(NSUInteger)arg0 ;
-(void)setMaxObjectCallStackDepth:(NSUInteger)arg0 ;
-(void)setMaxThreadgroupsPerMeshGrid:(struct ? )arg0 ;
-(void)setMeshLinkedFunctions:(id)arg0 ;
-(void)setMeshPreloadedLibraries:(id)arg0 ;
-(void)setNeedsCustomBorderColorSamplers:(BOOL)arg0 ;
-(void)setObjectLinkedFunctions:(id)arg0 ;
-(void)setObjectPreloadedLibraries:(id)arg0 ;
-(void)setOpenGLModeEnabled:(BOOL)arg0 ;
-(void)setPipelineLibrary:(id)arg0 ;
-(void)setPluginData:(id)arg0 ;
-(void)setPointCoordLowerLeft:(BOOL)arg0 ;
-(void)setPointSizeOutputVS:(BOOL)arg0 ;
-(void)setPointSmoothEnabled:(BOOL)arg0 ;
-(void)setProfileControl:(id)arg0 ;
-(void)setResourceIndex:(NSUInteger)arg0 ;
-(void)setSampleCoverage:(float)arg0 ;
-(void)setSampleCoverageInvert:(BOOL)arg0 ;
-(void)setSampleMask:(NSUInteger)arg0 ;
-(void)setSupportAddingFragmentBinaryFunctions:(BOOL)arg0 ;
-(void)setSupportAddingMeshBinaryFunctions:(BOOL)arg0 ;
-(void)setSupportAddingObjectBinaryFunctions:(BOOL)arg0 ;
-(void)setSupportIndirectCommandBuffers:(BOOL)arg0 ;
-(void)setTextureWriteRoundingMode:(NSInteger)arg0 ;
-(void)setTwoSideEnabled:(BOOL)arg0 ;
-(void)setVertexAmplificationMode:(NSUInteger)arg0 ;


@end


#endif