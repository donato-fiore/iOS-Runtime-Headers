// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLCORE_H
#define NSSQLCORE_H

@class NSMutableDictionary, NSString, NSDictionary, NSData, NSSet, NSOperationQueue, NSURL;
@protocol NSFilePresenter, NSSQLModelProvider;


#import "NSPersistentStore.h"
#import "NSSQLModel.h"
#import "NSSQLiteAdapter.h"
#import "NSSQLiteConnection.h"
#import "NSSQLCoreDispatchManager.h"
#import "NSGenerationalRowCache.h"
#import "_NSSQLCoreConnectionObserver.h"
#import "_PFMutex.h"

@interface NSSQLCore : NSPersistentStore <NSFilePresenter, NSSQLModelProvider>

 {
    NSSQLModel *_model;
    NSSQLiteAdapter *_adapter;
    NSSQLiteConnection *_schemaValidationConnection;
    NSSQLCoreDispatchManager *_dispatchManager;
    NSGenerationalRowCache *_generationalRowCache;
    _NSSQLCoreConnectionObserver *_observer;
    os_unfair_lock_s _sqlCoreStateLock;
    NSMutableDictionary *_storeMetadata;
    NSString *_externalDataReferencesDirectory;
    NSString *_externalDataLinksDirectory;
    NSString *_fileBackedFuturesPath;
    int _transactionInMemorySequence;
    BOOL _metadataIsClean;
    _sqlCoreFlags _sqlCoreFlags;
    NSSQLiteConnection *_queryGenerationTrackingConnection;
    _PFMutex *_writerSerializationMutex;
    NSDictionary *_ancillarySQLModels;
    NSDictionary *_historyTrackingOptions;
    NSData *_dbKey;
    id *_usedIndexes;
    BOOL _remoteStoresDidChange;
    int _remoteNotificationToken;
}


@property (readonly, nonatomic) NSDictionary *ancillaryModels; // ivar: _ancillaryModels
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSQLModel *model;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;


+(BOOL)_destroyPersistentStoreAtURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(BOOL)_rekeyPersistentStoreAtURL:(id)arg0 options:(id)arg1 withKey:(id)arg2 error:(*id)arg3 ;
+(BOOL)_replacePersistentStoreAtURL:(id)arg0 destinationOptions:(id)arg1 withPersistentStoreFromURL:(id)arg2 sourceOptions:(id)arg3 error:(*id)arg4 ;
+(BOOL)coloredLoggingDefault;
+(BOOL)dropPersistentHistoryforPersistentStoreWithURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(BOOL)setMetadata:(id)arg0 forPersistentStoreWithURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)setMetadata:(id)arg0 forPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(BOOL)useConcurrentFetching;
+(Class)migrationManagerClass;
+(Class)rowCacheClass;
+(NSInteger)bufferedAllocationsOverride;
+(id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg0 ;
+(id)cachedModelForPersistentStoreWithURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)metadataForPersistentStoreWithURL:(id)arg0 error:(*id)arg1 ;
+(id)metadataForPersistentStoreWithURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(int)debugDefault;
+(void)initialize;
+(void)setColoredLoggingDefault:(BOOL)arg0 ;
+(void)setDebugDefault:(int)arg0 ;
-(BOOL)_hasActiveGenerations;
-(BOOL)_isCloudKitOptioned;
-(BOOL)_prepareForExecuteRequest:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)_unload:(*id)arg0 ;
-(BOOL)finishDeferredLightweightMigration:(BOOL)arg0 withError:(*id)arg1 ;
-(BOOL)hasAncillaryModels;
-(BOOL)load:(*id)arg0 ;
-(BOOL)loadMetadata:(*id)arg0 ;
-(BOOL)supportsConcurrentRequestHandling;
-(BOOL)supportsGenerationalQuerying;
-(Class)_objectIDClass;
-(Class)objectIDFactoryForEntity:(id)arg0 ;
-(Class)objectIDFactoryForPersistentHistoryEntity:(id)arg0 ;
-(Class)objectIDFactoryForSQLEntity:(id)arg0 ;
-(NSUInteger)entityIDForEntityDescription:(id)arg0 ;
-(id)_allOrderKeysForDestination:(id)arg0 inRelationship:(id)arg1 error:(*id)arg2 ;
-(id)_newObjectIDForEntity:(id)arg0 referenceData64:(NSUInteger)arg1 ;
-(id)_newOrderedRelationshipInformationForRelationship:(id)arg0 forObjectWithID:(id)arg1 withContext:(id)arg2 error:(*id)arg3 ;
-(id)_storeInfoForEntityDescription:(id)arg0 ;
-(id)adapter;
-(id)ancillarySQLModels;
-(id)createMapOfEntityNameToPKMaxForEntities:(id)arg0 ;
-(id)currentChangeToken;
-(id)currentQueryGeneration;
-(id)executeRequest:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)externalDataReferencesDirectory;
-(id)fileBackedFuturesDirectory;
-(id)identifier;
-(id)initWithPersistentStoreCoordinator:(id)arg0 configurationName:(id)arg1 URL:(id)arg2 options:(id)arg3 ;
-(id)metadata;
-(id)newValueForRelationship:(id)arg0 forObjectWithID:(id)arg1 withContext:(id)arg2 error:(*id)arg3 ;
-(id)newValuesForObjectWithID:(id)arg0 withContext:(id)arg1 error:(*id)arg2 ;
-(id)obtainPermanentIDsForObjects:(id)arg0 error:(*id)arg1 ;
-(id)propertyNamesInHistoryChangeDataForEntityDescription:(id)arg0 ;
-(id)reopenQueryGenerationWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)type;
-(void)_rebuildIndiciesSynchronously:(BOOL)arg0 ;
-(void)_setupObserver;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)freeQueryGenerationWithIdentifier:(id)arg0 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg0 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg0 generation:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg0 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg0 generation:(id)arg1 ;
-(void)setExclusiveLockingMode:(BOOL)arg0 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setMetadata:(id)arg0 ;
-(void)setURL:(id)arg0 ;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg0 ;


@end


#endif