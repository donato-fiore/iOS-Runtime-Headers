// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSOURCEMANAGER_H
#define HDSOURCEMANAGER_H

@protocol HDProfileReadyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDDatabaseValueCache.h"

@interface HDSourceManager : NSObject <HDProfileReadyObserver>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDDatabaseValueCache *_sourceEntityByBundleIdentifierCache;
    HDDatabaseValueCache *_clientSourceCache;
    HDDatabaseValueCache *_localSourceForBundleIdentifierCache;
    HDDatabaseValueCache *_localSourceForSourceID;
}




-(BOOL)_deleteSourcesWithUUIDs:(id)arg0 localSourceEntityCacheKey:(id)arg1 deleteSamples:(BOOL)arg2 transaction:(id)arg3 error:(*id)arg4 ;
-(BOOL)createSourcesWithCodables:(id)arg0 provenance:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)deleteSourceWithBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)setLocalDeviceSourceUUID:(id)arg0 bundleIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateCurrentDeviceNameWithError:(*id)arg0 ;
-(id)_createSourceEntityForLocalDeviceWithError:(*id)arg0 ;
-(id)allSourcesForBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)allSourcesWithError:(*id)arg0 ;
-(id)allWatchSourcesWithError:(*id)arg0 ;
-(id)clientSourceForBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)clientSourceForPersistentID:(id)arg0 error:(*id)arg1 ;
-(id)clientSourceForSourceEntities:(id)arg0 error:(*id)arg1 ;
-(id)clientSourceForSourceEntity:(id)arg0 error:(*id)arg1 ;
-(id)clientSourceForUUID:(id)arg0 error:(*id)arg1 ;
-(id)clientSourcesForSourceIDs:(id)arg0 error:(*id)arg1 ;
-(id)createOrUpdateSourceForClient:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithProfile:(id)arg0 ;
-(id)insertCodableSource:(id)arg0 provenance:(NSInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
-(id)insertSourceWithBundleIdentifier:(id)arg0 owningAppBundleIdentifier:(id)arg1 UUID:(id)arg2 name:(id)arg3 options:(NSUInteger)arg4 isCurrentDevice:(BOOL)arg5 productType:(id)arg6 modificationDate:(id)arg7 provenance:(NSInteger)arg8 error:(*id)arg9 ;
-(id)localDeviceSourceWithError:(*id)arg0 ;
-(id)localSourceForBundleIdentifier:(id)arg0 copyIfNecessary:(BOOL)arg1 error:(*id)arg2 ;
-(id)localSourceForBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)localSourceForSourceID:(id)arg0 copyIfNecessary:(BOOL)arg1 error:(*id)arg2 ;
-(id)privateSourceForClinicalAccountIdentifier:(id)arg0 provenance:(NSInteger)arg1 createOrUpdateIfNecessary:(BOOL)arg2 nameOnCreateOrUpdate:(id)arg3 error:(*id)arg4 ;
-(id)publicSourceForClinicalExternalIdentifier:(id)arg0 provenance:(NSInteger)arg1 createOrUpdateIfNecessary:(BOOL)arg2 nameOnCreateOrUpdate:(id)arg3 error:(*id)arg4 ;
-(id)sourceEntityForClientSource:(id)arg0 createOrUpdateIfNecessary:(BOOL)arg1 error:(*id)arg2 ;
-(id)sourceForAppleDeviceWithUUID:(id)arg0 identifier:(id)arg1 name:(id)arg2 productType:(id)arg3 createIfNecessary:(BOOL)arg4 error:(*id)arg5 ;
-(id)sourceForApplicationIdentifier:(id)arg0 createOrUpdateIfNecessary:(BOOL)arg1 entitlements:(id)arg2 name:(id)arg3 error:(*id)arg4 ;
-(id)sourceForClient:(id)arg0 error:(*id)arg1 ;
-(id)sourceForCodableSource:(id)arg0 provenance:(NSInteger)arg1 createIfNecessary:(BOOL)arg2 isDeleted:(*BOOL)arg3 error:(*id)arg4 ;
-(id)sourceUUIDForBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)uncachedClientSourceForPersistentID:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(void)_applicationsUninstalledNotification:(id)arg0 ;
-(void)dealloc;
-(void)profileDidBecomeReady:(id)arg0 ;


@end


#endif