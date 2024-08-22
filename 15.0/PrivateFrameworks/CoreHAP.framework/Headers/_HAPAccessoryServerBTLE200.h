// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HAPACCESSORYSERVERBTLE200_H
#define _HAPACCESSORYSERVERBTLE200_H

@class NSMapTable, NSOperationQueue, HMFTimer, NSString, NSError, NSMutableArray;
@protocol CBPeripheralDelegate, HAPBTLEControlOutputStreamDelegate, HAPPairSetupSessionClientDelegate, HAPSecuritySessionDelegate, HMFTimerDelegate, HAPAuthSessionDelegate, HMFLogging;


#import "HAPAccessoryServerBTLE.h"
#import "HAPBLEAccessoryCache.h"
#import "HAPAuthSession.h"
#import "HAPAccessoryProtocolInfo.h"
#import "_HAPBTLEDiscoveryContext.h"
#import "HAPCharacteristic.h"
#import "HAPPairSetupSession.h"
#import "HAPSecuritySession.h"

@interface _HAPAccessoryServerBTLE200 : HAPAccessoryServerBTLE <CBPeripheralDelegate, HAPBTLEControlOutputStreamDelegate, HAPPairSetupSessionClientDelegate, HAPSecuritySessionDelegate, HMFTimerDelegate, HAPAuthSessionDelegate, HMFLogging>



@property (retain) HAPBLEAccessoryCache *accessoryCache; // ivar: _accessoryCache
@property (retain, nonatomic) HAPAuthSession *authSession; // ivar: _authSession
@property (nonatomic) BOOL authenticated; // ivar: _authenticated
@property (retain, nonatomic) HAPAccessoryProtocolInfo *authenticatedProtocolInfo; // ivar: _authenticatedProtocolInfo
@property (nonatomic, getter=isBadSetupCode) BOOL badPairSetupCode; // ivar: _badPairSetupCode
@property (readonly, nonatomic) NSMapTable *characteristicEnableEventCompletionHandlers; // ivar: _characteristicEnableEventCompletionHandlers
@property (readonly, nonatomic) NSMapTable *characteristicWriteCompletionHandlers; // ivar: _characteristicWriteCompletionHandlers
@property (readonly, nonatomic) NSOperationQueue *clientOperationQueue; // ivar: _clientOperationQueue
@property (copy, nonatomic) id *connectionCompletionHandler; // ivar: _connectionCompletionHandler
@property (retain, nonatomic) HMFTimer *connectionIdleTimer; // ivar: _connectionIdleTimer
@property (nonatomic) NSInteger connectionState; // ivar: _connectionState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _HAPBTLEDiscoveryContext *discoveryContext; // ivar: _discoveryContext
@property (nonatomic) unsigned char featureFlags; // ivar: _featureFlags
@property BOOL hasValidCache; // ivar: _hasValidCache
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HAPCharacteristic *identifyCharacteristic; // ivar: _identifyCharacteristic
@property (nonatomic) CGFloat pairSetupBackoffTimeInterval; // ivar: _pairSetupBackoffTimeInterval
@property (weak, nonatomic) HAPCharacteristic *pairSetupCharacteristic; // ivar: _pairSetupCharacteristic
@property (retain, nonatomic) HAPPairSetupSession *pairSetupSession; // ivar: _pairSetupSession
@property (weak, nonatomic) HAPCharacteristic *pairVerifyCharacteristic; // ivar: _pairVerifyCharacteristic
@property (readonly, nonatomic) NSOperationQueue *pairVerifyOperationQueue; // ivar: _pairVerifyOperationQueue
@property (nonatomic, getter=isPairing) BOOL pairing; // ivar: _pairing
@property (retain, nonatomic) NSError *pairingDisconnectionError; // ivar: _pairingDisconnectionError
@property (weak, nonatomic) HAPCharacteristic *pairingFeaturesCharacteristic; // ivar: _pairingFeaturesCharacteristic
@property (weak, nonatomic) HAPCharacteristic *pairingsCharacteristic; // ivar: _pairingsCharacteristic
@property (readonly, nonatomic) NSMutableArray *pendingRequests; // ivar: _pendingRequests
@property (readonly, nonatomic) NSMutableArray *pendingResponses; // ivar: _pendingResponses
@property (readonly, nonatomic) NSOperationQueue *requestOperationQueue; // ivar: _requestOperationQueue
@property (retain, nonatomic) HAPSecuritySession *securitySession; // ivar: _securitySession
@property (copy, nonatomic) id *setupCodeCompletionHandler; // ivar: _setupCodeCompletionHandler
@property (readonly) Class superclass;
@property (nonatomic, getter=isVerified) BOOL verified; // ivar: _verified


+(BOOL)isHAPDescriptor:(id)arg0 ;
+(BOOL)isHAPService:(id)arg0 ;
+(BOOL)parseCharacteristicConfigurationResponse:(id)arg0 error:(*id)arg1 ;
+(BOOL)parseProtocolConfigurationResponse:(id)arg0 key:(*id)arg1 stateNumber:(*id)arg2 error:(*id)arg3 ;
+(BOOL)parseReadResponse:(id)arg0 value:(*id)arg1 notificationContext:(*id)arg2 error:(*id)arg3 ;
+(BOOL)parseWriteResponse:(id)arg0 value:(*id)arg1 error:(*id)arg2 ;
+(id)configurationRequestForCharacteristic:(id)arg0 isBroadcasted:(BOOL)arg1 interval:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)configurationRequestForService:(id)arg0 configRequestType:(unsigned char)arg1 error:(*id)arg2 ;
+(id)executeWriteRequestForCharacteristic:(id)arg0 options:(NSInteger)arg1 error:(*id)arg2 ;
+(id)extractNotificationContextFromBodyData:(id)arg0 error:(*id)arg1 ;
+(id)extractSerializedRequestValueFromBodyData:(id)arg0 error:(*id)arg1 ;
+(id)logCategory;
+(id)parseServiceSignatureResponse:(id)arg0 serviceInstanceID:(id)arg1 serviceType:(id)arg2 error:(*id)arg3 ;
+(id)parseSignatureResponse:(id)arg0 error:(*id)arg1 ;
+(id)prepareWriteRequestForCharacteristic:(id)arg0 value:(id)arg1 authorizationData:(id)arg2 contextData:(id)arg3 options:(NSInteger)arg4 error:(*id)arg5 ;
+(id)readRequestForCharacteristic:(id)arg0 options:(NSInteger)arg1 error:(*id)arg2 ;
+(id)signatureRequestForCharacteristic:(id)arg0 requiresAuthentication:(BOOL)arg1 error:(*id)arg2 ;
+(id)signatureRequestForService:(id)arg0 characteristic:(id)arg1 requiresAuthentication:(BOOL)arg2 error:(*id)arg3 ;
+(id)writeRequestForCharacteristic:(id)arg0 value:(id)arg1 authorizationData:(id)arg2 contextData:(id)arg3 options:(NSInteger)arg4 error:(*id)arg5 ;
-(BOOL)_cancelDiscoveryWithError:(id)arg0 ;
-(BOOL)_delegateRespondsToSelector:(SEL)arg0 ;
-(BOOL)_parsePairingFeaturesCharacteristic:(id)arg0 authMethod:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_validateProtocolInfo:(id)arg0 ;
-(BOOL)isBLELinkConnected;
-(BOOL)isHAPCharacteristic:(id)arg0 ;
-(BOOL)isSecuritySessionOpen;
-(BOOL)pairSetupSession:(id)arg0 didPairWithPeer:(id)arg1 error:(*id)arg2 ;
-(BOOL)pairSetupSession:(id)arg0 didReceiveBackoffRequestWithTimeInterval:(CGFloat)arg1 ;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg0 completion:(id)arg1 ;
// -(BOOL)removePairingForCurrentControllerOnQueue:(id)arg0 completion:(id)arg1 serverPairingCompletion:(unk)arg2  ;
-(BOOL)shouldVerifyHAPCharacteristic:(id)arg0 ;
-(BOOL)shouldVerifyHAPService:(id)arg0 ;
-(BOOL)stopPairingWithError:(*id)arg0 ;
-(BOOL)tryPairingPassword:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)_getPairSetupType;
-(NSUInteger)_maximumControlWriteLengthForRequest:(id)arg0 ;
-(NSUInteger)_outstandingRequests;
-(NSUInteger)hapBLEProtocolVersion;
-(id)_characteristicForCBCharacteristic:(id)arg0 ;
-(id)_decryptData:(id)arg0 error:(*id)arg1 ;
-(id)_encryptDataAndGenerateAuthTag:(id)arg0 error:(*id)arg1 ;
-(id)_getCBCharacteristic:(id)arg0 instanceId:(id)arg1 service:(id)arg2 ;
-(id)_getCBService:(id)arg0 instanceOrder:(NSUInteger)arg1 ;
-(id)_getCachedService:(id)arg0 ;
-(id)_getCharacteristicInstanceID:(id)arg0 error:(*id)arg1 ;
-(id)_getProtocolInfoService;
-(id)_getServiceInstanceID:(id)arg0 ;
-(id)_hapServicesFromCache;
-(id)_parseCharacteristic:(id)arg0 error:(*id)arg1 ;
-(id)_parseService:(id)arg0 error:(*id)arg1 ;
-(id)_pendingRequestForCharacteristic:(id)arg0 ;
-(id)_pendingResponseForRequest:(id)arg0 ;
-(id)_serviceCacheFromHAPService:(id)arg0 serviceOrder:(NSUInteger)arg1 ;
-(id)_serviceForCBService:(id)arg0 ;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)getLocalPairingIdentityWithError:(*id)arg0 ;
-(id)initWithPeripheral:(id)arg0 name:(id)arg1 pairingUsername:(id)arg2 statusFlags:(id)arg3 stateNumber:(id)arg4 stateChanged:(BOOL)arg5 connectReason:(unsigned char)arg6 configNumber:(id)arg7 category:(id)arg8 setupHash:(id)arg9 connectionIdleTime:(unsigned char)arg10 browser:(id)arg11 keyStore:(id)arg12 whbStableIdentifier:(id)arg13 ;
-(id)pairSetupSession:(id)arg0 didReceiveLocalPairingIdentityRequestWithError:(*id)arg1 ;
-(id)protocolInfoServiceSignatureCharacteristics;
-(id)securitySession:(id)arg0 didReceiveLocalPairingIdentityRequestWithError:(*id)arg1 ;
-(id)securitySession:(id)arg0 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)shortDescription;
-(void)_cacheServices:(id)arg0 ;
-(void)_cancelAllQueuedOperationsWithError:(id)arg0 ;
-(void)_cancelConnectionWithError:(id)arg0 ;
-(void)_checkForAuthPrompt:(BOOL)arg0 ;
-(void)_configureBroadcastKeyGeneration:(unsigned char)arg0 service:(id)arg1 withCompletion:(id)arg2 ;
-(void)_configureCharacteristics:(id)arg0 queue:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_continuePairingAfterMFiCertValidation;
-(void)_createPrimaryAccessoryFromAdvertisementData;
-(void)_discoverCharacteristic:(id)arg0 ;
-(void)_discoverCharacteristicsForService:(id)arg0 ;
-(void)_discoverServices;
-(void)_discoverWithType:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)_enableBroadcastEvent:(BOOL)arg0 interval:(NSUInteger)arg1 forCharacteristic:(id)arg2 completionHandler:(id)arg3 ;
// -(void)_enableEvent:(BOOL)arg0 forCharacteristic:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)_enableEvent:(BOOL)arg0 toCharacteristic:(id)arg1 completionHandler:(id)arg2 ;
// -(void)_enableEvents:(BOOL)arg0 forCharacteristics:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)_enqueueRequest:(id)arg0 ;
-(void)_establishSecureSession;
-(void)_generateBroadcastKey:(unsigned char)arg0 queue:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_getPairingFeaturesWithCompletionHandler:(id)arg0 ;
-(void)_handleCompletedDiscovery;
-(void)_handleConnectionIdleTimeout;
-(void)_handleConnectionWithError:(id)arg0 ;
-(void)_handleDiscoveredCharacteristicsForService:(id)arg0 error:(id)arg1 ;
-(void)_handleDiscoveredCharactersitic:(id)arg0 error:(id)arg1 ;
-(void)_handleDiscoveredDescriptors:(id)arg0 ;
-(void)_handleDiscoveredServices:(id)arg0 error:(id)arg1 ;
-(void)_handleEventIndicationForCharacteristic:(id)arg0 ;
-(void)_handleHAPNotificationStateUpdateForCharacteristic:(id)arg0 error:(id)arg1 ;
-(void)_handlePairSetupSessionExchangeData:(id)arg0 ;
-(void)_handlePairingSetupCodeRequestWithCompletionHandler:(id)arg0 ;
-(void)_handleReadCharacteristicSignature:(id)arg0 error:(id)arg1 ;
-(void)_handleReadCharacteristicValue:(id)arg0 error:(id)arg1 ;
-(void)_handleReadDescriptorValue:(id)arg0 error:(id)arg1 ;
-(void)_handleReadServiceInstanceId:(id)arg0 ;
-(void)_handleReadServiceSignature:(id)arg0 error:(id)arg1 ;
-(void)_handleResponseData:(id)arg0 fromCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)_handleSecuritySessionSetupExchangeData:(id)arg0 ;
-(void)_handleUpdateValueForCharacteristic:(id)arg0 error:(id)arg1 ;
-(void)_handleWriteCompletionForCharacteristic:(id)arg0 error:(id)arg1 ;
-(void)_kickConnectionIdleTimer;
-(void)_notifyDelegateOfReceivedEncryptedAuthenticatedData:(id)arg0 forCharacteristic:(id)arg1 ;
-(void)_notifyDelegateOfReceivedPlaintextData:(id)arg0 forCharacteristic:(id)arg1 ;
-(void)_notifyDelegateOfSentEncryptedAuthenticatedData:(id)arg0 forCharacteristic:(id)arg1 ;
-(void)_notifyDelegateOfSentPlaintextData:(id)arg0 forCharacteristic:(id)arg1 ;
-(void)_notifyDelegatesPairingStopped:(id)arg0 ;
-(void)_pairingCompletedWithError:(id)arg0 ;
-(void)_performEnableEvent:(BOOL)arg0 toCharacteristic:(id)arg1 completionHandler:(id)arg2 ;
-(void)_performTimedWriteExecuteForCharacteristic:(id)arg0 value:(id)arg1 options:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)_performTimedWritePrepareWithValue:(id)arg0 toCharacteristic:(id)arg1 authorizationData:(id)arg2 contextData:(id)arg3 options:(NSInteger)arg4 completionHandler:(id)arg5 ;
-(void)_performTimedWriteValue:(id)arg0 toCharacteristic:(id)arg1 authorizationData:(id)arg2 contextData:(id)arg3 options:(NSInteger)arg4 completionHandler:(id)arg5 ;
-(void)_performWriteValue:(id)arg0 toCharacteristic:(id)arg1 authorizationData:(id)arg2 contextData:(id)arg3 options:(NSInteger)arg4 completionHandler:(id)arg5 ;
-(void)_readCharacteristicSignature:(id)arg0 ;
-(void)_readCharacteristicSignatures;
-(void)_readCharacteristicValue:(id)arg0 ;
-(void)_readCharacteristicValues:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)_readDescriptorValue:(id)arg0 ;
-(void)_readPendingCharacteritiscTypes:(id)arg0 completion:(id)arg1 ;
-(void)_readServiceSignature:(id)arg0 ;
-(void)_readValueForCharacteristic:(id)arg0 options:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)_reallySendRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)_removePairingOfAccessoryServerCancelledMidPairing;
-(void)_requestResponseForRequest:(id)arg0 ;
-(void)_resetWithError:(id)arg0 ;
-(void)_restartConnectionIdleTimer:(CGFloat)arg0 ;
-(void)_resumeAllOperations;
-(void)_resumeConnectionIdleTimer;
-(void)_retryDiscovery;
-(void)_sendControlPacket:(id)arg0 forRequest:(id)arg1 completionHandler:(id)arg2 ;
-(void)_sendData:(id)arg0 toCharacteristic:(id)arg1 completionHandler:(id)arg2 ;
-(void)_sendPairingRequestData:(id)arg0 completionHandler:(id)arg1 ;
-(void)_sendProtocolInfoServiceExchangeData:(id)arg0 completion:(id)arg1 ;
-(void)_sendRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)_suspendAllOperations;
-(void)_suspendConnectionIdleTimer;
-(void)_updateConnectionIdleTime:(unsigned char)arg0 ;
-(void)_updatePropertiesFromCharacteristic:(id)arg0 ;
-(void)_writeValue:(id)arg0 toCharacteristic:(id)arg1 authorizationData:(id)arg2 contextData:(id)arg3 options:(NSInteger)arg4 completionHandler:(id)arg5 ;
-(void)addPairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)authSession:(id)arg0 authComplete:(id)arg1 ;
-(void)authSession:(id)arg0 authenticateUUID:(id)arg1 token:(id)arg2 ;
-(void)authSession:(id)arg0 confirmUUID:(id)arg1 token:(id)arg2 ;
-(void)authSession:(id)arg0 sendAuthExchangeData:(id)arg1 ;
-(void)authSession:(id)arg0 validateUUID:(id)arg1 token:(id)arg2 ;
-(void)authenticateAccessory;
-(void)configureCharacteristics:(id)arg0 queue:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)connectWithRouteMode:(unsigned char)arg0 withCompletionHandler:(id)arg1 ;
-(void)continueAuthAfterValidation:(BOOL)arg0 ;
-(void)continuePairingAfterAuthPrompt;
-(void)controlOutputStream:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)controlOutputStream:(id)arg0 didReceiveRequestToSendControlPacket:(id)arg1 completionHandler:(id)arg2 ;
-(void)controlOutputStreamDidComplete:(id)arg0 ;
-(void)controlOutputStreamDidOpen:(id)arg0 ;
-(void)dealloc;
-(void)disconnect;
-(void)disconnectWithCompletionHandler:(id)arg0 ;
// -(void)disconnectWithCompletionHandler:(id)arg0 disconnectionError:(unk)arg1  ;
-(void)discoverAccessories;
-(void)discoverAccessoriesAndReadCharacteristicTypes:(id)arg0 ;
// -(void)enableEvents:(BOOL)arg0 forCharacteristics:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)generateBroadcastKey:(unsigned char)arg0 queue:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)getAccessoryInfo:(id)arg0 ;
-(void)handleAccessoriesListUpdate:(id)arg0 ;
-(void)handleConnectionWithPeripheral:(id)arg0 withError:(id)arg1 ;
-(void)handleDisconnectionWithError:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)identifyWithCompletion:(id)arg0 ;
-(void)listPairingsWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)markNotifyingCharacteristicUpdatedforCharacteristic:(id)arg0 ;
-(void)pairSetupSession:(id)arg0 didReceiveProductData:(id)arg1 ;
-(void)pairSetupSession:(id)arg0 didReceiveSetupCodeRequestWithCompletionHandler:(id)arg1 ;
-(void)pairSetupSession:(id)arg0 didReceiveSetupExchangeData:(id)arg1 ;
-(void)pairSetupSession:(id)arg0 didStopWithError:(id)arg1 ;
-(void)pairSetupSessionDidReceiveInvalidSetupCode:(id)arg0 ;
-(void)peripheral:(id)arg0 didDiscoverCharacteristicsForService:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didDiscoverDescriptorsForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didDiscoverServices:(id)arg1 ;
-(void)peripheral:(id)arg0 didModifyServices:(id)arg1 ;
-(void)peripheral:(id)arg0 didUpdateNotificationStateForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didUpdateValueForDescriptor:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didWriteValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)provisionToken:(id)arg0 ;
-(void)readCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)removePairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)securitySession:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)securitySession:(id)arg0 didReceiveSetupExchangeData:(id)arg1 ;
-(void)securitySessionDidOpen:(id)arg0 ;
-(void)securitySessionIsOpening:(id)arg0 ;
-(void)startPairingWithConsentRequired:(BOOL)arg0 config:(id)arg1 ownershipToken:(id)arg2 ;
-(void)tearDownSessionOnAuthCompletion;
-(void)timerDidFire:(id)arg0 ;
-(void)updateConnectionIdleTime:(unsigned char)arg0 ;
-(void)writeCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif