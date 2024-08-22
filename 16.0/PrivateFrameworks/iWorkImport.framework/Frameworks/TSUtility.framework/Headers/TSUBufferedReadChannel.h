// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUBUFFEREDREADCHANNEL_H
#define TSUBUFFEREDREADCHANNEL_H

@class NSError, NSArray, NSString;
@protocol TSUReadChannel, OS_dispatch_queue, TSUStreamReadChannel, OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface TSUBufferedReadChannel : NSObject <TSUReadChannel>

 {
    NSObject<OS_dispatch_queue> *_readQueue;
    id<TSUReadChannel> *_sourceReadChannel;
    NSUInteger _sourceReadBufferSize;
    NSInteger _sourceOffset;
    NSUInteger _sourceLength;
    NSError *_sourceReadChannelError;
    NSArray *_blockInfos;
    id *_streamReadChannelBlock;
    id<TSUStreamReadChannel> *_streamReadChannel;
    id *_streamReadChannelSourceHandler;
    BOOL _isStreamOutputDone;
    NSInteger _streamOutputOffset;
    NSUInteger _streamOutputOutstandingLength;
    NSUInteger _streamOutputLength;
    NSObject<OS_dispatch_data> *_currentStreamOutputData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) Class superclass;


-(id)_currentDataIntersectionWithOffset:(NSInteger)arg0 length:(NSUInteger)arg1 isReadDone:(*BOOL)arg2 ;
-(id)initWithReadChannel:(id)arg0 blockInfos:(id)arg1 streamReadChannelBlock:(id)arg2 ;
-(id)initWithReadChannel:(id)arg0 sourceReadBufferSize:(NSUInteger)arg1 blockInfos:(id)arg2 streamReadChannelBlock:(id)arg3 ;
-(void)_close;
-(void)_closeStreamReadChannel;
-(void)_readFromOffset:(NSInteger)arg0 length:(NSUInteger)arg1 handler:(id)arg2 ;
-(void)_resetStreamReadChannelIfNeededForOffset:(NSInteger)arg0 length:(NSUInteger)arg1 ;
-(void)addBarrier:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)readFromOffset:(NSInteger)arg0 length:(NSUInteger)arg1 handler:(id)arg2 ;
-(void)readFromOffsetAndWait:(NSInteger)arg0 length:(NSUInteger)arg1 handler:(id)arg2 ;
-(void)readWithHandler:(id)arg0 ;
-(void)readWithHandlerAndWait:(id)arg0 ;
-(void)setLowWater:(NSUInteger)arg0 ;
-(void)setStreamReadChannelSourceHandler:(id)arg0 ;


@end


#endif