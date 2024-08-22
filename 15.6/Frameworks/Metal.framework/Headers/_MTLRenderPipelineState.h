// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
@property (retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData; // ivar: _fragmentDebugInstrumentationData
@property (readonly, nonatomic) NSUInteger gpuAddress; // ivar: _gpuAddress
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger imageBlockSampleLength; // ivar: _imageBlockSampleLength
@property (readonly) NSUInteger imageblockSampleLength;
@property (readonly) NSString *label; // ivar: _label
@property (readonly) NSUInteger maxTotalThreadsPerThreadgroup;
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
-(id)initWithDevice:(id)arg0 pipelineStateDescriptor:(id)arg1 ;
-(id)initWithDeviceAndTileDesc:(id)arg0 tilePipelineStateDescriptor:(id)arg1 ;
-(id)initWithParent:(id)arg0 ;
-(id)initWithTileParent:(id)arg0 ;
-(id)newFragmentIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 error:(*id)arg1 ;
-(id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 fragmentAdditionalBinaryFunctions:(id)arg1 error:(*id)arg2 ;
-(id)newTileIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 error:(*id)arg1 ;
-(id)newVertexIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)tileFunctionHandleWithFunction:(id)arg0 ;
-(id)vertexFunctionHandleWithFunction:(id)arg0 ;
-(unsigned int)getFragmentShaderTelemetryID;
-(unsigned int)getVertexShaderTelemetryID;
-(void)dealloc;


@end


#endif