// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYBROWSER_H
#define HMDACCESSORYBROWSER_H

@class HMFObject, NSMutableSet, NSHashTable, NSMutableArray, NSArray, HAPAccessoryServerBrowserBTLE, HMMTRAccessoryServerBrowser, NSString, HAPAccessoryServerBrowser, HAPAccessoryServerBrowserIP, HMFMessageDispatcher, NSUUID, HMFTimer, NSData;
@protocol HAPAccessoryServerBrowserDelegate, HAPAccessoryServerDelegate, HMFMessageReceiver, HMFTimerDelegate, HMDMediaBrowserDelegate, HMDWACBrowserDelegate, HMDWACAccessoryConfigurationDelegate, HMDWatchSystemStateDelegate, HMDAuthServerDelegate, HMFLogging, HMDAccessoryBrowserProtocol, HMDAccessoryBrowserHapProtocol, HMDAccessoryBrowserManagerDelegate, OS_dispatch_queue, OS_dispatch_source;


#import "HMDUnassociatedWACAccessory.h"
#import "HMDAuthServer.h"
#import "HMDAccessoryServerBrowserDemo.h"
#import "HMDHAP2Storage.h"
#import "HMDHomeManager.h"
#import "HMDMediaBrowser.h"
#import "HMDWACBrowser.h"

@interface HMDAccessoryBrowser : HMFObject <HAPAccessoryServerBrowserDelegate, HAPAccessoryServerDelegate, HMFMessageReceiver, HMFTimerDelegate, HMDMediaBrowserDelegate, HMDWACBrowserDelegate, HMDWACAccessoryConfigurationDelegate, HMDWatchSystemStateDelegate, HMDAuthServerDelegate, HMFLogging, HMDAccessoryBrowserProtocol, HMDAccessoryBrowserHapProtocol>

 {
    os_unfair_lock_s _lock;
    NSMutableSet *_unpairedHAPAccessories;
    NSMutableSet *_unassociatedMediaAccessories;
    NSMutableSet *_deviceSetupMediaAccessories;
    NSMutableSet *_unassociatedWACAccessories;
    NSMutableSet *_browsingConnections;
    NSHashTable *_activeAssertions;
}


@property (retain, nonatomic, getter=getActiveWACSession, setter=setActiveWACSession:) HMDUnassociatedWACAccessory *accessoryPerformingWAC; // ivar: _accessoryPerformingWAC
@property (retain, nonatomic) NSMutableArray *accessoryServerBrowsers; // ivar: _accessoryServerBrowsers
@property (nonatomic) BOOL active; // ivar: _active
@property (retain, nonatomic) HMDAuthServer *authServer; // ivar: _authServer
@property (retain, nonatomic) NSArray *browseableLinkTypes; // ivar: _browseableLinkTypes
@property (retain, nonatomic) HAPAccessoryServerBrowserBTLE *btleAccessoryServerBrowser; // ivar: _btleAccessoryServerBrowser
@property (nonatomic) BOOL btlePowerState; // ivar: _btlePowerState
@property (readonly) HMMTRAccessoryServerBrowser *chipAccessoryServerBrowser; // ivar: _chipAccessoryServerBrowser
@property (retain, nonatomic) NSString *countrycodeForAccessoryReprovisioning; // ivar: _countrycodeForAccessoryReprovisioning
@property (retain, nonatomic) NSMutableArray *currentlyPairingAccessories; // ivar: _currentlyPairingAccessories
@property (retain, nonatomic) NSMutableArray *currentlyPairingProgressHandlers; // ivar: _currentlyPairingProgressHandlers
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMDAccessoryServerBrowserDemo *demoAccessoryServerBrowser; // ivar: _demoAccessoryServerBrowser
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *deviceSetupMediaAccessories;
@property (retain, nonatomic) NSMutableSet *discoveredAccessoryServerIdentifiers; // ivar: _discoveredAccessoryServerIdentifiers
@property (retain, nonatomic) NSHashTable *discoveringAccessoryServerBrowsers; // ivar: _discoveringAccessoryServerBrowsers
@property (readonly, nonatomic) NSHashTable *discoveringBLEAccessoryServerIdentifiers; // ivar: _discoveringBLEAccessoryServerIdentifiers
@property (nonatomic) NSUInteger generationCounter; // ivar: _generationCounter
@property (retain, nonatomic) HAPAccessoryServerBrowser *hap2AccessoryServerBrowser; // ivar: _hap2AccessoryServerBrowser
@property (retain, nonatomic) HMDHAP2Storage *hap2Storage; // ivar: _hap2Storage
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (retain, nonatomic) NSString *identifierOfAccessoryBeingReprovisioned; // ivar: _identifierOfAccessoryBeingReprovisioned
@property BOOL internalDiscoveryRequest; // ivar: _internalDiscoveryRequest
@property (retain, nonatomic) HAPAccessoryServerBrowserIP *ipAccessoryServerBrowser; // ivar: _ipAccessoryServerBrowser
@property (weak, nonatomic) NSObject<HMDAccessoryBrowserManagerDelegate> *managerDelegate; // ivar: _managerDelegate
@property (retain, nonatomic) HMDMediaBrowser *mediaBrowser; // ivar: _mediaBrowser
@property (retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) NSMutableArray *pairedAccessories; // ivar: _pairedAccessories
@property (retain, nonatomic) NSObject<OS_dispatch_source> *reachabilityTimerForBTLE; // ivar: _reachabilityTimerForBTLE
@property (readonly, nonatomic) HMFTimer *stopBrowsingAccessoriesNeedingReprovisioningTimer; // ivar: _stopBrowsingAccessoriesNeedingReprovisioningTimer
@property (readonly, nonatomic) HMFTimer *stopReprovisioningTimer; // ivar: _stopReprovisioningTimer
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSHashTable *tombstonedHAPAccessoryServers; // ivar: _tombstonedHAPAccessoryServers
@property (readonly, copy) NSArray *unassociatedAccessories;
@property (readonly, nonatomic) NSArray *unassociatedMediaAccessories;
@property (nonatomic) NSUInteger unitTestBTLEReachabilityInterval; // ivar: _unitTestBTLEReachabilityInterval
@property (readonly, nonatomic) NSArray *unpairedHAPAccessories;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) HMDWACBrowser *wacBrowser; // ivar: _wacBrowser
@property (retain, nonatomic) NSData *wiFiPSKForAccessoryReprovisioning; // ivar: _wiFiPSKForAccessoryReprovisioning
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)__isAccessoryBrowsingRequested;
-(BOOL)__isMediaAccessoryBrowsingRequested;
-(BOOL)_isAccessoryServerTombstoned:(id)arg0 ;
-(BOOL)_isHomeHubMatterSharedAdminPairingCapableWithConfiguration:(id)arg0 ;
-(BOOL)_isOwnerPairingAccessoryWithConfiguration:(id)arg0 ;
-(BOOL)_shouldAccessoryServerBeTombstoned:(id)arg0 ;
-(BOOL)areThereAnyAssociatedAirPlayAccessories;
-(BOOL)areThereAnyPairedAccessories;
-(BOOL)areThereAnyPairedBTLEAccessories;
-(BOOL)isBrowsingAllowed;
-(BOOL)isDiscoveringAccessoriesWithLinkType:(NSInteger)arg0 ;
-(BOOL)isServerLinkTypeBrowseable:(NSInteger)arg0 ;
-(NSUInteger)numPairedIPAccessories;
-(id)__identifiersOfPairedAccessoriesWithTransports:(NSUInteger)arg0 ;
-(id)_getHAPMetadataFromHMMetadata:(id)arg0 ;
-(id)_pairingInformationForAccessoryIdentifier:(id)arg0 ;
-(id)_pairingInformationForUnpairedAccessory:(id)arg0 ;
-(id)_progressHandlerForUnpairedAccessory:(id)arg0 ;
-(id)_requiredCharacteristicsTypesToReadFromBTLEServer:(id)arg0 ;
-(id)_tombstonedAccessoryServerWithServerIdentifier:(id)arg0 ;
-(id)_unassociatedMediaAccessoryWithIdentifier:(id)arg0 ;
-(id)_unpairedAccessoryMatchingPairingInfo:(id)arg0 ;
-(id)accessoryBrowserHapProtocol;
-(id)beginActiveAssertionWithReason:(id)arg0 ;
-(id)browsingConnections;
-(id)currentControllerPairingIdentity;
-(id)discoveredAccessoryServers;
-(id)dumpBrowsingConnections;
-(id)dumpRegisteredPairedAccessories;
-(id)dumpUnassociatedAccessories;
-(id)findAccessoryServerForAccessoryDescription:(id)arg0 ;
-(id)identifiersOfAssociatedMediaAccessories;
-(id)identifiersOfPairedBTLEAccessories;
-(id)initWithMessageDispatcher:(id)arg0 ;
-(id)initWithMessageDispatcher:(id)arg0 injectedSettings:(id)arg1 ;
-(id)messageDestination;
-(id)pairedAccessoryInformationWithIdentifier:(id)arg0 ;
-(id)pairedAccessoryInformationWithSetupID:(id)arg0 ;
-(id)pairedHMDHAPAccessoryWithAccessoryServer:(id)arg0 ;
-(id)unassociatedAccessoriesForClientRequest:(id)arg0 ;
-(id)unpairedAccessoryForServer:(id)arg0 ;
-(id)unpairedAccessoryWithServerIdentifier:(id)arg0 ;
-(id)unpairedAccessoryWithUUID:(id)arg0 ;
-(id)unpairedHAPAccessoryWithAccessoryDescription:(id)arg0 ;
-(void)__activate;
-(void)__addBrowsingConnection:(id)arg0 ;
-(void)__handleProcessStateChange:(id)arg0 ;
-(void)__inactivate;
-(void)__removeBrowsingObserver:(id)arg0 error:(id)arg1 ;
-(void)__resetBrowsingConnections;
-(void)_addDiscoveredAccessoryServerIdentifier:(id)arg0 ;
-(void)_addReconfirmTimer:(id)arg0 accessoryServer:(id)arg1 ;
-(void)_addUnpairedAccessoryForServer:(id)arg0 ;
-(void)_associate:(BOOL)arg0 hapAccessoryWithAdvertisement:(id)arg1 ;
-(void)_associateMediaAccessoryForServer:(id)arg0 ;
-(void)_btleAccessoryReachabilityProbeTimer:(BOOL)arg0 ;
-(void)_callProgressOrErrorOut:(id)arg0 pairingInfo:(id)arg1 accessoryInfo:(id)arg2 unpairedAccessory:(id)arg3 progress:(NSInteger)arg4 certStatus:(NSUInteger)arg5 ;
-(void)_cancelCurrentlyPairingAccessories:(NSInteger)arg0 linkType:(id)arg1 ;
-(void)_cancelPairingWithAccessory:(id)arg0 error:(id)arg1 ;
-(void)_cancelPairingWithAccessoryDescription:(id)arg0 error:(id)arg1 ;
-(void)_checkIfPairingWithPairedAccessoryServer:(id)arg0 errorCode:(NSInteger)arg1 ;
-(void)_continueAfterPPIDValidation:(BOOL)arg0 server:(id)arg1 ;
-(void)_discoverAccessories:(id)arg0 ;
-(void)_discoverAccessoryServer:(id)arg0 linkType:(NSInteger)arg1 errorHandler:(id)arg2 ;
-(void)_handleAddedAccessory:(id)arg0 ;
-(void)_handleAddedAccessoryAdvertisements:(id)arg0 ;
-(void)_handleCurrentWiFiNetworkChangedNotification:(id)arg0 ;
-(void)_handlePairingInterruptedTimeout:(id)arg0 error:(id)arg1 ;
-(void)_handleRemovedAccessory:(id)arg0 ;
-(void)_handleRemovedAccessoryAdvertisements:(id)arg0 ;
-(void)_handleRemovedUnpairedHAPAccessory:(id)arg0 ;
-(void)_handleRequestFetchNewAccessories:(id)arg0 ;
-(void)_handleRequestSearchForNewAccessories:(id)arg0 ;
-(void)_handleSetupCodeAvailable:(id)arg0 ;
-(void)_handleTestModeConfigRequest:(id)arg0 ;
-(void)_handleWACAccessoryFound;
-(void)_notifyDelegateOfAccessoryServer:(id)arg0 didDiscoverAccessories:(id)arg1 transaction:(id)arg2 error:(id)arg3 ;
-(void)_notifyDelegateOfAccessoryServer:(id)arg0 didStopPairingWithError:(id)arg1 ;
-(void)_notifyDelegateOfAccessoryServer:(id)arg0 didUpdateCategory:(id)arg1 ;
-(void)_notifyDelegateOfAccessoryServer:(id)arg0 didUpdateHasPairings:(BOOL)arg1 ;
-(void)_notifyDelegateOfAccessoryServer:(id)arg0 didUpdateValuesForCharacteristics:(id)arg1 stateNumber:(id)arg2 broadcast:(BOOL)arg3 ;
-(void)_notifyDelegateOfAccessoryServerNeedingReprovisioning:(id)arg0 error:(id)arg1 ;
-(void)_notifyDelegateOfDiscoveryFailure:(id)arg0 accessoryServer:(id)arg1 linkType:(NSInteger)arg2 ;
-(void)_notifyDelegateOfNewPairedAccessoryServer:(id)arg0 stateChanged:(BOOL)arg1 stateNumber:(id)arg2 ;
-(void)_notifyDelegateOfReachabilityChange:(BOOL)arg0 forAccessoryWithIdentifier:(id)arg1 ;
-(void)_notifyDelegateOfReachabilityChangeChange:(BOOL)arg0 forBTLEAccessories:(id)arg1 ;
-(void)_notifyDelegateOfRemovedAccessoryServer:(id)arg0 error:(id)arg1 ;
-(void)_notifyDelegateOfTombstonedAccessoryServer:(id)arg0 ;
-(void)_notifyDelegateOfWACCompletionForAccessoryServerWithIdentifier:(id)arg0 error:(id)arg1 ;
-(void)_notifyManagerOfNewAccessory;
-(void)_pairAccessory:(id)arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
// -(void)_pairAccessoryWithDescription:(id)arg0 configuration:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)_promptForPairingPasswordForServer:(id)arg0 reason:(id)arg1 ;
-(void)_registerForMessages;
-(void)_registerForNotifications;
-(void)_removeBrowsingConnection:(id)arg0 error:(id)arg1 ;
-(void)_removeDiscoveredAccessoryServerIdentifier:(id)arg0 ;
-(void)_removePairingInformation:(id)arg0 error:(id)arg1 ;
-(void)_removePairingInformationForUnpairedAccessory:(id)arg0 ;
-(void)_reprovisionAccessoryWithIdentifier:(id)arg0 wiFiPSK:(id)arg1 countryCode:(id)arg2 withCompletion:(id)arg3 ;
-(void)_restartBrowsers;
-(void)_resurrectAccessoryServer:(id)arg0 ;
-(void)_sendNewAccessoryData:(id)arg0 messageName:(id)arg1 ;
-(void)_sendPairingCompletionStatusForServer:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)_setBTLEPowerChangeCompletionHandler;
-(void)_startDiscoveringAccessoriesNeedingReprovisioning;
-(void)_startDiscoveringAccessoriesWithLinkType:(id)arg0 ;
-(void)_startDiscoveringMediaAccessories;
-(void)_startDiscoveringPairedAccessories:(id)arg0 ;
-(void)_startDiscoveryForAccessoryServerBrowser:(id)arg0 ;
-(void)_startOrStopAccessoryDiscovery;
-(void)_startPairingInterruptionTimer:(id)arg0 ;
-(void)_stopBtleAccessoryReachabilityProbeTimer;
-(void)_stopDiscoveringAccessoriesWithError:(id)arg0 ;
-(void)_stopDiscoveringAccessoriesWithLinkType:(id)arg0 force:(BOOL)arg1 error:(id)arg2 ;
-(void)_stopDiscoveringMediaAccessories;
-(void)_stopDiscoveryForAccessoryServerBrowser:(id)arg0 ;
-(void)_stopReconfirmTimer:(id)arg0 ;
-(void)_tombstoneAccessoryServer:(id)arg0 forceNotify:(BOOL)arg1 ;
-(void)_updatePairingRetryTimerForAccessory:(id)arg0 delay:(NSInteger)arg1 ;
-(void)accessoryServer:(id)arg0 authenticateUUID:(id)arg1 token:(id)arg2 ;
-(void)accessoryServer:(id)arg0 confirmUUID:(id)arg1 token:(id)arg2 ;
-(void)accessoryServer:(id)arg0 didDisconnectWithError:(id)arg1 ;
-(void)accessoryServer:(id)arg0 didDiscoverAccessories:(id)arg1 transaction:(id)arg2 error:(id)arg3 ;
-(void)accessoryServer:(id)arg0 didFinishAuth:(id)arg1 ;
-(void)accessoryServer:(id)arg0 didReceiveBadPasswordThrottleAttemptsWithDelay:(NSInteger)arg1 ;
-(void)accessoryServer:(id)arg0 didStopPairingWithError:(id)arg1 ;
-(void)accessoryServer:(id)arg0 didUpdateCategory:(id)arg1 ;
-(void)accessoryServer:(id)arg0 didUpdateConnectionState:(BOOL)arg1 sessionInfo:(id)arg2 withError:(id)arg3 ;
-(void)accessoryServer:(id)arg0 didUpdateConnectionState:(BOOL)arg1 withError:(id)arg2 ;
-(void)accessoryServer:(id)arg0 didUpdateHasPairings:(BOOL)arg1 ;
-(void)accessoryServer:(id)arg0 didUpdateName:(id)arg1 ;
-(void)accessoryServer:(id)arg0 didUpdateValuesForCharacteristics:(id)arg1 stateNumber:(id)arg2 broadcast:(BOOL)arg3 ;
-(void)accessoryServer:(id)arg0 didUpdateWakeNumber:(id)arg1 ;
-(void)accessoryServer:(id)arg0 promptUserForPasswordWithType:(NSUInteger)arg1 ;
-(void)accessoryServer:(id)arg0 promtDialog:(id)arg1 forNotCertifiedAccessory:(id)arg2 completion:(id)arg3 ;
-(void)accessoryServer:(id)arg0 requestUserPermission:(NSInteger)arg1 accessoryInfo:(id)arg2 error:(id)arg3 ;
-(void)accessoryServer:(id)arg0 updatePairingProgress:(NSInteger)arg1 ;
-(void)accessoryServer:(id)arg0 validateCert:(id)arg1 model:(id)arg2 ;
-(void)accessoryServer:(id)arg0 validateUUID:(id)arg1 token:(id)arg2 model:(id)arg3 ;
-(void)accessoryServerBrowser:(id)arg0 accessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3 broadcast:(BOOL)arg4 ;
-(void)accessoryServerBrowser:(id)arg0 didChangeReachability:(BOOL)arg1 forAccessoryServerWithIdentifier:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg0 didFailToDiscoverAccessoryServerWithIdentifier:(id)arg1 ;
-(void)accessoryServerBrowser:(id)arg0 didFindAccessoryServer:(id)arg1 stateChanged:(BOOL)arg2 stateNumber:(id)arg3 ;
-(void)accessoryServerBrowser:(id)arg0 didFindAccessoryServerForReprovisioning:(id)arg1 ;
-(void)accessoryServerBrowser:(id)arg0 didFindAccessoryServerNeedingReprovisioning:(id)arg1 error:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg0 didFinishPairingForAccessoryServer:(id)arg1 ;
-(void)accessoryServerBrowser:(id)arg0 didFinishWACForAccessoryWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg0 didRemoveAccessoryServer:(id)arg1 error:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg0 didStartDiscoveringWithError:(id)arg1 ;
-(void)accessoryServerBrowser:(id)arg0 didStopDiscoveringWithError:(id)arg1 ;
-(void)accessoryServerBrowser:(id)arg0 getCacheForAccessoryWithIdentifier:(id)arg1 withCompletion:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg0 getCommissioningCertificatesForNodeID:(id)arg1 fabricIndex:(id)arg2 publicKey:(id)arg3 completion:(id)arg4 ;
-(void)accessoryServerBrowser:(id)arg0 getThreadNetworkCredentialsForAccessoryWithIdentifier:(id)arg1 withCompletion:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg0 removeCacheForAccessoryWithIdentifier:(id)arg1 ;
-(void)accessoryServerBrowser:(id)arg0 saveCache:(id)arg1 serverIdentifier:(id)arg2 ;
-(void)accessoryServerDidUpdateStateNumber:(id)arg0 ;
-(void)accessoryServerNeedsOwnershipToken:(id)arg0 ;
-(void)activate:(BOOL)arg0 ;
-(void)addPairedAccessory:(id)arg0 ;
-(void)addUnassociatedAccessory:(id)arg0 forDeviceSetup:(BOOL)arg1 ;
-(void)addUnassociatedMediaAccessory:(id)arg0 forDeviceSetup:(BOOL)arg1 ;
-(void)addUnassociatedWACAccessory:(id)arg0 ;
-(void)addUnpairedAccessoryServer:(id)arg0 identifier:(id)arg1 ;
-(void)addUnpairedHAPAccessory:(id)arg0 ;
-(void)browser:(id)arg0 didAddAdvertisements:(id)arg1 ;
-(void)browser:(id)arg0 didRemoveAdvertisements:(id)arg1 ;
-(void)browser:(id)arg0 didRemoveSessions:(id)arg1 ;
-(void)browser:(id)arg0 didUpdateEndpoints:(id)arg1 ;
-(void)btleAccessoryReachabilityProbeTimer:(BOOL)arg0 ;
-(void)cancelPairingWithAccessory:(id)arg0 error:(id)arg1 ;
-(void)cancelPairingWithAccessoryDescription:(id)arg0 error:(id)arg1 ;
-(void)configureAccessory:(id)arg0 trackState:(BOOL)arg1 connectionPriority:(BOOL)arg2 ;
-(void)configureDemoBrowserWithDemoAccessories:(id)arg0 finalized:(BOOL)arg1 ;
-(void)configureWithHomeManager:(id)arg0 ;
-(void)continueAddingAccessoryToHomeAfterUserConfirmation:(id)arg0 withError:(id)arg1 ;
-(void)currentlyFoundHAPAccessoryServerWithIdentifier:(id)arg0 linkType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)deregisterPairedAccessory:(id)arg0 ;
-(void)didFinishActivation:(id)arg0 context:(id)arg1 ;
-(void)didReceiveUserConsentResponseForSetupAccessoryDetail:(id)arg0 consent:(BOOL)arg1 ;
-(void)discoverAccessories:(id)arg0 ;
-(void)discoverAccessoryServer:(id)arg0 linkType:(NSInteger)arg1 errorHandler:(id)arg2 ;
-(void)endActiveAssertion:(id)arg0 ;
-(void)evaluateAccessoryDiscoveryState;
-(void)fetchAccessoryCacheForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)handleActivationResponse:(id)arg0 context:(id)arg1 ;
-(void)handleAddedAccessory:(id)arg0 ;
-(void)handleConnectionDeactivation:(id)arg0 ;
-(void)handleNewlyPairedAccessory:(id)arg0 linkType:(NSInteger)arg1 ;
-(void)handlePPIDInfoResponse:(id)arg0 context:(id)arg1 error:(id)arg2 ;
-(void)handleRemovedAccessory:(id)arg0 ;
-(void)handleSetupCodeAvailable:(id)arg0 ;
-(void)handleXPCConnectionInvalidated:(id)arg0 ;
-(void)homeLocationChangeNotification:(id)arg0 ;
-(void)pairAccessory:(id)arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
// -(void)pairAccessoryWithDescription:(id)arg0 configuration:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)probeReachabilityForBTLEAccessoryServersWithIdentifiers:(id)arg0 forceScan:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)registerPairedAccessory:(id)arg0 transports:(NSUInteger)arg1 setupHash:(id)arg2 delegate:(id)arg3 ;
// -(void)registerProgressHandler:(id)arg0 unpairedAccessoryUUID:(unk)arg1  ;
-(void)removeAccessoryCacheForIdentifier:(id)arg0 ;
-(void)removePairedAccessory:(id)arg0 ;
-(void)removePairedAccessoryInfoWithIdentifier:(id)arg0 ;
-(void)removePairingInformationForAccessoryServer:(id)arg0 ;
-(void)removeUnassociatedAccessory:(id)arg0 ;
-(void)removeUnassociatedAccessoryWithIdentifier:(id)arg0 ;
-(void)removeUnassociatedMediaAccessory:(id)arg0 ;
-(void)removeUnassociatedWACAccessory:(id)arg0 ;
-(void)removeUnpairedHAPAccessory:(id)arg0 ;
-(void)reprovisionAccessoryWithIdentifier:(id)arg0 wiFiPSK:(id)arg1 countryCode:(id)arg2 withCompletion:(id)arg3 ;
-(void)requestPermissionToAssociateWACAccessory:(id)arg0 completionHandler:(id)arg1 ;
-(void)resetConfiguration;
-(void)restartBrowsers;
-(void)resurrectAccessoryServer:(id)arg0 ;
-(void)retrieveCurrentStateForIdentifier:(id)arg0 stateNumber:(*id)arg1 isReachable:(*BOOL)arg2 linkQuality:(*NSUInteger)arg3 lastSeen:(*id)arg4 ;
-(void)saveAccessoryCache:(id)arg0 forIdentifier:(id)arg1 ;
-(void)setQOS:(NSInteger)arg0 ;
-(void)startDiscoveringAccessories;
-(void)startDiscoveringAccessoriesNeedingReprovisioning;
-(void)startDiscoveringAccessoriesWithLinkType:(NSInteger)arg0 ;
-(void)startDiscoveringMediaAccessories;
-(void)startDiscoveringPairedAccessories;
-(void)startDiscoveringPairedAccessoriesWithLinkType:(NSInteger)arg0 ;
-(void)stopDiscoveringAccessories;
-(void)stopDiscoveringAccessoriesWithLinkType:(NSInteger)arg0 ;
-(void)stopDiscoveringForUnpairedAccessoriesWithLinkType:(NSInteger)arg0 ;
-(void)stopDiscoveringMediaAccessories;
-(void)stopTrackingBTLEAccessoriesWithIdentifiers:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)tombstoneAccessoryServer:(id)arg0 ;
-(void)unassociatedWACAccessoryDidFinishAssociation:(id)arg0 withError:(id)arg1 ;
-(void)unassociatedWACAccessoryDidStartAssociation:(id)arg0 ;
-(void)updateBroadcastKeyForIdentifier:(id)arg0 key:(id)arg1 keyUpdatedStateNumber:(id)arg2 keyUpdatedTime:(CGFloat)arg3 ;
-(void)updatePairingWithProgress:(NSInteger)arg0 accessoryServer:(id)arg1 ;
-(void)updateStateForIdentifier:(id)arg0 stateNumber:(id)arg1 ;
-(void)updateUnassociatedWACAccessory:(id)arg0 ;
-(void)validateLinkTypes:(id)arg0 ;
-(void)vendorModel:(*id)arg0 vendorManufacturer:(*id)arg1 accessoryInfo:(id)arg2 ;


@end


#endif