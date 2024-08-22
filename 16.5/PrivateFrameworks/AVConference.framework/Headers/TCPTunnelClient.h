// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCPTUNNELCLIENT_H
#define TCPTUNNELCLIENT_H

@class NSMutableDictionary, NSDictionary, NSData, NSMutableData, NSString;
@protocol VideoConferenceRealTimeChannel, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "TCPBufferPool.h"

@interface TCPTunnelClient : NSObject <VideoConferenceRealTimeChannel>

 {
    int _connectState;
    int _connectedFD;
    int _isChannelBound;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSourceSuspended;
    NSObject<OS_dispatch_source> *_timer;
    float _fTimeout;
    unsigned short _channelNumber;
    NSMutableDictionary *_reqRespDict;
    NSDictionary *_relayUpdateDict;
    tagIPPORT _serverIPPort;
    NSData *_allocateReq;
    NSData *_channelBReq;
    CGFloat _allocationTimestamp;
    NSMutableData *_currentlyReadingMessage;
    NSInteger _currentlyReadingDataGoalLength;
    unsigned short _currentMsgType;
    NSInteger _currentPadding;
    char * _writeBuf;
    int _head;
    int _tail;
    TCPBufferPool *_bufferPool;
}


@property (copy) id *allocationResponseHandler; // ivar: _allocationResponseHandler
@property (copy) id *bindingResponseHandler; // ivar: _bindingResponseHandler
@property (copy) id *destroyHandler; // ivar: _destroyHandler
@property (copy) NSString *participantID; // ivar: _participantID
@property (copy) id *receiveHandler; // ivar: _handler
@property (copy) id *terminationHandler; // ivar: _terminationHandler


-(BOOL)isTunnelSocketClosed;
-(BOOL)sendAllocateMsg:(*id)arg0 ;
-(BOOL)sendChannelBindingMsgWithDict:(id)arg0 error:(*id)arg1 ;
-(BOOL)sendRefreshMsg:(unsigned int)arg0 error:(*id)arg1 ;
-(id)initWithRelayRequestDictionary:(id)arg0 withCallID:(unsigned int)arg1 relayType:(unsigned char)arg2 errorCode:(*int)arg3 ;
-(unsigned int)connectionType;
-(void)closeTunnelSocket;
-(void)createDispatchTimer:(float)arg0 withDetailedError:(NSInteger)arg1 ;
-(void)dealloc;
-(void)destroyDispatchTimer;
-(void)processSocketRead;
-(void)processSocketReadSSL;
-(void)processSocketWrite:(unsigned char)arg0 ;
-(void)receivedControlData:(id)arg0 ;
-(void)receivedSSLConnectionData:(id)arg0 recordType:(unsigned short)arg1 ;
-(void)reportErrorAndTerminate:(NSInteger)arg0 detail:(NSInteger)arg1 returnCode:(NSInteger)arg2 description:(id)arg3 reason:(id)arg4 ;
-(void)resetConnection;
-(void)sendTCPData:(*void)arg0 bufSize:(int)arg1 ;
-(void)unbindChannel;
-(void)vcArg:(id)arg0 sendControlData:(id)arg1 isTypeSSL:(BOOL)arg2 withTimeout:(float)arg3 withDetail:(NSInteger)arg4 ;
-(void)vcArg:(id)arg0 sendRealTimeData:(id)arg1 toParticipantID:(id)arg2 ;


@end


#endif