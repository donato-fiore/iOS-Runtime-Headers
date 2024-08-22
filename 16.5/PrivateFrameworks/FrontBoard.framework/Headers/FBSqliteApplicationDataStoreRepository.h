// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSQLITEAPPLICATIONDATASTOREREPOSITORY_H
#define FBSQLITEAPPLICATIONDATASTOREREPOSITORY_H

@class NSURL, BSSqliteDatabaseConnection, NSString;
@protocol FBApplicationDataStoreRepository, OS_dispatch_queue, FBApplicationDataStoreRepositoryDelegate;

#import <Foundation/Foundation.h>


@interface FBSqliteApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository>

 {
    NSURL *_storeURL;
    NSObject<OS_dispatch_queue> *_dbQueue;
    BSSqliteDatabaseConnection *_dbQueue_dbConnection;
    NSUInteger _dbQueue_batchDepth;
    int _dbQueue_firstUnlockToken;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FBApplicationDataStoreRepositoryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_objectRequiresSerialization:(id)arg0 ;
+(id)_generateParameterizedQuery:(id)arg0 forKeyList:(id)arg1 outBindings:(*id)arg2 ;
+(id)_objectForResultRow:(id)arg0 index:(NSUInteger)arg1 ;
-(BOOL)_dbQueue_containsKey:(id)arg0 forApplication:(id)arg1 ;
-(BOOL)_dbQueue_databaseIntegrityCheck;
-(BOOL)_dbQueue_executeStatement:(id)arg0 bindings:(id)arg1 resultRowHandler:(id)arg2 ;
// -(BOOL)_dbQueue_executeStatement:(id)arg0 bindings:(id)arg1 resultRowHandler:(id)arg2 error:(unk)arg3  ;
-(BOOL)_dbQueue_loadDatabase;
-(BOOL)_dbQueue_truncateDamagedDatabase;
-(BOOL)_dbQueue_tryPreserveDamagedDatabase;
-(BOOL)_inAlternateSystemApp;
-(BOOL)_isEligibleForSaving:(id)arg0 ;
-(BOOL)_preserveFileAtURL:(id)arg0 ;
-(BOOL)containsKey:(id)arg0 forApplication:(id)arg1 ;
-(NSInteger)_dbQueue_databaseVersion;
-(id)_dbQueue_applicationIdentifiersWithState;
-(id)_dbQueue_keysForApplication:(id)arg0 ;
-(id)_dbQueue_objectForKey:(id)arg0 forApplication:(id)arg1 ;
-(id)_dbQueue_objectsForKeys:(id)arg0 ;
-(id)_dbQueue_openDatabase;
-(id)allObjectsForKeys:(id)arg0 ;
-(id)applicationIdentifiersWithState;
-(id)initWithStorePath:(id)arg0 ;
-(id)keysForApplication:(id)arg0 ;
-(id)objectForKey:(id)arg0 forApplication:(id)arg1 ;
-(id)urlByAppendingString:(id)arg0 toURL:(id)arg1 ;
-(void)_dbQueue_createTables;
-(void)_dbQueue_load;
-(void)_dbQueue_notifyDelegateOfChangeForKeys:(id)arg0 application:(id)arg1 ;
-(void)_dbQueue_notifyDelegateOfLateLoad;
-(void)_dbQueue_notifyDelegateOfStoreInvalidationForIdentifier:(id)arg0 ;
-(void)_dbQueue_performWithSavepoint:(id)arg0 handler:(id)arg1 ;
-(void)beginBatchedUpdate;
-(void)close;
-(void)dealloc;
-(void)endBatchedUpdate;
-(void)flushSynchronously;
-(void)removeAllObjectsForApplication:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 forApplication:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg0 forApplication:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 forApplication:(id)arg2 ;


@end


#endif