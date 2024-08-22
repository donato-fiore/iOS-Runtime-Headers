// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHIPPLUGINSTORAGE_H
#define CHIPPLUGINSTORAGE_H

@class HMFObject, NSString, NSNumber, NSOperationQueue, NSSet, NSMutableDictionary;
@protocol HMFLogging, MTRPersistentStorageDelegate, CHIPPluginStorageDataSource, CHIPPluginStorageDelegate, CHIPPluginFabricStorageDataSource, OS_dispatch_queue;



@interface CHIPPluginStorage : HMFObject <HMFLogging, MTRPersistentStorageDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (weak) NSObject<CHIPPluginStorageDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<CHIPPluginStorageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) NSObject<CHIPPluginFabricStorageDataSource> *fabricDataSource; // ivar: _fabricDataSource
@property (retain) NSNumber *fabricMappingIndex; // ivar: _fabricMappingIndex
@property (readonly) NSUInteger hash;
@property (readonly) NSOperationQueue *keyValueStoreUpdateQueue; // ivar: _keyValueStoreUpdateQueue
@property (readonly, copy) NSSet *pairedNodeIDs;
@property (readonly) Class superclass;
@property (readonly) NSMutableDictionary *temporaryStorage; // ivar: _temporaryStorage
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)didUpdateMatterItems:(id)arg0 oldStorage:(id)arg1 ;
+(BOOL)keyMatchesMatterKey:(id)arg0 ;
+(id)CHIPPLUGIN_STORAGE_KEYS;
+(id)MATTER_STORAGE_KEYS;
+(id)formatKeyForNodeId:(id)arg0 key:(id)arg1 ;
+(id)logCategory;
+(id)matterItemsFromDictionary:(id)arg0 ;
+(id)shortDescription;
+(id)stripNodeIdFromKey:(id)arg0 ;
+(void)deleteCHIPPluginDataForNodeID:(id)arg0 withStorage:(id)arg1 ;
-(BOOL)_checkVersion:(id)arg0 ;
-(BOOL)_handlePerFabricStorageMaybeAvailable:(id)arg0 ;
-(BOOL)_syncSetDataSourceValue:(id)arg0 forKey:(id)arg1 ;
-(BOOL)removeStorageDataForKey:(id)arg0 ;
-(BOOL)setStorageData:(id)arg0 forKey:(id)arg1 ;
-(BOOL)setValueForKey:(id)arg0 value:(id)arg1 ;
-(id)_getCHIPFrameworkVersion;
-(id)_preferencesValueForKey:(id)arg0 ;
-(id)_tempValueForKey:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)ipkForCurrentFabricMappingIndex;
-(id)logIdentifier;
-(id)storageDataForKey:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)_handleUpdatedDataWithIsLocalChange:(BOOL)arg0 ;
-(void)_moveTempStorageIntoDataSource;
-(void)_removeAllDataSourceDataWithCompletion:(id)arg0 ;
-(void)_removeTempValueForKey:(id)arg0 ;
-(void)_setPreferencesValueForKey:(id)arg0 value:(id)arg1 ;
-(void)_setTempValueForKey:(id)arg0 value:(id)arg1 ;
-(void)addPairedNodeID:(id)arg0 ;
-(void)handleUpdatedCurrentFabricIndex;
-(void)handleUpdatedDataForFabricIndex:(id)arg0 isLocalChange:(BOOL)arg1 ;
-(void)handleUpdatedDataForFabricIndex:(id)arg0 nodeID:(id)arg1 isLocalChange:(BOOL)arg2 ;
-(void)handleUpdatedDataWithIsLocalChange:(BOOL)arg0 ;
-(void)prepareStorageForFabricMappingIndex:(id)arg0 ;
-(void)removePairedNodeID:(id)arg0 ;
-(void)resetStorage;


@end


#endif