// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLCOUNTERSRESOURCESTATECOMMANDENCODER_H
#define MTLCOUNTERSRESOURCESTATECOMMANDENCODER_H



#import "MTLToolsResourceStateCommandEncoder.h"
#import "MTLCountersTraceResourceStateCommandEncoder.h"

@interface MTLCountersResourceStateCommandEncoder : MTLToolsResourceStateCommandEncoder {
    MTLCountersTraceResourceStateCommandEncoder *_traceEncoder;
}




-(id)initWithResourceStateCommandEncoder:(id)arg0 commandBuffer:(id)arg1 ;
-(void)copyMappingStateFromTexture:(id)arg0 mipLevel:(NSUInteger)arg1 slice:(NSUInteger)arg2 toBuffer:(id)arg3 offset:(NSUInteger)arg4 numTiles:(NSUInteger)arg5 ;
-(void)dealloc;
-(void)endEncoding;
-(void)insertDebugSignpost:(id)arg0 ;
-(void)popDebugGroup;
-(void)pushDebugGroup:(id)arg0 ;
-(void)setLabel:(id)arg0 ;
-(void)updateFence:(id)arg0 ;
-(void)updateTextureMapping:(id)arg0 mode:(NSUInteger)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(NSUInteger)arg3 ;
-(void)updateTextureMapping:(id)arg0 mode:(NSUInteger)arg1 region:(struct ? )arg2 mipLevel:(NSUInteger)arg3 slice:(NSUInteger)arg4 ;
-(void)updateTextureMappings:(id)arg0 mode:(NSUInteger)arg1 regions:(struct ? *)arg2 mipLevels:(*NSUInteger)arg3 slices:(*NSUInteger)arg4 numRegions:(NSUInteger)arg5 ;
-(void)waitForFence:(id)arg0 ;


@end


#endif