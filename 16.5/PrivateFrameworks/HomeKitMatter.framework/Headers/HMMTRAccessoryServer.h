// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRACCESSORYSERVER_H
#define HMMTRACCESSORYSERVER_H

@class HAPAccessoryServer, HMFActivity, NSOperationQueue, NSMutableDictionary, NSUUID, NSString, NSData, MTRDeviceController, NSNumber, NSError, NSArray, MTRDevice, NSFileHandle, HMFTimer, HAPAccessory;
@protocol MTRDevicePairingDelegate, HMFLogging, HMFTimerDelegate, MTRDeviceDelegate, HMMTRAccessoryServerDelegate, HMMTRHMDHAPAccessoryDelegate;


#import "HMMTRAccessoryServerBrowser.h"
#import "HMMTRMetricBundle.h"
#import "HMMTRPairing.h"
#import "HMMTRSyncClusterDoorLock.h"
#import "HMMTRHAPEnumerator.h"
#import "HMMTRFirmwareUpdateStatus.h"
#import "HMMTRDuration.h"
#import "HMMTROTAAnnounceTimer.h"
#import "HMMTROTAApplyUpdateRequestTimer.h"
#import "HMMTROTAApplyUpdateTimer.h"
#import "HMMTRAccessoryReachabilityManager.h"
#import "HMMTRStorage.h"

@interface HMMTRAccessoryServer : HAPAccessoryServer <MTRDevicePairingDelegate, HMFLogging, HMFTimerDelegate, MTRDeviceDelegate>



@property (readonly, nonatomic) HMFActivity *activity; // ivar: _activity
@property (nonatomic) BOOL bleScanPending; // ivar: _bleScanPending
@property (nonatomic) BOOL blockInvalidation; // ivar: _blockInvalidation
@property (weak, nonatomic) HMMTRAccessoryServerBrowser *browser; // ivar: _browser
@property (readonly) NSOperationQueue *characteristicsOperationQueue; // ivar: _characteristicsOperationQueue
@property (weak, nonatomic) NSObject<HMMTRAccessoryServerDelegate> *chipDelegate; // ivar: _chipDelegate
@property (copy) id *chipReportHandler; // ivar: _chipReportHandler
@property (retain, nonatomic) NSMutableDictionary *clusterIDCharacteristicMap; // ivar: _clusterIDCharacteristicMap
@property (retain, nonatomic) NSUUID *commissioningID; // ivar: _commissioningID
@property (retain, nonatomic) HMMTRMetricBundle *currentMetricBundle; // ivar: _currentMetricBundle
@property (readonly, nonatomic) HMMTRPairing *currentPairing;
@property (retain, nonatomic) HMMTRPairing *currentPairingInfo; // ivar: _currentPairingInfo
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *defaultThreadOperationalDataset; // ivar: _defaultThreadOperationalDataset
@property (copy, nonatomic) id *defaultThreadOperationalDatasetReceiveBlock; // ivar: _defaultThreadOperationalDatasetReceiveBlock
@property (nonatomic) BOOL defaultThreadOperationalDatasetRetrieved; // ivar: _defaultThreadOperationalDatasetRetrieved
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MTRDeviceController *deviceController; // ivar: _deviceController
@property (nonatomic) BOOL discoveredOverBLE; // ivar: _discoveredOverBLE
@property (retain, nonatomic) NSNumber *discriminator; // ivar: _discriminator
@property (nonatomic) BOOL discriminatorIsOriginatedFromShort; // ivar: _discriminatorIsOriginatedFromShort
@property (retain) HMMTRSyncClusterDoorLock *doorLockCluster; // ivar: _doorLockCluster
@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (readonly, nonatomic) HMMTRHAPEnumerator *hapEnumerator; // ivar: _hapEnumerator
@property (nonatomic) BOOL hasPriorSuccessfulPairing; // ivar: _hasPriorSuccessfulPairing
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HMMTRHMDHAPAccessoryDelegate> *hmdHAPAccessoryDelegate; // ivar: _hmdHAPAccessoryDelegate
@property (nonatomic) BOOL isReenumeratingHAPServices; // ivar: _isReenumeratingHAPServices
@property (nonatomic) BOOL knownToSystemCommissioner; // ivar: _knownToSystemCommissioner
@property (retain, nonatomic) NSError *lastFabricLabelUpdateError; // ivar: _lastFabricLabelUpdateError
@property (retain, nonatomic) NSArray *lastPendingFabricLabel; // ivar: _lastPendingFabricLabel
@property (nonatomic) BOOL locallyDiscovered; // ivar: _locallyDiscovered
@property (retain, nonatomic) MTRDevice *matterDevice; // ivar: _matterDevice
@property (retain, nonatomic) HMMTRFirmwareUpdateStatus *matterFirmwareUpdateStatus; // ivar: _matterFirmwareUpdateStatus
@property (retain, nonatomic) HMMTRDuration *maxMetricDuration; // ivar: _maxMetricDuration
@property unsigned int networkProvisioningFailures; // ivar: _networkProvisioningFailures
@property (retain, nonatomic) NSNumber *nodeID; // ivar: _nodeID
@property (nonatomic) BOOL operationDisabled; // ivar: _operationDisabled
@property (nonatomic) NSUInteger operationDisabledReason; // ivar: _operationDisabledReason
@property (retain, nonatomic) HMMTROTAAnnounceTimer *otaAnnounceTimer; // ivar: _otaAnnounceTimer
@property (retain, nonatomic) HMMTROTAApplyUpdateRequestTimer *otaApplyUpdateRequestTimer; // ivar: _otaApplyUpdateRequestTimer
@property (retain) NSFileHandle *otaFileHandle; // ivar: _otaFileHandle
@property (retain) NSNumber *otaFileOffset; // ivar: _otaFileOffset
@property (retain, nonatomic) HMMTROTAApplyUpdateTimer *otaUpdateTimer; // ivar: _otaUpdateTimer
@property (retain) NSData *otaUpdateToken; // ivar: _otaUpdateToken
@property (nonatomic) NSInteger pairedState; // ivar: _pairedState
@property (retain, nonatomic) NSMutableDictionary *pairingDurationDictionary; // ivar: _pairingDurationDictionary
@property (nonatomic) NSUInteger pairingProgress; // ivar: _pairingProgress
@property (retain, nonatomic) HMFTimer *pairingTimer; // ivar: _pairingTimer
@property (retain, nonatomic) HAPAccessory *primaryAccessory; // ivar: _primaryAccessory
@property (readonly, nonatomic) HAPAccessory *primaryAccessoryForServer;
@property (retain, nonatomic) NSNumber *productID; // ivar: _productID
@property (retain, nonatomic) HMMTRAccessoryReachabilityManager *reachabilityManager; // ivar: _reachabilityManager
@property (nonatomic) BOOL removalInProgress; // ivar: _removalInProgress
@property (retain) NSError *removeReason; // ivar: _removeReason
@property (readonly) NSData *rootPublicKey;
@property (retain, nonatomic) NSNumber *setUpPINCode; // ivar: _setUpPINCode
@property (retain, nonatomic) NSString *setupPayloadString; // ivar: _setupPayloadString
@property (retain, nonatomic) NSNumber *softwareVersionNumber; // ivar: _softwareVersionNumber
@property (retain, nonatomic) NSString *softwareVersionString; // ivar: _softwareVersionString
@property (copy, nonatomic) id *stageCompletion; // ivar: _stageCompletion
@property (copy, nonatomic) id *stageDeviceCredentialHandler; // ivar: _stageDeviceCredentialHandler
@property (nonatomic) BOOL stageNetworkScanRequested; // ivar: _stageNetworkScanRequested
@property (copy, nonatomic) id *stageThreadScanResultsHandler; // ivar: _stageThreadScanResultsHandler
@property (copy, nonatomic) id *stageWiFiScanResultsHandler; // ivar: _stageWiFiScanResultsHandler
@property (weak, nonatomic) HMMTRStorage *storage; // ivar: _storage
@property (nonatomic) BOOL storageUpdatePending; // ivar: _storageUpdatePending
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *topology; // ivar: _topology
@property (retain, nonatomic) NSNumber *vendorID; // ivar: _vendorID


+(id)logCategory;
+(id)shortDescription;
-(BOOL)_controllerIsOnWiFiNetworkWhichSupportsBothBands;
-(BOOL)_delegateRespondsToSelector:(SEL)arg0 ;
-(BOOL)_handleUnmappedAttributeReport:(id)arg0 ;
-(BOOL)_isBridgedAccessoryAndUnreachablePerCacheForCharacteristic:(id)arg0 ;
-(BOOL)_isBridgedBasicInformation:(id)arg0 reportClusterID:(id)arg1 ;
-(BOOL)doesMatchDiscriminator:(id)arg0 ;
-(BOOL)doesPeriodicSessionChecks;
-(BOOL)hasNetworkProvisioningFailed:(unsigned int)arg0 ;
-(BOOL)isDisabled;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isKnownToSystemCommissioner;
-(BOOL)isPaired;
-(BOOL)isPairingInProgress;
-(BOOL)isStaged;
-(BOOL)matchesSetupID:(id)arg0 ;
-(BOOL)matchesSetupID:(id)arg0 serverIdentifier:(id)arg1 ;
-(BOOL)pingSupported;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg0 completion:(id)arg1 ;
-(BOOL)requestWaitForResidentToSignalAccessorySetup;
-(BOOL)stopPairingWithError:(*id)arg0 ;
-(BOOL)tryPairingPassword:(id)arg0 error:(*id)arg1 ;
-(NSInteger)communicationProtocol;
-(NSInteger)linkType;
-(NSUInteger)numActiveSessionClients;
-(NSUInteger)sessionCheckInterval;
-(id)_categoryFromAccessoryInfo:(id)arg0 endpoint:(id)arg1 ;
-(id)_categoryFromTopology:(id)arg0 endpoint:(id)arg1 ;
-(id)_convertFetchedCredentials:(id)arg0 ;
-(id)_endCurrentMetricTimeWithName:(id)arg0 ;
-(id)_matterCredentialsFromTHCredentials:(id)arg0 ;
-(id)_progressStateToString:(NSInteger)arg0 ;
-(id)_readFixedCharacteristicValue:(id)arg0 ;
-(id)_readLocallyMaintainedCharacteristicValue:(id)arg0 ;
-(id)accessoryProductID;
-(id)accessoryVendorID;
-(id)attributeDescriptions;
-(id)chipNodeId;
-(id)createDoorLockClusterObject;
-(id)deviceID;
-(id)getTransportTypeStringWithNodeID:(id)arg0 ;
-(id)initWithKeystore:(id)arg0 ;
-(id)initWithKeystore:(id)arg0 browser:(id)arg1 ;
-(id)logIdentifier;
-(id)privateDescription;
-(id)reachabilityChangedReason;
-(unsigned char)getTransportTypeWithNodeID:(id)arg0 ;
-(void)_buildHAPCategoriesFromCHIPWithCompletionHandler:(id)arg0 ;
-(void)_captureTransportInfo;
-(void)_checkDeviceIfAccessoryIsBridgedAndUnreachableForCharacteristic:(id)arg0 device:(id)arg1 completion:(id)arg2 ;
-(void)_collectNetworkCredentials:(id)arg0 ;
-(void)_commissionWithParams:(id)arg0 ;
-(void)_createFirmwareUpdateServiceWithInstanceID:(NSInteger)arg0 device:(id)arg1 completionHandler:(id)arg2 ;
-(void)_deleteAccessoryServerData;
-(void)_disconnectWithError:(id)arg0 ;
-(void)_endpointForOTARequestorWithTopology:(id)arg0 device:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_ensureMetricDictionaryExists;
-(void)_fetchCurrentPairingWithCompletionHandler:(id)arg0 ;
-(void)_fetchSerialNumberWithCompletionHandler:(id)arg0 ;
-(void)_finalizePairing;
-(void)_finishMaximumDurationCollection;
-(void)_handleAddNocCompletionDuringSystemCommissionerFabricCommissioningWithDispatchGroup:(id)arg0 fabricMappingIndex:(id)arg1 rootCACert:(id)arg2 ipk:(id)arg3 controllerNodeID:(id)arg4 commissioneeNodeID:(id)arg5 error:(id)arg6 ;
-(void)_handleAddTrustedRootCertificateCompletionDuringSystemCommissionerFabricCommissioningWithDispatchGroup:(id)arg0 fabricMappingIndex:(id)arg1 rootCACert:(id)arg2 operationalPublicKey:(struct __SecKey *)arg3 ipk:(id)arg4 controllerNodeID:(id)arg5 ;
-(void)_handleArmFailSafeResponseDuringSystemCommissionerFabricCommissioningWithDispatchGroup:(id)arg0 error:(id)arg1 ;
-(void)_handleCHIPRemoteRequest:(id)arg0 device:(id)arg1 completion:(id)arg2 ;
-(void)_handleCSRResponseDuringSystemCommissionerFabricCommissioningWithDispatchGroup:(id)arg0 responseParams:(id)arg1 error:(id)arg2 ;
-(void)_handlePairingFailureWithError:(id)arg0 ;
-(void)_handlePartsListChanged:(id)arg0 storage:(id)arg1 endpoints:(id)arg2 ;
-(void)_initAccessoriesForServer;
-(void)_metricCollectionWithError:(id)arg0 name:(id)arg1 description:(id)arg2 ;
-(void)_notifyDelegateOfPairingProgress:(NSInteger)arg0 ;
-(void)_notifyDelegateOfPairingProgress:(NSInteger)arg0 error:(id)arg1 ;
-(void)_onNetworkScanResults:(id)arg0 ;
-(void)_onThreadScanResults:(id)arg0 ;
-(void)_onUnpairFinishedWithError:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_onWiFiScanResults:(id)arg0 ;
-(void)_openPairingWindowForDuration:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)_openPairingWindowWithPINForDuration:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)_pairOnSystemCommissionerFabric;
-(void)_pairOnSystemCommissionerFabricUnlessAlreadyPairedWithRootPublicKey:(id)arg0 ;
-(void)_pairingComplete:(id)arg0 ;
-(void)_persistAccessoryServerData;
-(void)_populateServiceForCharacteristic:(id)arg0 ;
-(void)_populateThreadCredentials:(id)arg0 completion:(id)arg1 ;
-(void)_populateWifiCredentials:(id)arg0 scanResults:(id)arg1 completion:(id)arg2 ;
-(void)_prepareThreadCredentials;
-(void)_readCharacteristicValueFromCacheWithCharacteristic:(id)arg0 responseHandler:(id)arg1 ;
-(void)_readCharacteristicValues:(id)arg0 forFailedResponses:(id)arg1 atIndexes:(id)arg2 device:(id)arg3 completionHandler:(id)arg4 ;
-(void)_readCharacteristicValues:(id)arg0 forFailedResponses:(id)arg1 dispatchGroup:(id)arg2 errorHandler:(id)arg3 ;
-(void)_readCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 skipCache:(BOOL)arg2 sendNotification:(BOOL)arg3 completionQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)_rebuildHAPServicesFromCHIPWithCompletionHandler:(id)arg0 ;
-(void)_requestAccessoryNetworkScanWithCompletionHandler:(id)arg0 ;
-(void)_setCategoryForPrimaryAccessory:(id)arg0 ;
-(void)_startCurrentMetricTimeWithName:(id)arg0 ;
-(void)_startPairingWithError:(*id)arg0 ;
-(void)_unpair:(id)arg0 completion:(id)arg1 ;
-(void)_updateAdditionalCharacteristicsFromCharacteristicUpdate:(id)arg0 service:(id)arg1 path:(id)arg2 completionHandler:(id)arg3 ;
-(void)_updateDefaultEntriesForClusterIDCharacteristicMap:(id)arg0 ;
-(void)_updateDelegateOfConnectionStatus:(BOOL)arg0 withError:(id)arg1 ;
-(void)_updateMetricWithProgressState:(NSInteger)arg0 error:(id)arg1 ;
-(void)_updateMetrics;
-(void)_updatedCharacteristicsForAttributeReport:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updatedCharacteristicsForEventReport:(id)arg0 completionHandler:(id)arg1 ;
-(void)_writeCharacteristicValues:(id)arg0 device:(id)arg1 responseTuples:(id)arg2 completionQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)abortStagingWithError:(id)arg0 ;
-(void)addMetricsWithDuration:(id)arg0 metricsKey:(id)arg1 ;
-(void)addPairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)announceOtaProvider:(id)arg0 providerEndpoint:(id)arg1 completionHandler:(id)arg2 ;
-(void)commitStagedPairing;
-(void)device:(id)arg0 receivedAttributeReport:(id)arg1 ;
-(void)device:(id)arg0 receivedEventReport:(id)arg1 ;
-(void)device:(id)arg0 stateChanged:(NSUInteger)arg1 ;
-(void)didUpdateReachability:(BOOL)arg0 ;
-(void)disable;
-(void)disconnect;
-(void)disconnectWithError:(id)arg0 ;
-(void)discoverAccessories;
// -(void)enableEvents:(BOOL)arg0 forCharacteristics:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)enumerateHAPServices:(id)arg0 ;
-(void)fetchAndNotifyCharacteristics:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchPairingsWithCompletionHandler:(id)arg0 ;
-(void)fetchSoftwareVersionNumberWithCompletionHandler:(id)arg0 ;
-(void)finishPairing;
-(void)handleCHIPRemoteRequest:(id)arg0 completion:(id)arg1 ;
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
-(void)restrictAccessToNodeIDs:(id)arg0 completion:(id)arg1 ;
-(void)sendLockNotification:(id)arg0 ;
-(void)setCHIPReportHandler:(id)arg0 ;
-(void)setClusterIDForCharacteristic:(id)arg0 endpointID:(id)arg1 clusterID:(id)arg2 ;
-(void)setupReporting;
-(void)startPairingWithRequest:(id)arg0 ;
-(void)startStagedPairingWithCompletion:(id)arg0 ;
// -(void)startStagedPairingWithDeviceCredentialHandler:(id)arg0 wifiScanResultsHandler:(unk)arg1 threadScanResultsHandler:(id)arg2 scanningNetworks:(unk)arg3 completion:(id)arg4  ;
-(void)timerDidFire:(id)arg0 ;
-(void)updateAccessoryName:(id)arg0 ;
-(void)updateDefaultOtaProvider:(id)arg0 providerEndpoint:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateFabricLabel:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateSoftwareVersion:(id)arg0 ;
-(void)updateVidPidWithAttestationDeviceInfo:(id)arg0 ;
-(void)validateAttestationDeviceInfo:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)writeCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif