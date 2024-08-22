// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MTLPARALLELRENDERCOMMANDENCODER_H
#define _MTLPARALLELRENDERCOMMANDENCODER_H

@class MTLObjectWithLabel, _MTLCommandBuffer<MTLCommandBuffer>, NSMutableArray, NSString;
@protocol MTLParallelRenderCommandEncoder, MTLCommandQueue, MTLFence, MTLDevice;


#import "MTLRenderPassDescriptor.h"

@interface _MTLParallelRenderCommandEncoder : MTLObjectWithLabel <MTLParallelRenderCommandEncoder>

 {
    id<MTLCommandQueue> *_queue;
    NSUInteger _labelTraceID;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    _opaque_pthread_mutex_t _lock;
    NSUInteger _commandBuffersSize;
    NSUInteger _commandBuffersCount;
    *id _commandBuffers;
    BOOL _retainedReferences;
    BOOL _StatEnabled;
    NSUInteger _numThisEncoder;
    id<MTLFence> *_progressFence;
    BOOL _needsFrameworkAssistedErrorTracking;
    NSMutableArray *_debugSignposts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly) NSUInteger globalTraceObjectID; // ivar: _globalTraceObjectID
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=getType) NSUInteger type;


-(BOOL)isMemorylessRender;
-(NSUInteger)getDriverUniqueID;
-(id)_renderCommandEncoderCommon;
-(id)commandBuffer;
-(id)endEncodingAndRetrieveProgramAddressTable;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithCommandBuffer:(id)arg0 renderPassDescriptor:(id)arg1 ;
-(id)renderCommandEncoder;
-(id)sampledRenderCommandEncoderWithProgramInfoBuffer:(*unk)arg0 capacity:(struct ? )arg1 ;
-(void)dealloc;
-(void)endEncoding;
-(void)initializeEnhancedCommandBufferErrors;
-(void)insertDebugSignpost:(id)arg0 ;
-(void)popDebugGroup;
-(void)preEndEncoding;
-(void)pushDebugGroup:(id)arg0 ;
-(void)setColorStoreAction:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setColorStoreActionOptions:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setDepthStoreAction:(NSUInteger)arg0 ;
-(void)setDepthStoreActionOptions:(NSUInteger)arg0 ;
-(void)setStencilStoreAction:(NSUInteger)arg0 ;
-(void)setStencilStoreActionOptions:(NSUInteger)arg0 ;


@end


#endif