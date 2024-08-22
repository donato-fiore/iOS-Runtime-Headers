// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPACCESSORYSERVER_H
#define CHIPACCESSORYSERVER_H

@class HAPAccessoryServer, CHIPAttributeCacheContainer, NSOperationQueue, CHIPDeviceController, NSString, NSNumber, HMFTimer, HAPAccessory;
@protocol CHIPDevicePairingDelegate, HMFLogging, HMFTimerDelegate, CHIPAccessoryServerDelegate;


#import "CHIPAccessoryServerBrowser.h"
#import "CHIPPluginPairing.h"
#import "CHIPPluginAccessoryReachabilityManager.h"
#import "CHIPPluginStorage.h"

@interface CHIPAccessoryServer : HAPAccessoryServer <CHIPDevicePairingDelegate, HMFLogging, HMFTimerDelegate>



@property (retain, nonatomic) CHIPAttributeCacheContainer *attributeCacheContainer; // ivar: _attributeCacheContainer
@property (weak, nonatomic) CHIPAccessoryServerBrowser *browser; // ivar: _browser
@property (readonly) NSOperationQueue *characteristicsOperationQueue; // ivar: _characteristicsOperationQueue
@property (weak, nonatomic) NSObject<CHIPAccessoryServerDelegate> *chipDelegate; // ivar: _chipDelegate
@property (retain, nonatomic) CHIPDeviceController *chipDeviceController; // ivar: _chipDeviceController
@property (copy) id *chipReportHandler; // ivar: _chipReportHandler
@property (readonly, nonatomic) CHIPPluginPairing *currentPairing;
@property (retain, nonatomic) CHIPPluginPairing *currentPairingInfo; // ivar: _currentPairingInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *discriminator; // ivar: _discriminator
@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isReenumeratingHAPServices; // ivar: _isReenumeratingHAPServices
@property unsigned int networkProvisioningFailures; // ivar: _networkProvisioningFailures
@property (retain, nonatomic) NSNumber *nodeID; // ivar: _nodeID
@property (nonatomic) NSInteger pairedState; // ivar: _pairedState
@property (nonatomic) NSUInteger pairingProgress; // ivar: _pairingProgress
@property (retain, nonatomic) HMFTimer *pairingTimer; // ivar: _pairingTimer
@property (retain, nonatomic) HAPAccessory *primaryAccessory; // ivar: _primaryAccessory
@property (readonly, nonatomic) HAPAccessory *primaryAccessoryForServer;
@property (retain, nonatomic) NSNumber *productID; // ivar: _productID
@property (retain, nonatomic) CHIPPluginAccessoryReachabilityManager *reachabilityManager; // ivar: _reachabilityManager
@property (retain, nonatomic) NSNumber *setUpPINCode; // ivar: _setUpPINCode
@property (copy, nonatomic) id *stageCompletion; // ivar: _stageCompletion
@property (weak, nonatomic) CHIPPluginStorage *storage; // ivar: _storage
@property NSUInteger subscriptionAttemptCount; // ivar: _subscriptionAttemptCount
@property (retain, nonatomic) HMFTimer *subscriptionRetryTimer; // ivar: _subscriptionRetryTimer
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *vendorID; // ivar: _vendorID


+(id)logCategory;
+(id)shortDescription;
-(BOOL)_delegateRespondsToSelector:(SEL)arg0 ;
-(BOOL)_handleUnmappedAttributeReport:(id)arg0 ;
-(BOOL)hasNetworkProvisioningFailed:(unsigned int)arg0 ;
-(BOOL)isDisabled;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPaired;
-(BOOL)isStaged;
-(BOOL)matchesSetupID:(id)arg0 ;
-(BOOL)matchesSetupID:(id)arg0 serverIdentifier:(id)arg1 ;
-(BOOL)pingSupported;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg0 completion:(id)arg1 ;
-(BOOL)stopPairingWithError:(*id)arg0 ;
-(BOOL)tryPairingPassword:(id)arg0 error:(*id)arg1 ;
-(NSInteger)communicationProtocol;
-(NSInteger)linkType;
-(id)_categoryFromAccessoryInfo:(id)arg0 endpoint:(id)arg1 ;
-(id)_categoryFromTopology:(id)arg0 endpoint:(id)arg1 ;
-(id)_createBridgedHAPAccessory:(id)arg0 instanceId:(id)arg1 endpointID:(id)arg2 ;
-(id)_endPointFromServiceDescriptions:(id)arg0 ;
-(id)_matterCredentialsFromTHCredentials:(id)arg0 ;
-(id)attributeDescriptions;
-(id)chipNodeId;
-(id)deviceID;
-(id)initWithKeystore:(id)arg0 ;
-(id)initWithKeystore:(id)arg0 browser:(id)arg1 ;
-(id)logIdentifier;
-(id)privateDescription;
-(id)reachabilityChangedReason;
-(void)_buildBridgedAccesoriesForServiceDescriptions:(id)arg0 ;
-(void)_buildServicesForServiceDescriptions:(id)arg0 ;
-(void)_collectNetworkCredentials;
-(void)_createHAPServicesFromServiceDescriptions:(id)arg0 services:(id)arg1 startingServiceInstanceID:(*NSInteger)arg2 setAccessory:(BOOL)arg3 ;
-(void)_deleteAccessoryServerData;
-(void)_fetchCurrentPairingWithCompletionHandler:(id)arg0 ;
-(void)_finalizePairing;
-(void)_handleCHIPRemoteRequest:(id)arg0 device:(id)arg1 ;
-(void)_handlePairingFailureWithError:(id)arg0 ;
-(void)_handlePartsListChanged:(id)arg0 storage:(id)arg1 endpoints:(id)arg2 ;
-(void)_initAccessoriesForServer;
-(void)_onUnpairFinishedWithError:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_pairingComplete:(id)arg0 ;
-(void)_persistAccessoryServerData;
-(void)_populateServiceForCharacteristic:(id)arg0 ;
-(void)_populateThreadCredentials:(id)arg0 completion:(id)arg1 ;
-(void)_populateWifiCredentials:(id)arg0 completion:(id)arg1 ;
-(void)_readCharacteristicValueFromCacheWithCharacteristic:(id)arg0 responseHandler:(id)arg1 ;
-(void)_readCharacteristicValues:(id)arg0 forFailedResponses:(id)arg1 atIndexes:(id)arg2 device:(id)arg3 completionHandler:(id)arg4 ;
-(void)_readCharacteristicValues:(id)arg0 forFailedResponses:(id)arg1 dispatchGroup:(id)arg2 errorHandler:(id)arg3 ;
-(void)_rebuildHAPServicesFromCHIPWithCompletionHandler:(id)arg0 ;
-(void)_receiveReport:(id)arg0 ;
-(void)_setCategoryForPrimaryAccessory:(id)arg0 ;
-(void)_startPairingWithError:(*id)arg0 ;
-(void)_startSubscriptionWithDevice:(id)arg0 endpointId:(NSUInteger)arg1 clusterId:(NSUInteger)arg2 attributeId:(NSUInteger)arg3 minInterval:(NSUInteger)arg4 maxInterval:(NSUInteger)arg5 establishedHandler:(id)arg6 ;
-(void)_unpair:(id)arg0 completion:(id)arg1 ;
-(void)_updatedCharacteristicsForAttributeReport:(id)arg0 completionHandler:(id)arg1 ;
-(void)_writeCharacteristicValues:(id)arg0 device:(id)arg1 responseTuples:(id)arg2 completionQueue:(id)arg3 complethionHandler:(id)arg4 ;
-(void)addPairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)commitStagedPairing;
-(void)didUpdateReachability:(BOOL)arg0 ;
-(void)disable;
-(void)discoverAccessories;
// -(void)enableEvents:(BOOL)arg0 forCharacteristics:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)enumerateHAPServices:(id)arg0 ;
-(void)fetchPairingsWithCompletionHandler:(id)arg0 ;
-(void)handleCHIPRemoteRequest:(id)arg0 ;
-(void)handleUpdatesForCharacteristics:(id)arg0 stateNumber:(id)arg1 ;
-(void)identifyWithCompletion:(id)arg0 ;
-(void)listPairingsWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)onCommissioningComplete:(id)arg0 ;
-(void)onPairingComplete:(id)arg0 ;
-(void)onPairingDeleted:(id)arg0 ;
-(void)onStatusUpdate:(NSUInteger)arg0 ;
-(void)openPairingWindowForDuration:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)openPairingWindowWithPINForDuration:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)readCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)removeAllPairingsWithCompletionHandler:(id)arg0 ;
-(void)removePairing:(id)arg0 completionHandler:(id)arg1 ;
-(void)removePairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)setCHIPReportHandler:(id)arg0 ;
-(void)setupReporting;
-(void)startPairingWithConsentRequired:(BOOL)arg0 config:(id)arg1 ownershipToken:(id)arg2 ;
-(void)startStagedPairingWithCompletion:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)updateFabricLabel:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif