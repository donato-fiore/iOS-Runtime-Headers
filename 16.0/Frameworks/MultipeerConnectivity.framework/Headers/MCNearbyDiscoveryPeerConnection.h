// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCNEARBYDISCOVERYPEERCONNECTION_H
#define MCNEARBYDISCOVERYPEERCONNECTION_H

@class NSMutableData, NSMutableArray, NSString, NSInputStream, NSOutputStream;
@protocol NSStreamDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MCNearbyDiscoveryPeerConnection : NSObject <NSStreamDelegate>

 {
    BOOL _connected;
    NSMutableData *_dataReceived;
    BOOL _shouldSendHello;
    BOOL _readyToWrite;
    NSMutableData *_dataToSend;
    unsigned int _currentSequenceNumber;
    NSMutableData *_dataToSendHoldingQueue;
    NSMutableArray *_receivedDataHoldingQueue;
    NSMutableArray *_messageReceiptHandlerList;
    NSMutableArray *_messageReceiptHandlerHoldingQueue;
}


@property (copy, nonatomic) id *connectedHandler; // ivar: _connectedHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSInputStream *inputStream; // ivar: _inputStream
@property (copy, nonatomic) NSString *localServiceName; // ivar: _localServiceName
@property (retain, nonatomic) NSOutputStream *outputStream; // ivar: _outputStream
@property (copy, nonatomic) id *receiveDataHandler; // ivar: _receiveDataHandler
@property (copy, nonatomic) NSString *remoteServiceName; // ivar: _remoteServiceName
@property (readonly) Class superclass;
@property (nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // ivar: _targetQueue


-(BOOL)shouldDecideAboutConnection;
-(id)initWithLocalServiceName:(id)arg0 ;
-(id)stringForStreamEventCode:(NSUInteger)arg0 ;
-(int)socketForStream:(id)arg0 ;
-(void)attachInputStream:(id)arg0 outputStream:(id)arg1 ;
-(void)connectToNetService:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)sendData:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setupInputStream:(id)arg0 outputStream:(id)arg1 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)syncAcceptedConnection;
-(void)syncAppendDataToSend:(id)arg0 ;
-(void)syncCloseConnectionNow;
-(void)syncHandleInputStreamEvent:(NSUInteger)arg0 ;
-(void)syncHandleOutputStreamEvent:(NSUInteger)arg0 ;
-(void)syncHandleStreamEventOpenCompleted:(id)arg0 ;
-(void)syncProcessMessage:(int)arg0 data:(id)arg1 sequenceNumber:(unsigned int)arg2 ;
-(void)syncReadFromInputStream;
-(void)syncReceivedData:(id)arg0 error:(id)arg1 ;
-(void)syncSendAccept;
-(void)syncSendData;
-(void)syncSendHello;
-(void)syncSendMessage:(int)arg0 data:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)syncSendMessageReceipt:(int)arg0 sequenceNumber:(unsigned int)arg1 ;


@end


#endif