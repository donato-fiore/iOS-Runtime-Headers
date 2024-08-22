// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLDEBUGIOHANDLE_H
#define MTLDEBUGIOHANDLE_H



#import "MTLToolsIOHandle.h"

@interface MTLDebugIOHandle : MTLToolsIOHandle



-(*void)readIntoStagingBuffer:(NSUInteger)arg0 offset:(NSUInteger)arg1 stagingBuffer:(*void)arg2 stagingBufferSize:(NSUInteger)arg3 ;
-(NSInteger)decompress:(*void)arg0 size:(NSUInteger)arg1 offset:(NSUInteger)arg2 stagingBuffer:(*void)arg3 stagingBufferSize:(NSUInteger)arg4 ;
-(NSInteger)read:(*void)arg0 size:(NSUInteger)arg1 offset:(NSUInteger)arg2 stagingBuffer:(*void)arg3 stagingBufferSize:(NSUInteger)arg4 ;
-(NSUInteger)getHandleOffset:(NSUInteger)arg0 offset:(NSUInteger)arg1 ;
-(NSUInteger)globalTraceObjectID;
-(NSUInteger)stagingBufferSize:(NSUInteger)arg0 offset:(NSUInteger)arg1 ;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(void)dealloc;


@end


#endif