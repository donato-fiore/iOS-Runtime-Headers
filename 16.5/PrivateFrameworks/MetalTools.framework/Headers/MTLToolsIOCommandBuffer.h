// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLTOOLSIOCOMMANDBUFFER_H
#define MTLTOOLSIOCOMMANDBUFFER_H

@class NSString, NSError;
@protocol MTLIOCommandBufferSPI;


#import "MTLToolsObject.h"

@interface MTLToolsIOCommandBuffer : MTLToolsObject <MTLIOCommandBufferSPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSError *error;
@property (readonly, nonatomic) NSUInteger globalTraceObjectID;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) NSInteger status;
@property (readonly) Class superclass;


-(BOOL)isCommitted;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(void)addBarrier;
-(void)addCompletedHandler:(id)arg0 ;
-(void)barrier;
-(void)commit;
-(void)copyStatusToBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeSignalEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)encodeWaitForEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)enqueue;
-(void)loadBuffer:(id)arg0 offset:(NSUInteger)arg1 size:(NSUInteger)arg2 handle:(id)arg3 handleOffset:(NSUInteger)arg4 ;
-(void)loadBuffer:(id)arg0 offset:(NSUInteger)arg1 size:(NSUInteger)arg2 sourceHandle:(id)arg3 sourceHandleOffset:(NSUInteger)arg4 ;
-(void)loadBytes:(*void)arg0 size:(NSUInteger)arg1 sourceHandle:(id)arg2 sourceHandleOffset:(NSUInteger)arg3 ;
-(void)loadTexture:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 size:(struct ? )arg3 bytesPerRow:(NSUInteger)arg4 bytesPerImage:(NSUInteger)arg5 dstOrigin:(struct ? )arg6 handle:(id)arg7 handleOffset:(NSUInteger)arg8 ;
-(void)loadTexture:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 size:(struct ? )arg3 sourceBytesPerRow:(NSUInteger)arg4 sourceBytesPerImage:(NSUInteger)arg5 destinationOrigin:(struct ? )arg6 sourceHandle:(id)arg7 sourceHandleOffset:(NSUInteger)arg8 ;
-(void)popDebugGroup;
-(void)pushDebugGroup:(id)arg0 ;
-(void)signalEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)tryCancel;
-(void)waitForEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)waitUntilCompleted;


@end


#endif