// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPACCESSORYSERVERHAP2ADAPTER_H
#define HAPACCESSORYSERVERHAP2ADAPTER_H

@class NSArray, HMFTimer, NSString;
@protocol HAP2AccessoryDelegate, HAP2PairedAccessoryServerDelegate, HAP2UnpairedAccessoryServerDelegate, HAP2UnpairedAccessoryServerPairDelegate, HMFTimerDelegate, HAP2AccessoryServerDelegate, HAP2PairedAccessoryServer, HAP2Cancelable, HAP2UnpairedAccessoryServer;


#import "HAPAccessoryServer.h"
#import "HAPAccessory.h"
#import "HAP2SerializedOperationQueue.h"

@interface HAPAccessoryServerHAP2Adapter : HAPAccessoryServer <HAP2AccessoryDelegate, HAP2PairedAccessoryServerDelegate, HAP2UnpairedAccessoryServerDelegate, HAP2UnpairedAccessoryServerPairDelegate, HMFTimerDelegate, HAP2AccessoryServerDelegate>

 {
    HAPAccessory *_primaryAccessory;
    NSArray *_accessories;
}


@property (copy, nonatomic) id *authValidationCompletion; // ivar: _authValidationCompletion
@property (copy, nonatomic) id *authenticateUUIDCompletion; // ivar: _authenticateUUIDCompletion
@property (retain, nonatomic) HMFTimer *connectionIdleTimer; // ivar: _connectionIdleTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat disconnectOnIdleTimeout; // ivar: _disconnectOnIdleTimeout
@property (nonatomic, getter=shouldDiscoverAccessoriesOncePaired) BOOL discoverAccessoriesOncePaired; // ivar: _discoverAccessoriesOncePaired
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInternallyPaired) BOOL internallyPaired; // ivar: _internallyPaired
@property (readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) NSObject<HAP2PairedAccessoryServer> *pairedServer; // ivar: _pairedServer
@property (retain, nonatomic) NSObject<HAP2Cancelable> *pairingSessionCancelable; // ivar: _pairingSessionCancelable
@property (copy, nonatomic) id *setupCodeCompletion; // ivar: _setupCodeCompletion
@property (nonatomic, getter=shouldSkipUserConsent) BOOL skipUserConsent; // ivar: _skipUserConsent
@property (copy, nonatomic) id *softwareAuthFinishedCompletion; // ivar: _softwareAuthFinishedCompletion
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<HAP2UnpairedAccessoryServer> *unpairedServer; // ivar: _unpairedServer
@property (copy, nonatomic) id *userConsentCompletion; // ivar: _userConsentCompletion


+(void)initialize;
-(BOOL)_hap2CharacteristicTuplesForHAPCharacteristics:(id)arg0 tuples:(*id)arg1 error:(*id)arg2 ;
-(BOOL)_isActiveServer:(id)arg0 ;
-(BOOL)hasAdvertisement;
-(BOOL)isPaired;
-(BOOL)isReachable;
-(BOOL)isSecuritySessionOpen;
-(BOOL)onDemandConnectionsAreEnabled;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg0 completion:(id)arg1 ;
-(BOOL)stopPairingWithError:(*id)arg0 ;
-(BOOL)supportsTimedWrite;
-(BOOL)tryPairingPassword:(id)arg0 error:(*id)arg1 ;
-(NSInteger)linkType;
-(NSUInteger)configNumber;
-(id)_accessoryFromHAP2Accessory:(id)arg0 ;
-(id)_hapIdentifierForAccessory:(id)arg0 ;
-(id)accessories;
-(id)activeServer;
-(id)category;
-(id)clientQueue;
-(id)currentIdentity;
-(id)initWithOperationQueue:(id)arg0 accessoryServer:(id)arg1 ;
-(id)initWithPairedServer:(id)arg0 ;
-(id)initWithUnpairedServer:(id)arg0 ;
-(id)primaryAccessory;
-(id)productData;
-(id)reachabilityChangedReason;
-(id)setupHash;
-(id)version;
-(void)_continuePairingAfterAuthPromptWithError:(id)arg0 ;
// -(void)_enableEvents:(BOOL)arg0 forCharacteristics:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)_firedConnectionIdleTimer:(id)arg0 ;
-(void)_handleConnectionIdleTimeout;
-(void)_handleIncorrectStartPairingCall;
-(void)_informDelegateOfUpdatedAccessories:(id)arg0 error:(id)arg1 ;
-(void)_kickConnectionIdleTimer;
-(void)_notifyDelegatePairingStoppedWithError:(id)arg0 ;
-(void)_printMissingValues:(id)arg0 ;
-(void)_readCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_resetPairingState;
-(void)_startConnectionIdleTimer;
-(void)_suspendConnectionIdleTimer;
-(void)_writeCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)accessory:(id)arg0 didNotifyForUpdatedValuesOnCharacteristic:(id)arg1 ;
-(void)accessoryServer:(id)arg0 authenticateSoftwareAuthUUID:(id)arg1 token:(id)arg2 completion:(id)arg3 ;
-(void)accessoryServer:(id)arg0 confirmSoftwareAuthUUID:(id)arg1 token:(id)arg2 completion:(id)arg3 ;
-(void)accessoryServer:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)accessoryServer:(id)arg0 didFailToUpdateAccessoriesWithError:(id)arg1 ;
-(void)accessoryServer:(id)arg0 didFinishAuthWithError:(id)arg1 ;
-(void)accessoryServer:(id)arg0 didRejectSetupCodeWithBackoffInterval:(CGFloat)arg1 completion:(id)arg2 ;
-(void)accessoryServer:(id)arg0 doesRequirePermission:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)accessoryServer:(id)arg0 doesRequireSetupCodeWithCompletion:(id)arg1 ;
-(void)accessoryServer:(id)arg0 validatePairingCert:(id)arg1 model:(id)arg2 completion:(id)arg3 ;
-(void)accessoryServer:(id)arg0 validateSoftwareAuthUUID:(id)arg1 token:(id)arg2 model:(id)arg3 completion:(id)arg4 ;
-(void)accessoryServerDidBecomeUnpaired:(id)arg0 ;
-(void)accessoryServerDidUpdateAccessories:(id)arg0 ;
-(void)accessoryServerDidUpdateCategory:(id)arg0 ;
-(void)accessoryServerDidUpdateConnectionState:(id)arg0 ;
-(void)accessoryServerDidUpdateHasPairings:(id)arg0 ;
-(void)accessoryServerDidUpdateName:(id)arg0 ;
-(void)addPairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)authenticateAccessory;
-(void)closeSessions;
-(void)continueAuthAfterValidation:(BOOL)arg0 ;
-(void)continuePairingAfterAuthPrompt;
-(void)continuePairingUsingWAC;
-(void)disconnect;
-(void)disconnectOnIdleUpdated;
-(void)discoverAccessories;
// -(void)enableEvents:(BOOL)arg0 forCharacteristics:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)handleUpdatesForCharacteristics:(id)arg0 stateNumber:(id)arg1 ;
-(void)identifyWithCompletion:(id)arg0 ;
-(void)listPairingsWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)provisionToken:(id)arg0 ;
-(void)readCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)removePairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)setAccessories:(id)arg0 ;
-(void)setPrimaryAccessory:(id)arg0 ;
-(void)setSecuritySessionOpen:(BOOL)arg0 ;
-(void)setShouldBePaired:(BOOL)arg0 ;
-(void)startPairingWithRequest:(id)arg0 ;
-(void)startPing;
-(void)stopPing;
-(void)tearDownSessionOnAuthCompletion;
-(void)timerDidFire:(id)arg0 ;
-(void)updateActiveDisconnectOnIdleTimeout:(CGFloat)arg0 ;
-(void)validatePairingAuthMethod:(id)arg0 ;
-(void)writeCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif