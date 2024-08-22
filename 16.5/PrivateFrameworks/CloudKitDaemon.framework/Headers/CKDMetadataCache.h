// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDMETADATACACHE_H
#define CKDMETADATACACHE_H

@protocol OS_dispatch_queue;


#import "CKDSQLiteCache.h"

@interface CKDMetadataCache : CKDSQLiteCache

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // ivar: _cacheQueue


+(id)cacheDatabaseSchema;
+(id)dbFileName;
+(id)sharedCache;
-(id)appContainerAccountMetadataForAppContainerAccountTuple:(id)arg0 ;
-(id)applicationMetadataForApplicationID:(id)arg0 ;
-(id)cachedDSIDForAccountID:(id)arg0 ;
-(id)containerServerInfoForContainerID:(id)arg0 accountID:(id)arg1 ;
-(id)dateOfLastTokenUpdate;
-(id)globalConfiguration;
-(id)initWithCacheDir:(id)arg0 ;
-(id)inlock_applicationMetadataForApplicationID:(id)arg0 ;
-(id)inlock_containerServerInfoForContainerID:(id)arg0 accountID:(id)arg1 ;
-(id)knownAppContainerAccountTuples;
-(id)knownAppContainerAccountTuplesForAccountID:(id)arg0 ;
-(id)knownAppContainerTuples;
-(id)knownApplicationIDs;
-(id)knownContainerizedApplicationIDs;
-(id)publicKeyOfType:(id)arg0 withIdentifier:(id)arg1 ;
-(id)pushTokenForAppContainerAccountTuple:(id)arg0 filterOldTokens:(BOOL)arg1 ;
-(void)expungeAllData;
-(void)expungeDataForAccountID:(id)arg0 ;
-(void)expungeOldData;
-(void)expungeStaleAccountIDs;
-(void)inlock_expungeDataForAccountID:(id)arg0 ;
-(void)inlock_setDateOfLastTokenUpdate:(id)arg0 ;
-(void)removeContainerID:(id)arg0 ;
-(void)removeKnownApplicationID:(id)arg0 ;
-(void)setAppContainerAccountMetadata:(id)arg0 forAppContainerAccountTuple:(id)arg1 ;
-(void)setApplicationMetadata:(id)arg0 forApplicationID:(id)arg1 ;
-(void)setCachedDSID:(id)arg0 forAccountID:(id)arg1 ;
-(void)setContainerServerInfo:(id)arg0 forContainerID:(id)arg1 accountID:(id)arg2 ;
-(void)setDateOfLastTokenUpdate:(id)arg0 ;
-(void)setGlobalConfiguration:(id)arg0 ;
-(void)setPublicKey:(id)arg0 ofType:(id)arg1 withIdentifier:(id)arg2 ;
-(void)setPushToken:(id)arg0 forAppContainerAccountTuple:(id)arg1 ;
-(void)willCreateDatabase;


@end


#endif