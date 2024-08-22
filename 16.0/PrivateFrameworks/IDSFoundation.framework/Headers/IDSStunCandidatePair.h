// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSSTUNCANDIDATEPAIR_H
#define IDSSTUNCANDIDATEPAIR_H

@class NSMutableSet, NSMutableDictionary, NSDictionary, NSString, NSData, NSUUID, NSMutableArray;
@protocol IDSStunCandidatePairDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "IDSStunCandidate.h"
#import "IDSQuickRelaySessionInfo.h"

@interface IDSStunCandidatePair : NSObject {
    id<IDSStunCandidatePairDelegate> *_delegate;
    NSMutableSet *_pendingProtoRequests;
    NSMutableDictionary *_requestIDToQueryLinkIDs;
    NSMutableDictionary *_requestIDToSessionInfoReqType;
    NSMutableDictionary *_stunSentBytesToRequestID;
    NSMutableDictionary *_pluginNameToStunReqID;
    NSObject<OS_dispatch_source> *_sessionConnectedTimer;
    id *_sessionConnectedTimeoutBlock;
    NSObject<OS_dispatch_source> *_sessionConvergenceTimer;
    id *_sessionConvergenceBlock;
    NSObject<OS_dispatch_source> *_sessionGoAwayTimer;
    id *_sessionGoAwayBlock;
    NSObject<OS_dispatch_source> *_reallocTimer;
    NSObject<OS_dispatch_source> *_noSessionStateTimer;
    unsigned short _testRequestedMessageType;
    NSObject<OS_dispatch_source> *_probingTimer;
}


@property (readonly, nonatomic) NSDictionary *URIToParticipantIDs; // ivar: _URIToParticipantIDs
@property (nonatomic) CGFloat allocateTime; // ivar: _allocateTime
@property (nonatomic) NSInteger allocateType; // ivar: _allocateType
@property (retain) NSObject<OS_dispatch_source> *allocbindFailoverTimer; // ivar: _allocbindFailoverTimer
@property (readonly) NSString *appName; // ivar: _appName
@property (readonly, nonatomic) NSUInteger capabilityFlags; // ivar: _capabilityFlags
@property (nonatomic) unsigned short channelNumber; // ivar: _channelNumber
@property (readonly) NSData *decKey; // ivar: _decKey
@property (copy) NSUUID *defaultLocalDeviceCBUUID; // ivar: _defaultLocalDeviceCBUUID
@property (copy) NSUUID *defaultRemoteDeviceCBUUID; // ivar: _defaultRemoteDeviceCBUUID
@property (readonly, nonatomic) char delegatedLinkID; // ivar: _delegatedLinkID
@property (readonly, nonatomic) BOOL enableSKE; // ivar: _enableSKE
@property (readonly) NSData *encKey; // ivar: _encKey
@property (copy) NSString *groupID; // ivar: _groupID
@property (readonly, nonatomic) unsigned short hbCounter; // ivar: _hbCounter
@property (nonatomic) CGFloat hbStartTime; // ivar: _hbStartTime
@property (nonatomic) BOOL hbStarted; // ivar: _hbStarted
@property (copy) NSData *hbhDecKey; // ivar: _hbhDecKey
@property (copy) NSData *hbhEncKey; // ivar: _hbhEncKey
@property (readonly) NSData *hbhSalt; // ivar: _hbhSalt
@property (readonly) NSData *hmacKey; // ivar: _hmacKey
@property (nonatomic) BOOL isAcceptedRelaySession; // ivar: _isAcceptedRelaySession
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (nonatomic) BOOL isDisconnecting; // ivar: _isDisconnecting
@property (readonly, nonatomic) BOOL isInitiator; // ivar: _isInitiator
@property (nonatomic) BOOL isNominated; // ivar: _isNominated
@property (nonatomic) BOOL isQUIC; // ivar: _isQUIC
@property (nonatomic) BOOL isRealloc; // ivar: _isRealloc
@property (nonatomic) CGFloat lastIncomingPacketTime; // ivar: _lastIncomingPacketTime
@property (nonatomic) CGFloat lastOutgoingPacketTime; // ivar: _lastOutgoingPacketTime
@property (nonatomic) CGFloat lastStatsReport; // ivar: _lastStatsReport
@property (nonatomic) char linkID; // ivar: _linkID
@property (copy) NSUUID *linkUUID; // ivar: _linkUUID
@property (readonly) IDSStunCandidate *local; // ivar: _local
@property (nonatomic) NSInteger participantID; // ivar: _participantID
@property (readonly) NSDictionary *participantIDMap; // ivar: _participantIDMap
@property (nonatomic) BOOL pendingNoSessionStateAllocbind; // ivar: _pendingNoSessionStateAllocbind
@property (nonatomic) BOOL pendingRealloc; // ivar: _pendingRealloc
@property (readonly) NSMutableArray *pendingStunRequests; // ivar: _pendingStunRequests
@property (readonly, nonatomic) unsigned char protocolVersion; // ivar: _protocolVersion
@property (nonatomic) BOOL recvConnected; // ivar: _recvConnected
@property (nonatomic) BOOL recvConnectedAck; // ivar: _recvConnectedAck
@property (nonatomic) BOOL recvDisconnected; // ivar: _recvDisconnected
@property (nonatomic) BOOL recvDisconnectedAck; // ivar: _recvDisconnectedAck
@property (nonatomic) BOOL recvSKEData; // ivar: _recvSKEData
@property (readonly, nonatomic) unsigned short relayLinkID; // ivar: _relayLinkID
@property (nonatomic) NSInteger relayProviderType; // ivar: _relayProviderType
@property (retain) IDSStunCandidate *relayRemote; // ivar: _relayRemote
@property (readonly) IDSQuickRelaySessionInfo *relaySessionInfo; // ivar: _relaySessionInfo
@property (readonly) NSData *relaySessionKey; // ivar: _relaySessionKey
@property (readonly) NSData *relaySessionToken; // ivar: _relaySessionToken
@property (readonly) IDSStunCandidate *remote; // ivar: _remote
@property (readonly, nonatomic) unsigned short remoteRelayLinkID; // ivar: _remoteRelayLinkID
@property (readonly) NSMutableArray *repliedStunRequests; // ivar: _repliedStunRequests
@property (nonatomic) CGFloat selfAllocateStartTime; // ivar: _selfAllocateStartTime
@property (nonatomic) BOOL sentSKEData; // ivar: _sentSKEData
@property (readonly, nonatomic) BOOL serverIsDegraded; // ivar: _serverIsDegraded
@property (nonatomic) CGFloat serverLatency; // ivar: _serverLatency
@property (readonly) NSString *sessionID; // ivar: _sessionID
@property (readonly) NSDictionary *sessionInfoDict; // ivar: _sessionInfoDict
@property (readonly, nonatomic) unsigned int sessionInfoReqCount; // ivar: _sessionInfoReqCount
@property (copy) NSData *skeData; // ivar: _skeData
@property (readonly) NSData *softwareData; // ivar: _softwareData
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) unsigned char statsIntervalInSeconds; // ivar: _statsIntervalInSeconds
@property (readonly, nonatomic) unsigned int testOptions; // ivar: _testOptions
@property (readonly, nonatomic) unsigned short testRequestedErrorCode; // ivar: _testRequestedErrorCode
@property (readonly, nonatomic) CGFloat testStartTime; // ivar: _testStartTime
@property (readonly) NSString *testSubOperation; // ivar: _testSubOperation
@property (nonatomic) unsigned int totalPacketsReceivedOnLink; // ivar: _totalPacketsReceivedOnLink
@property (nonatomic) unsigned int totalPacketsSentOnLink; // ivar: _totalPacketsSentOnLink
@property (nonatomic) CGFloat triggeredCheckTime; // ivar: _triggeredCheckTime


+(id)candidatePairWithLocalCandidate:(id)arg0 remoteCandidate:(id)arg1 sessionID:(id)arg2 delegate:(id)arg3 ;
-(BOOL)_didLocalExternalAddressChange:(struct sockaddr *)arg0 ;
-(BOOL)_optionallyCheckEncMarker:(id)arg0 ;
-(BOOL)hasNoSessionStateTestOptions;
-(BOOL)hasValidCapabilityFlags;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRelayStunCandidatePair;
-(BOOL)isSelfQRSession;
-(BOOL)isSharedQRSession;
-(BOOL)isValidRelayStunCandidatePair;
-(BOOL)isVirtualRelayStunCandidatePair;
-(BOOL)processDataMessageErrorIndication:(id)arg0 ;
-(BOOL)processInfoIndication:(id)arg0 arrivalTime:(CGFloat)arg1 ;
-(BOOL)processInfoResponse:(id)arg0 packetBuffer:(struct ? *)arg1 headerOverhead:(NSUInteger)arg2 ;
-(BOOL)processParticipantUpdateIndication:(id)arg0 arrivalTime:(CGFloat)arg1 ;
-(BOOL)processParticipantUpdateResponse:(id)arg0 ;
-(BOOL)processPluginControlIndication:(id)arg0 ;
-(BOOL)processPluginRegistrationResponse:(id)arg0 ;
-(BOOL)processQUICErrorIndication:(id)arg0 ;
-(BOOL)processQUICErrorResponse:(id)arg0 packetBuffer:(struct ? *)arg1 startTime:(CGFloat)arg2 headerOverhead:(NSUInteger)arg3 ;
-(BOOL)processQUICGetMaterialResponse:(id)arg0 ;
-(BOOL)processQUICInfoResponse:(id)arg0 receivedBytes:(NSUInteger)arg1 ;
-(BOOL)processQUICParticipantUpdateIndication:(id)arg0 ;
-(BOOL)processQUICParticipantUpdateResponse:(id)arg0 ;
-(BOOL)processQUICPluginControlIndication:(id)arg0 ;
-(BOOL)processQUICPluginRegistrationResponse:(id)arg0 ;
-(BOOL)processQUICPutMaterialIndication:(id)arg0 ;
-(BOOL)processQUICPutMaterialResponse:(id)arg0 ;
-(BOOL)processQUICSessionInfoIndication:(id)arg0 arrivalTime:(CGFloat)arg1 isLightweightParticipant:(BOOL)arg2 ;
-(BOOL)processQUICSessionInfoResponse:(id)arg0 receivedBytes:(NSUInteger)arg1 isLightweightParticipant:(BOOL)arg2 ;
-(BOOL)processQUICStatsResponse:(id)arg0 arrivalTime:(CGFloat)arg1 ;
-(BOOL)processQUICTestResponse:(id)arg0 arrivalTime:(CGFloat)arg1 ;
-(BOOL)processSessionInfoIndication:(id)arg0 arrivalTime:(CGFloat)arg1 isLightweightParticipant:(BOOL)arg2 ;
-(BOOL)processSessionInfoResponse:(id)arg0 packetBuffer:(struct ? *)arg1 headerOverhead:(NSUInteger)arg2 isLightweightParticipant:(BOOL)arg3 ;
-(BOOL)processStatsResponse:(id)arg0 arrivalTime:(CGFloat)arg1 ;
-(BOOL)processStunErrorResponse:(id)arg0 packetBuffer:(struct ? *)arg1 headerOverhead:(NSUInteger)arg2 ;
-(BOOL)processTestResponse:(id)arg0 arrivalTime:(CGFloat)arg1 ;
-(BOOL)removeProtoRequest:(NSUInteger)arg0 ;
-(BOOL)sendQUICGetMaterialRequest:(id)arg0 ;
-(BOOL)sendQUICPutMaterialRequest:(id)arg0 ;
-(BOOL)shouldProcessStunResponse:(id)arg0 ;
-(BOOL)shouldRexmitStunRequest:(id)arg0 ;
-(NSUInteger)createAliasForParticipantID:(NSUInteger)arg0 salt:(id)arg1 ;
-(NSUInteger)getParticipantIDHash:(id)arg0 ;
-(NSUInteger)getStunSentBytes:(id)arg0 ;
-(NSUInteger)participantIDForAlias:(NSUInteger)arg0 salt:(id)arg1 ;
-(id)_pluginNameForProtoRequest:(NSUInteger)arg0 ;
-(id)_pluginNameForStunRequest:(id)arg0 ;
-(id)candidatePairToken;
-(id)description;
-(id)initWithLocalCandidate:(id)arg0 remoteCandidate:(id)arg1 sessionID:(id)arg2 delegate:(id)arg3 ;
-(unsigned int)nextSessionInfoReqID;
-(void)_addParticipantIDs:(id)arg0 toParticipantIDMap:(id)arg1 ;
-(void)_handleLinkProbingTimer;
-(void)_handleNoSessionStateTimer;
-(void)_handleReallocTimer;
-(void)_handleSessionConnectedTimer;
-(void)_handleSessionConvergenceTimer;
-(void)_handleSessionGoAwayTimer;
-(void)_notifyQREventAdded:(id)arg0 ;
-(void)_notifySessionStreamInfoReceived:(id)arg0 withParticipants:(id)arg1 lightweightParticipants:(id)arg2 sentBytes:(NSUInteger)arg3 receivedBytes:(NSUInteger)arg4 offlineRequest:(BOOL)arg5 streamInfoRequest:(BOOL)arg6 status:(unsigned int)arg7 ;
-(void)_removeProtoPluginRegistrationRequest:(NSUInteger)arg0 ;
-(void)_removeStunPluginRegistrationRequest:(id)arg0 ;
-(void)_savePluginNameForProtoRequest:(NSUInteger)arg0 pluginName:(id)arg1 ;
-(void)_savePluginNameForRequest:(id)arg0 pluginName:(id)arg1 ;
-(void)_startNoSessionStateTimer;
-(void)_startReallocTimer;
-(void)_stopNoSessionStateTimer;
-(void)_stopReallocTimer;
-(void)addProtoRequest:(NSUInteger)arg0 ;
-(void)addStunRequest:(id)arg0 ;
-(void)dealloc;
-(void)deriveAES128CTRKeys:(id)arg0 ;
-(void)initParticipantIDMap:(id)arg0 ;
-(void)invalidate;
-(void)processSessionInfoRequestTimeout:(id)arg0 ;
-(void)removeFromParticipantIDMap:(id)arg0 ;
-(void)removeStunRequest:(id)arg0 ;
-(void)sendInfoRequest:(id)arg0 ;
-(void)sendParticipantUpdateRequest:(id)arg0 options:(id)arg1 ;
-(void)sendQRPluginRegistrationRequest:(id)arg0 options:(id)arg1 ;
-(void)sendQUICInfoRequest;
-(void)sendQUICParticipantUpdateRequestWithOptions:(id)arg0 ;
-(void)sendQUICPluginRegistrationRequestWithOptions:(id)arg0 ;
-(void)sendQUICSessionInfoRequestWithOptions:(id)arg0 ;
-(void)sendQUICStatsRequestWithOptions:(id)arg0 ;
-(void)sendQUICTestRequest;
-(void)sendSessionInfoRequest:(id)arg0 options:(id)arg1 ;
-(void)sendStatsRequest:(id)arg0 options:(id)arg1 ;
-(void)sendTestRequest:(id)arg0 ;
-(void)setChannelSettings:(unsigned int)arg0 ;
-(void)setPendingNoSessionState:(BOOL)arg0 ;
-(void)setPropertiesWithReallocCandidatePair:(id)arg0 reallocToken:(id)arg1 ;
-(void)setPropertiesWithRelaySessionInfo:(id)arg0 sessionInfoDict:(id)arg1 enableSKE:(BOOL)arg2 ;
-(void)startLinkProbingTimer:(unsigned int)arg0 ;
-(void)startSessionConnectedTimer:(int)arg0 block:(id)arg1 ;
-(void)startSessionConvergenceTimer:(int)arg0 block:(id)arg1 ;
-(void)startSessionGoAwayTimer:(int)arg0 block:(id)arg1 ;
-(void)stopLinkProbingTimer;
-(void)stopSessionConnectedTimer;
-(void)stopSessionConvergenceTimer;
-(void)stopSessionGoAwayTimer;
-(void)synthesizeNat64WithPrefix;
-(void)updateParticipantIDMap:(id)arg0 ;
-(void)updateStunSentBytes:(NSInteger)arg0 requestID:(id)arg1 ;
-(void)updateURIToParticipantIDMapping:(id)arg0 ;


@end


#endif