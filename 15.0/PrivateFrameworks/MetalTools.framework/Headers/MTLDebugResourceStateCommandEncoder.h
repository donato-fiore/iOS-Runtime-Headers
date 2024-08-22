// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLDEBUGRESOURCESTATECOMMANDENCODER_H
#define MTLDEBUGRESOURCESTATECOMMANDENCODER_H



#import "MTLToolsResourceStateCommandEncoder.h"

@interface MTLDebugResourceStateCommandEncoder : MTLToolsResourceStateCommandEncoder {
    BOOL canDealloc;
    BOOL canEndEncoding;
    BOOL hasEndedEncoding;
    deque<id, std::allocator<id>> updatedFences;
}




-(BOOL)checkEncoderState;
-(id)initWithResourceStateCommandEncoder:(id)arg0 commandBuffer:(id)arg1 ;
-(void)_setDefaults;
-(void)dealloc;
-(void)endEncoding;
-(void)updateFence:(id)arg0 ;
-(void)updateTextureMapping:(id)arg0 mode:(NSUInteger)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(NSUInteger)arg3 ;
-(void)updateTextureMapping:(id)arg0 mode:(NSUInteger)arg1 region:(struct ? )arg2 mipLevel:(NSUInteger)arg3 slice:(NSUInteger)arg4 ;
-(void)updateTextureMappings:(id)arg0 mode:(NSUInteger)arg1 regions:(struct ? *)arg2 mipLevels:(*NSUInteger)arg3 slices:(*NSUInteger)arg4 numRegions:(NSUInteger)arg5 ;
-(void)validateSparseTextureMappingMode:(NSUInteger)arg0 ;
-(void)validateTextureAccess:(id)arg0 region:(struct ? )arg1 mipLevel:(NSUInteger)arg2 slice:(NSUInteger)arg3 ;
-(void)waitForFence:(id)arg0 ;


@end


#endif