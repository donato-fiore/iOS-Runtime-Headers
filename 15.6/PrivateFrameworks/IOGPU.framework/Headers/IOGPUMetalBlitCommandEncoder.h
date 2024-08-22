// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOGPUMETALBLITCOMMANDENCODER_H
#define IOGPUMETALBLITCOMMANDENCODER_H



#import "IOGPUMetalCommandEncoder.h"

@interface IOGPUMetalBlitCommandEncoder : IOGPUMetalCommandEncoder



-(NSUInteger)getType;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 toTexture:(id)arg3 destinationSlice:(NSUInteger)arg4 destinationLevel:(NSUInteger)arg5 sliceCount:(NSUInteger)arg6 levelCount:(NSUInteger)arg7 ;
-(void)copyFromTexture:(id)arg0 toTexture:(id)arg1 ;
-(void)copyIndirectCommandBuffer:(id)arg0 sourceRange:(struct _NSRange )arg1 destination:(id)arg2 destinationIndex:(NSUInteger)arg3 ;
-(void)fillBuffer:(id)arg0 range:(struct _NSRange )arg1 pattern4:(unsigned int)arg2 ;
-(void)fillTexture:(id)arg0 level:(NSUInteger)arg1 slice:(NSUInteger)arg2 region:(struct ? )arg3 bytes:(*void)arg4 length:(NSUInteger)arg5 ;
-(void)fillTexture:(id)arg0 level:(NSUInteger)arg1 slice:(NSUInteger)arg2 region:(struct ? )arg3 color:(struct ? )arg4 ;
-(void)fillTexture:(id)arg0 level:(NSUInteger)arg1 slice:(NSUInteger)arg2 region:(struct ? )arg3 color:(struct ? )arg4 pixelFormat:(NSUInteger)arg5 ;
-(void)optimizeContentsForCPUAccess:(id)arg0 ;
-(void)optimizeContentsForCPUAccess:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 ;
-(void)optimizeContentsForGPUAccess:(id)arg0 ;
-(void)optimizeContentsForGPUAccess:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 ;
-(void)optimizeIndirectCommandBuffer:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)resetCommandsInBuffer:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)resolveCounters:(id)arg0 inRange:(struct _NSRange )arg1 destinationBuffer:(id)arg2 destinationOffset:(NSUInteger)arg3 ;
-(void)sampleCountersInBuffer:(id)arg0 atSampleIndex:(NSUInteger)arg1 withBarrier:(BOOL)arg2 ;
-(void)synchronizeResource:(id)arg0 ;
-(void)synchronizeTexture:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 ;
-(void)updateFence:(id)arg0 ;
-(void)waitForFence:(id)arg0 ;


@end


#endif