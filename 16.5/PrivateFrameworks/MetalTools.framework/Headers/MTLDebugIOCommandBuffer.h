// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLDEBUGIOCOMMANDBUFFER_H
#define MTLDEBUGIOCOMMANDBUFFER_H



#import "MTLToolsIOCommandBuffer.h"

@interface MTLDebugIOCommandBuffer : MTLToolsIOCommandBuffer



-(void)commit;
-(void)encodeSignalEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)encodeWaitForEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)internalValidateEvent:(id)arg0 ;
-(void)internalValidateLoadBuffer:(id)arg0 offset:(NSUInteger)arg1 size:(NSUInteger)arg2 sourceHandle:(id)arg3 sourceHandleOffset:(NSUInteger)arg4 ;
-(void)internalValidateLoadBytes:(*void)arg0 size:(NSUInteger)arg1 sourceHandle:(id)arg2 sourceHandleOffset:(NSUInteger)arg3 ;
-(void)internalValidateLoadTexture:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 size:(struct ? )arg3 sourceBytesPerRow:(NSUInteger)arg4 sourceBytesPerImage:(NSUInteger)arg5 destinationOrigin:(struct ? )arg6 sourceHandle:(id)arg7 sourceHandleOffset:(NSUInteger)arg8 ;
-(void)loadBuffer:(id)arg0 offset:(NSUInteger)arg1 size:(NSUInteger)arg2 handle:(id)arg3 handleOffset:(NSUInteger)arg4 ;
-(void)loadBuffer:(id)arg0 offset:(NSUInteger)arg1 size:(NSUInteger)arg2 sourceHandle:(id)arg3 sourceHandleOffset:(NSUInteger)arg4 ;
-(void)loadBytes:(*void)arg0 size:(NSUInteger)arg1 sourceHandle:(id)arg2 sourceHandleOffset:(NSUInteger)arg3 ;
-(void)loadTexture:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 size:(struct ? )arg3 bytesPerRow:(NSUInteger)arg4 bytesPerImage:(NSUInteger)arg5 dstOrigin:(struct ? )arg6 handle:(id)arg7 handleOffset:(NSUInteger)arg8 ;
-(void)loadTexture:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 size:(struct ? )arg3 sourceBytesPerRow:(NSUInteger)arg4 sourceBytesPerImage:(NSUInteger)arg5 destinationOrigin:(struct ? )arg6 sourceHandle:(id)arg7 sourceHandleOffset:(NSUInteger)arg8 ;
-(void)signalEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)tryCancel;
-(void)waitForEvent:(id)arg0 value:(NSUInteger)arg1 ;


@end


#endif