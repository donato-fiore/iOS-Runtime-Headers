// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDBACKINGSTORE_H
#define HMDBACKINGSTORE_H

@class HMFObject, NSString, HMBLocalZone, CKRecordID, NSUUID;
@protocol HMDBackingStoreDataSource, HMFLogging, HMDBackingStoreObjectProtocol;


#import "HMCContext.h"
#import "HMDHome.h"
#import "HMDHomeManager.h"
#import "HMDBackingStoreLocal.h"
#import "HMDObjectLookup.h"
#import "HMCPartition.h"

@interface HMDBackingStore : HMFObject <HMDBackingStoreDataSource, HMFLogging>

 {
    BOOL _removedLegacyArchive;
    id<HMDBackingStoreDataSource> *_dataSource;
}


@property (readonly) NSString *activeControllerKeyUsername;
@property (retain, nonatomic) HMCContext *context; // ivar: _context
@property (readonly, nonatomic) NSString *contextName; // ivar: _contextName
@property (readonly, nonatomic) NSString *contextTransactionAuthor; // ivar: _contextTransactionAuthor
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDBackingStoreObjectProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly) BOOL isAtomicSaveFeatureEnabled;
@property (retain, nonatomic) HMDBackingStoreLocal *local; // ivar: _local
@property (retain, nonatomic) HMBLocalZone *localZone; // ivar: _localZone
@property (retain, nonatomic) HMDObjectLookup *lookup; // ivar: _lookup
@property (readonly, nonatomic) HMCPartition *partition;
@property (readonly, nonatomic) CKRecordID *root; // ivar: _root
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)_saveToLocalStoreWithReason:(id)arg0 homeManager:(id)arg1 shouldIncrementGenerationCounter:(BOOL)arg2 backingStore:(id)arg3 ;
+(id)allowedTypes;
+(id)cdlsActiveBackingStores;
+(id)cdlsActiveBackingStoresLock;
+(id)cdlsBackingStoreForHomeManagerWithError:(*id)arg0 ;
+(id)cdlsBackingStoreWithHandle:(id)arg0 error:(*id)arg1 ;
+(id)cdlsFetchManagedObjectWithUUID:(id)arg0 ofManagedObjectType:(Class)arg1 error:(*id)arg2 ;
+(id)cdlsFetchManagedObjectWithUUID:(id)arg0 ofModelType:(Class)arg1 error:(*id)arg2 ;
+(id)cdlsFetchManagedObjectsWithUUIDStrings:(id)arg0 ofManagedObjectType:(Class)arg1 ;
+(id)cdlsFetchObjectWithUUID:(id)arg0 ofModelType:(Class)arg1 error:(*id)arg2 ;
+(id)cdlsModelIDStringsForManagedObjects:(id)arg0 ;
+(id)currentDevice;
+(id)deeplyProblematicObjectTypes;
+(id)dependencySortTestInterface:(id)arg0 ;
+(id)flushBackingStore;
+(id)internalAllowedTypes;
+(id)logCategory;
+(id)resetBackingStore;
+(void)saveToPersistentStoreWithReason:(id)arg0 homeManager:(id)arg1 shouldIncrementGenerationCounter:(BOOL)arg2 backingStore:(id)arg3 completionHandler:(id)arg4 ;
+(void)start;
-(id)__fetchWithGroup:(id)arg0 uuids:(id)arg1 error:(*id)arg2 ;
-(id)backingStoreOperationQueue;
-(id)cdlsFetchObjectWithUUID:(id)arg0 ofModelType:(Class)arg1 error:(*id)arg2 ;
-(id)createBackingStoreLogAddTransactionOperationWithTransaction:(id)arg0 ;
-(id)createBackingStoreOperation;
-(id)createHomeObjectLookupWithHome:(id)arg0 ;
-(id)dataForPersistentStoreIncrementingGeneration:(BOOL)arg0 reason:(id)arg1 ;
-(id)initWithUUID:(id)arg0 ;
-(id)initWithUUID:(id)arg0 home:(id)arg1 ;
-(id)initWithUUID:(id)arg0 homeManager:(id)arg1 ;
-(id)initWithUUID:(id)arg0 homeManager:(id)arg1 home:(id)arg2 dataSource:(id)arg3 ;
-(id)logIdentifier;
-(id)transaction:(id)arg0 options:(id)arg1 ;
-(void)cdlsCommit:(id)arg0 run:(BOOL)arg1 save:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)cdlsDelete:(id)arg0 destination:(NSUInteger)arg1 ;
-(void)cdlsReplayAllModelsStartingAt:(id)arg0 ;
-(void)cdlsUpdate:(id)arg0 destination:(NSUInteger)arg1 ;
-(void)commit:(id)arg0 run:(BOOL)arg1 save:(BOOL)arg2 archiveInline:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)commit:(id)arg0 run:(BOOL)arg1 save:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)deleteModelObjects:(id)arg0 destination:(NSUInteger)arg1 ;
-(void)dmKickClients;
-(void)handleCoreDataDidSaveNotification:(id)arg0 ;
-(void)handleCoreDataDidSaveNotification:(id)arg0 sourceContext:(id)arg1 ;
-(void)handleCoreDataWillSaveNotification:(id)arg0 ;
-(void)saveToPersistentStoreWithReason:(id)arg0 incrementGeneration:(BOOL)arg1 ;
-(void)submit:(id)arg0 ;
-(void)submitBlock:(id)arg0 ;
-(void)updateModelObjects:(id)arg0 destination:(NSUInteger)arg1 ;


@end


#endif