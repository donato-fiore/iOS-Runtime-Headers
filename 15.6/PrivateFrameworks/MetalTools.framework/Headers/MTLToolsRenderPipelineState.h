// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property (readonly, nonatomic) NSUInteger gpuAddress;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger imageblockSampleLength;
@property (readonly) NSString *label;
@property (readonly) NSUInteger maxTotalThreadsPerThreadgroup;
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
-(id)newFragmentIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newFragmentShaderDebugInfo;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 selector:(SEL)arg1 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 error:(*id)arg1 ;
-(id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 fragmentAdditionalBinaryFunctions:(id)arg1 error:(*id)arg2 ;
-(id)newTileIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg0 error:(*id)arg1 ;
-(id)newVertexIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newVertexShaderDebugInfo;
-(id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg0 selector:(SEL)arg1 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg0 stage:(NSUInteger)arg1 ;
-(id)tileFunctionHandleWithFunction:(id)arg0 ;
-(id)vertexFunctionHandleWithFunction:(id)arg0 ;
-(unsigned int)getFragmentShaderTelemetryID;
-(unsigned int)getVertexShaderTelemetryID;
-(void)dealloc;


@end


#endif