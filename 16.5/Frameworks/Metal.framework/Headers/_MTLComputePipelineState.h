// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MTLCOMPUTEPIPELINESTATE_H
#define _MTLCOMPUTEPIPELINESTATE_H

@class NSString;
@protocol MTLComputePipelineState, MTLDevice;

#import <Foundation/Foundation.h>

#import "MTLDebugInstrumentationData.h"

@interface _MTLComputePipelineState : NSObject <MTLComputePipelineState>

 {
    BOOL _supportIndirectCommandBuffers;
    NSInteger _textureWriteRoundingMode;
}


@property (readonly, nonatomic) NSUInteger allocatedSize;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData; // ivar: _debugInstrumentationData
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, nonatomic) NSUInteger gpuAddress; // ivar: _gpuAddress
@property (readonly) NSUInteger gpuHandle;
@property (readonly) MTLResourceID gpuResourceID;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *label; // ivar: _label
@property (readonly) NSUInteger maxTotalThreadsPerThreadgroup;
@property (readonly, nonatomic) NSUInteger resourceIndex; // ivar: _resourceIndex
@property (readonly) NSUInteger staticThreadgroupMemoryLength;
@property (readonly) Class superclass;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) NSInteger textureWriteRoundingMode;
@property (readonly) NSUInteger threadExecutionWidth;
@property (readonly) NSUInteger uniqueIdentifier;


-(NSInteger)textureWriteFPRoundingMode;
-(NSUInteger)imageblockMemoryLengthForDimensions:(struct ? )arg0 ;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)functionHandleWithFunction:(id)arg0 ;
-(id)initWithDevice:(id)arg0 pipelineStateDescriptor:(id)arg1 ;
-(id)initWithParent:(id)arg0 ;
-(id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg0 error:(*id)arg1 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg0 ;
-(id)pipelineBinaries;
-(unsigned int)getComputeKernelTelemetryID;
-(void)dealloc;


@end


#endif