// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLGPUDEBUGARGUMENTENCODER_H
#define MTLGPUDEBUGARGUMENTENCODER_H



#import "MTLToolsArgumentEncoder.h"

@interface MTLGPUDebugArgumentEncoder : MTLToolsArgumentEncoder {
    *void _layout;
}




-(id)initWithArgumentEncoder:(id)arg0 layout:(*void)arg1 device:(id)arg2 ;
-(id)newArgumentEncoderForBufferAtIndex:(NSUInteger)arg0 ;
-(void)setArgumentBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)setArgumentBuffer:(id)arg0 startOffset:(NSUInteger)arg1 arrayElement:(NSUInteger)arg2 ;
-(void)setBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setComputePipelineState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setComputePipelineStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setIndirectCommandBuffer:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setIndirectCommandBuffers:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setRenderPipelineState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setRenderPipelineStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;


@end


#endif