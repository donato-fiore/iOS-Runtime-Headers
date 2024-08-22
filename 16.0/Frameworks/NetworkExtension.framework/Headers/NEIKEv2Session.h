// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2SESSION_H
#define NEIKEV2SESSION_H

@class NSMutableDictionary, SWWakingTimer, NSMutableArray, NSString;
@protocol NEIKEv2TransportDelegate, NEIPSecSASessionDelegate, OS_dispatch_source, NEIKEv2ConfigurationDelegate, NEIKEv2PacketDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NEIKEv2ConfigurationMessage.h"
#import "NEIKEv2ChildSAConfiguration.h"
#import "NEIPSecSASession.h"
#import "NEIKEv2IKESA.h"
#import "NEIKEv2RTT.h"
#import "NEIKEv2Packet.h"
#import "NEIKEv2IKESAConfiguration.h"

@interface NEIKEv2Session : NSObject <NEIKEv2TransportDelegate, NEIPSecSASessionDelegate>

 {
    BOOL _isListening;
    BOOL _ownsDatabaseSession;
    BOOL _ownsIPSecInterface;
    BOOL _isAborted;
    BOOL _isInvalidated;
    BOOL _isExpectingConfigBlock;
    BOOL _hasContactedConfigurationDelegate;
    BOOL _hasOutboundRequestInFlight;
    unsigned short _initiatorFragmentCount;
    unsigned short _responderFragmentCount;
    int _lastRequestMessageID;
    int _lastReceivedMessageID;
    int _previousMOBIKEMessageID;
    NSUInteger _state;
    NEIKEv2ConfigurationMessage *_assignedConfiguration;
    id *_ikeSocketHandler;
    NEIKEv2ChildSAConfiguration *_listenChildSAUserConfig;
    NEIPSecSASession *_databaseSession;
    NSMutableDictionary *_databaseLarvalSAs;
    NSMutableDictionary *_databaseSAs;
    id *_lastRequestReplyHandler;
    id *_waitingRequestHandler;
    NSMutableDictionary *_sentRequests;
    NSMutableDictionary *_sentReplies;
    NSMutableDictionary *_receivedRequests;
    NSMutableDictionary *_receivedReplies;
    NSMutableDictionary *_receivedInitiatorFragments;
    NSMutableDictionary *_receivedResponderFragments;
    NSObject<OS_dispatch_source> *_ikeLifetimeTimer;
    SWWakingTimer *_dpdTimer;
    NSObject<OS_dispatch_source> *_dpdDispatchTimer;
    NSMutableArray *_childSAs;
    NSObject<OS_dispatch_source> *_sendTimer;
    NSObject<OS_dispatch_source> *_receiveTimer;
    NSUInteger _uniqueIndex;
    NSMutableArray *_pendingRequestContexts;
    *NEVirtualInterface_s _ipsecInterface;
    NEIKEv2IKESA *_ikeSA;
    id<NEIKEv2ConfigurationDelegate> *_configurationDelegate;
    id<NEIKEv2PacketDelegate> *_packetDelegate;
    NEIKEv2RTT *_rttState;
    NSObject<OS_dispatch_queue> *_queue;
    NEIKEv2Packet *_previousMOBIKERequest;
    NEIKEv2IKESAConfiguration *_ikeConfig;
}


@property (copy) id *additionalAddressesUpdateBlock; // ivar: _additionalAddressesUpdateBlock
@property (readonly) NEIKEv2ConfigurationMessage *assignedConfiguration;
@property (copy) id *childStateUpdateBlock; // ivar: _childStateUpdateBlock
@property *unk clientCallback; // ivar: _clientCallback
@property *void clientCallbackInfo; // ivar: _clientCallbackInfo
@property (retain) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (copy) id *configurationUpdateBlock; // ivar: _configurationUpdateBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL peerAuthenticated;
@property (copy) id *privateNotifyStatusEvent; // ivar: _privateNotifyStatusEvent
@property (copy) id *redirectEventBlock; // ivar: _redirectEventBlock
@property (copy) id *shortDPDEventBlock; // ivar: _shortDPDEventBlock
@property (readonly) NSUInteger state;
@property (copy) id *stateUpdateBlock; // ivar: _stateUpdateBlock
@property (readonly) Class superclass;
@property (copy) id *trafficSelectorUpdateBlock; // ivar: _trafficSelectorUpdateBlock


-(BOOL)checkSelectedChildSAProposal:(id)arg0 ;
-(BOOL)checkSelectedIKEProposal:(id)arg0 ;
-(BOOL)updateConfiguration:(id)arg0 ;
// -(id)initWithIKEConfig:(id)arg0 firstChildConfig:(id)arg1 sessionConfig:(id)arg2 queue:(id)arg3 ipsecInterface:(struct NEVirtualInterface_s *)arg4 ikeSocketHandler:(id)arg5 kernelSASessionName:(unk)arg6 packetDelegate:(id)arg7  ;
// -(id)initWithIKEConfig:(id)arg0 firstChildConfig:(id)arg1 sessionConfig:(id)arg2 queue:(id)arg3 ipsecInterface:(struct NEVirtualInterface_s *)arg4 ikeSocketHandler:(id)arg5 saSession:(unk)arg6 packetDelegate:(id)arg7  ;
-(unsigned int)addChild:(id)arg0 ;
-(void)blackholeDetectedSA:(id)arg0 ;
-(void)connect;
-(void)dealloc;
-(void)deleteSA:(id)arg0 ;
-(void)disconnect;
-(void)expireSA:(id)arg0 ;
-(void)forceRekeyChild:(unsigned int)arg0 ;
-(void)forceRekeyIKE;
-(void)idleTimeoutSA:(id)arg0 ;
-(void)invalidate;
-(void)invalidateWithCompletionHandler:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)receivePacket:(id)arg0 ;
-(void)removeChild:(unsigned int)arg0 ;
-(void)reportError:(int)arg0 ;
-(void)sendKeepaliveWithRetries:(unsigned int)arg0 retryIntervalInMilliseconds:(NSUInteger)arg1 callbackQueue:(id)arg2 callback:(id)arg3 ;
-(void)sendMOBIKEWithRetries:(unsigned int)arg0 retryInterval:(NSUInteger)arg1 interfaceName:(id)arg2 invalidateTransport:(BOOL)arg3 resetEndpoint:(id)arg4 callbackQueue:(id)arg5 callback:(id)arg6 ;
-(void)sendPrivateNotifies:(id)arg0 maxRetries:(unsigned int)arg1 retryIntervalInMilliseconds:(NSUInteger)arg2 callbackQueue:(id)arg3 callback:(id)arg4 ;


@end


#endif