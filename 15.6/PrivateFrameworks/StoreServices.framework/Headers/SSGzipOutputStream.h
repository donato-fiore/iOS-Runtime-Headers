// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSGZIPOUTPUTSTREAM_H
#define SSGZIPOUTPUTSTREAM_H

@class NSOutputStream, NSError;



@interface SSGzipOutputStream : NSOutputStream {
    NSOutputStream *_backingStream;
    z_stream_s _stream;
    NSUInteger _streamContentLength;
    NSError *_streamError;
    char * _streamOutBuffer;
    NSUInteger _streamOutBufferSize;
}




-(BOOL)_initializeOutputStream;
-(BOOL)hasSpaceAvailable;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(NSInteger)_consumeStreamOutput:(BOOL)arg0 ;
-(NSInteger)write:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSUInteger)streamContentLength;
-(NSUInteger)streamStatus;
-(id)initToFileAtPath:(id)arg0 append:(BOOL)arg1 ;
-(id)initToMemory;
-(id)propertyForKey:(id)arg0 ;
-(id)streamError;
-(void)_setStreamError:(int)arg0 context:(id)arg1 ;
-(void)close;
-(void)dealloc;
-(void)open;


@end


#endif