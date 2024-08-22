// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPACCESSORYSERVERIP_H
#define HAPACCESSORYSERVERIP_H

@class NSArray, NSDictionary, HMFTimer, NSOperationQueue, NSString, HMFNetMonitor, HMFBlockOperation, HMFNetAddress, NSMutableArray, NSDate, NSData;
@protocol HAPAccessoryServerMetricProtocol, HAPHTTPClientDelegate, HAPHTTPClientDebugDelegate, HMFTimerDelegate, HAPAuthSessionDelegate, HMFNetMonitorDelegate, HAPWACAccessoryClientDelegate;


#import "HAPAccessoryServer.h"
#import "HAPAuthSession.h"
#import "HAPAccessoryProtocolInfo.h"
#import "HAPAccessoryServerBrowserIP.h"
#import "HAPWACAccessory.h"
#import "HAPWACAccessoryClient.h"
#import "HAPHTTPClient.h"
#import "HAPAccessory.h"

@interface HAPAccessoryServerIP : HAPAccessoryServer <HAPAccessoryServerMetricProtocol, HAPHTTPClientDelegate, HAPHTTPClientDebugDelegate, HMFTimerDelegate, HAPAuthSessionDelegate, HMFNetMonitorDelegate, HAPWACAccessoryClientDelegate>

 {
    *PairingSessionPrivate _pairingSession;
    NSUInteger _featureFlags;
    os_unfair_lock_s _lock;
    NSInteger _idleTimerActiveSessions;
    BOOL _retryingPairSetup;
    BOOL _securitySessionOpen;
}


@property (nonatomic) NSUInteger abruptDisconnectionCounter; // ivar: _abruptDisconnectionCounter
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, nonatomic) HAPAuthSession *authSession; // ivar: _authSession
@property (nonatomic) BOOL authenticated; // ivar: _authenticated
@property (retain, nonatomic) HAPAccessoryProtocolInfo *authenticatedProtocolInfo; // ivar: _authenticatedProtocolInfo
@property (retain, nonatomic) NSDictionary *bonjourDeviceInfo; // ivar: _bonjourDeviceInfo
@property (nonatomic, getter=isBonjourDiscoveryPending) BOOL bonjourDiscoveryPending; // ivar: _bonjourDiscoveryPending
@property (retain, nonatomic) HMFTimer *bonjourEventTimer; // ivar: _bonjourEventTimer
@property (weak, nonatomic) HAPAccessoryServerBrowserIP *browser; // ivar: _browser
@property (nonatomic) int cancelPairingErr; // ivar: _cancelPairingErr
@property (readonly, nonatomic) NSOperationQueue *clientOperationQueue; // ivar: _clientOperationQueue
@property (retain, nonatomic) HMFTimer *connectionIdleTimer; // ivar: _connectionIdleTimer
@property (nonatomic, getter=isContinuingLegacyWACpairing) BOOL continuingLegacyWACpairing; // ivar: _continuingLegacyWACpairing
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property CGFloat disconnectOnIdleTimeout; // ivar: _disconnectOnIdleTimeout
@property (nonatomic) BOOL econnresetRetryInProgress; // ivar: _econnresetRetryInProgress
@property (nonatomic, getter=isEstablishingSecureConnection) BOOL establishingSecureConnection; // ivar: _establishingSecureConnection
@property (nonatomic, getter=isHandlingInvalidSetupCode) BOOL handlingInvalidSetupCode; // ivar: _handlingInvalidSetupCode
@property (readonly, nonatomic) HAPWACAccessory *hapWACAccessory; // ivar: _hapWACAccessory
@property (retain, nonatomic) HAPWACAccessoryClient *hapWACAccessoryClient; // ivar: _hapWACAccessoryClient
@property (nonatomic) BOOL hasAttributeDatabase; // ivar: _hasAttributeDatabase
@property (nonatomic) BOOL hasStartedPairing; // ivar: _hasStartedPairing
@property (nonatomic) BOOL hasUpdatedBonjour; // ivar: _hasUpdatedBonjour
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPHTTPClient *httpClient; // ivar: _httpClient
@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (retain, nonatomic) NSArray *ipServices; // ivar: _ipServices
@property (nonatomic) NSUInteger metricHAPIPHTTPEventsCount; // ivar: _metricHAPIPHTTPEventsCount
@property (nonatomic) NSUInteger metricHAPIPHTTPRequestsCount; // ivar: _metricHAPIPHTTPRequestsCount
@property (nonatomic) NSUInteger metricHAPIPHTTPResponsesCount; // ivar: _metricHAPIPHTTPResponsesCount
@property (nonatomic) NSUInteger metricHAPIPInvalidationCount; // ivar: _metricHAPIPInvalidationCount
@property (nonatomic) CGFloat minimumReachabilityPingInterval; // ivar: _minimumReachabilityPingInterval
@property (readonly, copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) id *netServiceResolveCompletionBlock; // ivar: _netServiceResolveCompletionBlock
@property (readonly, nonatomic) HMFNetMonitor *networkMonitor; // ivar: _networkMonitor
@property (retain, nonatomic) HMFBlockOperation *pairOperation; // ivar: _pairOperation
@property (copy, nonatomic) id *pairVerifyCompletionBlock; // ivar: _pairVerifyCompletionBlock
@property (nonatomic, getter=isPairingRequestPending) BOOL pairingRequestPending; // ivar: _pairingRequestPending
@property (readonly, copy, nonatomic) HMFNetAddress *peerAddress;
@property (readonly, copy, nonatomic) HMFNetAddress *peerAddressEx;
@property (readonly, nonatomic) NSString *peerEndpointDescription;
@property (nonatomic, getter=isPostSoftAuthWacStarted) BOOL postSoftAuthWacStarted; // ivar: _postSoftAuthWacStarted
@property (nonatomic, getter=isPreSoftAuthWacStarted) BOOL preSoftAuthWacStarted; // ivar: _preSoftAuthWacStarted
@property (retain, nonatomic) HAPAccessory *primaryAccessoryForServer; // ivar: _primaryAccessoryForServer
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (retain, nonatomic) NSMutableArray *queuedOperations; // ivar: _queuedOperations
@property (retain, nonatomic) HMFTimer *reachabilityEventTimer; // ivar: _reachabilityEventTimer
@property (retain, nonatomic) NSDate *reachabilityStartTime; // ivar: _reachabilityStartTime
@property (readonly, copy) NSString *shortDescription;
@property (copy, nonatomic) NSString *sourceVersion; // ivar: _sourceVersion
@property (nonatomic) NSUInteger statusFlags; // ivar: _statusFlags
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSData *token; // ivar: _token
@property (nonatomic, getter=isTokenValidationPending) BOOL tokenValidationPending; // ivar: _tokenValidationPending
@property (nonatomic) BOOL unitTest_establishedSession; // ivar: _unitTest_establishedSession
@property (nonatomic, getter=isWacAccessory) BOOL wacAccessory; // ivar: _wacAccessory
@property (nonatomic, getter=isWacComplete) BOOL wacComplete; // ivar: _wacComplete
@property (nonatomic, getter=isWacLegacy) BOOL wacLegacy; // ivar: _wacLegacy
@property (readonly, getter=isWacNeeded) BOOL wacNeeded;
@property (nonatomic, getter=isWacStarted) BOOL wacStarted; // ivar: _wacStarted


+(id)logCategory;
+(id)sharedPairOperationQueue;
+(void)initialize;
-(*unk)copyPairingIdentityDelegateCallback;
-(*unk)findPairedPeerDelegateCallback;
-(*unk)savePairedPeerDelegateCallback;
-(BOOL)_delegateRespondsToSelector:(SEL)arg0 ;
-(BOOL)_isSessionEstablished;
-(BOOL)_matchWithError:(id)arg0 domain:(id)arg1 code:(NSInteger)arg2 ;
-(BOOL)_parseAndValidateTXTRecord;
-(BOOL)_parseTXTRecordDictionary:(id)arg0 ;
-(BOOL)_processEvent:(id)arg0 matchedCharacteristic:(*id)arg1 ;
-(BOOL)_shouldConnectBasedOnDisconnectOnIdle;
-(BOOL)_updateAccessories:(id)arg0 ;
-(BOOL)_validateAuthChallengeResponse:(id)arg0 expectedTID:(unsigned char)arg1 error:(*id)arg2 ;
-(BOOL)_validateProtocolInfo:(id)arg0 ;
-(BOOL)hasBonjourDeviceInfo;
-(BOOL)isPaired;
-(BOOL)isSecuritySessionOpen;
-(BOOL)isSessionEstablished;
-(BOOL)pingSupported;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg0 completion:(id)arg1 ;
-(BOOL)stopPairingWithError:(*id)arg0 ;
-(BOOL)tryPairingPassword:(id)arg0 error:(*id)arg1 ;
-(CGFloat)_getReachabilityTimeoutValue;
-(CGFloat)_getReachabilityTimeoutValueWithSleepInterval:(id)arg0 ;
-(NSInteger)linkType;
-(id)_joinAccessoryNetworkWithCompletion:(id)arg0 ;
-(id)_queuedReadOperationBlock:(SEL)arg0 timeout:(id)arg1 queue:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(id)_queuedWriteOperationBlock:(SEL)arg0 timeout:(id)arg1 queue:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(id)controllerUsername;
-(id)initWithBonjourDeviceInfo:(id)arg0 keyStore:(id)arg1 browser:(id)arg2 ;
-(id)initWithHAPWACAccessory:(id)arg0 keystore:(id)arg1 browser:(id)arg2 ;
-(id)initWithKeyStore:(id)arg0 browser:(id)arg1 ;
-(id)primaryAccessory;
-(id)readAndResetHAPMetrics:(BOOL)arg0 ;
-(id)services;
-(int)_continuePairingAfterAuthPromptWithRetry:(BOOL)arg0 ;
-(int)_continuePairingWithSetupCode:(id)arg0 ;
-(int)_ensureHTTPClientSetUp;
-(int)_ensurePairingSessionIsInitializedWithType:(unsigned int)arg0 ;
-(int)_handlePairSetupCompletionWithData:(id)arg0 ;
-(int)_handlePairVerifyCompletionWithData:(id)arg0 ;
-(int)_pairSetupStartWithConsentRequired:(BOOL)arg0 ;
-(int)_pairSetupTryPassword:(id)arg0 ;
-(int)_pairVerifyStartWithRetry:(BOOL)arg0 ;
-(int)_promptForSetupCodeWithFlags:(unsigned int)arg0 delaySeconds:(int)arg1 pairingFlags:(unsigned int)arg2 isWAC:(BOOL)arg3 ;
-(int)getBonjourDeviceDNSName:(*id)arg0 ;
-(void)__registerForInternalCharacteristicNotifications;
-(void)_accessoryDidBecomeUnreachable:(id)arg0 ;
-(void)_continuePairingAfterConfirmingSecureWAC:(id)arg0 ;
-(void)_continuePairingAfterMFiCertValidation;
-(void)_continuePairingAfterWAC:(id)arg0 ;
-(void)_continuePairingUsingWAC;
-(void)_doBonjourReconfirm;
-(void)_doPollForAccessory:(id)arg0 ;
-(void)_doReachabilityWithError:(id)arg0 forAccessory:(id)arg1 ;
// -(void)_enableEvents:(BOOL)arg0 forCharacteristics:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)_error:(id)arg0 forReadCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_error:(id)arg0 forWriteCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_establishSecureConnectionAndFetchAttributeDatabaseWithReason:(id)arg0 ;
-(void)_establishSecureSession;
-(void)_establishSecureSessionAndRemovePairing:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_getAttributeDatabase;
-(void)_handleConnectionIdleTimeout;
// -(void)_handleEventResponseObject:(id)arg0 type:(NSUInteger)arg1 httpStatus:(int)arg2 error:(id)arg3 characteristics:(id)arg4 requestedEventState:(BOOL)arg5 completion:(id)arg6 queue:(unk)arg7  ;
-(void)_handleListPairingsResponseObject:(id)arg0 type:(NSUInteger)arg1 httpStatus:(int)arg2 httpError:(id)arg3 completionQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)_handleMFiCertValidation;
-(void)_handlePairSetupAfterM4Callback;
-(void)_handlePairingsResponseObject:(id)arg0 type:(NSUInteger)arg1 httpStatus:(int)arg2 httpError:(id)arg3 removeRequest:(BOOL)arg4 completionQueue:(id)arg5 completionBlock:(id)arg6 ;
// -(void)_handlePrepareWriteResponseObject:(id)arg0 type:(NSUInteger)arg1 prepareIdentifier:(id)arg2 httpStatus:(int)arg3 error:(id)arg4 requestTuples:(id)arg5 timeout:(CGFloat)arg6 queue:(id)arg7 originalCompletion:(id)arg8 completion:(unk)arg9  ;
-(void)_handleReadECONNRESETError:(id)arg0 readCharacteristics:(id)arg1 responses:(id)arg2 timeout:(CGFloat)arg3 queue:(id)arg4 completionHandler:(id)arg5 ;
-(void)_handleReadResponseObject:(id)arg0 type:(NSUInteger)arg1 httpStatus:(int)arg2 error:(id)arg3 characteristics:(id)arg4 completion:(id)arg5 ;
-(void)_handleSecureSessionClosingWithError:(*id)arg0 status:(int)arg1 data:(id)arg2 ;
-(void)_handleUpdatesForCharacteristics:(id)arg0 stateNumber:(id)arg1 ;
-(void)_handleWriteECONNResetError:(id)arg0 writeRequests:(id)arg1 responses:(id)arg2 timeout:(CGFloat)arg3 queue:(id)arg4 completionHandler:(id)arg5 ;
-(void)_handleWriteResponseObject:(id)arg0 type:(NSUInteger)arg1 httpStatus:(int)arg2 error:(id)arg3 requestTuples:(id)arg4 completion:(id)arg5 ;
-(void)_indicateSessionActivityWithReason:(id)arg0 ;
-(void)_insertReadCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_insertWriteCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 queue:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)_invalidateWAC;
-(void)_invokePairVerifyCompletionBlock:(id)arg0 ;
-(void)_isAccessoryPublicKeyPresent:(*BOOL)arg0 registeredWithHomeKit:(*BOOL)arg1 ;
-(void)_kickConnectionIdleTimer;
-(void)_listPairingsWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)_notifyDelegateNeedsOwnershipToken;
-(void)_notifyDelegateOfDiscoveryCompletionWithError:(id)arg0 ;
-(void)_notifyDelegateOfPairingProgress:(NSInteger)arg0 ;
-(void)_notifyDelegatesOfAddAccessoryFailureWithError:(id)arg0 ;
-(void)_notifyDelegatesOfConnectionState:(BOOL)arg0 withError:(id)arg1 ;
-(void)_notifyDelegatesPairingStopped:(id)arg0 ;
-(void)_pairSetupContinueWAC;
-(void)_pairVerifyStartWAC:(id)arg0 ;
-(void)_parseAttributeDatabase:(id)arg0 transaction:(id)arg1 ;
-(void)_performEasyConfigWithPairingPrompt:(*unk)arg0 performPairSetup:(BOOL)arg1 isSplit:(BOOL)arg2 completion:(id)arg3 ;
-(void)_performExecuteWriteValues:(id)arg0 prepareIdentifier:(id)arg1 timeout:(CGFloat)arg2 queue:(id)arg3 completionHandler:(id)arg4 ;
-(void)_performTimedWriteValues:(id)arg0 timeout:(CGFloat)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_performWriteValues:(id)arg0 timeout:(CGFloat)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_processQueuedOperationsWithError:(id)arg0 ;
-(void)_queueAddPairingWithIdentifier:(id)arg0 publicKey:(id)arg1 admin:(BOOL)arg2 queue:(id)arg3 completion:(id)arg4 ;
// -(void)_queueEnableEvents:(BOOL)arg0 forCharacteristics:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)_queueListPairingWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)_queueReadCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_queueWriteCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 queue:(id)arg2 withCompletionHandler:(id)arg3 ;
-(void)_readCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_removePairingWithIdentifier:(id)arg0 publicKey:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_requestResource:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)_reset;
-(void)_sendRemovePairingWithData:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_skipReconfirm;
-(void)_startAddPairingWithIdentifier:(id)arg0 publicKey:(id)arg1 admin:(BOOL)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)_startConnectionIdleTimer;
-(void)_startReachability;
-(void)_stopReachability;
-(void)_stopReachabilityTimer;
-(void)_submitStateNumberChangeEvent:(BOOL)arg0 ;
-(void)_suspendConnectionIdleTimer;
-(void)_tearDownSession;
-(void)_tearDownSessionAndReconfirmWithError:(id)arg0 ;
-(void)_tearDownSessionWithError:(id)arg0 ;
-(void)_tearDownWAC;
-(void)_updateProtocolVersionFromPrimaryAccessory:(id)arg0 ;
-(void)_updateWithBonjourDeviceInfo:(id)arg0 ;
// -(void)_validatePairingAuthMethod:(id)arg0 activity:(unk)arg1  ;
-(void)_validateReachabilityTimer;
-(void)_writeCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)addActiveSession:(NSInteger)arg0 ;
-(void)addPairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)authSession:(id)arg0 authComplete:(id)arg1 ;
-(void)authSession:(id)arg0 authenticateUUID:(id)arg1 token:(id)arg2 ;
-(void)authSession:(id)arg0 confirmUUID:(id)arg1 token:(id)arg2 ;
-(void)authSession:(id)arg0 sendAuthExchangeData:(id)arg1 ;
-(void)authSession:(id)arg0 validateUUID:(id)arg1 token:(id)arg2 ;
-(void)authenticateAccessory;
-(void)continueAuthAfterValidation:(BOOL)arg0 ;
-(void)continuePairingAfterAuthPrompt;
-(void)continuePairingUsingWAC;
-(void)createKeysForDataStreamWithKeySalt:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)disconnect;
-(void)disconnectOnIdleUpdated;
-(void)disconnectWithError:(id)arg0 ;
-(void)discoverAccessories;
// -(void)enableEvents:(BOOL)arg0 forCharacteristics:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)getAccessoryInfo:(id)arg0 ;
// -(void)handleHTTPClientUnavailableErrorWithCompletion:(id)arg0 serializationType:(unk)arg1  ;
-(void)handleUpdatesForCharacteristics:(id)arg0 stateNumber:(id)arg1 ;
-(void)hapWACAccessoryClient:(id)arg0 setBonjourInfo:(id)arg1 ;
-(void)hapWACAccessoryClient:(id)arg0 wacProgress:(NSUInteger)arg1 ;
-(void)httpClient:(id)arg0 didReceiveEvent:(id)arg1 ;
-(void)httpClient:(id)arg0 didReceiveHTTPMessageWithHeaders:(id)arg1 body:(id)arg2 ;
-(void)httpClient:(id)arg0 didReceiveSocketEvent:(NSUInteger)arg1 ;
-(void)httpClient:(id)arg0 willSendHTTPMessageWithHeaders:(id)arg1 body:(id)arg2 ;
-(void)httpClientDidCloseConnectionDueToServer:(id)arg0 ;
-(void)identifyWithCompletion:(id)arg0 ;
-(void)incrementHAPIPHTTPEventsCount;
-(void)incrementHAPIPHTTPRequestsCount;
-(void)incrementHAPIPHTTPResponsesCount;
-(void)incrementHAPIPInvalidationCount;
-(void)invalidateWithCompletionHandler:(id)arg0 ;
-(void)invokePairVerifyCompletionBlock:(id)arg0 ;
-(void)listPairingsWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)networkMonitorIsReachable:(id)arg0 ;
-(void)networkMonitorIsUnreachable:(id)arg0 ;
-(void)pairSetupStartSoftAuthWAC;
-(void)pollAccessory;
-(void)processPendingBonjourRemoveEvents;
-(void)provisionToken:(id)arg0 ;
-(void)readCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)reconfirm;
-(void)removeActiveSession:(NSInteger)arg0 ;
-(void)removePairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestResource:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)resetPostSoftAuthWAC;
-(void)sendGETRequestToURL:(id)arg0 timeout:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)sendPOSTRequestToURL:(id)arg0 request:(id)arg1 serializationType:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)sendPUTRequestToURL:(id)arg0 request:(id)arg1 serializationType:(NSUInteger)arg2 timeout:(CGFloat)arg3 completionHandler:(id)arg4 ;
-(void)setSecuritySessionOpen:(BOOL)arg0 ;
-(void)startPairingWithRequest:(id)arg0 ;
-(void)startPing;
-(void)startReprovisioningWithPairingRequest:(id)arg0 ;
-(void)stopPing;
-(void)tearDownSessionOnAuthCompletion;
-(void)timerDidFire:(id)arg0 ;
-(void)updateActiveDisconnectOnIdleTimeout:(CGFloat)arg0 ;
-(void)updateWithBonjourDeviceInfo:(id)arg0 ;
-(void)updateWithHAPWACAccessory:(id)arg0 ;
-(void)validatePairingAuthMethod:(id)arg0 ;
-(void)writeCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif