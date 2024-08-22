// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDISCOVERYPEERCONNECTION_H
#define GKDISCOVERYPEERCONNECTION_H

@class NSMutableData, NSMutableArray, NSString;
@protocol GKSimpleTimerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GKAsyncSocket.h"
#import "GKSimpleTimer.h"

@interface GKDiscoveryPeerConnection : NSObject <GKSimpleTimerDelegate>

 {
    BOOL _connected;
    GKAsyncSocket *_connectionSocket;
    NSMutableData *_dataReceived;
    unsigned int _currentSequenceNumber;
    NSMutableData *_dataToSendHoldingQueue;
    NSMutableArray *_receivedDataHoldingQueue;
    NSMutableArray *_messageReceiptHandlerList;
    NSMutableArray *_messageReceiptHandlerHoldingQueue;
    GKSimpleTimer *_heartbeatTimer;
    GKSimpleTimer *_heartbeatTimeoutTimer;
    GKSimpleTimer *_timeoutTimer;
    CGFloat _connectionTimeoutInSeconds;
    CGFloat _heartbeatIntervalInSeconds;
}


@property (copy, nonatomic) id *connectedHandler; // ivar: _connectedHandler
@property (copy, nonatomic) NSString *localServiceName; // ivar: _localServiceName
@property (copy, nonatomic) id *receiveDataHandler; // ivar: _receiveDataHandler
@property (copy, nonatomic) NSString *remoteServiceName; // ivar: _remoteServiceName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue


+(NSUInteger)receiveDataLimit;
+(NSUInteger)sendDataLimit;
+(void)checkConstants;
-(BOOL)shouldDecideAboutConnection;
-(BOOL)syncSetupNewSocket;
-(id)initWithLocalServiceName:(id)arg0 ;
-(void)attachSocketDescriptor:(int)arg0 ;
-(void)connectToSockAddr:(struct sockaddr *)arg0 port:(unsigned short)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)sendData:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)syncAcceptedConnection;
-(void)syncCloseConnectionNow;
-(void)syncConnected:(id)arg0 ;
-(void)syncProcessMessage:(int)arg0 data:(id)arg1 sequenceNumber:(unsigned int)arg2 ;
-(void)syncReceivedData:(id)arg0 error:(id)arg1 ;
-(void)syncSendAccept;
-(void)syncSendHello;
-(void)syncSendMessage:(int)arg0 data:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)syncSendMessageReceipt:(int)arg0 sequenceNumber:(unsigned int)arg1 ;
-(void)timeout:(id)arg0 ;


@end


#endif