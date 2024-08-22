// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2SESSION_H
#define NEIKEV2SESSION_H

@class NSMutableArray, NSMutableDictionary, NSString, PCSimpleTimer;
@protocol NEIKEv2TransportDelegate, NEIPSecSASessionDelegate, OS_dispatch_queue, NEIKEv2ConfigurationDelegate, OS_dispatch_source, NEIKEv2PacketDelegate;

#import <Foundation/Foundation.h>

#import "NEIKEv2ConfigurationMessage.h"
#import "NEIPSecSASession.h"
#import "NEIKEv2ChildSA.h"
#import "NEIKEv2IKESAConfiguration.h"
#import "NEIKEv2IKESA.h"
#import "NEIKEv2ChildSAConfiguration.h"
#import "NEIKEv2Packet.h"
#import "NEIKEv2RTT.h"

@interface NEIKEv2Session : NSObject <NEIKEv2TransportDelegate, NEIPSecSASessionDelegate>



@property (copy) id *additionalAddressesUpdateBlock; // ivar: _additionalAddressesUpdateBlock
@property (retain) NEIKEv2ConfigurationMessage *assignedConfiguration; // ivar: _assignedConfiguration
@property (retain) NSMutableArray *childSAs; // ivar: _childSAs
@property (copy) id *childStateUpdateBlock; // ivar: _childStateUpdateBlock
@property *unk clientCallback; // ivar: _clientCallback
@property *void clientCallbackInfo; // ivar: _clientCallbackInfo
@property (retain) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (weak) NSObject<NEIKEv2ConfigurationDelegate> *configurationDelegate; // ivar: _configurationDelegate
@property (copy) id *configurationUpdateBlock; // ivar: _configurationUpdateBlock
@property (retain) NSMutableDictionary *databaseLarvalSAs; // ivar: _databaseLarvalSAs
@property (retain) NSMutableDictionary *databaseSAs; // ivar: _databaseSAs
@property (retain) NEIPSecSASession *databaseSession; // ivar: _databaseSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSObject<OS_dispatch_source> *dpdDispatchTimer; // ivar: _dpdDispatchTimer
@property (retain) PCSimpleTimer *dpdTimer; // ivar: _dpdTimer
@property (readonly) NEIKEv2ChildSA *firstChildSA;
@property (nonatomic) BOOL hasContactedConfigurationDelegate; // ivar: _hasContactedConfigurationDelegate
@property (readonly) BOOL hasInterface;
@property (nonatomic) BOOL hasOutboundRequestInFlight; // ivar: _hasOutboundRequestInFlight
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NEIKEv2IKESAConfiguration *ikeConfig; // ivar: _ikeConfig
@property (retain) NSObject<OS_dispatch_source> *ikeLifetimeTimer; // ivar: _ikeLifetimeTimer
@property (retain) NEIKEv2IKESA *ikeSA; // ivar: _ikeSA
@property (copy) id *ikeSocketHandler; // ivar: _ikeSocketHandler
@property unsigned short initiatorFragmentCount; // ivar: _initiatorFragmentCount
@property (readonly) unsigned int interfaceIndex;
@property (readonly) NSString *interfaceName;
@property *NEVirtualInterface_s ipsecInterface; // ivar: _ipsecInterface
@property BOOL isAborted; // ivar: _isAborted
@property (nonatomic) BOOL isExpectingConfigBlock; // ivar: _isExpectingConfigBlock
@property BOOL isInvalidated; // ivar: _isInvalidated
@property BOOL isListening; // ivar: _isListening
@property int lastReceivedMessageID; // ivar: _lastReceivedMessageID
@property int lastRequestMessageID; // ivar: _lastRequestMessageID
@property (copy) id *lastRequestReplyHandler; // ivar: _lastRequestReplyHandler
@property (retain) NEIKEv2ChildSAConfiguration *listenChildSAUserConfig; // ivar: _listenChildSAUserConfig
@property (nonatomic) BOOL ownsDatabaseSession; // ivar: _ownsDatabaseSession
@property BOOL ownsIPSecInterface; // ivar: _ownsIPSecInterface
@property (weak) NSObject<NEIKEv2PacketDelegate> *packetDelegate; // ivar: _packetDelegate
@property (readonly) BOOL peerAuthenticated;
@property (retain, nonatomic) NSMutableArray *pendingRequestContexts; // ivar: _pendingRequestContexts
@property int previousMOBIKEMessageID; // ivar: _previousMOBIKEMessageID
@property (retain) NEIKEv2Packet *previousMOBIKERequest; // ivar: _previousMOBIKERequest
@property (copy) id *privateNotifyStatusEvent; // ivar: _privateNotifyStatusEvent
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *receiveTimer; // ivar: _receiveTimer
@property (retain) NSMutableDictionary *receivedInitiatorFragments; // ivar: _receivedInitiatorFragments
@property (retain) NSMutableDictionary *receivedReplies; // ivar: _receivedReplies
@property (retain) NSMutableDictionary *receivedRequests; // ivar: _receivedRequests
@property (retain) NSMutableDictionary *receivedResponderFragments; // ivar: _receivedResponderFragments
@property (copy) id *redirectEventBlock; // ivar: _redirectEventBlock
@property unsigned short responderFragmentCount; // ivar: _responderFragmentCount
@property (retain) NEIKEv2RTT *rttState; // ivar: _rttState
@property (retain) NSObject<OS_dispatch_source> *sendTimer; // ivar: _sendTimer
@property (retain) NSMutableDictionary *sentReplies; // ivar: _sentReplies
@property (retain) NSMutableDictionary *sentRequests; // ivar: _sentRequests
@property (copy) id *shortDPDEventBlock; // ivar: _shortDPDEventBlock
@property NSUInteger state; // ivar: _state
@property (copy) id *stateUpdateBlock; // ivar: _stateUpdateBlock
@property (readonly) Class superclass;
@property (copy) id *trafficSelectorUpdateBlock; // ivar: _trafficSelectorUpdateBlock
@property (nonatomic) NSUInteger uniqueIndex; // ivar: _uniqueIndex
@property (copy) id *waitingRequestHandler; // ivar: _waitingRequestHandler


+(unsigned int)getNewChildSAID;
-(BOOL)fireWaitingRequestHandlerWithPacket:(id)arg0 ;
-(BOOL)generateSPIForChild:(id)arg0 proposals:(id)arg1 ;
-(BOOL)innerReceiveDeleteIKESA:(id)arg0 ;
-(BOOL)installChildSA:(id)arg0 ;
-(BOOL)migrateAllChildSAs;
-(BOOL)migrateChildSA:(id)arg0 ;
-(BOOL)receiveDeleteChildSPI:(id)arg0 remoteSPI:(id)arg1 packet:(id)arg2 ;
-(BOOL)sendCurrentRequest:(id)arg0 ;
-(BOOL)sendReply:(id)arg0 replyHandler:(id)arg1 ;
-(BOOL)sendReplyForMessageID:(int)arg0 ;
-(BOOL)updateConfiguration:(id)arg0 ;
-(id)copyChildWithID:(unsigned int)arg0 ;
-(id)copyChildWithRekeyedSPI:(id)arg0 ;
-(id)copyChildWithSPI:(id)arg0 ;
-(id)copyIPsecInterface;
-(id)copyIPsecInterfaceWithMissingAllowed:(BOOL)arg0 ;
-(id)copyReceivedReplyForMessageID:(int)arg0 ;
-(id)copyReceivedRequestForMessageID:(int)arg0 ;
-(id)copySAFromDictionary:(id)arg0 forChild:(id)arg1 ;
-(id)copySAFromDictionary:(id)arg0 forSPI:(id)arg1 ;
-(id)copySAsToDeleteAndInstallRekeyedChildSA:(id)arg0 ;
-(id)initWithIKEConfig:(id)arg0 configurationDelegate:(id)arg1 queue:(id)arg2 kernelSASessionName:(id)arg3 transport:(id)arg4 packetDelegate:(id)arg5 ;
-(id)initWithIKEConfig:(id)arg0 configurationDelegate:(id)arg1 queue:(id)arg2 saSession:(id)arg3 shouldCopySASession:(BOOL)arg4 transport:(id)arg5 packetDelegate:(id)arg6 ;
// -(id)initWithIKEConfig:(id)arg0 firstChildConfig:(id)arg1 sessionConfig:(id)arg2 queue:(id)arg3 ipsecInterface:(struct NEVirtualInterface_s *)arg4 ikeSocketHandler:(id)arg5 kernelSASessionName:(unk)arg6 packetDelegate:(id)arg7  ;
// -(id)initWithIKEConfig:(id)arg0 firstChildConfig:(id)arg1 sessionConfig:(id)arg2 queue:(id)arg3 ipsecInterface:(struct NEVirtualInterface_s *)arg4 ikeSocketHandler:(id)arg5 saSession:(unk)arg6 packetDelegate:(id)arg7  ;
// -(id)initWithIKEConfig:(id)arg0 firstChildConfig:(id)arg1 sessionConfig:(id)arg2 queue:(id)arg3 ipsecInterface:(struct NEVirtualInterface_s *)arg4 ikeSocketHandler:(id)arg5 saSession:(unk)arg6 shouldOwnSASession:(id)arg7 packetDelegate:(BOOL)arg8 transport:(id)arg9 configurationDelegate:(id)arg10  ;
-(id)setupReceivedChildCopyError;
-(int)sendRequest:(id)arg0 retry:(BOOL)arg1 replyHandler:(id)arg2 ;
// -(int)sendRequest:(id)arg0 retry:(BOOL)arg1 sendCompletionHandler:(id)arg2 replyHandler:(unk)arg3  ;
// -(int)sendRequest:(id)arg0 retryIntervalInMilliseconds:(NSUInteger)arg1 maxRetries:(unsigned int)arg2 timeoutError:(id)arg3 resend:(BOOL)arg4 sendMessageID:(int)arg5 sendCompletionHandler:(id)arg6 replyHandler:(unk)arg7  ;
-(unsigned int)addChild:(id)arg0 ;
-(void)abort;
-(void)addEmptyInterface;
-(void)addFirstChild:(id)arg0 ;
-(void)blackholeDetectedSA:(id)arg0 ;
-(void)cancelDPDTimer;
-(void)cancelSendTimer;
-(void)connect;
-(void)dealloc;
-(void)deleteSA:(id)arg0 ;
-(void)disconnect;
-(void)enqueuePendingRequestContext:(id)arg0 ;
-(void)expireSA:(id)arg0 ;
-(void)finishConfigurationEstablishment;
-(void)flushPendingRequestContexts;
-(void)forceRekeyChild:(unsigned int)arg0 ;
-(void)forceRekeyIKE;
-(void)handleEAPIKESA:(id)arg0 childSA:(id)arg1 authPacket:(id)arg2 handler:(id)arg3 ;
-(void)idleTimeoutSA:(id)arg0 ;
-(void)initiateConnect;
-(void)initiateDelete:(id)arg0 ;
-(void)initiateDeleteChildSA:(id)arg0 ;
-(void)initiateDeleteChildSPI:(id)arg0 remoteSPI:(id)arg1 deleteCompletionCallback:(id)arg2 ;
-(void)initiateInformational:(id)arg0 ;
-(void)initiateMOBIKE:(id)arg0 ;
-(void)initiateMOBIKEInner:(id)arg0 ;
-(void)initiateNewChildSA:(id)arg0 ;
-(void)initiateRekeyChildSA:(id)arg0 ;
-(void)initiateRekeyIKESA:(id)arg0 ;
-(void)invalidate;
-(void)invalidateWithCompletionHandler:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)receiveConnection:(id)arg0 ;
-(void)receiveDeleteChildSA:(id)arg0 ;
-(void)receiveDeleteIKESA:(id)arg0 ;
-(void)receiveInformational:(id)arg0 ;
-(void)receiveMOBIKE:(id)arg0 ;
-(void)receiveNewChildSA:(id)arg0 packet:(id)arg1 ;
-(void)receivePacket:(id)arg0 ;
-(void)receiveRedirect:(id)arg0 ;
-(void)receiveRekeyChildSA:(id)arg0 packet:(id)arg1 ;
-(void)receiveRekeyIKESA:(id)arg0 ;
-(void)removeChild:(unsigned int)arg0 ;
-(void)reportAdditionalAddressesInPacket:(id)arg0 ;
-(void)reportConfiguration;
-(void)reportCustomPayload:(id)arg0 ;
-(void)reportError:(int)arg0 ;
-(void)reportPrivateNotifies:(id)arg0 ;
-(void)reportPrivateNotifiesInPacket:(id)arg0 ;
-(void)reportServerAdditionalAddresses:(id)arg0 ;
-(void)reportServerRedirect:(id)arg0 ;
-(void)reportShortDPD;
-(void)reportState;
-(void)reportTrafficSelectorsForChildSA:(id)arg0 ;
-(void)resendPreviousMOBIKEInnerWithRetries:(unsigned int)arg0 retryInterval:(NSUInteger)arg1 handler:(id)arg2 ;
-(void)resetAll;
-(void)resetChild:(id)arg0 ;
-(void)resetMessages;
-(void)retryCookieForIKESA:(id)arg0 validated:(BOOL)arg1 handler:(id)arg2 ;
-(void)retryDHForIKESA:(id)arg0 validated:(BOOL)arg1 handler:(id)arg2 ;
-(void)saveFragment:(id)arg0 ;
-(void)sendKeepaliveWithRetries:(unsigned int)arg0 retryIntervalInMilliseconds:(NSUInteger)arg1 callbackQueue:(id)arg2 callback:(id)arg3 ;
-(void)sendMOBIKEWithRetries:(unsigned int)arg0 retryInterval:(NSUInteger)arg1 interfaceName:(id)arg2 invalidateTransport:(BOOL)arg3 resetEndpoint:(id)arg4 callbackQueue:(id)arg5 callback:(id)arg6 ;
-(void)sendPendingRequestContext;
-(void)sendPrivateNotifies:(id)arg0 maxRetries:(unsigned int)arg1 retryIntervalInMilliseconds:(NSUInteger)arg2 callbackQueue:(id)arg3 callback:(id)arg4 ;
-(void)setIKESA:(id)arg0 ;
-(void)setReceivedReply:(id)arg0 messageID:(int)arg1 ;
-(void)setReceivedRequest:(id)arg0 messageID:(int)arg1 ;
-(void)setSentMOBIKERequest:(id)arg0 messageID:(int)arg1 ;
-(void)setSentReply:(id)arg0 messageID:(int)arg1 ;
-(void)setSentRequest:(id)arg0 ;
-(void)setupReceivedChildWithHandler:(id)arg0 ;
-(void)startDPDTimer;
-(void)startIKELifetimeTimer;
-(void)unestablishConfiguration;
-(void)uninstallAllChildSAs;
-(void)uninstallChildSA:(id)arg0 ;
-(void)uninstallOldRekeyedChildSAs:(id)arg0 ;


@end


#endif