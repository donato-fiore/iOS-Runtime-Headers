// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPACCESSORYSERVERBROWSER_H
#define CHIPACCESSORYSERVERBROWSER_H

@class HAPAccessoryServerBrowser, CHIPDeviceController, NSString, NSMutableSet, NSDictionary;
@protocol CHIPPluginStorageDelegate, HMFLogging, HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;


#import "CHIPPluginAttestationDataStore.h"
#import "CHIPPluginAttestationStatus.h"
#import "CHIPPluginMatterKeypair.h"
#import "CHIPPluginResidentStateManager.h"
#import "CHIPPluginStorage.h"
#import "CHIPPluginUIDialogPresenter.h"
#import "CHIPPluginVendorMetadataStore.h"

@interface CHIPAccessoryServerBrowser : HAPAccessoryServerBrowser <CHIPPluginStorageDelegate, HMFLogging>



@property (readonly, nonatomic) CHIPPluginAttestationDataStore *attestationDataStore; // ivar: _attestationDataStore
@property (readonly, nonatomic) CHIPPluginAttestationStatus *attestationStatus; // ivar: _attestationStatus
@property (readonly) CHIPDeviceController *chipController; // ivar: _chipController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAPAccessoryServerBrowserDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableSet *discoveredAccessoryServers; // ivar: _discoveredAccessoryServers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCurrentDevicePrimaryResident;
@property (retain) NSDictionary *matterStorageItems; // ivar: _matterStorageItems
@property (retain, nonatomic) CHIPPluginMatterKeypair *nocSigner; // ivar: _nocSigner
@property BOOL pendingMatterStackRestart; // ivar: _pendingMatterStackRestart
@property (readonly, nonatomic) CHIPPluginResidentStateManager *residentStateManager; // ivar: _residentStateManager
@property NSUInteger restartCount; // ivar: _restartCount
@property (readonly, nonatomic) NSMutableSet *stagedAccessoryServers; // ivar: _stagedAccessoryServers
@property (readonly, nonatomic) CHIPPluginStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (readonly, nonatomic) CHIPPluginUIDialogPresenter *uiDialogPresenter; // ivar: _uiDialogPresenter
@property (readonly, nonatomic) CHIPPluginVendorMetadataStore *vendorMetadataStore; // ivar: _vendorMetadataStore


+(id)logCategory;
-(BOOL)_delegateRespondsToSelector:(SEL)arg0 ;
-(BOOL)_isDevicePaired:(NSUInteger)arg0 ;
-(NSInteger)linkType;
-(NSUInteger)_generateNodeID;
-(id)_allServers;
-(id)_createCHIPAccessoryForNodeID:(NSUInteger)arg0 ;
-(id)initWithQueue:(id)arg0 storeDirectoryURL:(id)arg1 ;
-(id)logIdentifier;
-(id)stagedAccessoryServerWithIdentifier:(id)arg0 ;
-(unsigned char)_readNextFabricMappingIndexSync;
-(void)_cleanupDiscoveredServers;
-(void)_cleanupDiscoveredServersWithCompletion:(id)arg0 ;
-(void)_cleanupStagedServers;
-(void)_deleteOldPairings;
-(void)_invalidateAccessoryServer:(id)arg0 withCompletion:(id)arg1 ;
-(void)_prepareForPairingWithSetupCode:(id)arg0 discriminator:(id)arg1 vendorID:(id)arg2 productID:(id)arg3 serialNumber:(id)arg4 fabricIndex:(id)arg5 completionHandler:(id)arg6 ;
-(void)_restartChipStackWithFabricMappingIndex:(id)arg0 ;
-(void)_setupPairedDevices;
-(void)_startChipStackWithFabricMappingIndex:(id)arg0 ;
-(void)commitStagedAccessoryServer:(id)arg0 ;
-(void)discardStagedAccessoryServerWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)discoverAccessoryServerWithIdentifier:(id)arg0 ;
-(void)handleDeviceNoLongerPrimaryResidentWithCompletion:(id)arg0 ;
-(void)handleSystemKeychainStoreUpdatedNotification:(id)arg0 ;
-(void)invalidateAccessoryServer:(id)arg0 ;
-(void)invalidateAccessoryServer:(id)arg0 withCompletion:(id)arg1 ;
-(void)invalidateAllDiscoveredServers;
-(void)invalidateAllDiscoveredServersWithCompletion:(id)arg0 ;
-(void)matchAccessoryServerWithSetupID:(id)arg0 serverIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)prepareForPairingWithSetupPayload:(id)arg0 fabricIndex:(id)arg1 completionHandler:(id)arg2 ;
-(void)prepareForServerWithSetupCode:(id)arg0 discriminator:(id)arg1 identifier:(id)arg2 category:(id)arg3 name:(id)arg4 vendorID:(id)arg5 productID:(id)arg6 serialNumber:(id)arg7 completeionHandler:(id)arg8 ;
-(void)prepareForServerWithSetupPayload:(id)arg0 identifier:(id)arg1 category:(id)arg2 name:(id)arg3 completionHandler:(id)arg4 ;
-(void)restartChipStackWithFabricMappingIndex:(id)arg0 ;
-(void)setupPairedDevices;
-(void)stageAccessoryServerWithSetupPayload:(id)arg0 completionHandler:(id)arg1 ;
-(void)stageAccessoryServerWithSetupPayload:(id)arg0 fabricIndex:(id)arg1 completionHandler:(id)arg2 ;
-(void)startDiscoveringAccessoryServers;
-(void)stopDiscoveringAccessoryServers;
-(void)storageDidBecomeAvailable:(id)arg0 ;
-(void)storageDidUpdateData:(id)arg0 isLocalChange:(BOOL)arg1 ;


@end


#endif