// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BUBUFFEREDREADCHANNEL_H
#define BUBUFFEREDREADCHANNEL_H

@class NSArray, NSString, NSError;
@protocol BUReadChannel, OS_dispatch_data, OS_dispatch_queue, BUStreamReadChannel;

#import <Foundation/Foundation.h>


@interface BUBufferedReadChannel : NSObject <BUReadChannel>



@property (retain, nonatomic) NSArray *blockInfos; // ivar: _blockInfos
@property (retain, nonatomic) NSObject<OS_dispatch_data> *currentStreamOutputData; // ivar: _currentStreamOutputData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isValid;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *readQueue; // ivar: _readQueue
@property (nonatomic) NSUInteger sourceLength; // ivar: _sourceLength
@property (nonatomic) NSInteger sourceOffset; // ivar: _sourceOffset
@property (nonatomic) NSUInteger sourceReadBufferSize; // ivar: _sourceReadBufferSize
@property (retain, nonatomic) NSObject<BUReadChannel> *sourceReadChannel; // ivar: _sourceReadChannel
@property (retain, nonatomic) NSError *sourceReadChannelError; // ivar: _sourceReadChannelError
@property (nonatomic, getter=isStreamOutputDone) BOOL streamOutputDone; // ivar: _streamOutputDone
@property (nonatomic) NSUInteger streamOutputLength; // ivar: _streamOutputLength
@property (nonatomic) NSInteger streamOutputOffset; // ivar: _streamOutputOffset
@property (nonatomic) NSUInteger streamOutputOutstandingLength; // ivar: _streamOutputOutstandingLength
@property (retain, nonatomic) NSObject<BUStreamReadChannel> *streamReadChannel; // ivar: _streamReadChannel
@property (copy, nonatomic) id *streamReadChannelBlock; // ivar: _streamReadChannelBlock
@property (copy, nonatomic) id *streamReadChannelSourceHandler; // ivar: _streamReadChannelSourceHandler
@property (readonly) Class superclass;


-(id)_currentDataIntersectionWithOffset:(NSInteger)arg0 length:(NSUInteger)arg1 isReadDone:(*BOOL)arg2 ;
-(id)initWithReadChannel:(id)arg0 blockInfos:(id)arg1 streamReadChannelBlock:(id)arg2 ;
-(id)initWithReadChannel:(id)arg0 sourceReadBufferSize:(NSUInteger)arg1 blockInfos:(id)arg2 streamReadChannelBlock:(id)arg3 ;
-(void)_close;
-(void)_closeStreamReadChannel;
-(void)_readFromOffset:(NSInteger)arg0 length:(NSUInteger)arg1 handler:(id)arg2 ;
-(void)addBarrier:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)readFromOffset:(NSInteger)arg0 length:(NSUInteger)arg1 handler:(id)arg2 ;
-(void)readWithHandler:(id)arg0 ;
-(void)setLowWater:(NSUInteger)arg0 ;


@end


#endif