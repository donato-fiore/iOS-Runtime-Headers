// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSGLOBALLINK_H
#define IDSGLOBALLINK_H

@class NSMutableDictionary, NSMutableArray, NSData, NSString, NSDate, NSDictionary;
@protocol IDSLink, IDSLinkDelegate, IDSStunCandidatePairDelegate, IDSServerMaterialExchangeDelegate, OS_dispatch_source, OS_nw_path_evaluator;

#import <Foundation/Foundation.h>

#import "IDSUDPLink.h"
#import "IDSTCPLink.h"
#import "IDSNWLink.h"
#import "IDSGlobalLinkBlocks.h"
#import "IDSStunCandidatePair.h"
#import "IDSServerMaterialExchangeController.h"
#import "IDSGFTMetricsCollector.h"

@interface IDSGlobalLink : NSObject <IDSLink, IDSLinkDelegate, IDSStunCandidatePairDelegate, IDSServerMaterialExchangeDelegate>

 {
    BOOL _QUICForQREnabled;
    BOOL _H2FallbackEnabled;
    BOOL _QRIPv6Enabled;
    IDSUDPLink *_udpLink;
    IDSUDPLink *_udpLinkv6;
    IDSTCPLink *_tcpLink;
    IDSTCPLink *_tcpSSLLink;
    IDSNWLink *_nwLink;
    unsigned short _startPort;
    int _portRange;
    id *_connectReadyHandler;
    id *_disconnectCompletionHandler;
    NSInteger _clientType;
    BOOL _isGFTService;
    BOOL _allowOnlyOneQR;
    BOOL _allowP2P;
    BOOL _disallowWiFi;
    BOOL _disallowCellular;
    BOOL _preferCellularForCallSetup;
    BOOL _allowConcurrentQRSetup;
    *tagIDSQRSendInfoList _sendInfoList;
    unsigned short _linkIDCounter;
    char _linkIDForPlugin;
    CGFloat _natMappingTimeout;
    CGFloat _inviteSentTime;
    CGFloat _inviteRecvTime;
    unsigned int _acceptDelayU32;
    CGFloat _allocbindStartTime;
    CGFloat _allocbindEndTime;
    CGFloat _linkConnectTime;
    CGFloat _firstClientPacketTime;
    CGFloat _firstDataReceivedTime;
    BOOL _reportClientPacketTime;
    BOOL _reportDataReceivedTime;
    *IDSNAT64PrefixCache_ _nat64PrefixCache;
    NSMutableDictionary *_tokenToCandidatePairs;
    NSMutableDictionary *_linkIDToCandidatePairs;
    NSMutableDictionary *_channelToCandidatePairs;
    NSMutableDictionary *_transactionIDToRequestMetadata;
    NSMutableDictionary *_startTimeToStunReqID;
    NSMutableDictionary *_tokenToStunReqID;
    IDSSimpleUInt16List _channelNumberList;
    IDSSimpleUInt16List _reallocChannelList;
    NSMutableDictionary *_tokenToReallocBlocks;
    NSMutableDictionary *_reallocNewCandidatePairToOldCandidatePair;
    NSMutableDictionary *_unallocbindRequestToReason;
    NSObject<OS_dispatch_source> *_disconnectTimer;
    NSObject<OS_dispatch_source> *_activityTimer;
    NSMutableDictionary *_linkIDToReorderedPackets;
    NSMutableDictionary *_linkIDToRequestTimeStampAndRTT;
    NSMutableDictionary *_linkIDToHBCounter;
    NSMutableArray *_connectedLinkIDs;
    NSMutableArray *_activeProbingLinkIDs;
    NSMutableDictionary *_connectingCandidatePairSessionInfo;
    NSMutableArray *_interfaceAddressArray;
    NSMutableArray *_unusedLinkIDs;
    int _maxLinkID;
    BOOL _isInitiator;
    int _nominateCount;
    NSMutableArray *_localCandidateList;
    NSMutableArray *_remoteCandidateList;
    NSMutableDictionary *_tokenToStunCheckPairs;
    BOOL _enableSKE;
    NSData *_skeData;
    BOOL _recvRemoteSKEData;
    BOOL _delaySessionConnected;
    BOOL _skeToRemoteComplete;
    CGFloat _skeStartTime;
    NSString *_acceptedRelaySessionID;
    NSMutableArray *_nonAcceptedQRSessions;
    BOOL _isSessionAcceptedWithNoCandidatePair;
    NSInteger _remoteCapabilityFlag;
    BOOL _delayedConnData;
    int _localConnDataCounter;
    int _remoteConnDataCounter;
    NSMutableArray *_delayedCellInterfaces;
    BOOL _hasPendingAllocation;
    NSMutableArray *_targetedAllocations;
    BOOL _useSecureControlMessage;
    NSData *_controlMessageKey;
    char _basebandPacketLinkID;
    unsigned short _basebandPacketChannelNumber;
    IDSGlobalLinkBlocks *_qraBlocks;
    NSMutableArray *_allocateTimeReportBlocks;
    BOOL _hasPendingSelfAllocation;
    NSMutableArray *_selfAllocateRequestIDs;
    unsigned char _clientUUID;
    NSString *_idsSessionID;
    NSUInteger _totalBytesSent;
    NSUInteger _totalPacketsSent;
    NSUInteger _totalBytesReceived;
    NSUInteger _totalPacketsReceived;
    NSUInteger _previousBytesSent;
    NSUInteger _previousPacketsSent;
    NSUInteger _previousBytesReceived;
    NSUInteger _previousPacketsReceived;
    CGFloat _previousReportTime;
    CGFloat _calleeAcceptTime;
    CGFloat _delayQUICDisconnectionAfterInfo;
    BOOL _isSecondOrLaterParticipant;
    BOOL _shouldReportAcceptDelay;
    unsigned int _probingTimeout;
    short _remoteGlobalLinkVersion;
    BOOL _reduceCellularUsage;
    BOOL _reduceRelayLinkCreation;
    BOOL _shouldProcessBasebandNotification;
    BOOL _supportChannelData;
    BOOL _islocalCellAttributeInexpensive;
    BOOL _shouldAcceptIncomingMKMOverQR;
    BOOL _shouldFallbackToTCPFirst;
    NSObject<OS_nw_path_evaluator> *_wifiPathEvaluator;
    NSObject<OS_nw_path_evaluator> *_cellularPathEvaluator;
    unsigned short _wifiNWPathFlags;
    unsigned short _cellularNWPathFlags;
    BOOL _receivedAllocbindResponse;
    NSMutableDictionary *_retryCountPerLinkType;
    unsigned int _remoteDeviceVersion;
    BOOL _isUPlusOneSession;
    unsigned int _localRelayInterfaceCounter;
    unsigned int _remoteRelayInterfaceCounter;
    CGFloat _remoteJoinedUPlusOneTime;
    NSMutableDictionary *_localRemoteRelayLinkIDToVirtualCandidatePairs;
    NSInteger _delayFirstConnectionData;
    BOOL _receivedRemoteDeviceVersion;
    BOOL _isLightweightParticipant;
    NSDate *_timeBase;
    NSDictionary *_QRServerDataBlob;
    IDSStunCandidatePair *_migratingCandidatePair;
    NSMutableDictionary *_pluginParticipantIDs;
    NSMutableDictionary *_pluginNameToPluginOptionsDict;
    NSMutableArray *_pluginControlDisconnectRecentTransactionIDs;
    NSData *_avcDataBlob;
    IDSServerMaterialExchangeController *_serverMaterialExchangeController;
    IDSGFTMetricsCollector *_metricsCollector;
    NSDictionary *_allocationsToTransportScoreCards;
    NSMutableArray *_transportScoreCards;
    NSUInteger _clientUniquePID;
    NSMutableDictionary *_linkIDToStatsData;
    BOOL _sharedSessionHasJoined;
}


@property (weak) NSObject<IDSLinkDelegate> *alternateDelegate; // ivar: _alternateDelegate
@property (retain) NSString *cbuuid; // ivar: _cbuuid
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<IDSLinkDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceUniqueID; // ivar: _deviceUniqueID
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger headerOverhead; // ivar: _headerOverhead
@property (readonly, getter=linkTypeString) NSString *linkTypeString;
@property (readonly) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


+(Class)getGLClassWithOptions:(id)arg0 ;
-(?)_prepareOutgoingChannelData:(?)arg0 arraySize:(?)arg1 channelNumber:(?)arg2 candidatePair:(?)arg3 linkID:(?)arg4 delegatedLinkIDstunTransport;
-(?)sendPacketBufferArray:(?)arg0 arraySize:(?)arg1 toDeviceUniqueIDcbuuid;
-(BOOL)_IsExtIPDiscoveryNeeded:(struct sockaddr *)arg0 candidatePairList:(id)arg1 ;
-(BOOL)_addCandidate:(id)arg0 isRemoteCandidate:(BOOL)arg1 ;
-(BOOL)_getPacketBufferSendInfo:(struct ? *)arg0 channelNumber:(*unsigned short)arg1 transport:(*NSInteger)arg2 ;
-(BOOL)_getSessionParticipants:(id)arg0 relaySessionID:(id)arg1 options:(id)arg2 ;
-(BOOL)_getSessionStreamInfo:(id)arg0 relaySessionID:(id)arg1 options:(id)arg2 ;
-(BOOL)_handleRemapping:(id)arg0 errorCode:(unsigned short)arg1 reconnectQUIC:(BOOL)arg2 ;
-(BOOL)_hasActiveAllocbindFailoverTimerForSessionID:(id)arg0 ;
-(BOOL)_hasCandidatePairInState:(NSUInteger)arg0 anotherState:(NSUInteger)arg1 relayCandidatePairsOnly:(BOOL)arg2 excludeSelfAlloc:(BOOL)arg3 ;
-(BOOL)_hasCandidatePairInState:(NSUInteger)arg0 relayCandidatePairsOnly:(BOOL)arg1 excludeSelfAlloc:(BOOL)arg2 ;
-(BOOL)_hasConnectedP2pLink;
-(BOOL)_hasConnectingRelayCandidatePair;
-(BOOL)_isAcceptedRelaySessionForAllocationRequestID:(id)arg0 acceptedRelaySessionID:(id)arg1 ;
-(BOOL)_isCellularInterfaceForCandidatePair:(id)arg0 localAddress:(struct sockaddr *)arg1 ;
-(BOOL)_isExtIPDiscoveryDone;
-(BOOL)_isInterfaceConstrainedWithInterfaceIndex:(unsigned int)arg0 ;
-(BOOL)_isInterfaceDelegatedWithInterfaceIndex:(unsigned int)arg0 ;
-(BOOL)_isInterfaceExpensiveWithInterfaceIndex:(unsigned int)arg0 ;
-(BOOL)_isNWPathFlagsChanged:(id)arg0 existingPath:(*unsigned short)arg1 ;
-(BOOL)_isUsingSameRATCandidatePair:(id)arg0 transportScoreCard:(id)arg1 ;
-(BOOL)_postProcessAllocbindResponse:(id)arg0 candidatePair:(id)arg1 candidatePairToken:(id)arg2 ;
-(BOOL)_postProcessQUICAllocbindResponse:(id)arg0 candidatePair:(id)arg1 ;
-(BOOL)_processAllocbindResponse:(id)arg0 fromDevice:(id)arg1 localIfIndex:(unsigned int)arg2 localAddress:(struct sockaddr *)arg3 remmoteAddress:(struct sockaddr *)arg4 candidatePairToken:(id)arg5 arrivalTime:(CGFloat)arg6 ;
-(BOOL)_processBindingRequest:(id)arg0 fromDevice:(id)arg1 localIfIndex:(unsigned int)arg2 localAddress:(struct sockaddr *)arg3 remmoteAddress:(struct sockaddr *)arg4 candidatePairToken:(id)arg5 arrivalTime:(CGFloat)arg6 ;
-(BOOL)_processBindingResponse:(id)arg0 fromDevice:(id)arg1 localIfIndex:(unsigned int)arg2 localAddress:(struct sockaddr *)arg3 remmoteAddress:(struct sockaddr *)arg4 candidatePairToken:(id)arg5 arrivalTime:(CGFloat)arg6 ;
-(BOOL)_processChannelDataCommandMessage:(struct ? *)arg0 remoteRelayLinkID:(unsigned short)arg1 channelNumber:(unsigned short)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 arrivalTime:(CGFloat)arg5 ;
-(BOOL)_processDataIndication:(id)arg0 fromDevice:(id)arg1 localIfIndex:(unsigned int)arg2 localAddress:(struct sockaddr *)arg3 remoteAddress:(struct sockaddr *)arg4 candidatePairToken:(id)arg5 arrivalTime:(CGFloat)arg6 ;
-(BOOL)_processDiagnosticIndication:(id)arg0 candidatePairToken:(id)arg1 arrivalTime:(CGFloat)arg2 ;
-(BOOL)_processGoAwayIndication:(id)arg0 fromDevice:(id)arg1 localIfIndex:(unsigned int)arg2 localAddress:(struct sockaddr *)arg3 remoteAddress:(struct sockaddr *)arg4 candidatePairToken:(id)arg5 arrivalTime:(CGFloat)arg6 ;
-(BOOL)_processIncomingIndicationData:(char *)arg0 length:(int)arg1 candidatePairToken:(id)arg2 arrivalTime:(CGFloat)arg3 remoteRelayLinkID:(unsigned short)arg4 ;
-(BOOL)_processProtoPacket:(struct ? *)arg0 fromDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 arrivalTime:(CGFloat)arg3 headerOverhead:(NSUInteger)arg4 ;
-(BOOL)_processQUICAllocbindResponse:(id)arg0 fromDevice:(id)arg1 localIfIndex:(unsigned int)arg2 localAddress:(struct sockaddr *)arg3 remmoteAddress:(struct sockaddr *)arg4 candidatePairToken:(id)arg5 arrivalTime:(CGFloat)arg6 ;
-(BOOL)_processQUICDiagnosticIndication:(id)arg0 candidatePairToken:(id)arg1 arrivalTime:(CGFloat)arg2 ;
-(BOOL)_processQUICGoAwayIndication:(id)arg0 fromDevice:(id)arg1 localIfIndex:(unsigned int)arg2 localAddress:(struct sockaddr *)arg3 remoteAddress:(struct sockaddr *)arg4 candidatePairToken:(id)arg5 arrivalTime:(CGFloat)arg6 ;
-(BOOL)_processQUICReallocIndication:(id)arg0 fromDevice:(id)arg1 localIfIndex:(unsigned int)arg2 localAddress:(struct sockaddr *)arg3 remoteAddress:(struct sockaddr *)arg4 candidatePairToken:(id)arg5 arrivalTime:(CGFloat)arg6 ;
-(BOOL)_processQUICUnallocbindResponse:(id)arg0 fromDevice:(id)arg1 localIfIndex:(unsigned int)arg2 localAddress:(struct sockaddr *)arg3 remmoteAddress:(struct sockaddr *)arg4 candidatePairToken:(id)arg5 arrivalTime:(CGFloat)arg6 ;
-(BOOL)_processReallocIndication:(id)arg0 fromDevice:(id)arg1 localIfIndex:(unsigned int)arg2 localAddress:(struct sockaddr *)arg3 remoteAddress:(struct sockaddr *)arg4 candidatePairToken:(id)arg5 arrivalTime:(CGFloat)arg6 ;
-(BOOL)_processRemovedLocalAddressList:(id)arg0 ;
-(BOOL)_processStunPacket:(struct ? *)arg0 fromDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 arrivalTime:(CGFloat)arg3 headerOverhead:(NSUInteger)arg4 ;
-(BOOL)_processUnallocbindResponse:(id)arg0 fromDevice:(id)arg1 localIfIndex:(unsigned int)arg2 localAddress:(struct sockaddr *)arg3 remmoteAddress:(struct sockaddr *)arg4 candidatePairToken:(id)arg5 arrivalTime:(CGFloat)arg6 ;
-(BOOL)_qrLinkLimitExceededWithNewLinkType:(unsigned char)arg0 cellularRelayLinkCount:(unsigned short)arg1 wifiRelayLinkCount:(unsigned short)arg2 ;
-(BOOL)_requestSelfAllocationForInterfaceAddress:(id)arg0 ;
-(BOOL)_setupNewQRLinkIfNecessary:(id)arg0 ;
-(BOOL)_shouldSkipCommand:(NSInteger)arg0 withCandidatePair:(id)arg1 connectionDataCounter:(int)arg2 relayInterfaceCounter:(int)arg3 ;
-(BOOL)_skipCommandMessage:(NSInteger)arg0 candidatePair:(id)arg1 timeNow:(CGFloat)arg2 ;
-(BOOL)_synthesizeNAT64ForAddress:(struct sockaddr *)arg0 withPrefix:(struct ? *)arg1 toAddress:(struct sockaddr *)arg2 ;
-(BOOL)_triggerSymptomsWithCandidatePairToken:(id)arg0 subType:(id)arg1 subTypeContext:(id)arg2 duration:(unsigned short)arg3 ;
-(BOOL)hasReachableInterface:(NSUInteger)arg0 ;
-(BOOL)link:(id)arg0 didReceivePacket:(struct ? *)arg1 fromDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(BOOL)qrMaterialExchangePutMaterial:(id)arg0 ;
-(BOOL)receiveNoSessionStateForCandidatePair:(id)arg0 didLocalExternalAddressChange:(BOOL)arg1 ;
-(BOOL)remoteHostAwake;
-(CGFloat)_startTimeForProtoRequest:(NSUInteger)arg0 ;
-(CGFloat)_startTimeForStunRequest:(id)arg0 ;
-(NSInteger)_getQRAllocateType;
-(NSInteger)_sendPacketBuffer:(struct ? *)arg0 stunTransport:(NSInteger)arg1 token:(id)arg2 linkID:(char)arg3 delegatedLinkID:(char)arg4 ;
-(NSInteger)_sendProtoMessage:(id)arg0 candidatePair:(id)arg1 ;
-(NSInteger)_sendStunMessage:(id)arg0 candidatePair:(id)arg1 ;
-(NSInteger)_sendStunMessage:(id)arg0 sourceIfIndex:(int)arg1 source:(struct sockaddr *)arg2 destination:(struct sockaddr *)arg3 stunTransport:(NSInteger)arg4 token:(id)arg5 linkID:(char)arg6 delegatedLinkID:(char)arg7 MTULimit:(int)arg8 ;
-(NSInteger)sendProtoMessage:(id)arg0 candidatePair:(id)arg1 ;
-(NSInteger)sendStunMessage:(id)arg0 candidatePair:(id)arg1 ;
-(NSUInteger)_sendChannelDataPacketBuffer:(struct ? *)arg0 candidatePair:(id)arg1 ;
-(NSUInteger)createAliasForParticipantID:(NSUInteger)arg0 salt:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 ;
-(NSUInteger)defaultLinkType;
-(NSUInteger)participantIDForAlias:(NSUInteger)arg0 salt:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 ;
-(NSUInteger)sendPacketBuffer:(struct ? *)arg0 toDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(id)_addSocketAndInterfaceAddress:(NSUInteger)arg0 wantsWiFi:(BOOL)arg1 wantsCellular:(BOOL)arg2 ;
-(id)_addSocketAndInterfaceAddressWithNWLink:(BOOL)arg0 wantsWiFi:(BOOL)arg1 wantsCellular:(BOOL)arg2 ;
-(id)_createCommandData:(NSInteger)arg0 options:(id)arg1 candidatePair:(id)arg2 ;
-(id)_createDataBlobMaterialProto;
-(id)_createInterfaceAddressArray:(NSUInteger)arg0 wantsWiFi:(BOOL)arg1 wantsCellular:(BOOL)arg2 ;
-(id)_createInterfaceAddressArrayWithNWLink:(BOOL)arg0 wantsWiFi:(BOOL)arg1 wantsCellular:(BOOL)arg2 ;
-(id)_findCandidatePairWithAnyLocalPort:(id)arg0 ;
-(id)_findCandidatePairWithRelaySessionID:(id)arg0 ;
-(id)_findVirtualCandidatePair:(id)arg0 ;
-(id)_getAllocbindReportingDataBlob:(id)arg0 ;
-(id)_getCandidatePairsWithSessionID:(id)arg0 inState:(NSUInteger)arg1 ;
-(id)_getLink:(int)arg0 stunTransport:(NSInteger)arg1 ;
-(id)_getLocalAttribute:(id)arg0 ;
-(id)_getRemoteAttribute:(id)arg0 ;
-(id)_interfaceNameForInterfaceIndex:(unsigned int)arg0 ;
-(id)_tokenForProtoRequest:(NSUInteger)arg0 ;
-(id)_transportInterfaceToString:(NSInteger)arg0 ;
-(id)copyLinkStatsDict;
-(id)generateLinkReport:(CGFloat)arg0 isCurrentLink:(BOOL)arg1 ;
-(id)initWithDeviceUniqueID:(id)arg0 cbuuid:(id)arg1 ;
-(int)_getExpensiveLinkFlags:(BOOL)arg0 candidatePair:(id)arg1 ;
-(unsigned char)_getNewLinkType:(id)arg0 remoteInterface:(*int)arg1 ;
-(unsigned int)_getExternalIPAddressRAT:(id)arg0 ;
-(void)_addQRAAWDBlock:(id)arg0 allocateRequestTime:(CGFloat)arg1 inferredExternalRAT:(unsigned int)arg2 stunTransport:(NSInteger)arg3 relayProviderType:(NSInteger)arg4 idsSessionID:(id)arg5 reportingDataBlob:(id)arg6 isInitiator:(BOOL)arg7 ;
-(void)_addStunCheckPair:(id)arg0 isRemoteCandidate:(BOOL)arg1 ;
-(void)_addStunCheckPair:(id)arg0 isRemoteCandidate:(BOOL)arg1 excludeLocalAddress:(struct sockaddr *)arg2 ;
-(void)_callDisconnectCompletionHandler:(id)arg0 ;
-(void)_connectNWLink:(id)arg0 disconnectAfterUse:(BOOL)arg1 connectedHandler:(id)arg2 ;
-(void)_connectNWTCPLink:(id)arg0 disconnectAfterUse:(BOOL)arg1 connectedHandler:(id)arg2 ;
// -(void)_connectWithSessionInfo:(id)arg0 interfaceAddress:(id)arg1 joinSession:(BOOL)arg2 allocbindFailover:(BOOL)arg3 completionHandler:(id)arg4 withLocalInterfacePreference:(unk)arg5  ;
-(void)_convergeSharedSessions:(id)arg0 ;
-(void)_delayProcessingCellularInterfaces:(id)arg0 ;
-(void)_destroyVirtualRelayLinksForCandidatePair:(id)arg0 ;
-(void)_didReceiveRequestToPurgeRegistration;
-(void)_discardAllCandidatePairs;
-(void)_discardCandidatePairsWithOption:(BOOL)arg0 ;
-(void)_discardKeyMaterialMessage:(NSInteger)arg0 ;
-(void)_discardNonAcceptedCandidatePairs;
-(void)_discardSelfAllocateCandidatePairs;
-(void)_disconnectPluginConnectionsForParticipantID:(NSUInteger)arg0 andPurgeRegistration:(BOOL)arg1 ;
-(void)_enableE2E;
-(void)_generateTransportScoreCard;
-(void)_getAndProcessDatablobsFromReceivedMaterials:(id)arg0 ;
-(void)_getNAT64PrefixForInterface:(int)arg0 interfaceName:(id)arg1 completionBlock:(id)arg2 ;
-(void)_handleActivityTimer;
-(void)_handleAllocbindFailoverTimer:(id)arg0 failoverTimerOnCandidatePair:(id)arg1 onInterface:(int)arg2 ;
-(void)_handleDisconnectTimer;
-(void)_handleNewRATChange;
-(void)_handleNoRemotePacket;
-(void)_handleSelfAllocationTimeout:(id)arg0 ;
-(void)_handle_cellular_path:(id)arg0 nwEndPoind:(id)arg1 ;
-(void)_handle_wifi_path:(id)arg0 nwEndPoind:(id)arg1 ;
-(void)_nominateCandidatePair:(id)arg0 ;
-(void)_notifyCandidatePairConnected:(id)arg0 ;
-(void)_notifyCandidatePairDisconnected:(id)arg0 withReason:(unsigned char)arg1 ;
-(void)_notifyDefaultUnderlyingLinkChanged:(id)arg0 error:(NSInteger)arg1 ;
-(void)_notifyLinkDisconnectedWithError:(NSInteger)arg0 reason:(unsigned char)arg1 ;
-(void)_notifyQRSessionConnected:(id)arg0 ;
-(void)_notifySessionInfoReceived:(id)arg0 relayGroupID:(id)arg1 relaySessionID:(id)arg2 status:(unsigned int)arg3 ;
-(void)_parseClientUUID:(id)arg0 ;
-(void)_processCommandConnected:(id)arg0 candidatePairToken:(id)arg1 ;
-(void)_processCommandConnectionData:(id)arg0 candidatePairToken:(id)arg1 ;
-(void)_processCommandDisconnected:(id)arg0 candidatePairToken:(id)arg1 ;
-(void)_processCommandHeartbeat:(id)arg0 candidatePairToken:(id)arg1 arrivalTime:(CGFloat)arg2 remoteRelayLinkID:(unsigned short)arg3 ;
-(void)_processCommandNominate:(id)arg0 candidatePairToken:(id)arg1 ;
-(void)_processCommandRelayInterfaceInfo:(id)arg0 candidatePairToken:(id)arg1 ;
-(void)_processDataOnReallocChannel:(unsigned short)arg0 localAddress:(struct sockaddr *)arg1 remoteAddress:(struct sockaddr *)arg2 ;
-(void)_processDelayedCellularInterfaces;
-(void)_processNewLocalAddressList:(id)arg0 ;
-(void)_processNewRemoteCandidates:(id)arg0 ;
-(void)_processReallocChannelData:(struct ? *)arg0 channelNumber:(unsigned short)arg1 fromDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 arrivalTime:(CGFloat)arg4 ;
-(void)_processRemoteCandidates:(id)arg0 ;
-(void)_processRemoteLinkUUID:(id)arg0 candidatePair:(id)arg1 ;
-(void)_processRemovedRemoteCandidates:(id)arg0 ;
-(void)_processXORMappedAddress:(id)arg0 arrivalTime:(CGFloat)arg1 ;
-(void)_removeChannelFromChannelToCandidatePair:(id)arg0 ;
-(void)_removePacketNotificationFilter;
-(void)_removeProtoRequest:(NSUInteger)arg0 status:(unsigned int)arg1 ;
-(void)_removeStunRequest:(id)arg0 ;
-(void)_reportAWDAllocateTime;
-(void)_reportSessionSetupTime;
-(void)_requestNewTwoWayQRAllocation:(id)arg0 ;
-(void)_requestNonUDPRelayAllocation:(NSInteger)arg0 relaySessionID:(id)arg1 ;
-(void)_resetRetryCountForCandidatePair:(id)arg0 ;
-(void)_saveProtoRequest:(id)arg0 token:(id)arg1 ;
-(void)_saveStunRequest:(id)arg0 startTime:(CGFloat)arg1 token:(id)arg2 ;
-(void)_selectBetterDefaultCandidatePair:(id)arg0 ;
-(void)_selectStunTransport:(*NSInteger)arg0 andInterfaceAddress:(*id)arg1 forRelaySessionID:(id)arg2 useIPv4Only:(BOOL)arg3 ;
-(void)_sendAllocbindRequest:(id)arg0 stunMessage:(id)arg1 isRealloc:(BOOL)arg2 inResponseToNoSessionState:(BOOL)arg3 ;
-(void)_sendAllocbindRequestForExtIP:(id)arg0 startTime:(CGFloat)arg1 ;
-(void)_sendBindingRequest:(id)arg0 stunMessage:(id)arg1 ;
-(void)_sendChannelDataCommandMessage:(NSInteger)arg0 packetBuffer:(struct ? *)arg1 options:(id)arg2 candidatePairToken:(id)arg3 ;
-(void)_sendCommandMessage:(NSInteger)arg0 stunMessage:(id)arg1 options:(id)arg2 candidatePairToken:(id)arg3 ;
-(void)_sendConnectionDataWithRemovedAddressList:(id)arg0 ;
-(void)_sendNowConnectionDataWithRemovedAddressList:(id)arg0 ;
-(void)_sendQUICAllocbindRequest:(id)arg0 isRealloc:(BOOL)arg1 inResponseToNoSessionState:(BOOL)arg2 shouldConnectLinkFirst:(BOOL)arg3 isPendingInResponseToNoSessionState:(BOOL)arg4 ;
-(void)_sendQUICUnallocbindRequest:(id)arg0 reason:(unsigned char)arg1 ;
-(void)_sendRelayInterfaceInfo:(id)arg0 ;
-(void)_sendSKEDataToSucceededCandidatePairs;
-(void)_sendSKEDataWithSelectedCandidatePair;
-(void)_sendSessionDisconnectedCommand;
-(void)_sendUnallocbindRequest:(id)arg0 stunMessage:(id)arg1 reason:(unsigned char)arg2 ;
-(void)_setCandidatePairConnected:(id)arg0 ;
-(void)_setChannelToCandidatePair:(id)arg0 localAddress:(struct sockaddr *)arg1 remoteAddress:(struct sockaddr *)arg2 channelNumber:(unsigned short)arg3 ;
-(void)_setDefaultCandidatePairForNonFT;
-(void)_setFirstDefaultCandidatePair:(id)arg0 ;
-(void)_setRemoteGlobalLinkVersionWithCommand:(NSInteger)arg0 receivedRemoteVersion:(BOOL)arg1 versionValue:(unsigned short)arg2 receivedSKE:(BOOL)arg3 ;
-(void)_setupRelayConnectionForNetworkAddressChanges;
-(void)_startActivityTimer;
-(void)_startAllocbindFailoverTimerOnCandidatePair:(id)arg0 ;
-(void)_startDisconnectTimer;
-(void)_startExtIPDiscovery;
-(void)_startHB:(id)arg0 ;
-(void)_startStunCheck:(id)arg0 ;
-(void)_stopActivityTimer;
-(void)_stopAllocbindFailoverTimer:(id)arg0 ;
-(void)_stopDisconnectTimer;
-(void)_stopProbingOnLinkID:(char)arg0 ;
-(void)_updateCandidatePair:(id)arg0 newLocalPort:(unsigned short)arg1 ;
-(void)_updateDefaultCandidatePair:(id)arg0 ;
-(void)_updateInterfaceAddressesWithAddList:(id)arg0 removeList:(id)arg1 ;
-(void)_updateLinkIDForPlugin:(id)arg0 ;
-(void)_updateNominatedCandidatePair:(id)arg0 ;
-(void)_updateSendStatsWithResult:(NSUInteger)arg0 bytesSent:(NSInteger)arg1 packetsSent:(int)arg2 linkID:(char)arg3 delegatedLinkID:(char)arg4 token:(id)arg5 isClientData:(BOOL)arg6 sendTime:(CGFloat)arg7 stunTransport:(NSInteger)arg8 ;
-(void)candidatePair:(id)arg0 didAddQREvent:(id)arg1 ;
-(void)candidatePair:(id)arg0 didReceiveGetMaterialResponse:(id)arg1 ;
-(void)candidatePair:(id)arg0 didReceiveMappedParticipantsDict:(id)arg1 forLinkID:(char)arg2 ;
-(void)candidatePair:(id)arg0 didReceiveParticipantUpdate:(id)arg1 status:(unsigned short)arg2 ;
-(void)candidatePair:(id)arg0 didReceivePluginControlEvent:(NSUInteger)arg1 operation:(unsigned char)arg2 transactionID:(id)arg3 ;
-(void)candidatePair:(id)arg0 didReceivePluginRegistration:(NSUInteger)arg1 pluginName:(id)arg2 ;
-(void)candidatePair:(id)arg0 didReceivePluginUnregistration:(NSUInteger)arg1 pluginName:(id)arg2 ;
-(void)candidatePair:(id)arg0 didReceivePutMaterialIndication:(id)arg1 ;
-(void)candidatePair:(id)arg0 didReceivePutMaterialResponse:(id)arg1 ;
-(void)candidatePair:(id)arg0 didReceiveSessionInfo:(id)arg1 status:(unsigned int)arg2 ;
-(void)candidatePair:(id)arg0 didReceiveStunErrorResponse:(NSInteger)arg1 errorCode:(unsigned short)arg2 didLocalExternalAddressChange:(BOOL)arg3 ;
-(void)candidatePair:(id)arg0 protoRequestDidTimeOut:(NSUInteger)arg1 ;
// -(void)connectWithSessionInfo:(id)arg0 interfaceAddress:(id)arg1 joinSession:(BOOL)arg2 completionHandler:(id)arg3 withLocalInterfacePreference:(unk)arg4  ;
-(void)currentCellularSignalStrength:(*int)arg0 signalStrength:(*int)arg1 signalGrade:(*int)arg2 ;
-(void)dealloc;
-(void)disconnectIdleQUICConnectionForCandidatePair:(id)arg0 ;
-(void)disconnectWithCompletionHandler:(id)arg0 ;
-(void)dropIPPackets:(char)arg0 payloadArray:(id)arg1 ;
-(void)enableUPlusOneSessionForTransition:(BOOL)arg0 ;
-(void)flushLinkProbingStatus:(id)arg0 ;
-(void)getSessionInfo:(id)arg0 relaySessionID:(id)arg1 requestType:(NSInteger)arg2 options:(id)arg3 ;
-(void)handleCellularRATChange;
-(void)handleNetworkAddressChanges:(BOOL)arg0 hasIPv6AddressChange:(BOOL)arg1 ;
-(void)invalidate;
-(void)link:(id)arg0 didConnectForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(void)link:(id)arg0 didDisconnectForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(void)link:(id)arg0 didMitigateCollision:(BOOL)arg1 ;
-(void)linkTransactionIDMismatchDetected:(id)arg0 ;
-(void)manageDesignatedDestinations:(id)arg0 relayGroupID:(id)arg1 relaySessionID:(id)arg2 withType:(unsigned short)arg3 sessionStateCounter:(unsigned int)arg4 ;
-(void)queryLinkProbingStatus:(id)arg0 ;
-(void)receiveBlockedIndicationWithReason:(unsigned int)arg0 ;
-(void)receiveErrorIndicationWithCode:(unsigned int)arg0 ;
-(void)receiveIdleClientErrorForCandidatePair:(id)arg0 ;
-(void)receiveJoinNotificationFromAParticipant;
-(void)receiveKeyMaterials:(id)arg0 ;
-(void)registerPluginWithOptions:(id)arg0 relayGroupID:(id)arg1 relaySessionID:(id)arg2 ;
-(void)removeParticipantIDs:(id)arg0 relayGroupID:(id)arg1 relaySessionID:(id)arg2 sessionStateCounter:(unsigned int)arg3 ;
-(void)requestChildConnectionIDForLinkID:(char)arg0 relayGroupID:(id)arg1 relaySessionID:(id)arg2 ;
-(void)requestMaterialsForSession:(id)arg0 participantIDs:(id)arg1 materialType:(int)arg2 ;
-(void)sendAllocbindRequest:(id)arg0 isRealloc:(BOOL)arg1 inResponseToNoSessionState:(BOOL)arg2 reconnectQUIC:(BOOL)arg3 ;
-(void)sendConnectedLinkInfoToAVC;
-(void)sendKeyMaterialMessageData:(id)arg0 relayGroupID:(id)arg1 destinationURIs:(id)arg2 completionHandler:(id)arg3 ;
-(void)sendProbingRequestWithoptions:(id)arg0 candidatePairToken:(id)arg1 ;
-(void)sendSKEData:(id)arg0 ;
-(void)sendStatsRequest:(id)arg0 ;
-(void)setAcceptedRelaySession:(id)arg0 options:(id)arg1 ;
-(void)setClientUniquePID:(NSUInteger)arg0 ;
-(void)setDefaultUnderlyingLink:(char)arg0 ;
-(void)setHasPendingAllocation:(BOOL)arg0 ;
-(void)setIsUPlusOneSession:(BOOL)arg0 ;
-(void)setPacketNotificationFilter:(char)arg0 uniqueTag:(unsigned int)arg1 isEnabled:(BOOL)arg2 ;
-(void)setParticipantType:(unsigned short)arg0 relayGroupID:(id)arg1 relaySessionID:(id)arg2 sessionStateCounter:(unsigned int)arg3 ;
-(void)setReceivedRemoteDeviceVersion:(BOOL)arg0 ;
-(void)setRemoteDeviceVersion:(unsigned int)arg0 ;
-(void)setServerDesiredMaterialsForSession:(id)arg0 materials:(id)arg1 signer:(id)arg2 ;
-(void)setSharedSessionHasJoined:(BOOL)arg0 ;
-(void)setTimeBase:(id)arg0 ;
-(void)setWiFiAssistState:(BOOL)arg0 ;
-(void)startLinkProbing:(id)arg0 ;
-(void)startWithOptions:(id)arg0 ;
-(void)stopKeepAlive:(id)arg0 ;
-(void)stopLinkProbing:(id)arg0 ;
-(void)updateProtocolQualityOfService:(char)arg0 isGood:(BOOL)arg1 ;
-(void)updateSessionParticipants:(id)arg0 relaySessionID:(id)arg1 participants:(id)arg2 ;
-(void)updateURIToParticipantIDs:(id)arg0 relaySessionID:(id)arg1 sessionInfo:(id)arg2 ;


@end


#endif