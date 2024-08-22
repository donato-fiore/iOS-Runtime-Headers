// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IOGPUMETALINDIRECTCOMMANDBUFFER_H
#define IOGPUMETALINDIRECTCOMMANDBUFFER_H

@class MTLIndirectCommandBufferDescriptor;
@protocol MTLIndirectComputeCommandEncoder, MTLIndirectRenderCommandEncoder;


#import "IOGPUMetalResource.h"
#import "IOGPUMetalBuffer.h"

@interface IOGPUMetalIndirectCommandBuffer : IOGPUMetalResource {
    IOGPUMetalBuffer *_privateICBuffer;
    NSUInteger _maxCommandCount;
    NSUInteger _commandBufferType;
    id<MTLIndirectComputeCommandEncoder> *_privateIndirectComputeEncoder;
    id<MTLIndirectRenderCommandEncoder> *_privateIndirectRenderEncoder;
    MTLIndirectCommandBufferDescriptor *_descriptor;
    MTLIndirectCommandBufferHeader _internalHeader;
}


@property (readonly) NSUInteger commandBufferType;
@property (readonly) MTLIndirectCommandBufferDescriptor *descriptor;
@property (readonly, nonatomic) NSUInteger gpuHandle;
@property (readonly) MTLResourceID gpuResourceID;
@property (readonly) IOGPUMetalBuffer *privateICBuffer;
@property (readonly) NSUInteger size;
@property (readonly) NSUInteger storageMode;


-(BOOL)doesAliasAllResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(BOOL)doesAliasAnyResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(BOOL)doesAliasResource:(id)arg0 ;
-(BOOL)isAliasable;
-(BOOL)isComplete;
-(NSUInteger)setPurgeableState:(NSUInteger)arg0 ;
-(NSUInteger)uniqueIdentifier;
-(id)indirectComputeCommandAtIndex:(NSUInteger)arg0 ;
-(id)indirectRenderCommandAtIndex:(NSUInteger)arg0 ;
-(id)initWithBuffer:(id)arg0 descriptor:(id)arg1 maxCommandCount:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)getHeader:(**void)arg0 headerSize:(*NSUInteger)arg1 ;
-(void)makeAliasable;
-(void)resetWithRange:(struct _NSRange )arg0 ;
-(void)waitUntilComplete;


@end


#endif