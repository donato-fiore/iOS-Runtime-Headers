// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLIOACCELINDIRECTCOMMANDBUFFER_H
#define MTLIOACCELINDIRECTCOMMANDBUFFER_H

@protocol MTLIndirectComputeCommandEncoder, MTLIndirectRenderCommandEncoder;


#import "MTLIOAccelResource.h"
#import "MTLIOAccelBuffer.h"
#import "MTLIndirectCommandBufferDescriptor.h"

@interface MTLIOAccelIndirectCommandBuffer : MTLIOAccelResource {
    MTLIOAccelBuffer *_privateICBuffer;
    NSUInteger _maxCommandCount;
    NSUInteger _commandBufferType;
    id<MTLIndirectComputeCommandEncoder> *_privateIndirectComputeEncoder;
    id<MTLIndirectRenderCommandEncoder> *_privateIndirectRenderEncoder;
    MTLIndirectCommandBufferDescriptor *_descriptor;
    MTLIndirectCommandBufferHeader _internalHeader;
}


@property (readonly) NSUInteger commandBufferType;
@property (readonly) MTLIndirectCommandBufferDescriptor *descriptor;
@property (readonly) MTLIOAccelBuffer *privateICBuffer;
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