// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MTLIOHANDLECOMPRESSED_H
#define _MTLIOHANDLECOMPRESSED_H

@class MTLObjectWithLabel, NSString;
@protocol MTLIOHandleSPI, MTLDevice;



@interface _MTLIOHandleCompressed : MTLObjectWithLabel <MTLIOHandleSPI>

 {
    id<MTLDevice> *_device;
    int _fd;
    NSUInteger _labelTraceID;
    *void _handle;
}


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
-(id)initWithDevice:(id)arg0 path:(char *)arg1 compressionType:(NSInteger)arg2 error:(*id)arg3 uncached:(BOOL)arg4 ;
-(void)dealloc;


@end


#endif