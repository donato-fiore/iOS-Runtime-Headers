// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSBASESOCKETPAIRCONNECTION_H
#define IDSBASESOCKETPAIRCONNECTION_H

@class IMWeakReference, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface IDSBaseSocketPairConnection : NSObject {
    IMWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_outgoingDataArray;
    NSObject<OS_dispatch_queue> *_readQueue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    CGFloat _lastDateCheck;
    NSInteger _bytesReceived;
    CGFloat _prevBPS;
    BOOL _writeSourceIsResumed;
}


@property (readonly, nonatomic) int socket; // ivar: _connectedSocket


-(BOOL)sendData:(id)arg0 ;
-(id)initWithQueue:(id)arg0 delegate:(id)arg1 ;
-(id)initWithSocket:(int)arg0 queue:(id)arg1 delegate:(id)arg2 ;
-(id)initWithSocket:(int)arg0 queue:(id)arg1 delegate:(id)arg2 start:(BOOL)arg3 ;
-(void)_callDelegatesWithBlock:(id)arg0 ;
-(void)_processBytesAvailable;
-(void)_sendToConnectedSocket;
-(void)_setupWriteSource;
-(void)dealloc;
-(void)endSession;
-(void)setDestination:(id)arg0 ;
-(void)start;


@end


#endif