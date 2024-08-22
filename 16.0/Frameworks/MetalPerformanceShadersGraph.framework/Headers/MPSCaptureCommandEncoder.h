// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCAPTURECOMMANDENCODER_H
#define MPSCAPTURECOMMANDENCODER_H

@class NSString;
@protocol MTLComputeCommandEncoder, MTLDevice;

#import <Foundation/Foundation.h>

#import "MPSGraphCaptureContext.h"

@interface MPSCaptureCommandEncoder : NSObject <MTLComputeCommandEncoder>

 {
    id<MTLComputeCommandEncoder> *_encoder;
    MPSGraphCaptureContext *_captureContext;
    *void _encoderContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger dispatchType;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;


-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithCommandEncoder:(id)arg0 captureContext:(id)arg1 ;
-(void)dealloc;
-(void)dispatchThreadgroups:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)dispatchThreadgroupsWithIndirectBuffer:(id)arg0 indirectBufferOffset:(NSUInteger)arg1 threadsPerThreadgroup:(struct ? )arg2 ;
-(void)dispatchThreads:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)executeCommandsInBuffer:(id)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 ;
-(void)executeCommandsInBuffer:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)memoryBarrierWithResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)memoryBarrierWithScope:(NSUInteger)arg0 ;
-(void)setBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setComputePipelineState:(id)arg0 ;
-(void)setSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(NSUInteger)arg3 ;
-(void)setSamplerStates:(*id)arg0 lodMinClamps:(*float)arg1 lodMaxClamps:(*float)arg2 withRange:(struct _NSRange )arg3 ;
-(void)setSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setStageInRegion:(struct ? )arg0 ;
-(void)setStageInRegionWithIndirectBuffer:(id)arg0 indirectBufferOffset:(NSUInteger)arg1 ;
-(void)setTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setThreadgroupMemoryLength:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)updateFence:(id)arg0 ;
-(void)waitForFence:(id)arg0 ;


@end


#endif