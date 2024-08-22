// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLIOACCELRESOURCESTATECOMMANDENCODER_H
#define MTLIOACCELRESOURCESTATECOMMANDENCODER_H



#import "MTLIOAccelCommandEncoder.h"

@interface MTLIOAccelResourceStateCommandEncoder : MTLIOAccelCommandEncoder



-(NSUInteger)getType;
-(void)updateTextureMapping:(id)arg0 mode:(NSUInteger)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(NSUInteger)arg3 ;
-(void)updateTextureMapping:(id)arg0 mode:(NSUInteger)arg1 region:(struct ? )arg2 mipLevel:(NSUInteger)arg3 slice:(NSUInteger)arg4 ;
-(void)updateTextureMappings:(id)arg0 mode:(NSUInteger)arg1 regions:(struct ? *)arg2 mipLevels:(*NSUInteger)arg3 slices:(*NSUInteger)arg4 numRegions:(NSUInteger)arg5 ;


@end


#endif