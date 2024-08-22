// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MTLRENDERPIPELINESTATE_H
#define _MTLRENDERPIPELINESTATE_H

@class NSString;
@protocol MTLRenderPipelineState, MTLDevice;

#import <Foundation/Foundation.h>

#import "MTLDebugInstrumentationData.h"

@interface _MTLRenderPipelineState : NSObject <MTLRenderPipelineState>

 {
    BOOL _supportIndirectCommandBuffers;
    NSInteger _textureWriteRoundingMode;
}


@property (readonly, nonatomic) NSUInteger allocatedSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly) unsigned int explicitVisibilityGroupID; // ivar: _explicitVisibilityGroupID
@property (retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData; // ivar: _fragmentDebugInstrumentationData
@property (readonly, nonatomic) NSUInteger gpuAddress; // ivar: _gpuAddress
@property (readonly) NSUInteger gpuHandle;
@property (readonly) MTLResourceID gpuResourceID;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger imageBlockSampleLength; // ivar: _imageBlockSampleLength
@property (readonly) NSUInteger imageblockSampleLength;
@property (readonly) NSString *label; // ivar: _label
@property (readonly) NSUInteger maxTotalThreadgroupsPerMeshGrid; // ivar: _maxTotalThreadgroupsPerMeshGrid
@property (readonly) NSUInteger maxTotalThreadsPerMeshThreadgroup; // ivar: _maxTotalThreadsPerMeshThreadgroup
@property (readonly) NSUInteger maxTotalThreadsPerObjectThreadgroup; // ivar: _maxTotalThreadsPerObjectThreadgroup
@property (readonly) NSUInteger maxTotalThreadsPerThreadgroup;
@property (retain, nonatomic) MTLDebugInstrumentationData *meshDebugInstrumentationData; // ivar: _meshDebugInstrumentationData
@property (readonly) NSUInteger meshThreadExecutionWidth; // ivar: _meshThreadExecutionWidth
@property (retain, nonatomic) MTLDebugInstrumentationData *objectDebugInstrumentationData; // ivar: _objectDebugInstrumentationData
@property (readonly) NSUInteger objectThreadExecutionWidth; // ivar: _objectThreadExecutionWidth
@property (readonly, nonatomic) NSUInteger resourceIndex; // ivar: _resourceIndex
@property (readonly) Class superclass;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) NSInteger textureWriteRoundingMode;
@property (readonly) BOOL threadgroupSizeMatchesTileSize; // ivar: _threadgroupSizeMatchesTileSize
@property (retain, nonatomic) MTLDebugInstrumentationData *tileDebugInstrumentationData; // ivar: _tileDebugInstrumentationData
@property (readonly) NSUInteger uniqueIdentifier;
@property (retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData; // ivar: _vertexDebugInstrumentationData


-(NSInteger)textureWriteFPRoundingMode;
-(NSUInteger)imageblockMemoryLengthForDimensions:(struct ? )arg0 ;
-(id)fragmentFunctionHandleWithFunction:(id)arg0 ;
-(id)functionHandleWithFunction:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)initWithDevice:(id)arg0 meshRenderPipelineStateDescriptor:(id)arg1 objectThreadExecutionWidth:(NSUInteger)arg2 meshThreadExecutionWidth:(NSUInteger)arg3 ;
-(id)initWithDevice:(id)arg0 meshRenderPipelineStateDescriptor:(id)arg1 objectThreadExecutionWidth:(NSUInteger)arg2 meshThreadExecutionWidth:(NSUInteger)arg3 maxTotalThreadgroupsPerMeshGrid:(NSUInteger)arg4 ;
-(id)initWithDevice:(id)arg0 pipelineStateDescriptor:(id)arg1 ;
-(id)initWithDeviceAndTileDesc:(id)arg0 tilePipelineStateDescriptor:(id)arg1 ;
-(id)initWithParent:(id)arg0 ;
-(id)initWithTileParent:(id)arg0 ;
-(id)meshFunctionHandleWithFunction:(id)arg0 ;
-(id)newFragmentIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)newMeshIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newObjectIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 error:(*id)arg1 ;
-(id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 fragmentAdditionalBinaryFunctions:(id)arg1 error:(*id)arg2 ;
-(id)newTileIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 error:(*id)arg1 ;
-(id)newVertexIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromMeshStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromObjectStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)objectFunctionHandleWithFunction:(id)arg0 ;
-(id)pipelineBinaries;
-(id)tileFunctionHandleWithFunction:(id)arg0 ;
-(id)vertexFunctionHandleWithFunction:(id)arg0 ;
-(unsigned int)getFragmentShaderTelemetryID;
-(unsigned int)getMeshShaderTelemetryID;
-(unsigned int)getObjectShaderTelemetryID;
-(unsigned int)getVertexShaderTelemetryID;
-(void)dealloc;


@end


#endif