// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLDEBUGINDIRECTCOMPUTECOMMAND_H
#define MTLDEBUGINDIRECTCOMPUTECOMMAND_H

@class MTLIndirectCommandBufferDescriptor;
@protocol MTLIndirectCommandBufferSPI, MTLIndirectCommandBuffer;


#import "MTLToolsIndirectComputeCommand.h"

@interface MTLDebugIndirectComputeCommand : MTLToolsIndirectComputeCommand {
    MTLIndirectCommandBufferDescriptor *_desc;
    NSUInteger _index;
    id<MTLIndirectCommandBufferSPI> *_iCB;
}


@property (readonly) NSUInteger index;
@property (readonly) NSObject<MTLIndirectCommandBuffer> *indirectCommandBuffer;


-(id)initWithBaseObject:(id)arg0 descriptor:(id)arg1 indexCount:(NSUInteger)arg2 indirectCommandBuffer:(id)arg3 ;
-(void)concurrentDispatchThreadgroups:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)concurrentDispatchThreads:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)dealloc;
-(void)setComputePipelineState:(id)arg0 ;
-(void)setKernelBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;


@end


#endif