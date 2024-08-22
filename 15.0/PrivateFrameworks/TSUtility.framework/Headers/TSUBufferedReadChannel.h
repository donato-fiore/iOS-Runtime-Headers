// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUBUFFEREDREADCHANNEL_H
#define TSUBUFFEREDREADCHANNEL_H

@class NSError, NSString;
@protocol TSUReadChannel, OS_dispatch_semaphore, OS_dispatch_queue, TSUStreamReadChannel, OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface TSUBufferedReadChannel : NSObject <TSUReadChannel>

 {
    NSObject<OS_dispatch_semaphore> *_readSemaphore;
    id<TSUReadChannel> *_sourceReadChannel;
    NSUInteger _sourceReadBufferSize;
    NSObject<OS_dispatch_queue> *_sourceReadQueue;
    NSInteger _sourceOffset;
    NSError *_sourceReadChannelError;
    id *_streamReadChannelBlock;
    id<TSUStreamReadChannel> *_streamReadChannel;
    NSObject<OS_dispatch_queue> *_streamReadChannelSourceQueue;
    id *_streamReadChannelSourceHandler;
    NSObject<OS_dispatch_queue> *_streamReadChannelOutputQueue;
    BOOL _isStreamOutputDone;
    NSInteger _streamOutputOffset;
    NSUInteger _streamOutputLength;
    NSObject<OS_dispatch_data> *_currentStreamOutputData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_currentDataIntersectionWithOffset:(NSInteger)arg0 length:(NSUInteger)arg1 isReadDone:(*BOOL)arg2 ;
-(id)initWithReadChannel:(id)arg0 sourceReadBufferSize:(NSUInteger)arg1 streamReadChannelBlock:(id)arg2 ;
-(id)initWithReadChannel:(id)arg0 streamReadChannelBlock:(id)arg1 ;
-(void)_closeStreamReadChannel;
-(void)_readFromOffset:(NSInteger)arg0 length:(NSUInteger)arg1 queue:(id)arg2 handler:(id)arg3 ;
-(void)_resetStreamReadChannel;
-(void)addBarrier:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)readFromOffset:(NSInteger)arg0 length:(NSUInteger)arg1 queue:(id)arg2 handler:(id)arg3 ;
-(void)setLowWater:(NSUInteger)arg0 ;
-(void)setStreamReadChannelSourceQueue:(id)arg0 handler:(id)arg1 ;


@end


#endif