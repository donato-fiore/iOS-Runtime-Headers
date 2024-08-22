// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPROTOBUFSTREAMWRITER_H
#define CKDPROTOBUFSTREAMWRITER_H

@class NSMutableArray, NSData, NSInputStream, NSOutputStream, NSFileHandle, NSString;
@protocol NSStreamDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKDProtobufStreamWriter : NSObject <NSStreamDelegate>

 {
    NSMutableArray *_allObjects;
    NSData *_curData;
    NSUInteger _curDataPos;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    z_stream_s _zlibStream;
    BOOL _haveFlushedZlib;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}


@property (retain, nonatomic) NSFileHandle *binaryLogFileHandle; // ivar: _binaryLogFileHandle
@property (nonatomic) NSUInteger bufferSize; // ivar: _bufferSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasInitedCompression; // ivar: _hasInitedCompression
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL haveFinishedCompression; // ivar: _haveFinishedCompression
@property BOOL haveFinishedStreaming; // ivar: _haveFinishedStreaming
@property (copy, nonatomic) id *logRequestObjectBlock; // ivar: _logRequestObjectBlock
@property (nonatomic) BOOL shouldCompress; // ivar: _shouldCompress
@property (readonly) Class superclass;


-(BOOL)_finishStreaming:(id)arg0 ;
-(NSInteger)_streamNextObject:(id)arg0 ;
-(NSInteger)_writeDataToStream:(id)arg0 ;
-(id)_compressBodyData:(id)arg0 shouldFlush:(BOOL)arg1 ;
-(id)_dataForMessage:(id)arg0 ;
-(id)initWithCompression:(BOOL)arg0 ;
-(id)open;
-(void)_prepareObjectForStreaming:(id)arg0 ;
-(void)_tearDownOutputStream;
-(void)dealloc;
-(void)setStreamedObjects:(id)arg0 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)tearDown;


@end


#endif