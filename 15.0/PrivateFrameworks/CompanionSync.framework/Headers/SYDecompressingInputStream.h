// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYDECOMPRESSINGINPUTSTREAM_H
#define SYDECOMPRESSINGINPUTSTREAM_H

@class NSInputStream, NSString, NSProgress;
@protocol _SYStreamRunLoopSourceHandler, NSStreamDelegate, SYCompressionBufferOptimization, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress;


#import "_SYZlibStreamInternal.h"
#import "_SYStreamGuts.h"

@interface SYDecompressingInputStream : NSInputStream <_SYStreamRunLoopSourceHandler, NSStreamDelegate, SYCompressionBufferOptimization, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress>

 {
    NSInputStream *_stream;
    _SYZlibStreamInternal *_internal;
}


@property (readonly, nonatomic) NSUInteger bytesThroughput; // ivar: _byteCount
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


-(BOOL)getBuffer:(*char *)arg0 length:(*NSUInteger)arg1 ;
-(BOOL)hasBytesAvailable;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(NSInteger)read:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSUInteger)streamStatus;
-(id)delegate;
-(id)initWithCompressedDataStream:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithFileAtPath:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)propertyForKey:(id)arg0 ;
-(id)streamError;
-(void)_SY_notifyOnQueue:(id)arg0 handler:(id)arg1 ;
-(void)_dispatchMyEvent:(NSUInteger)arg0 ;
-(void)_handlePendingInput;
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