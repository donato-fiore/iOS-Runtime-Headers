// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HAPACCESSORYSERVERBTLE100_H
#define _HAPACCESSORYSERVERBTLE100_H

@class CBService, NSMutableArray, NSMapTable, NSString, CBCharacteristic;
@protocol HAPSecuritySessionDelegate, CBPeripheralDelegate, OS_dispatch_source;


#import "HAPAccessoryServerBTLE.h"
#import "HAPSecuritySession.h"

@interface _HAPAccessoryServerBTLE100 : HAPAccessoryServerBTLE <HAPSecuritySessionDelegate, CBPeripheralDelegate>

 {
    *PairingSessionPrivate _pairingSession;
}


@property (retain, nonatomic) CBService *accessoryInfoService; // ivar: _accessoryInfoService
@property (retain, nonatomic) NSMutableArray *addRemovePairingOperationsQueue; // ivar: _addRemovePairingOperationsQueue
@property (nonatomic) NSUInteger availableInstanceID; // ivar: _availableInstanceID
@property (retain, nonatomic) NSMapTable *btleCharacteristicToHAPCharacteristicMap; // ivar: _btleCharacteristicToHAPCharacteristicMap
@property (retain, nonatomic) NSMapTable *btleServiceToHAPServiceMap; // ivar: _btleServiceToHAPServiceMap
@property (nonatomic) NSUInteger characteristicDiscoveryRequestCount; // ivar: _characteristicDiscoveryRequestCount
@property (nonatomic) NSUInteger characteristicValueReadCount; // ivar: _characteristicValueReadCount
@property (retain, nonatomic) NSObject<OS_dispatch_source> *connectionLifetimeTimer; // ivar: _connectionLifetimeTimer
@property (nonatomic) NSUInteger connectionRetryCount; // ivar: _connectionRetryCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisconnecting) BOOL disconnecting; // ivar: _disconnecting
@property (retain, nonatomic) NSMapTable *hapCharacteristicEnableEventCompletionQueues; // ivar: _hapCharacteristicEnableEventCompletionQueues
@property (retain, nonatomic) NSMapTable *hapCharacteristicReadCompletionQueues; // ivar: _hapCharacteristicReadCompletionQueues
@property (retain, nonatomic) NSMapTable *hapCharacteristicWriteCompletionQueues; // ivar: _hapCharacteristicWriteCompletionQueues
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CBCharacteristic *identifyCharacteristic; // ivar: _identifyCharacteristic
@property (nonatomic) CGFloat idleConnectionTimeoutInSec; // ivar: _idleConnectionTimeoutInSec
@property (retain, nonatomic) CBCharacteristic *manufacturerCharacteristic; // ivar: _manufacturerCharacteristic
@property (nonatomic) NSUInteger metadataDiscoveryRequestCount; // ivar: _metadataDiscoveryRequestCount
@property (nonatomic) NSUInteger metadataValueReadCount; // ivar: _metadataValueReadCount
@property (retain, nonatomic) CBCharacteristic *modelCharacteristic; // ivar: _modelCharacteristic
@property (retain, nonatomic) CBCharacteristic *pairSetupCharacteristic; // ivar: _pairSetupCharacteristic
@property (retain, nonatomic) CBCharacteristic *pairVerifyCharacteristic; // ivar: _pairVerifyCharacteristic
@property (copy, nonatomic) id *pairVerifyCompletionBlock; // ivar: _pairVerifyCompletionBlock
@property (nonatomic) NSUInteger pairingFeatureFlags; // ivar: _pairingFeatureFlags
@property (retain, nonatomic) CBCharacteristic *pairingFeaturesCharacteristic; // ivar: _pairingFeaturesCharacteristic
@property (nonatomic) BOOL pairingFeaturesRead; // ivar: _pairingFeaturesRead
@property (retain, nonatomic) CBService *pairingService; // ivar: _pairingService
@property (retain, nonatomic) CBCharacteristic *pairingsCharacteristic; // ivar: _pairingsCharacteristic
@property (nonatomic) BOOL removeOnDisconnect; // ivar: _removeOnDisconnect
@property (retain, nonatomic) HAPSecuritySession *securitySession; // ivar: _securitySession
@property (nonatomic, getter=isSecuritySessionOpening) BOOL securitySessionOpening; // ivar: _securitySessionOpening
@property (retain, nonatomic) CBCharacteristic *serialNumberCharacteristic; // ivar: _serialNumberCharacteristic
@property (nonatomic) BOOL startPairingRequested; // ivar: _startPairingRequested
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unpairedIdentifyCompletionBlock; // ivar: _unpairedIdentifyCompletionBlock
@property (nonatomic) BOOL unpairedIdentifyRequested; // ivar: _unpairedIdentifyRequested


+(id)_convertFromBTLEToHAPUUID:(id)arg0 ;
+(id)deserializeCharacteristicReadData:(id)arg0 characteristicFormat:(NSUInteger)arg1 supportsAdditonalAuthentication:(BOOL)arg2 error:(*id)arg3 ;
+(id)serializeCharacteristicWriteValue:(id)arg0 characteristicFormat:(NSUInteger)arg1 supportsAdditonalAuthentication:(BOOL)arg2 authenticationData:(id)arg3 error:(*id)arg4 ;
-(BOOL)_delegateRespondsToSelector:(SEL)arg0 ;
-(BOOL)_parseBTLECharacteristicDescriptor:(id)arg0 existingDescriptors:(id)arg1 characteristics:(id)arg2 ;
-(BOOL)_shouldEnableSessionSecurity;
-(BOOL)isBLELinkConnected;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg0 completion:(id)arg1 ;
-(BOOL)stopPairingWithError:(*id)arg0 ;
-(BOOL)tryPairingPassword:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hapBLEProtocolVersion;
-(id)_btleCharacteristicForHAPCharacteristic:(id)arg0 ;
-(id)_decryptData:(id)arg0 error:(*id)arg1 ;
-(id)_dequeueEnableEventCompletionTupleForCharacteristic:(id)arg0 ;
-(id)_dequeueReadCompletionTupleForCharacteristic:(id)arg0 ;
-(id)_dequeueWriteCompletionHandlerForCharacteristic:(SEL)arg0 ;
-(id)_encryptDataAndGenerateAuthTag:(id)arg0 error:(*id)arg1 ;
-(id)_hapCharacteristicForBTLECharacteristic:(id)arg0 ;
-(id)_nextInstanceID;
-(id)_pairSetupHAPCharacteristic;
-(id)_pairVerifyHAPCharacteristic;
-(id)_parseBTLEService:(id)arg0 withInstanceId:(id)arg1 ;
-(id)controllerUsername;
-(id)initWithPeripheral:(id)arg0 name:(id)arg1 pairingUsername:(id)arg2 statusFlags:(id)arg3 stateNumber:(id)arg4 stateChanged:(BOOL)arg5 connectReason:(unsigned char)arg6 configNumber:(id)arg7 category:(id)arg8 setupHash:(id)arg9 connectionIdleTime:(unsigned char)arg10 browser:(id)arg11 keyStore:(id)arg12 whbStableIdentifier:(id)arg13 ;
-(id)securitySession:(id)arg0 didReceiveLocalPairingIdentityRequestWithError:(*id)arg1 ;
-(id)securitySession:(id)arg0 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg1 error:(*id)arg2 ;
-(int)_ensurePairingSessionIsInitializedWithType:(unsigned int)arg0 ;
-(int)_handlePairSetupExchangeWithData:(id)arg0 ;
-(int)_pairSetupStart;
-(int)_pairSetupTryPassword:(id)arg0 ;
-(void)_addPairingWithIdentifier:(id)arg0 publicKey:(id)arg1 admin:(BOOL)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)_cancelConnectionLifetimeTimer;
-(void)_checkForAuthPrompt;
-(void)_createPrimaryAccessoryFromAdvertisementData;
-(void)_dequeueAndContinueOperation;
-(void)_disconnect;
// -(void)_enableEvent:(BOOL)arg0 forCharacteristic:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
// -(void)_enableEvents:(BOOL)arg0 forCharacteristics:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
// -(void)_enqueueEnableEventCompletionHandler:(id)arg0 queue:(unk)arg1 forCharacteristic:(id)arg2  ;
-(void)_enqueueOperation:(NSInteger)arg0 identifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(id)arg5 ;
// -(void)_enqueueReadCompletionHandler:(id)arg0 queue:(unk)arg1 forCharacteristic:(id)arg2  ;
// -(void)_enqueueWriteCompletionHandler:(id)arg0 forCharacteristic:(unk)arg1  ;
-(void)_establishSecureSession;
-(void)_getAttributeDatabase;
-(void)_handleConnectionLifetimeTimeout;
-(void)_handleConnectionWithError:(id)arg0 ;
-(void)_handleDescriptorDiscovery;
-(void)_handleDisconnectionWithQueue:(id)arg0 withCompletion:(id)arg1 ;
-(void)_handleHAPCharacteristicDiscoveryForService:(id)arg0 error:(id)arg1 ;
-(void)_handleHAPNotificationStateUpdateForCharacteristic:(id)arg0 error:(id)arg1 ;
-(void)_handleHAPServiceDiscovery;
-(void)_handleHAPServiceDiscoveryCompletionForService:(id)arg0 withInstanceId:(id)arg1 ;
-(void)_handleHAPWriteConfirmationForCharacteristic:(id)arg0 error:(id)arg1 ;
-(void)_handlePairingStateMachine;
-(void)_handlePairingsReadForCharacteristic:(id)arg0 readError:(id)arg1 removing:(BOOL)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)_handlePairingsWriteForCharacteristic:(id)arg0 writeError:(id)arg1 removing:(BOOL)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)_handleReadDescriptorValues;
-(void)_handleReceivedSecuritySessionSetupExchangeData:(id)arg0 ;
-(void)_handleSuccessfulBTLEConnection;
-(void)_handleUpdatedValueForBTLECharacteristic:(id)arg0 error:(id)arg1 ;
-(void)_notifyDelegateOfReceivedEncryptedAuthenticatedData:(id)arg0 forCharacteristic:(id)arg1 ;
-(void)_notifyDelegateOfReceivedPlaintextData:(id)arg0 forCharacteristic:(id)arg1 ;
-(void)_notifyDelegateOfSentEncryptedAuthenticatedData:(id)arg0 forCharacteristic:(id)arg1 ;
-(void)_notifyDelegateOfSentPlaintextData:(id)arg0 forCharacteristic:(id)arg1 ;
-(void)_readCharacteristicValues:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)_readValueForCharacteristic:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)_reallyEstablishSecureSession;
-(void)_removePairingWithIdentifier:(id)arg0 publicKey:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)_setupBTLEConnectionToPeripheral;
-(void)_updateConnectionLifetimeTimer;
-(void)_writeCharacteristicValues:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
// -(void)_writeValue:(id)arg0 forCharacteristic:(id)arg1 authorizationData:(id)arg2 withCompletionHandler:(id)arg3 queue:(unk)arg4  ;
-(void)addPairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)configureCharacteristics:(id)arg0 queue:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)continueAuthAfterValidation:(BOOL)arg0 ;
-(void)continuePairingAfterAuthPrompt;
-(void)dealloc;
-(void)disconnect;
-(void)discoverAccessories;
// -(void)enableEvents:(BOOL)arg0 forCharacteristics:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)generateBroadcastKey:(unsigned char)arg0 queue:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)handleConnectionWithPeripheral:(id)arg0 withError:(id)arg1 ;
-(void)handleDisconnectionWithError:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)identifyWithCompletion:(id)arg0 ;
-(void)listPairingsWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)peripheral:(id)arg0 didDiscoverCharacteristicsForService:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didDiscoverDescriptorsForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didDiscoverServices:(id)arg1 ;
-(void)peripheral:(id)arg0 didModifyServices:(id)arg1 ;
-(void)peripheral:(id)arg0 didUpdateNotificationStateForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didUpdateValueForDescriptor:(id)arg1 error:(id)arg2 ;
-(void)peripheral:(id)arg0 didWriteValueForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)readCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)readValueForCharacteristic:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)removePairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)securitySession:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)securitySession:(id)arg0 didReceiveSetupExchangeData:(id)arg1 ;
-(void)securitySessionDidOpen:(id)arg0 ;
-(void)securitySessionIsOpening:(id)arg0 ;
-(void)startPairingWithRequest:(id)arg0 ;
-(void)updateConnectionIdleTime:(unsigned char)arg0 ;
-(void)writeCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif