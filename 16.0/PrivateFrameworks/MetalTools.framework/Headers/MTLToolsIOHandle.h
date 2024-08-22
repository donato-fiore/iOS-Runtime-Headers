// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLTOOLSIOHANDLE_H
#define MTLTOOLSIOHANDLE_H

@class NSString;
@protocol MTLIOHandleSPI;


#import "MTLToolsObject.h"

@interface MTLToolsIOHandle : MTLToolsObject <MTLIOHandleSPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger globalTraceObjectID;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;
@property (readonly) unsigned int vnioID;


-(*void)readIntoStagingBuffer:(NSUInteger)arg0 offset:(NSUInteger)arg1 stagingBuffer:(*void)arg2 stagingBufferSize:(NSUInteger)arg3 ;
-(*void)readIntoStagingBuffer:(NSUInteger)arg0 offset:(NSUInteger)arg1 stagingBuffer:(*void)arg2 stagingBufferSize:(NSUInteger)arg3 needsDecompress:(*BOOL)arg4 ;
-(NSInteger)decompress:(*void)arg0 size:(NSUInteger)arg1 offset:(NSUInteger)arg2 stagingBuffer:(*void)arg3 stagingBufferSize:(NSUInteger)arg4 ;
-(NSInteger)read:(*void)arg0 size:(NSUInteger)arg1 offset:(NSUInteger)arg2 stagingBuffer:(*void)arg3 stagingBufferSize:(NSUInteger)arg4 ;
-(NSInteger)read:(*void)arg0 size:(NSUInteger)arg1 offset:(NSUInteger)arg2 stagingBuffer:(*void)arg3 stagingBufferSize:(NSUInteger)arg4 needsDecompress:(*BOOL)arg5 ;
-(NSUInteger)getHandleOffset:(NSUInteger)arg0 offset:(NSUInteger)arg1 ;
-(NSUInteger)length;
-(NSUInteger)stagingBufferSize:(NSUInteger)arg0 offset:(NSUInteger)arg1 ;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(void)dealloc;


@end


#endif