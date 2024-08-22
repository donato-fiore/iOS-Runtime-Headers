// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLTOOLSRENDERPIPELINESTATE_H
#define MTLTOOLSRENDERPIPELINESTATE_H

@class NSString, MTLDebugInstrumentationData;
@protocol MTLRenderPipelineStateSPI, MTLDevice;


#import "MTLToolsObject.h"

@interface MTLToolsRenderPipelineState : MTLToolsObject <MTLRenderPipelineStateSPI>



@property (readonly, nonatomic) NSUInteger allocatedSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) unsigned int explicitVisibilityGroupID;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property (readonly, nonatomic) NSUInteger gpuAddress;
@property (readonly) NSUInteger gpuHandle;
@property (readonly) MTLResourceID gpuResourceID;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger imageblockSampleLength;
@property (readonly) NSString *label;
@property (readonly) NSUInteger maxTotalThreadgroupsPerMeshGrid;
@property (readonly) NSUInteger maxTotalThreadsPerMeshThreadgroup;
@property (readonly) NSUInteger maxTotalThreadsPerObjectThreadgroup;
@property (readonly) NSUInteger maxTotalThreadsPerThreadgroup;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *meshDebugInstrumentationData;
@property (readonly) NSUInteger meshThreadExecutionWidth;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *objectDebugInstrumentationData;
@property (readonly) NSUInteger objectThreadExecutionWidth;
@property (readonly, nonatomic) NSUInteger resourceIndex;
@property (readonly) Class superclass;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) NSInteger textureWriteRoundingMode;
@property (readonly) BOOL threadgroupSizeMatchesTileSize;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *tileDebugInstrumentationData;
@property (readonly) NSUInteger uniqueIdentifier;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;


-(NSUInteger)imageblockMemoryLengthForDimensions:(struct ? )arg0 ;
-(id)fragmentFunctionHandleWithFunction:(id)arg0 ;
-(id)functionHandleWithFunction:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(id)meshFunctionHandleWithFunction:(id)arg0 ;
-(id)newFragmentIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newFragmentShaderDebugInfo;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 selector:(SEL)arg1 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)newMeshIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newObjectIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 error:(*id)arg1 ;
-(id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 fragmentAdditionalBinaryFunctions:(id)arg1 error:(*id)arg2 ;
-(id)newTileIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 error:(*id)arg1 ;
-(id)newVertexIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newVertexShaderDebugInfo;
-(id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromMeshStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromObjectStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg0 selector:(SEL)arg1 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)objectFunctionHandleWithFunction:(id)arg0 ;
-(id)pipelineBinaries;
-(id)tileFunctionHandleWithFunction:(id)arg0 ;
-(id)vertexFunctionHandleWithFunction:(id)arg0 ;
-(unsigned int)getFragmentShaderTelemetryID;
-(unsigned int)getVertexShaderTelemetryID;
-(void)dealloc;


@end


#endif