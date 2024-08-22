// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSERVEROBJECTDATABASE_H
#define MPSERVEROBJECTDATABASE_H

@class MSVSQLDatabase, NSHashTable, NSString;
@protocol MPMediaKitEntityRelationshipPayloadProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPServerObjectDatabase : NSObject <MPMediaKitEntityRelationshipPayloadProvider>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    MSVSQLDatabase *_database;
    NSHashTable *_observers;
    os_unfair_recursive_lock_s _observersLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)prefersInMemoryDatabase;
+(id)sharedServerObjectDatabase;
+(void)setPrefersInMemoryDatabase:(BOOL)arg0 ;
-(BOOL)_createDatabaseSchema;
-(BOOL)importAssetsFromRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldRenewPlaybackAuthorizationTokenForEntityMatchingIdentifierSet:(id)arg0 trustID:(id)arg1 ;
-(id)_assetsMatchingIdentifierSet:(id)arg0 query:(id)arg1 ;
-(id)_hlsAssetMatchingIdentifierSet:(id)arg0 query:(id)arg1 ;
-(id)_initWithDatabaseCreationBlock:(id)arg0 ;
-(id)_modelObjectMatchingIdentifierSet:(id)arg0 propertySet:(id)arg1 ;
-(id)_payloadForIdentifierSet:(id)arg0 outError:(*id)arg1 ;
-(id)assetsMatchingIdentifierSet:(id)arg0 ;
-(id)assetsWithMiniSINFsMatchingIdentifierSet:(id)arg0 ;
-(id)hlsAssetMatchingIdentifierSet:(id)arg0 ;
-(id)importObjectsFromRequest:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)importObjectsFromRequest:(id)arg0 options:(NSUInteger)arg1 trustID:(id)arg2 error:(*id)arg3 ;
-(id)importObjectsFromRequest:(id)arg0 options:(NSUInteger)arg1 trustID:(id)arg2 playActivityFeatureName:(id)arg3 error:(*id)arg4 ;
-(id)modelGenericObjectFromObject:(id)arg0 playbackAuthorizationToken:(id)arg1 ;
-(id)modelObjectMatchingIdentifierSet:(id)arg0 propertySet:(id)arg1 ;
-(id)modelObjectMatchingIdentifierSet:(id)arg0 propertySet:(id)arg1 trustID:(id)arg2 ;
-(id)payloadDataForIdentifierSet:(id)arg0 outError:(*id)arg1 ;
-(id)payloadForRelatedEntityWithIdentifierSet:(id)arg0 ;
-(id)playbackAuthorizationTokenForEntityMatchingIdentifierSet:(id)arg0 trustID:(id)arg1 ;
-(id)relatedIdentifierSetsForParentIdentifierSet:(id)arg0 childKey:(id)arg1 ;
-(id)relatedIdentifierSetsForParentIdentifierSet:(id)arg0 parentVersionHash:(id)arg1 childKey:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)enumerateAssetsMissingSINFsForHashedPersonID:(id)arg0 usingBlock:(id)arg1 ;
-(void)purgeGlideSubscriptionDataForHashedAccoundID:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removePlaybackAuthorizationTokensForTrust:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif