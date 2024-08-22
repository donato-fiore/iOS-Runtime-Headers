// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IOGPUMETALRESOURCESTATECOMMANDENCODER_H
#define IOGPUMETALRESOURCESTATECOMMANDENCODER_H



#import "IOGPUMetalCommandEncoder.h"

@interface IOGPUMetalResourceStateCommandEncoder : IOGPUMetalCommandEncoder



-(?)moveTextureMappingsFromTexture:(?)arg0 sourceSlice:(?)arg1 sourceLevel:(?)arg2 sourceOrigin:(?)arg3 sourceSize:(?)arg4 toTexture:(?)arg5 destinationSlice:(?)arg6 destinationLeveldestinationOrigin;
-(?)updateTextureMapping:(?)arg0 mode:(?)arg1 region:(?)arg2 mipLevelslice;
-(?)updateTextureMappings:(?)arg0 mode:(?)arg1 regions:(?)arg2 mipLevels:(?)arg3 slicesnumRegions;
-(NSUInteger)getType;
-(void)updateTextureMapping:(id)arg0 mode:(NSUInteger)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(NSUInteger)arg3 ;


@end


#endif