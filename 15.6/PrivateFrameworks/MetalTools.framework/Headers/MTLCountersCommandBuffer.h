// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLCOUNTERSCOMMANDBUFFER_H
#define MTLCOUNTERSCOMMANDBUFFER_H



#import "MTLToolsCommandBuffer.h"
#import "MTLCountersTraceCommandBuffer.h"

@interface MTLCountersCommandBuffer : MTLToolsCommandBuffer

@property (readonly, nonatomic) MTLCountersTraceCommandBuffer *traceBuffer; // ivar: _traceBuffer


-(id)blitCommandEncoder;
-(id)blitCommandEncoderWithDescriptor:(id)arg0 ;
-(id)computeCommandEncoder;
-(id)computeCommandEncoderWithDescriptor:(id)arg0 ;
-(id)computeCommandEncoderWithDispatchType:(NSUInteger)arg0 ;
-(id)initWithCommandBuffer:(id)arg0 commandQueue:(id)arg1 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg0 ;
-(id)renderCommandEncoderWithDescriptor:(id)arg0 ;
-(id)resourceStateCommandEncoder;
-(id)resourceStateCommandEncoderWithDescriptor:(id)arg0 ;
-(id)sampledComputeCommandEncoderWithDescriptor:(id)arg0 programInfoBuffer:(*unk)arg1 capacity:(struct ? )arg2 ;
-(id)sampledComputeCommandEncoderWithDispatchType:(NSUInteger)arg0 programInfoBuffer:(*unk)arg1 capacity:(struct ? )arg2 ;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(*unk)arg0 capacity:(struct ? )arg1 ;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg0 programInfoBuffer:(*unk)arg1 capacity:(struct ? )arg2 ;
-(void)addPurgedHeap:(id)arg0 ;
-(void)addPurgedResource:(id)arg0 ;
-(void)dealloc;
-(void)presentDrawable:(id)arg0 ;
-(void)presentDrawable:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)waitUntilCompleted;
-(void)waitUntilScheduled;


@end


#endif