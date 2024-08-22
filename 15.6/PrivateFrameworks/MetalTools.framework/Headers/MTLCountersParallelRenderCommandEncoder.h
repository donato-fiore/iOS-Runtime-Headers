// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLCOUNTERSPARALLELRENDERCOMMANDENCODER_H
#define MTLCOUNTERSPARALLELRENDERCOMMANDENCODER_H

@class MTLRenderPassDescriptor;


#import "MTLToolsParallelRenderCommandEncoder.h"

@interface MTLCountersParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {
    MTLRenderPassDescriptor *_descriptor;
}




-(id)initWithBaseRenderPass:(id)arg0 commandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(id)renderCommandEncoder;
-(id)sampledRenderCommandEncoderWithProgramInfoBuffer:(*unk)arg0 capacity:(struct ? )arg1 ;
-(void)dealloc;
-(void)endEncoding;
-(void)setColorStoreAction:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setDepthStoreAction:(NSUInteger)arg0 ;
-(void)setStencilStoreAction:(NSUInteger)arg0 ;


@end


#endif