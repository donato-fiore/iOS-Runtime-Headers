// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVSTREAMWRITER_H
#define MSVSTREAMWRITER_H

@class NSMutableArray, NSString, NSInputStream, NSOutputStream;
@protocol NSStreamDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MSVStreamWriter : NSObject <NSStreamDelegate>

 {
    NSMutableArray *_pendingWriteDataList;
    BOOL _stopped;
    BOOL _closeOnStop;
    *z_stream_s _zstreamp;
}


@property (nonatomic) NSUInteger bytesWritten; // ivar: _bytesWritten
@property (copy, nonatomic) id *canWriteDataBlock; // ivar: _canWriteDataBlock
@property (nonatomic, getter=isCompressed) BOOL compressed; // ivar: _compressed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didEncounterErrorBlock; // ivar: _didEncounterErrorBlock
@property (copy, nonatomic) id *didFinishWritingBlock; // ivar: _didFinishWritingBlock
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSInputStream *inputStream; // ivar: _inputStream
@property (nonatomic) NSUInteger maximumBufferSize; // ivar: _maximumBufferSize
@property (retain, nonatomic) NSOutputStream *outputStream; // ivar: _outputStream
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)_processInput:(id)arg0 generatingDecompressedData:(*id)arg1 ;
-(BOOL)writeAllData:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithOutputStream:(id)arg0 queue:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_onQueue_stop;
-(void)_writeAvailablePendingData;
-(void)start;
-(void)stop;
-(void)stopWithCompletion:(id)arg0 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)writeAllData:(id)arg0 withCompletion:(id)arg1 ;
-(void)writeData:(id)arg0 withCompletion:(id)arg1 ;
-(void)writeStreamError:(struct ? )arg0 ;


@end


#endif