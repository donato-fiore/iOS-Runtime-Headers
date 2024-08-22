// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLCOUNTERSTRACERESOURCESTATECOMMANDENCODER_H
#define MTLCOUNTERSTRACERESOURCESTATECOMMANDENCODER_H



#import "MTLCountersTraceCommandEncoder.h"

@interface MTLCountersTraceResourceStateCommandEncoder : MTLCountersTraceCommandEncoder



-(id)init:(struct BinaryBuffer *)arg0 ;
-(void)copyMappingStateFromTexture:(id)arg0 mipLevel:(NSUInteger)arg1 slice:(NSUInteger)arg2 toBuffer:(id)arg3 offset:(NSUInteger)arg4 numTiles:(NSUInteger)arg5 ;
-(void)updateFence:(id)arg0 ;
-(void)updateTextureMapping:(id)arg0 mode:(NSUInteger)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(NSUInteger)arg3 ;
-(void)updateTextureMapping:(id)arg0 mode:(NSUInteger)arg1 region:(struct ? )arg2 mipLevel:(NSUInteger)arg3 slice:(NSUInteger)arg4 ;
-(void)updateTextureMappings:(id)arg0 mode:(NSUInteger)arg1 regions:(struct ? *)arg2 mipLevels:(*NSUInteger)arg3 slices:(*NSUInteger)arg4 numRegions:(NSUInteger)arg5 ;
-(void)waitForFence:(id)arg0 ;


@end


#endif