// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRSTORAGE_H
#define HMMTRSTORAGE_H

@class HMFObject, NSMutableDictionary, NSNumber, NSString, NSOperationQueue, NSDictionary, NSData, NSSet, MTSKeyValueStore;
@protocol HMFLogging, MTRPersistentStorageDelegate, HMMTRStorageDataSource, HMMTRStorageDelegate, HMMTRFabricStorageDataSource, OS_dispatch_queue;


#import "HMMTRMatterKeypair.h"

@interface HMMTRStorage : HMFObject <HMFLogging, MTRPersistentStorageDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (retain) NSMutableDictionary *appleFabricLocalStorage; // ivar: _appleFabricLocalStorage
@property (retain, nonatomic) NSNumber *certificateIssuerID; // ivar: _certificateIssuerID
@property (weak) NSObject<HMMTRStorageDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMMTRStorageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) NSObject<HMMTRFabricStorageDataSource> *fabricDataSource; // ivar: _fabricDataSource
@property (retain) NSNumber *fabricMappingIndex; // ivar: _fabricMappingIndex
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *inMemoryStorage; // ivar: _inMemoryStorage
@property (readonly) NSOperationQueue *keyValueStoreUpdateQueue; // ivar: _keyValueStoreUpdateQueue
@property (retain) NSMutableDictionary *localStorage; // ivar: _localStorage
@property (readonly, getter=isLocalStorageMode) BOOL localStorageMode; // ivar: _localStorageMode
@property (retain) NSDictionary *localStorageWithoutUpdates; // ivar: _localStorageWithoutUpdates
@property (retain, nonatomic) HMMTRMatterKeypair *nocSigner; // ivar: _nocSigner
@property (retain, nonatomic) NSData *operationalCert; // ivar: _operationalCert
@property (retain, nonatomic) HMMTRMatterKeypair *operationalKeyPair; // ivar: _operationalKeyPair
@property (retain, nonatomic) NSData *ownerIPK; // ivar: _ownerIPK
@property (retain, nonatomic) NSNumber *ownerNodeID; // ivar: _ownerNodeID
@property (readonly, copy) NSSet *pairedNodeIDs;
@property (retain, nonatomic) NSData *rootCert; // ivar: _rootCert
@property (getter=isSharedAdmin) BOOL sharedAdmin; // ivar: _sharedAdmin
@property BOOL storageSyncInProgress; // ivar: _storageSyncInProgress
@property BOOL storageSyncPending; // ivar: _storageSyncPending
@property (readonly) Class superclass;
@property (getter=isSystemCommissionerFabric) BOOL systemCommissionerFabric; // ivar: _systemCommissionerFabric
@property (retain) MTSKeyValueStore *systemCommissionerKeyValueStore; // ivar: _systemCommissionerKeyValueStore
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)didUpdateMatterItems:(id)arg0 oldStorage:(id)arg1 ;
+(BOOL)isMatterKey:(id)arg0 ;
+(BOOL)isMemoryStorageKey:(id)arg0 ;
+(BOOL)isPluginKey:(id)arg0 ;
+(BOOL)shouldIgnoreWritesForKey:(id)arg0 ;
+(id)chipPluginStorageKeys;
+(id)formatKeyForNodeId:(id)arg0 key:(id)arg1 ;
+(id)generateIPK;
+(id)ignoredMatterStorageKeys;
+(id)keyByStrippingNodeIdFromKey:(id)arg0 ;
+(id)logCategory;
+(id)matterItemsFromDictionary:(id)arg0 ;
+(id)matterStorageKeys;
+(id)memoryStorageKeys;
+(id)nodeIdFromPluginKey:(id)arg0 ;
+(id)removeRecordsForUnpairedNodesInDict:(id)arg0 pairedNodes:(id)arg1 ;
+(id)shortDescription;
-(BOOL)_handlePerFabricStorageMaybeAvailable:(id)arg0 ;
-(BOOL)_removeAllDataSourceData;
-(BOOL)_syncSetDataSourceDictionary:(id)arg0 ;
-(BOOL)_syncSetDataSourceValue:(id)arg0 forKey:(id)arg1 ;
-(BOOL)areCachedCertificatesValidForFabricID:(id)arg0 ;
-(BOOL)isResidentDevice;
-(BOOL)isStagedForNode:(id)arg0 ;
-(BOOL)isStorageCorruptForKeyValueStore:(id)arg0 ;
-(BOOL)removeStorageDataForKey:(id)arg0 ;
-(BOOL)removeValueForKey:(id)arg0 ;
-(BOOL)removeValueForKey:(id)arg0 systemCommissionerFabric:(BOOL)arg1 ;
-(BOOL)setStorageData:(id)arg0 forKey:(id)arg1 ;
-(BOOL)setValueForKey:(id)arg0 value:(id)arg1 ;
-(BOOL)setValueForKey:(id)arg0 value:(id)arg1 systemCommissionerFabric:(BOOL)arg2 ;
-(id)_preferencesValueForKey:(id)arg0 ;
-(id)categoryForNode:(id)arg0 ;
-(id)categoryForSystemCommissionerFabricNode:(id)arg0 ;
-(id)configNumberForNode:(id)arg0 ;
-(id)controllerNodeID;
-(id)deviceNameForSystemCommissionerFabricNode:(id)arg0 ;
-(id)fabricIndexForNode:(id)arg0 ;
-(id)fabricIndexForSystemCommissioner;
-(id)initWithQueue:(id)arg0 ;
-(id)ipkForCurrentFabric;
-(id)ipkForCurrentFabricMappingIndex;
-(id)ipkForFabricIndex:(id)arg0 ;
-(id)logIdentifier;
-(id)nodeIDForFabricIndex:(id)arg0 deviceIdentifier:(id)arg1 ;
-(id)pairedNodeIDsOnSystemCommissionerFabric:(BOOL)arg0 ;
-(id)productIDForNode:(id)arg0 ;
-(id)productIDForSystemCommissionerFabricNode:(id)arg0 ;
-(id)serialNumberForSystemCommissionerFabricNode:(id)arg0 ;
-(id)setupPayloadForSystemCommissionerFabricNode:(id)arg0 ;
-(id)storageDataForKey:(id)arg0 ;
-(id)systemCommissionerFabricNodeIDForUuid:(id)arg0 ;
-(id)topologyForNode:(id)arg0 ;
-(id)uuidForSystemCommissionerFabricNode:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKey:(id)arg0 systemCommissionerFabric:(BOOL)arg1 ;
-(id)vendorIDForNode:(id)arg0 ;
-(id)vendorIDForSystemCommissionerFabricNode:(id)arg0 ;
-(unsigned int)knownFabricInStorage:(id)arg0 fabricID:(id)arg1 keyPair:(id)arg2 controllerNodeID:(*id)arg3 rootCertificate:(*id)arg4 ;
-(unsigned int)knownFabricWithID:(id)arg0 ;
-(void)_fetchCertForFabricWithIndex:(id)arg0 isOwner:(BOOL)arg1 completion:(id)arg2 ;
-(void)_handleUpdatedDataWithIsLocalChange:(BOOL)arg0 ;
-(void)_removeSystemCommissionerFabricNodeIDForUuid:(id)arg0 ;
-(void)_resetSystemCommissionerStorage;
-(void)_setPreferencesValueForKey:(id)arg0 value:(id)arg1 ;
-(void)_syncToRemoteStorage;
-(void)addPairedNodeID:(id)arg0 ;
-(void)addPairedNodeID:(id)arg0 toSystemCommissionerFabric:(BOOL)arg1 ;
-(void)endLocalStorageModeByPersistingAppleFabricData;
-(void)endLocalStorageModeBySyncingToRemote:(BOOL)arg0 ;
-(void)fetchCertForFabricWithIndex:(id)arg0 isOwner:(BOOL)arg1 completion:(id)arg2 ;
-(void)handlePrimaryResidentDataReady;
-(void)handleUpdatedCurrentFabricIndex;
-(void)handleUpdatedDataForFabricIndex:(id)arg0 isLocalChange:(BOOL)arg1 ;
-(void)handleUpdatedDataForFabricIndex:(id)arg0 nodeID:(id)arg1 isLocalChange:(BOOL)arg2 ;
-(void)handleUpdatedDataWithIsLocalChange:(BOOL)arg0 ;
-(void)prepareStorageForFabricMappingIndex:(id)arg0 ;
-(void)removePairedNodeID:(id)arg0 ;
-(void)removePairedNodeID:(id)arg0 fromSystemCommissionerFabric:(BOOL)arg1 ;
-(void)removeRecordsForNode:(id)arg0 ;
-(void)removeRecordsForSystemCommissionerFabricNode:(id)arg0 ;
-(void)resetStorage;
-(void)setCategory:(id)arg0 forNode:(id)arg1 ;
-(void)setCategory:(id)arg0 forSystemCommissionerFabricNode:(id)arg1 ;
-(void)setConfigNumber:(id)arg0 forNode:(id)arg1 ;
-(void)setControllerNodeID:(id)arg0 ;
-(void)setDeviceName:(id)arg0 forSystemCommissionerFabricNode:(id)arg1 ;
-(void)setFabricIndex:(id)arg0 forNode:(id)arg1 ;
-(void)setProductID:(id)arg0 forNode:(id)arg1 ;
-(void)setProductID:(id)arg0 forSystemCommissionerFabricNode:(id)arg1 ;
-(void)setSerialNumber:(id)arg0 forSystemCommissionerFabricNode:(id)arg1 ;
-(void)setSetupPayload:(id)arg0 forSystemCommissionerFabricNode:(id)arg1 ;
-(void)setStaged:(BOOL)arg0 forNode:(id)arg1 ;
-(void)setTopology:(id)arg0 forNode:(id)arg1 ;
-(void)setUuid:(id)arg0 forSystemCommissionerFabricNode:(id)arg1 ;
-(void)setVendorID:(id)arg0 forNode:(id)arg1 ;
-(void)setVendorID:(id)arg0 forSystemCommissionerFabricNode:(id)arg1 ;
-(void)startLocalStorageMode;


@end


#endif