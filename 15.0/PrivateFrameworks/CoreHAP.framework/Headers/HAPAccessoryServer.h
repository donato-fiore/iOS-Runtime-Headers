// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPACCESSORYSERVER_H
#define HAPACCESSORYSERVER_H

@class HMFObject, NSArray, NSNumber, NSDate, NSString, NSHashTable, HMFActivity, NSData, HMFVersion;
@protocol HMFLocking, OS_dispatch_queue, HAPAccessoryServerDelegate, HAPKeyStore;


#import "HAPDeviceID.h"
#import "HAPAccessory.h"
#import "HAPSuspendedAccessory.h"

@interface HAPAccessoryServer : HMFObject {
    id<HMFLocking> *_lock;
}


@property (copy, nonatomic) NSArray *accessories; // ivar: _accessories
@property (nonatomic) NSUInteger authMethod; // ivar: _authMethod
@property (readonly, nonatomic, getter=isBLELinkConnected) BOOL bleLinkConnected; // ivar: _bleLinkConnected
@property (copy, nonatomic) NSNumber *category; // ivar: _category
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
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
@property (readonly, weak, nonatomic) NSObject<HAPKeyStore> *keyStore; // ivar: _keyStore
@property (readonly, nonatomic) NSInteger linkType; // ivar: _linkType
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSHashTable *notificationClients; // ivar: _notificationClients
@property (nonatomic) NSUInteger pairSetupType; // ivar: _pairSetupType
@property (copy, nonatomic) NSString *pairVerifyReason; // ivar: _pairVerifyReason
@property (weak, nonatomic) HMFActivity *pairingActivity; // ivar: _pairingActivity
@property (nonatomic) NSUInteger pendingRemovePairing; // ivar: _pendingRemovePairing
@property (retain, nonatomic) HAPAccessory *primaryAccessory; // ivar: _primaryAccessory
@property (retain, nonatomic) NSString *productData; // ivar: _productData
@property (copy, nonatomic) NSString *reachabilityChangedReason; // ivar: _reachabilityChangedReason
@property (nonatomic) BOOL reachabilityPingEnabled; // ivar: _reachabilityPingEnabled
@property (nonatomic, getter=isReachable) BOOL reachable; // ivar: _reachable
@property (getter=isSecuritySessionOpen) BOOL securitySessionOpen; // ivar: _securitySessionOpen
@property (nonatomic, getter=isSessionRestoreActive, setter=setSessionRestoreActive:) BOOL sessionRestoreActive; // ivar: _sessionRestoreActive
@property (copy, nonatomic) NSData *setupHash; // ivar: _setupHash
@property BOOL shouldDisconnectOnIdle; // ivar: _shouldDisconnectOnIdle
@property (nonatomic) NSUInteger stateNumber; // ivar: _stateNumber
@property (nonatomic) int successfulPingCount; // ivar: _successfulPingCount
@property (nonatomic) BOOL supportsTimedWrite; // ivar: _supportsTimedWrite
@property (retain, nonatomic) HAPSuspendedAccessory *suspendedAccessory; // ivar: _suspendedAccessory
@property (copy, nonatomic) NSDate *timePairVerifyStart; // ivar: _timePairVerifyStart
@property (copy) HMFVersion *version; // ivar: _version
@property (nonatomic) NSUInteger wakeNumber; // ivar: _wakeNumber


-(BOOL)isPaired;
-(BOOL)isPinging;
-(BOOL)matchesSetupID:(id)arg0 ;
-(BOOL)matchesSetupID:(id)arg0 serverIdentifier:(id)arg1 ;
-(BOOL)notifyClients:(NSUInteger)arg0 withDictionary:(id)arg1 ;
-(BOOL)pingSupported;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg0 completion:(id)arg1 ;
-(BOOL)requiresTimedWrite:(id)arg0 ;
-(BOOL)stopPairingWithError:(*id)arg0 ;
-(BOOL)tryPairingPassword:(id)arg0 error:(*id)arg1 ;
-(id)buildReachabilityNotificationDictionary:(id)arg0 reachable:(BOOL)arg1 linkType:(NSInteger)arg2 withError:(NSInteger)arg3 ;
-(id)getControllerUserName;
-(id)init;
-(id)initWithKeystore:(id)arg0 ;
-(id)shortDescription;
-(void)addInternalDelegate:(id)arg0 ;
-(void)addPairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)authenticateAccessory;
-(void)completePairVerifyActivityWithBrowser:(id)arg0 error:(id)arg1 ;
-(void)continueAuthAfterValidation:(BOOL)arg0 ;
-(void)continuePairingAfterAuthPrompt;
-(void)continuePairingUsingWAC;
-(void)disconnect;
-(void)discoverAccessories;
// -(void)enableEvents:(BOOL)arg0 forCharacteristics:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)enumerateInternalDelegatesUsingBlock:(id)arg0 ;
-(void)handleUpdatesForCharacteristics:(id)arg0 stateNumber:(id)arg1 ;
-(void)identifyWithCompletion:(id)arg0 ;
-(void)incrementFailedPing;
-(void)incrementSuccessfulPing;
-(void)listPairingsWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)provisionToken:(id)arg0 ;
-(void)readCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)reconfirm;
-(void)registerForNotifications:(id)arg0 ;
-(void)removeInternalDelegate:(id)arg0 ;
-(void)removePairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)startPairVerifyMetricActivity;
-(void)startPairingWithConsentRequired:(BOOL)arg0 config:(id)arg1 ownershipToken:(id)arg2 ;
-(void)startPing;
-(void)stopPing;
-(void)tearDownSessionOnAuthCompletion;
-(void)unregisterForNotifications:(id)arg0 ;
-(void)updateAccessoryInfoDictionary:(id)arg0 ;
-(void)validatePairingAuthMethod:(id)arg0 ;
-(void)writeCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif