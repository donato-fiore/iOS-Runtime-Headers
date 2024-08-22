// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKASYNCSOCKETINTERNAL_H
#define GKASYNCSOCKETINTERNAL_H

@class NSMutableData, NSString;
@protocol OS_dispatch_source, OS_dispatch_queue;


#import "GKAsyncSocket.h"

@interface GKAsyncSocketInternal : GKAsyncSocket {
    NSObject<OS_dispatch_source> *_receiveSource;
    NSObject<OS_dispatch_source> *_sendSource;
    BOOL _sendSourceSuspended;
    BOOL _invalidated;
    int _connectionSocket;
    NSMutableData *_dataToSend;
    id *_receiveDataHandler;
    id *_connectedHandler;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSString *_socketName;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue


// -(BOOL)setupSourcesWithSocket:(int)arg0 receiveEventHandler:(id)arg1 sendEventHandler:(unk)arg2  ;
-(id)connectedHandler:(SEL)arg0 ;
-(id)init;
-(id)receiveDataHandler:(SEL)arg0 ;
-(id)socketName;
-(void)closeConnectionNow;
-(void)dealloc;
-(void)invalidate;
-(void)receiveData;
-(void)sendData;
-(void)sendData:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setConnectedHandler:(id)arg0 ;
-(void)setReceiveDataHandler:(id)arg0 ;
-(void)setSocketName:(id)arg0 ;
-(void)tcpAttachSocketDescriptor:(int)arg0 ;
-(void)tcpConnectSockAddr:(struct sockaddr *)arg0 port:(unsigned short)arg1 ;


@end


#endif