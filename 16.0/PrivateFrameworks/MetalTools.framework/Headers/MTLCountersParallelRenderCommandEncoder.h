// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLCOUNTERSPARALLELRENDERCOMMANDENCODER_H
#define MTLCOUNTERSPARALLELRENDERCOMMANDENCODER_H



#import "MTLToolsParallelRenderCommandEncoder.h"

@interface MTLCountersParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder



-(id)initWithBaseRenderPass:(id)arg0 commandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(id)renderCommandEncoder;
-(id)sampledRenderCommandEncoderWithProgramInfoBuffer:(*unk)arg0 capacity:(struct ? )arg1 ;
-(void)setColorStoreAction:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setDepthStoreAction:(NSUInteger)arg0 ;
-(void)setStencilStoreAction:(NSUInteger)arg0 ;


@end


#endif