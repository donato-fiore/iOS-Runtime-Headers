// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCODESIGNINGMAPPING_H
#define MCMCODESIGNINGMAPPING_H

@protocol MCMChildParentMapCache, MCMManagedPath, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MCMSQLiteDB.h"
#import "MCMUserIdentityCache.h"

@interface MCMCodeSigningMapping : NSObject

@property (readonly, nonatomic) NSObject<MCMChildParentMapCache> *childParentMapCache; // ivar: _childParentMapCache
@property (retain, nonatomic) MCMSQLiteDB *codeSigningMappingDB; // ivar: _codeSigningMappingDB
@property (readonly, nonatomic) NSObject<MCMManagedPath> *library; // ivar: _library
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // ivar: _userIdentityCache


+(id)_moveDBIfNeededFromURL:(id)arg0 error:(*id)arg1 ;
+(id)codeSignMappingWithError:(*id)arg0 ;
-(BOOL)_onQueue_addGroupIdentifier:(id)arg0 forIdentifier:(id)arg1 containerClass:(NSUInteger)arg2 error:(*id)arg3 reconcileHandler:(id)arg4 ;
-(BOOL)_onQueue_identifierHasCallerRegisteredEntitlements:(id)arg0 ;
-(BOOL)_onQueue_invalidateCodeSigningInfoForIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)_onQueue_processCodeSigningInfo:(id)arg0 identifier:(id)arg1 options:(id)arg2 oldEntitlements:(id)arg3 error:(*id)arg4 reconcileHandler:(id)arg5 ;
-(BOOL)_onQueue_registerKernelProvidedReferencesForIdentifier:(id)arg0 withAppGroupContainers:(id)arg1 systemGroupContainers:(id)arg2 error:(*NSUInteger)arg3 ;
-(BOOL)_onQueue_removeAllAdvanceCopiesWithError:(*id)arg0 ;
-(BOOL)_onQueue_removeGroupIdentifier:(id)arg0 forIdentifier:(id)arg1 containerClass:(NSUInteger)arg2 error:(*id)arg3 reconcileHandler:(id)arg4 ;
-(BOOL)_onqueue_enumerateOwnersAndGroupsWithGroupClass:(NSUInteger)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)addGroupIdentifier:(id)arg0 forIdentifier:(id)arg1 containerClass:(NSUInteger)arg2 error:(*id)arg3 reconcileHandler:(id)arg4 ;
-(BOOL)enumerateOwnersAndGroupsWithGroupClass:(NSUInteger)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)identifierHasCallerRegisteredEntitlements:(id)arg0 ;
-(BOOL)identifierHasSystemContainer:(id)arg0 ;
-(BOOL)invalidateCodeSigningInfoForIdentifier:(id)arg0 withError:(*id)arg1 ;
-(BOOL)invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg0 withError:(*id)arg1 ;
-(BOOL)registerKernelProvidedReferencesForIdentifier:(id)arg0 withAppGroupContainers:(id)arg1 systemGroupContainers:(id)arg2 error:(*NSUInteger)arg3 ;
-(BOOL)removeAllAdvanceCopiesWithError:(*id)arg0 ;
-(BOOL)removeGroupIdentifier:(id)arg0 forIdentifier:(id)arg1 containerClass:(NSUInteger)arg2 error:(*id)arg3 reconcileHandler:(id)arg4 ;
-(NSUInteger)_onQueue_dataContainerTypeForIdentifier:(id)arg0 ;
-(NSUInteger)dataContainerTypeForIdentifier:(id)arg0 ;
-(NSUInteger)invalidateCodeSigningInfoForAppsWithoutDataContainer;
-(id)_codeSigningInfoForCodeSigningEntry:(id)arg0 externalRequest:(BOOL)arg1 ;
-(id)_entitlementsFromCodeSigningEntry:(id)arg0 ;
-(id)_onQueue_codeSigningEntryForIdentifier:(id)arg0 withError:(*id)arg1 ;
-(id)_onQueue_codeSigningInfoForIdentifier:(id)arg0 externalRequest:(BOOL)arg1 ;
-(id)_onQueue_copyReferenceCountSetForContainerClass:(NSUInteger)arg0 ;
-(id)_onQueue_entitlementsForIdentifier:(id)arg0 ;
-(id)_onQueue_identifiersWithError:(*id)arg0 ;
-(id)_onQueue_invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg0 ;
-(id)_onQueue_removeReferenceForGroupIdentifiers:(id)arg0 containerClass:(NSUInteger)arg1 ;
-(id)_onQueue_setCodeSigningDictionaryValues:(id)arg0 forIdentifiers:(id)arg1 ;
-(id)_readCodeSigningMappingFromDiskAtURL:(id)arg0 ;
-(id)appGroupIdentifiersForIdentifier:(id)arg0 ;
-(id)codeSigningEntryForIdentifier:(id)arg0 withError:(*id)arg1 ;
-(id)copyReferenceCountSetForContainerClass:(NSUInteger)arg0 ;
-(id)entitlementsForIdentifier:(id)arg0 ;
-(id)getCodeSigningInfoForIdentifier:(id)arg0 ;
-(id)groupContainerIdentifiersAssociatedWithIdentifier:(id)arg0 containerClass:(NSUInteger)arg1 ;
-(id)identifiersWithError:(*id)arg0 ;
-(id)initWithUserIdentityCache:(id)arg0 queue:(id)arg1 mappingDB:(id)arg2 childParentMapCache:(id)arg3 library:(id)arg4 ;
-(id)processCallerRegisteredEntitlements:(id)arg0 identifier:(id)arg1 error:(*id)arg2 ;
-(id)processCodeSigningInfo:(id)arg0 identifier:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)removeCodeSigningDictionaryForIdentifier:(id)arg0 ;
-(id)systemGroupIdentifiersForIdentifier:(id)arg0 ;
-(void)_onQueue_handleChangeFromOldGroupContainerIds:(id)arg0 toNewGroupContainerIds:(id)arg1 containerClass:(NSUInteger)arg2 reconcileHandler:(id)arg3 ;
-(void)_onQueue_iterateGroupIdsWithKey:(id)arg0 fallBackKey:(id)arg1 forAllIdentifiersUsingBlock:(id)arg2 ;
-(void)_onQueue_migrateAppGroupIdsFromDataContainersToFileUsingContainers:(id)arg0 ;
-(void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainerToMappingWithInfo:(id)arg0 identifier:(id)arg1 containerClass:(NSUInteger)arg2 ;
-(void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainersToMappingWithContainersLegacy:(id)arg0 containerClass:(NSUInteger)arg1 ;
-(void)_onQueue_migrateDataFromLegacyEntitlementsFileToCodeSigningFile;
-(void)_onQueue_migrateFromMappingFileToDBIfNecessary;
-(void)_onQueue_reconcileSystemContainersWithContext:(id)arg0 ;
-(void)migrateAppGroupIdsFromDataContainersToFile;
-(void)migrateCachedCodeSigningInfoFromBundleContainersToMapping;
-(void)performAllCodeSigningMigrationAndReconciliationWithContext:(id)arg0 ;


@end


#endif