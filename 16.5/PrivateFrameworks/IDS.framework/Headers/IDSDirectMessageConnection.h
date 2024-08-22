// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSDIRECTMESSAGECONNECTION_H
#define IDSDIRECTMESSAGECONNECTION_H

@class IMPowerAssertion, NSMutableArray, NSString, NSMutableDictionary, NSDictionary, IDSServiceProperties;
@protocol OS_nw_connection, OS_dispatch_queue, IDSDirectMessageConnectionDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "IDSDevice.h"
#import "IDSDeviceConnection.h"

@interface IDSDirectMessageConnection : NSObject

@property (retain, nonatomic) IMPowerAssertion *assertion; // ivar: _assertion
@property (nonatomic) BOOL conciseACKSupported; // ivar: _conciseACKSupported
@property (retain, nonatomic) NSObject<OS_nw_connection> *connection; // ivar: _connection
@property (nonatomic) BOOL connectionIsIncoming; // ivar: _connectionIsIncoming
@property (retain, nonatomic) NSMutableArray *connectionMessageSendQueue; // ivar: _connectionMessageSendQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (nonatomic) BOOL connectionSetupInProgress; // ivar: _connectionSetupInProgress
@property (nonatomic) int connectionState; // ivar: _connectionState
@property (retain, nonatomic) NSString *currentStreamName; // ivar: _currentStreamName
@property (nonatomic) unsigned int dataProtectionClass; // ivar: _dataProtectionClass
@property (weak, nonatomic) NSObject<IDSDirectMessageConnectionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) IDSDevice *device; // ivar: _device
@property (retain, nonatomic) IDSDeviceConnection *deviceConnection; // ivar: _deviceConnection
@property (nonatomic) BOOL directMessagingAllowed; // ivar: _directMessagingAllowed
@property (nonatomic) int directMessagingReportStatsMSEC; // ivar: _directMessagingReportStatsMSEC
@property (nonatomic) int directMessagingRetryMSEC; // ivar: _directMessagingRetryMSEC
@property (nonatomic) NSUInteger directMessagingState; // ivar: _directMessagingState
@property (nonatomic) BOOL directMessagingSupported; // ivar: _directMessagingSupported
@property (nonatomic) int directMessagingTimeOutMSEC; // ivar: _directMessagingTimeOutMSEC
@property (nonatomic) NSUInteger identifier; // ivar: _identifier
@property (nonatomic) NSInteger idsPriorityToUse; // ivar: _idsPriorityToUse
@property (nonatomic) NSUInteger incomingMessageBytes; // ivar: _incomingMessageBytes
@property (nonatomic) NSUInteger incomingMessageCount; // ivar: _incomingMessageCount
@property (retain, nonatomic) NSMutableDictionary *messageIDToMessageDictionary; // ivar: _messageIDToMessageDictionary
@property (nonatomic) int notifyToken; // ivar: _notifyToken
@property (nonatomic) NSUInteger outgoingMessageBytes; // ivar: _outgoingMessageBytes
@property (nonatomic) NSUInteger outgoingMessageCount; // ivar: _outgoingMessageCount
@property (retain, nonatomic) NSString *peerID; // ivar: _peerID
@property (nonatomic) BOOL peerIsConnected; // ivar: _peerIsConnected
@property (nonatomic) BOOL peerIsNearby; // ivar: _peerIsNearby
@property (nonatomic) BOOL peerSupportsDeviceConnection; // ivar: _peerSupportsDeviceConnection
@property (retain, nonatomic) NSObject<OS_dispatch_source> *pendingAckTimer; // ivar: _pendingAckTimer
@property (nonatomic) BOOL pendingAckTimerSuspended; // ivar: _pendingAckTimerSuspended
@property (retain, nonatomic) NSDictionary *powerAssertionOptions; // ivar: _powerAssertionOptions
@property (retain, nonatomic) NSMutableDictionary *queueOneToMessageIDDictionary; // ivar: _queueOneToMessageIDDictionary
@property (retain, nonatomic) NSObject<OS_dispatch_source> *reporterTimer; // ivar: _reporterTimer
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) IDSServiceProperties *serviceProperties; // ivar: _serviceProperties
@property (nonatomic) char * shortServiceNameCString; // ivar: _shortServiceNameCString
@property (nonatomic) NSInteger trafficClassApplied; // ivar: _trafficClassApplied
@property (nonatomic) BOOL trafficClassInitialized; // ivar: _trafficClassInitialized
@property (nonatomic) BOOL trafficClassTLVProcessed; // ivar: _trafficClassTLVProcessed
@property (nonatomic) unsigned int trafficClassToUse; // ivar: _trafficClassToUse
@property (nonatomic) BOOL upgradedTrafficClass; // ivar: _upgradedTrafficClass


+(BOOL)isDirectMessagingRequested:(id)arg0 ;
-(BOOL)canUseDirectMessaging;
-(BOOL)isMessageEligible:(id)arg0 options:(id)arg1 destinationDevice:(id)arg2 ;
-(id)createDispatchDataForMessageSend:(id)arg0 isAck:(BOOL)arg1 ackMessageId:(unsigned int)arg2 ;
-(id)description;
-(id)initWithServiceName:(id)arg0 queue:(id)arg1 delegate:(id)arg2 ;
-(unsigned char)getMessageTypeForFirstMessage;
-(void)cancel;
-(void)cancelPendingAckTimer;
-(void)clearPowerAssertion;
-(void)dealloc;
-(void)dequeueMessages;
-(void)failedToSendMessage:(id)arg0 responseCode:(NSInteger)arg1 ;
-(void)getPowerAssertion;
-(void)invalidate;
-(void)logConnectionStatisticsInPowerDictionary;
-(void)parseDirectMessagingState;
-(void)processIncomingMessage:(id)arg0 messageType:(unsigned char)arg1 messageIdentifier:(unsigned int)arg2 ;
-(void)receiveMessages;
-(void)receivedDirectMessagingSocketWithContext:(id)arg0 ;
-(void)resumePendingAckTimer;
-(void)sendAckForMessageID:(unsigned int)arg0 guidToAck:(id)arg1 ;
-(void)sendAppAckWithGUID:(id)arg0 ;
-(void)sendMessageWithParameters:(id)arg0 options:(id)arg1 ;
-(void)setDestinationDevice:(id)arg0 ;
-(void)setupConnectionIfApplicable;
-(void)setupIDSDeviceConnection;
-(void)startPowerLogReportTimer;
-(void)suspendPendingAckTimer;
-(void)updateConnectedDevices:(id)arg0 ;
-(void)updateConnection:(id)arg0 ;
-(void)updateMetadata:(id)arg0 ;
-(void)updateTrafficClass:(unsigned short)arg0 ;


@end


#endif