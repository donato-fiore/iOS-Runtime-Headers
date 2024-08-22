// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRACCESSORYSERVERBROWSER_H
#define HMMTRACCESSORYSERVERBROWSER_H

@class HAPAccessoryServerBrowser, NSData, NSMutableArray, CBCentralManager, NSString, MTRDeviceController, NSMutableSet, NSDictionary, HAPPowerManager, NSNumber;
@protocol HMMTRStorageDelegate, HMFLogging, HAPPowerManagerProtocol, CBCentralManagerDelegate, HMMTRAccessoryServerBrowserDelegate, OS_nw_browser, HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;


#import "HMMTRAttestationDataStore.h"
#import "HMMTRAttestationStatus.h"
#import "HMMTRAccessoryServer.h"
#import "HMMTROperationalCertificateIssuer.h"
#import "HMMTRMatterKeypair.h"
#import "HMMTROTAProviderDelegate.h"
#import "HMMTRResidentStateManager.h"
#import "HMMTRSoftwareUpdateProvider.h"
#import "HMMTRStorage.h"
#import "HMMTRSystemCommissionerPairingManager.h"
#import "HMMTRUIDialogPresenter.h"
#import "HMMTRVendorMetadataStore.h"

@interface HMMTRAccessoryServerBrowser : HAPAccessoryServerBrowser <HMMTRStorageDelegate, HMFLogging, HAPPowerManagerProtocol, CBCentralManagerDelegate>



@property (weak, nonatomic) NSObject<HMMTRAccessoryServerBrowserDelegate> *accessoryServerBrowserDelegate; // ivar: _accessoryServerBrowserDelegate
@property (readonly) NSData *appleHomeFabricRootPublicKey;
@property (readonly, nonatomic) HMMTRAttestationDataStore *attestationDataStore; // ivar: _attestationDataStore
@property (readonly, nonatomic) HMMTRAttestationStatus *attestationStatus; // ivar: _attestationStatus
@property (nonatomic) BOOL bleScanActive; // ivar: _bleScanActive
@property (retain, nonatomic) NSObject<OS_nw_browser> *bonjourBrowser; // ivar: _bonjourBrowser
@property (retain, nonatomic) NSMutableArray *bonjourBrowserChanges; // ivar: _bonjourBrowserChanges
@property (retain, nonatomic) CBCentralManager *cbCentral; // ivar: _cbCentral
@property (retain, nonatomic) HMMTRAccessoryServer *commissioneeAccessoryServer; // ivar: _commissioneeAccessoryServer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAPAccessoryServerBrowserDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) MTRDeviceController *deviceController; // ivar: _deviceController
@property (readonly, nonatomic) NSMutableSet *discoveredAccessoryServers; // ivar: _discoveredAccessoryServers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCurrentDevicePrimaryResident;
@property (readonly, nonatomic) NSMutableArray *matterStackRestartHandlers; // ivar: _matterStackRestartHandlers
@property (retain) NSDictionary *matterStorageItems; // ivar: _matterStorageItems
@property (readonly, nonatomic) HMMTROperationalCertificateIssuer *nocIssuer; // ivar: _nocIssuer
@property (retain, nonatomic) HMMTRMatterKeypair *nocSigner; // ivar: _nocSigner
@property (retain, nonatomic) HMMTRMatterKeypair *operationalKeyPair; // ivar: _operationalKeyPair
@property (readonly, nonatomic) HMMTROTAProviderDelegate *otaProviderDelegate; // ivar: _otaProviderDelegate
@property BOOL pendingMatterStackRestart; // ivar: _pendingMatterStackRestart
@property (retain, nonatomic) HAPPowerManager *powerManager; // ivar: _powerManager
@property (nonatomic) BOOL requestedBLEScan; // ivar: _requestedBLEScan
@property (readonly, nonatomic) HMMTRResidentStateManager *residentStateManager; // ivar: _residentStateManager
@property NSUInteger restartCount; // ivar: _restartCount
@property (readonly, nonatomic) HMMTRSoftwareUpdateProvider *softwareUpdateProvider; // ivar: _softwareUpdateProvider
@property (readonly, nonatomic) NSMutableSet *stagedAccessoryServers; // ivar: _stagedAccessoryServers
@property (readonly, nonatomic) HMMTRStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *systemCommissionerFabricIndex; // ivar: _systemCommissionerFabricIndex
@property (readonly) NSData *systemCommissionerFabricRootPublicKey;
@property (readonly, nonatomic, getter=isSystemCommissionerFeatureEnabled) BOOL systemCommissionerFeatureEnabled; // ivar: _systemCommissionerFeatureEnabled
@property (readonly, getter=isSystemCommissionerMode) BOOL systemCommissionerMode; // ivar: _systemCommissionerMode
@property (retain, nonatomic) HMMTRMatterKeypair *systemCommissionerNocSigner; // ivar: _systemCommissionerNocSigner
@property (readonly, nonatomic) HMMTRSystemCommissionerPairingManager *systemCommissionerPairingManager; // ivar: _systemCommissionerPairingManager
@property (readonly, nonatomic) HMMTRUIDialogPresenter *uiDialogPresenter; // ivar: _uiDialogPresenter
@property (readonly, nonatomic) HMMTRVendorMetadataStore *vendorMetadataStore; // ivar: _vendorMetadataStore


+(id)logCategory;
-(BOOL)_delegateRespondsToSelector:(SEL)arg0 ;
-(BOOL)_isDevicePaired:(NSUInteger)arg0 ;
-(BOOL)_isSystemCommissionerFeaturePreferenceEnabled;
-(BOOL)systemCommissionerMode;
-(NSInteger)linkType;
-(NSUInteger)_generateNodeID;
-(NSUInteger)_getRandomFabricIndex;
-(id)_allServers;
-(id)_createCHIPAccessoryForNodeID:(NSUInteger)arg0 ;
-(id)_discoveredServerWithDiscriminator:(id)arg0 vendorID:(id)arg1 productID:(id)arg2 ;
-(id)_getSystemCommissionerFabricRootCertificateAndIPK:(*id)arg0 controllerNodeID:(*id)arg1 ;
-(id)_serverFromMTSDevicePairing:(id)arg0 ;
-(id)accessoryServerWithNodeID:(id)arg0 ;
-(id)createNewFabricIndex;
-(id)createNewSystemCommissionerFabricNodeID;
-(id)createSystemCommissionerFabricNOCWithSigningCertificate:(id)arg0 operationalPublicKey:(struct __SecKey *)arg1 fabricID:(id)arg2 nodeID:(id)arg3 caseAuthenticatedTags:(id)arg4 error:(*id)arg5 ;
-(id)fetchOrCreateSystemCommissionerRootCertificateWithError:(*id)arg0 fabricMappingIndex:(*id)arg1 ipk:(*id)arg2 controllerNodeID:(*id)arg3 ;
-(id)initWithQueue:(id)arg0 storeDirectoryURL:(id)arg1 ;
-(id)logIdentifier;
-(id)nodeIDForFabricIndex:(id)arg0 deviceIdentifier:(id)arg1 ;
-(id)stagedAccessoryServerWithIdentifier:(id)arg0 ;
-(int)_discriminator:(*id)arg0 vendorID:(*id)arg1 productID:(*id)arg2 CM:(*id)arg3 fromTXTRecord:(id)arg4 ;
-(int)_initializeAndStartBonjourBrowser;
-(unsigned char)_readNextFabricMappingIndexSync;
// -(void)_accessoryServerForSystemCommissionerDeviceWithNodeID:(id)arg0 matterStackRestartHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)_cleanupDisappearedServersOverBLE;
-(void)_cleanupDiscoveredServers;
-(void)_cleanupDiscoveredServersWithCompletion:(id)arg0 ;
-(void)_cleanupLocallyDiscoveredServers;
-(void)_cleanupStagedServers;
-(void)_deleteOldPairings;
-(void)_fetchDevicePairingsForSystemCommissionerDeviceWithNodeID:(id)arg0 completionHandler:(id)arg1 ;
// -(void)_fetchDevicePairingsForSystemCommissionerDeviceWithNodeID:(id)arg0 matterStackRestartHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)_handleAddOrUpdateWithDiscriminator:(id)arg0 vendorID:(id)arg1 productID:(id)arg2 overBLE:(BOOL)arg3 ;
-(void)_handleBLEAddOrUpdateWithDiscriminator:(id)arg0 vendorID:(id)arg1 productID:(id)arg2 ;
-(void)_handleBonjourAddOrUpdateWithDiscriminator:(id)arg0 vendorID:(id)arg1 productID:(id)arg2 ;
-(void)_handleBonjourBrowserBatchResults;
-(void)_handleBonjourRemoveWithDiscriminator:(id)arg0 vendorID:(id)arg1 productID:(id)arg2 txtRecordRemove:(BOOL)arg3 ;
-(void)_invalidateAccessoryServer:(id)arg0 withCompletion:(id)arg1 ;
-(void)_prepareForPairingWithSetupPayload:(id)arg0 fabricIndex:(id)arg1 hasPriorSuccessfulPairing:(BOOL)arg2 category:(id)arg3 completionHandler:(id)arg4 ;
-(void)_prepareServerForBLEDiscovery;
-(void)_queueBonjourBrowserOldResult:(id)arg0 newResult:(id)arg1 ;
-(void)_reenumeratePairedDevices;
-(void)_reportAccessoriesKnownToSystemCommissioner;
-(void)_restartMatterStackWithFabricMappingIndex:(id)arg0 ;
-(void)_setReachability:(BOOL)arg0 forServer:(id)arg1 ;
-(void)_setupPairedDevices;
// -(void)_stageAccessoryServerWithSetupPayload:(id)arg0 fabricIndex:(id)arg1 deviceCredentialHandler:(id)arg2 wifiScanResultsHandler:(unk)arg3 threadScanResultsHandler:(id)arg4 scanningNetworks:(unk)arg5 hasPriorSuccessfulPairing:(id)arg6 category:(unk)arg7 completionHandler:(BOOL)arg8  ;
-(void)_startChipStackWithFabricMappingIndex:(id)arg0 ;
-(void)_updateCentralManager;
-(void)_updateLocallyDiscoveredServerPairedStates;
-(void)announceOtaProviderForNodeID:(id)arg0 ;
-(void)centralManager:(id)arg0 didDiscoverPeripheral:(id)arg1 advertisementData:(id)arg2 RSSI:(id)arg3 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;
-(void)commitStagedAccessoryServer:(id)arg0 ;
-(void)devicePowerStateChanged:(NSUInteger)arg0 ;
-(void)discardStagedAccessoryServerWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)discoverAccessoryServerWithIdentifier:(id)arg0 ;
-(void)fetchAllDevicePairingsForSystemCommissionerDeviceWithNodeID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchCommissioningCertificatesForAccessoryWithOperationalPublicKey:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchCommissioningCertificatesForSharedAdminWithDeviceNodeID:(id)arg0 publicKey:(id)arg1 fabricIndex:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchCommissioningCertificatesFromOwnerForPublicKey:(id)arg0 fabricIndex:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchPreferredThreadCredentialsForServer:(id)arg0 withCompletion:(id)arg1 ;
-(void)finishSystemCommissionerFabricCommissioningWithFabricMappingIndex:(id)arg0 rootCACert:(id)arg1 ipk:(id)arg2 controllerNodeID:(id)arg3 commissoneeNodeID:(id)arg4 queue:(id)arg5 completion:(id)arg6 ;
-(void)handleDeviceNoLongerPrimaryResidentWithCompletion:(id)arg0 ;
-(void)handlePairingCompletionForAccessoryWithNodeID:(id)arg0 fabricIndex:(id)arg1 vendorID:(id)arg2 productID:(id)arg3 configNumber:(id)arg4 category:(id)arg5 topology:(id)arg6 ;
-(void)handlePrimaryResidentDataReady;
-(void)handleSystemKeychainStoreUpdatedNotification:(id)arg0 ;
-(void)invalidateAccessoryServer:(id)arg0 ;
-(void)invalidateAccessoryServer:(id)arg0 withCompletion:(id)arg1 ;
-(void)invalidateAllDiscoveredServers;
-(void)invalidateAllDiscoveredServersWithCompletion:(id)arg0 ;
-(void)matchAccessoryServerWithSetupID:(id)arg0 serverIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)notifyPairingCompletionForAccessoryServer:(id)arg0 ;
-(void)prepareForPairingWithSetupPayload:(id)arg0 fabricIndex:(id)arg1 owner:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)removeAllDevicePairingsForSystemCommissionerDeviceWithNodeID:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeDevicePairingFabricForSystemCommissionerDeviceWithNodeID:(id)arg0 fabric:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeSystemCommissionerFabricAccessoryWithNodeID:(id)arg0 completionHandler:(id)arg1 ;
-(void)restartMatterStackForSystemCommissionerFabricWithCompletionHandler:(id)arg0 ;
-(void)restartMatterStackWithFabricMappingIndex:(id)arg0 ;
-(void)restartMatterStackWithFabricMappingIndex:(id)arg0 completion:(id)arg1 ;
-(void)setupPairedDevices;
-(void)stageAccessoryServerWithSetupPayload:(id)arg0 fabricIndex:(id)arg1 completionHandler:(id)arg2 ;
// -(void)stageAccessoryServerWithSetupPayload:(id)arg0 fabricIndex:(id)arg1 deviceCredentialHandler:(id)arg2 wifiScanResultsHandler:(unk)arg3 threadScanResultsHandler:(id)arg4 scanningNetworks:(unk)arg5 completionHandler:(id)arg6  ;
-(void)stageAccessoryServerWithSetupPayload:(id)arg0 hasPriorSuccessfulPairing:(BOOL)arg1 category:(id)arg2 completionHandler:(id)arg3 ;
-(void)startBluetoothScan;
-(void)startDiscoveringAccessoryServers;
-(void)stopBluetoothScan;
-(void)stopDiscoveringAccessoryServers;
-(void)storageDidBecomeAvailable:(id)arg0 ;
-(void)storageDidUpdateData:(id)arg0 isLocalChange:(BOOL)arg1 ;


@end


#endif