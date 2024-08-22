// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPACCESSORYSERVER_H
#define HAPACCESSORYSERVER_H

@class HMFObject, NSArray, NSNumber, NSUUID, NSDate, NSString, NSHashTable, NSMutableDictionary, HMFActivity, NSData, HMFVersion;
@protocol OS_dispatch_queue, HAPAccessoryServerDelegate, HAPKeyStore;


#import "HAPDeviceID.h"
#import "HAPKeyBag.h"
#import "HAPAccessoryPairingRequest.h"
#import "HAPAccessory.h"
#import "HAPSuspendedAccessory.h"

@interface HAPAccessoryServer : HMFObject {
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) NSArray *accessories; // ivar: _accessories
@property (nonatomic) NSUInteger authMethod; // ivar: _authMethod
@property (readonly, nonatomic, getter=isBLELinkConnected) BOOL bleLinkConnected; // ivar: _bleLinkConnected
@property (copy, nonatomic) NSNumber *category; // ivar: _category
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSUUID *commissioningID;
@property (readonly) NSInteger communicationProtocol;
@property (nonatomic) NSUInteger compatibilityFeatures; // ivar: _compatibilityFeatures
@property (nonatomic) NSUInteger configNumber; // ivar: _configNumber
@property (copy, nonatomic) NSDate *connectionStartTime; // ivar: _connectionStartTime
@property (readonly, weak) NSObject<HAPAccessoryServerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) HAPDeviceID *deviceID;
@property (nonatomic) int failedPingCount; // ivar: _failedPingCount
@property BOOL hasAdvertisement; // ivar: _hasAdvertisement
@property (nonatomic) BOOL hasPairings; // ivar: _hasPairings
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic, getter=isIncompatibleUpdate) BOOL incompatibleUpdate; // ivar: _incompatibleUpdate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalDelegateQueue; // ivar: _internalDelegateQueue
@property (readonly, nonatomic) NSHashTable *internalDelegates; // ivar: _internalDelegates
@property (retain, nonatomic) HAPKeyBag *keyBag; // ivar: _keyBag
@property (readonly, weak, nonatomic) NSObject<HAPKeyStore> *keyStore; // ivar: _keyStore
@property (readonly, getter=isKnownToSystemCommissioner) BOOL knownToSystemCommissioner;
@property (readonly, nonatomic) NSInteger linkType; // ivar: _linkType
@property (retain, nonatomic) NSMutableDictionary *metricPairingDictionary; // ivar: _metricPairingDictionary
@property NSUInteger metric_pairVerifyDurationInMS; // ivar: _metric_pairVerifyDurationInMS
@property (copy, nonatomic) NSString *metric_pairVerifyReason; // ivar: _metric_pairVerifyReason
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy) NSNumber *nodeID; // ivar: _nodeID
@property (retain, nonatomic) NSHashTable *notificationClients; // ivar: _notificationClients
@property (nonatomic) NSUInteger pairSetupType; // ivar: _pairSetupType
@property (weak, nonatomic) HMFActivity *pairingActivity; // ivar: _pairingActivity
@property (retain, nonatomic) HAPAccessoryPairingRequest *pairingRequest; // ivar: _pairingRequest
@property (nonatomic) NSUInteger pendingRemovePairing; // ivar: _pendingRemovePairing
@property (retain, nonatomic) HAPAccessory *primaryAccessory; // ivar: _primaryAccessory
@property (retain, nonatomic) NSString *productData; // ivar: _productData
@property (readonly, copy) NSNumber *productID; // ivar: _productID
@property (copy, nonatomic) NSString *reachabilityChangedReason; // ivar: _reachabilityChangedReason
@property (nonatomic) BOOL reachabilityPingEnabled; // ivar: _reachabilityPingEnabled
@property (nonatomic, getter=isReachable) BOOL reachable; // ivar: _reachable
@property (readonly, copy) NSData *rootPublicKey; // ivar: _rootPublicKey
@property (getter=isSecuritySessionOpen) BOOL securitySessionOpen; // ivar: _securitySessionOpen
@property (nonatomic, getter=isSessionRestoreActive, setter=setSessionRestoreActive:) BOOL sessionRestoreActive; // ivar: _sessionRestoreActive
@property (copy, nonatomic) NSData *setupHash; // ivar: _setupHash
@property BOOL shouldDisconnectOnIdle; // ivar: _shouldDisconnectOnIdle
@property (nonatomic) NSUInteger stateNumber; // ivar: _stateNumber
@property (nonatomic) int successfulPingCount; // ivar: _successfulPingCount
@property (nonatomic) BOOL supportsTimedWrite; // ivar: _supportsTimedWrite
@property BOOL supportsUnreachablePing; // ivar: _supportsUnreachablePing
@property (retain, nonatomic) HAPSuspendedAccessory *suspendedAccessory; // ivar: _suspendedAccessory
@property BOOL unitTest_useHH2; // ivar: _unitTest_useHH2
@property (readonly, copy) NSNumber *vendorID; // ivar: _vendorID
@property (copy) HMFVersion *version; // ivar: _version
@property (nonatomic) NSUInteger wakeNumber; // ivar: _wakeNumber


-(BOOL)doesPeriodicSessionChecks;
-(BOOL)isAccessoryAssociatedWithControllerKey:(id)arg0 ;
-(BOOL)isPaired;
-(BOOL)isPinging;
-(BOOL)matchesSetupID:(id)arg0 ;
-(BOOL)matchesSetupID:(id)arg0 serverIdentifier:(id)arg1 ;
-(BOOL)notifyClients:(NSUInteger)arg0 withDictionary:(id)arg1 ;
-(BOOL)pingSupported;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg0 completion:(id)arg1 ;
-(BOOL)requiresTimedWrite:(id)arg0 ;
-(BOOL)shouldRetryPVDueToAuthenticationError:(id)arg0 ;
-(BOOL)stopPairingWithError:(*id)arg0 ;
-(BOOL)tryPairingPassword:(id)arg0 error:(*id)arg1 ;
-(BOOL)useHH2;
-(NSUInteger)numActiveSessionClients;
-(NSUInteger)sessionCheckInterval;
-(id)buildReachabilityNotificationDictionary:(id)arg0 reachable:(BOOL)arg1 linkType:(NSInteger)arg2 withError:(NSInteger)arg3 ;
-(id)getControllerPairingIdentityWithError:(*id)arg0 ;
-(id)getControllerUserName;
-(id)init;
-(id)initWithKeystore:(id)arg0 ;
-(id)logIdentifier;
-(id)shortDescription;
-(void)addInternalDelegate:(id)arg0 ;
-(void)addPairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)associateAccessoryWithControllerKey:(id)arg0 usingAccessoryPublicKey:(id)arg1 ;
-(void)associateAccessoryWithControllerKeyUsingAccessoryIdentifier:(id)arg0 ;
-(void)associateAccessoryWithControllerKeyUsingAccessoryPublicKey:(id)arg0 ;
-(void)authenticateAccessory;
-(void)continueAuthAfterValidation:(BOOL)arg0 ;
-(void)continuePairingAfterAuthPrompt;
-(void)continuePairingUsingWAC;
-(void)disassociateAccessoryWithControllerKeyUsingAccessoryIdentifier:(id)arg0 ;
-(void)disconnect;
-(void)disconnectOnIdleUpdated;
-(void)disconnectWithError:(id)arg0 ;
-(void)discoverAccessories;
// -(void)enableEvents:(BOOL)arg0 forCharacteristics:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)enumerateInternalDelegatesUsingBlock:(id)arg0 ;
-(void)handleUpdatesForCharacteristics:(id)arg0 stateNumber:(id)arg1 ;
-(void)identifyWithCompletion:(id)arg0 ;
-(void)incrementFailedPing;
-(void)incrementSuccessfulPing;
-(void)initializeKeyBagIfNecessary;
-(void)listPairingsWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)provisionToken:(id)arg0 ;
-(void)readCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)reconfirm;
-(void)refreshKeyBag;
-(void)registerForNotifications:(id)arg0 ;
-(void)removeInternalDelegate:(id)arg0 ;
-(void)removePairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)removePairingIdentifier:(id)arg0 pairingPublicKey:(id)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)securitySessionWillCloseWithResponseData:(id)arg0 error:(*id)arg1 ;
-(void)startPairingWithConsentRequired:(BOOL)arg0 config:(id)arg1 ownershipToken:(id)arg2 ;
-(void)startPairingWithRequest:(id)arg0 ;
-(void)startPing;
-(void)stopPing;
-(void)submitPairVerifyMetricWithError:(id)arg0 ;
-(void)tearDownSessionOnAuthCompletion;
-(void)unregisterForNotifications:(id)arg0 ;
-(void)updateAccessoryInfoDictionary:(id)arg0 ;
-(void)updateActiveDisconnectOnIdleTimeout:(CGFloat)arg0 ;
-(void)validatePairingAuthMethod:(id)arg0 ;
-(void)writeCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif