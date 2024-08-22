// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLTOOLSCOMPUTEPIPELINESTATE_H
#define MTLTOOLSCOMPUTEPIPELINESTATE_H

@class NSString, MTLDebugInstrumentationData;
@protocol MTLComputePipelineStateSPI, MTLFunction, MTLDevice;


#import "MTLToolsObject.h"

@interface MTLToolsComputePipelineState : MTLToolsObject <MTLComputePipelineStateSPI>

 {
    id<MTLFunction> *_function;
}


@property (readonly, nonatomic) NSUInteger allocatedSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) NSUInteger gpuAddress;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *label;
@property (readonly) NSUInteger maxTotalThreadsPerThreadgroup;
@property (readonly, nonatomic) NSUInteger resourceIndex;
@property (readonly) NSUInteger staticThreadgroupMemoryLength;
@property (readonly) Class superclass;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) NSInteger textureWriteRoundingMode;
@property (readonly) NSUInteger threadExecutionWidth;
@property (readonly) NSUInteger uniqueIdentifier;


-(NSUInteger)imageblockMemoryLengthForDimensions:(struct ? )arg0 ;
-(id)functionHandleWithFunction:(id)arg0 ;
-(id)functionPointerHandleWithFunction:(id)arg0 ;
-(id)functionPointerHandlesWithFunctions:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg0 ;
-(id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg0 error:(*id)arg1 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg0 ;
-(unsigned int)getComputeKernelTelemetryID;
-(void)dealloc;


@end


#endif