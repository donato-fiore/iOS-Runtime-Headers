// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYCOMPRESSEDFILEOUTPUTSTREAM_H
#define SYCOMPRESSEDFILEOUTPUTSTREAM_H

@class NSOutputStream, NSURL, NSString, NSProgress;
@protocol _SYStreamRunLoopSourceHandler, NSStreamDelegate, SYOutputCompressor, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress;


#import "_SYStreamGuts.h"

@interface SYCompressedFileOutputStream : NSOutputStream <_SYStreamRunLoopSourceHandler, NSStreamDelegate, SYOutputCompressor, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress>

 {
    NSURL *_url;
    BOOL _append;
    int _fd;
    int _class;
    *gzFile_s _file;
    os_unfair_lock_s _internalLock;
    _SYStreamGuts *_internal;
}


@property (readonly, nonatomic) NSUInteger bytesThroughput; // ivar: _byteCount
@property (nonatomic) NSInteger compressionLevel; // ivar: _level
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_internal) _SYStreamGuts *internal;
@property (copy, nonatomic) id *onBytesAvailable; // ivar: _onBytesAvailable
@property (copy, nonatomic) id *onClose; // ivar: _onClose
@property (copy, nonatomic) id *onEndOfFile; // ivar: _onEndOfFile
@property (copy, nonatomic) id *onError; // ivar: _onError
@property (copy, nonatomic) id *onOpenComplete; // ivar: _onOpenComplete
@property (copy, nonatomic) id *onSpaceAvailable; // ivar: _onSpaceAvailable
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly) Class superclass;


-(BOOL)hasSpaceAvailable;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(NSInteger)write:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSUInteger)streamStatus;
-(id)delegate;
-(id)initToCompressedFileAtURL:(id)arg0 shouldAppend:(BOOL)arg1 ;
-(id)initToFileAtPath:(id)arg0 append:(BOOL)arg1 ;
-(id)initWithURL:(id)arg0 append:(BOOL)arg1 ;
-(id)propertyForKey:(id)arg0 ;
-(id)streamError;
-(void)_SY_notifyOnQueue:(id)arg0 handler:(id)arg1 ;
-(void)_postEventToDelegate:(NSUInteger)arg0 ;
-(void)close;
-(void)dealloc;
-(void)open;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif