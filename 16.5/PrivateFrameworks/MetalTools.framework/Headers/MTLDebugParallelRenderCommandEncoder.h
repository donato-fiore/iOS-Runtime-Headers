// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLDEBUGPARALLELRENDERCOMMANDENCODER_H
#define MTLDEBUGPARALLELRENDERCOMMANDENCODER_H

@class MTLRenderPassDescriptor;


#import "MTLToolsParallelRenderCommandEncoder.h"

@interface MTLDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {
    unsigned int _unknownStoreActions;
    atomic<unsigned long long> _attachmentWriteMask;
}


@property (readonly, copy, nonatomic) MTLRenderPassDescriptor *descriptor; // ivar: _descriptor


-(id)description;
-(id)endEncodingAndRetrieveProgramAddressTable;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithBaseRenderPass:(id)arg0 commandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(id)renderCommandEncoder;
-(id)sampledRenderCommandEncoderWithProgramInfoBuffer:(*unk)arg0 capacity:(struct ? )arg1 ;
-(void)dealloc;
-(void)endEncoding;
-(void)endEncoding_private;
-(void)filterCounterRangeWithFirstBatch:(unsigned int)arg0 lastBatch:(unsigned int)arg1 filterIndex:(unsigned int)arg2 ;
-(void)mergeAttachmentWriteMask:(NSUInteger)arg0 ;
-(void)setColorStoreAction:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setColorStoreActionOptions:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setDepthStoreAction:(NSUInteger)arg0 ;
-(void)setDepthStoreActionOptions:(NSUInteger)arg0 ;
-(void)setStencilStoreAction:(NSUInteger)arg0 ;
-(void)setStencilStoreActionOptions:(NSUInteger)arg0 ;


@end


#endif