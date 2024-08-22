// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYCOMPRESSINGOUTPUTSTREAM_H
#define SYCOMPRESSINGOUTPUTSTREAM_H

@class NSOutputStream, NSString, NSProgress;
@protocol _SYStreamRunLoopSourceHandler, NSStreamDelegate, SYCompressionBufferOptimization, SYOutputCompressor, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress;


#import "_SYZlibStreamInternal.h"
#import "_SYStreamGuts.h"

@interface SYCompressingOutputStream : NSOutputStream <_SYStreamRunLoopSourceHandler, NSStreamDelegate, SYCompressionBufferOptimization, SYOutputCompressor, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress>

 {
    NSOutputStream *_stream;
    _SYZlibStreamInternal *_internal;
}


@property (readonly, nonatomic) NSUInteger bytesThroughput; // ivar: _byteCount
@property (nonatomic) NSInteger compressionLevel; // ivar: _level
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger inputBufferSize;
@property (readonly, nonatomic, getter=_internal) _SYStreamGuts *internal;
@property (copy, nonatomic) id *onBytesAvailable; // ivar: _onBytesAvailable
@property (copy, nonatomic) id *onClose; // ivar: _onClose
@property (copy, nonatomic) id *onEndOfFile; // ivar: _onEndOfFile
@property (copy, nonatomic) id *onError; // ivar: _onError
@property (copy, nonatomic) id *onOpenComplete; // ivar: _onOpenComplete
@property (copy, nonatomic) id *onSpaceAvailable; // ivar: _onSpaceAvailable
@property (nonatomic) NSUInteger outputBufferSize;
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly) Class superclass;


-(BOOL)hasSpaceAvailable;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(NSInteger)write:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSUInteger)streamStatus;
-(id)initToBuffer:(char *)arg0 capacity:(NSUInteger)arg1 ;
-(id)initToFileAtPath:(id)arg0 append:(BOOL)arg1 ;
-(id)initToMemory;
-(id)initWithDestinationStream:(id)arg0 ;
-(id)initWithURL:(id)arg0 append:(BOOL)arg1 ;
-(id)propertyForKey:(id)arg0 ;
-(id)streamError;
-(int)_handlePendingInput;
-(void)_SY_notifyOnQueue:(id)arg0 handler:(id)arg1 ;
-(void)_dispatchMyEvent:(NSUInteger)arg0 ;
-(void)_postEventToDelegate:(NSUInteger)arg0 ;
-(void)close;
-(void)dealloc;
-(void)open;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif