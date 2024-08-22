// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSVSTREAMREADER_H
#define MSVSTREAMREADER_H

@class NSString, NSInputStream;
@protocol NSStreamDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MSVStreamReader : NSObject <NSStreamDelegate>

 {
    BOOL _closeOnStop;
    BOOL _stopped;
    *z_stream_s _zstreamp;
}


@property (nonatomic, getter=shouldCompress) BOOL compress; // ivar: _compress
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didEncounterErrorBlock; // ivar: _didEncounterErrorBlock
@property (copy, nonatomic) id *didFinishReadingBlock; // ivar: _didFinishReadingBlock
@property (copy, nonatomic) id *didReadDataBlock; // ivar: _didReadDataBlock
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maximumBufferSize; // ivar: _maximumBufferSize
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSInputStream *stream; // ivar: _stream
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)_shouldHandleEvent;
-(id)_compressedDataForData:(id)arg0 ;
-(id)initWithInputStream:(id)arg0 queue:(id)arg1 ;
-(id)readAllDataWithError:(*id)arg0 ;
-(void)_stop;
-(void)dealloc;
-(void)readAllDataIntoFileHandle:(id)arg0 withCompletion:(id)arg1 ;
-(void)readAllDataWithCompletion:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)stopWithCompletion:(id)arg0 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif