// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCTRANSPORTSESSIONLEGACY_H
#define VCTRANSPORTSESSIONLEGACY_H

@class NSCondition, NSString, NSData, NSMutableDictionary, NSDictionary;
@protocol LoopbackSocketTunnelDelegate, InterfaceListenerDelegate, VCConnectionManagerDelegate, OS_dispatch_source, VideoConferenceRealTimeChannel, VCConnectionProtocol, VCTransportSessionLegacyDelegate;


#import "VCTransportSession.h"
#import "VCTransport.h"
#import "TCPTunnelClient.h"
#import "LoopbackSocketTunnel.h"
#import "GKInterfaceListener.h"

@interface VCTransportSessionLegacy : VCTransportSession <LoopbackSocketTunnelDelegate, InterfaceListenerDelegate, VCConnectionManagerDelegate>

 {
    unsigned char _localU8Version;
    NSInteger relayState;
    float callerPreEmptiveTimeoutInSecs;
    unsigned int _connectionSetupRTTEstimate;
    BOOL requestedTimeoutRelay;
    BOOL _didReceivePiggybackBlob;
    BOOL _useLoopback;
    BOOL _isRemoteOSPreLion;
    BOOL _isStarted;
    NSObject<OS_dispatch_source> *relaySetupTimer;
    VCTransport *transport;
    unsigned int _callID;
    *__SecIdentity _identity;
    TCPTunnelClient *_tcpTunnelClient;
    NSObject<VideoConferenceRealTimeChannel> *rtChannel;
    LoopbackSocketTunnel *_tunnel;
    id<VCConnectionProtocol> *_loopbackConnection;
    NSCondition *_connectionDataTimeoutCondVar;
    GKInterfaceListener *_interfaceListener;
    id *_delegate;
}


@property int NATType; // ivar: _NATType
@property BOOL allowsRelay; // ivar: allowsRelay
@property (readonly, copy) NSString *debugDescription;
@property NSObject<VCTransportSessionLegacyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL initialSecondaryRelaySetupDone; // ivar: initialSecondaryRelaySetupDone
@property BOOL isCaller; // ivar: _isCaller
@property (retain) NSData *localConnectionData; // ivar: _localConnectionData
@property (copy) NSString *localParticipantID; // ivar: _localParticipantID
@property (retain) NSData *localRelayConnectionData; // ivar: _localRelayConnectionData
@property (retain) NSMutableDictionary *localRelayRequestResponse; // ivar: _localRelayRequestResponse
@property (retain, nonatomic) NSDictionary *localRelayUpdate; // ivar: _localRelayUpdate
@property int operatingMode; // ivar: _operatingMode
@property (nonatomic) int pendingRelayCount; // ivar: pendingRelayCount
@property unsigned int remoteCallID; // ivar: _remoteCallID
@property (retain) NSData *remoteConnectionData; // ivar: _remoteConnectionData
@property (copy) NSString *remoteParticipantID; // ivar: _remoteParticipantID
@property (retain, nonatomic) NSData *remoteRelayConnectionData; // ivar: _remoteRelayConnectionData
@property (retain, nonatomic) NSMutableDictionary *remoteRelayRequestResponse; // ivar: _remoteRelayRequestResponse
@property (retain, nonatomic) NSDictionary *remoteRelayUpdate; // ivar: _remoteRelayUpdate
@property (copy) NSString *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;


-(BOOL)createTCPTunnelForParticipantID:(id)arg0 relayDictionary:(id)arg1 didOriginateRequest:(BOOL)arg2 relayType:(unsigned char)arg3 error:(*id)arg4 ;
-(BOOL)getConnectionSetupData:(*id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(BOOL)handleExchangedKey:(id)arg0 result:(int)arg1 ;
-(BOOL)isConnectedAndAllowAdditionalConnection;
-(BOOL)isHandoverSupported;
-(BOOL)isRemoteOSPreLion;
-(BOOL)startConnectionWithBlob:(id)arg0 useRelay:(BOOL)arg1 isInitialRelay:(BOOL)arg2 error:(*id)arg3 ;
-(CGFloat)iceTimeoutInSeconds:(BOOL)arg0 ;
-(id)connectionData:(char *)arg0 connectionDataSizeInBytes:(int)arg1 shouldUseRelay:(BOOL)arg2 ;
-(id)connectionDataUsingRelay:(BOOL)arg0 isInitialRelay:(BOOL)arg1 nonCellularCandidateTimeout:(CGFloat)arg2 error:(*id)arg3 ;
-(id)createInitiateRelayDictionary;
-(id)createInitiateRelayDictionaryForCall:(unsigned int)arg0 primaryConnection:(struct tagCONNRESULT *)arg1 ;
-(id)createRelayUpdateDictionary:(id)arg0 ;
-(id)initWithCallID:(unsigned int)arg0 reportingAgent:(id)arg1 ;
-(int)detailedErrorCode;
-(int)flushBasebandQueueForConnection:(id)arg0 payloadInfoList:(id)arg1 ;
-(int)generateConnectionData:(*char *)arg0 forCallID:(unsigned int)arg1 connectionDataSize:(*int)arg2 nonCellularCandidateTimeout:(CGFloat)arg3 ;
-(int)getSignalStrengthBars:(*int)arg0 displayBars:(*int)arg1 maxDisplayBars:(*int)arg2 ;
-(int)registerBasebandNotificationsForConnection:(id)arg0 ;
-(int)updateQualityIndicator:(int)arg0 isIPv6:(BOOL)arg1 ;
-(struct tagIPPORT )IPPortForPrimaryConnectionOnLocalInterface:(BOOL)arg0 ;
-(unsigned char)transportCallType;
-(unsigned int)connectionSetupRTTEstimate;
-(unsigned int)connectionTypeForConnectionResult:(struct tagCONNRESULT *)arg0 ;
-(void)connectionCallback:(id)arg0 isInitialConnection:(BOOL)arg1 ;
-(void)connectionResultCallback:(struct tagCONNRESULT *)arg0 didReceiveICEPacket:(BOOL)arg1 didUseRelay:(BOOL)arg2 secretKey:(id)arg3 skeResult:(int)arg4 ;
-(void)createSecondaryRelayDispatchTimer:(float)arg0 callID:(unsigned int)arg1 callerRequired:(BOOL)arg2 ;
-(void)dealloc;
-(void)deleteTCPTunnel;
-(void)deregisterBasebandNotifications;
-(void)destroySecondaryRelayDispatchTimer;
-(void)didEnableDuplication:(BOOL)arg0 activeConnection:(id)arg1 ;
-(void)didMediaQualityDegrade:(BOOL)arg0 ;
-(void)didUpdatePreferredInterfaceForDuplication:(unsigned char)arg0 notifyPeer:(BOOL)arg1 enableDuplication:(BOOL)arg2 isMediaUnrecoverableSignal:(BOOL)arg3 ;
-(void)flushLinkProbingStatusWithOptions:(id)arg0 ;
-(void)getConnectionDataUsingRelay:(BOOL)arg0 isInitialRelay:(BOOL)arg1 nonCellularCandidateTimeout:(CGFloat)arg2 queue:(id)arg3 completionHandler:(id)arg4 ;
-(void)handleConnectionSetupDataChangeMessageDelivered;
-(void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg0 ;
-(void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg0 ;
-(void)handleNewCandidates:(id)arg0 version:(unsigned short)arg1 ;
-(void)handleRATChanged:(id)arg0 ;
-(void)initiateRelayRequest;
-(void)loopbackSocketTunnel:(id)arg0 receivedData:(id)arg1 from:(struct tagIPPORT *)arg2 ;
-(void)networkStateDidChange;
-(void)notifyDelegateToCancelRelay;
-(void)primaryConnectionChanged:(id)arg0 oldPrimaryConnection:(id)arg1 activeConnection:(id)arg2 ;
-(void)processRelayRequestResponse:(id)arg0 didOriginateRequest:(BOOL)arg1 ;
-(void)processRelayUpdate:(id)arg0 didOriginateRequest:(BOOL)arg1 ;
-(void)processRemoteIPChange:(char *)arg0 dataLength:(int)arg1 remoteCandidateVersion:(unsigned short)arg2 ;
-(void)processRemoteIPChange:(id)arg0 ;
-(void)queryProbingResultsWithOptions:(id)arg0 ;
-(void)receivedRealTimeData:(id)arg0 fromParticipantID:(id)arg1 ;
-(void)reportNetworkConditionsDegraded;
-(void)resetICETimeoutToLongTimeout;
-(void)resetLoopback;
-(void)setForceRelay;
-(void)setIdentity:(struct __SecIdentity *)arg0 ;
-(void)setupInitialSecondaryRelayWithCallbackRelayFlag:(BOOL)arg0 callID:(unsigned int)arg1 connectionId:(int)arg2 ;
-(void)setupLoopbackWithConnectionType:(unsigned int)arg0 ;
-(void)setupPendingSecondaryRelayWithNewPrimary:(id)arg0 ;
-(void)setupSecondaryRelayForCall:(unsigned int)arg0 callerRequired:(BOOL)arg1 ;
-(void)setupTransport;
-(void)start;
-(void)startActiveProbingWithOptions:(id)arg0 ;
-(void)stop;
-(void)stopActiveProbingWithOptions:(id)arg0 ;
-(void)stopLoopback;
-(void)stopLoopbackProc:(id)arg0 ;
-(void)triggerInterfaceChange;
-(void)updateParticipantGenerationCounter:(unsigned char)arg0 ;


@end


#endif