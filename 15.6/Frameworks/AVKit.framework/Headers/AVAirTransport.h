// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAIRTRANSPORT_H
#define AVAIRTRANSPORT_H

@class NSMutableArray, NSData;
@protocol AVAirTransportDelegate, AVAirTransportTransformationProtocol;

#import <Foundation/Foundation.h>


@interface AVAirTransport : NSObject {
    NSMutableArray *_outputQueue;
    NSData *_leftoverInputData;
    NSMutableArray *_requestCompletions;
}


@property (readonly, nonatomic) BOOL canWrite;
@property (weak, nonatomic) NSObject<AVAirTransportDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isReadyToSend;
@property (readonly, nonatomic) NSMutableArray *receiveResponseBlocks; // ivar: _receiveResponseBlocks
@property (retain, nonatomic) NSObject<AVAirTransportTransformationProtocol> *streamDataTransformer; // ivar: _streamDataTransformer


+(BOOL)_isRunningOnAirChannelQueue;
+(id)airTransportQueue;
+(id)channelWithInput:(id)arg0 output:(id)arg1 ;
+(id)eventRunLoop;
+(id)eventThread;
+(void)__performBlock:(id)arg0 ;
+(void)performAsync:(id)arg0 ;
+(void)performSync:(id)arg0 ;
+(void)startEventThreadIfNecessary;
-(NSInteger)_writeData:(id)arg0 ;
-(id)_initPrivate;
-(id)description;
-(id)requestCompletions;
-(void)close;
-(void)dealloc;
-(void)invalidate;
-(void)open;
-(void)performOnAirChannelQueueSync:(id)arg0 ;
-(void)sendObject:(id)arg0 receiveResponse:(id)arg1 ;
-(void)sendResponse:(id)arg0 ;
-(void)terminatePendingRequests;
-(void)writeData:(id)arg0 ;
-(void)writeMore;


@end


#endif