// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCSTORE_H
#define HDCLOUDSYNCSTORE_H

@class NSString, HDSharingPredicate, NSUUID;
@protocol NSCopying, HDSyncStore;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDCloudSyncShardPredicate.h"

@interface HDCloudSyncStore : NSObject <NSCopying, HDSyncStore>

 {
    NSInteger _syncProvenance;
    NSInteger _syncEpoch;
    int _syncProtocolVersion;
}


@property (readonly, nonatomic) BOOL canPush; // ivar: _canPush
@property (readonly, copy, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *ownerIdentifier; // ivar: _ownerIdentifier
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) int protocolVersion;
@property (readonly, copy, nonatomic) HDCloudSyncShardPredicate *shardPredicate; // ivar: _shardPredicate
@property (readonly, copy, nonatomic) NSString *sharingIdentifier; // ivar: _sharingIdentifier
@property (readonly, nonatomic) HDSharingPredicate *sharingPredicate; // ivar: _sharingPredicate
@property (readonly, copy, nonatomic) NSUUID *storeIdentifier; // ivar: _storeIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsRebase;
@property (readonly) NSInteger syncStoreType;
@property (readonly, nonatomic) BOOL syncTombstonesOnly; // ivar: _syncTombstonesOnly


+(id)createOrUpdateShardStoresForProfile:(id)arg0 throughDate:(id)arg1 syncCircleName:(id)arg2 ownerIdentifier:(id)arg3 containerIdentifier:(id)arg4 error:(*id)arg5 ;
+(id)shardPredicatesForProfile:(id)arg0 syncCircleName:(id)arg1 ownerIdentifier:(id)arg2 containerIdentifier:(id)arg3 currentDate:(id)arg4 error:(*id)arg5 ;
+(id)syncStoreForProfile:(id)arg0 storeIdentifier:(id)arg1 syncCircleName:(id)arg2 ownerIdentifier:(id)arg3 containerIdentifier:(id)arg4 error:(*id)arg5 ;
+(void)samplesDeletedInProfile:(id)arg0 byUser:(BOOL)arg1 intervals:(id)arg2 ;
-(BOOL)canRecieveSyncObjectsForEntityClass:(Class)arg0 ;
-(BOOL)clearAllSyncAnchorsWithError:(*id)arg0 ;
-(BOOL)enforceSyncEntityOrdering;
-(BOOL)persistState:(id)arg0 error:(*id)arg1 ;
-(BOOL)replaceFrozenAnchorMap:(id)arg0 updateDate:(id)arg1 error:(*id)arg2 ;
-(BOOL)replacePersistedAnchorMap:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetReceivedSyncAnchorMapWithError:(*id)arg0 ;
-(BOOL)shouldContinueAfterAnchorValidationError:(id)arg0 ;
-(BOOL)shouldEnforceSequenceOrdering;
-(BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)arg0 ;
-(NSInteger)expectedSequenceNumberForSyncEntityClass:(Class)arg0 ;
-(NSInteger)syncEpoch;
-(NSInteger)syncProvenance;
-(id)_syncAnchorMapByStrippingBlockedEntities:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)databaseIdentifier;
-(id)getPersistedAnchorMapWithError:(*id)arg0 ;
-(id)orderedSyncEntities;
-(id)persistedStateWithError:(*id)arg0 ;
-(id)primaryOrderedSyncEntities;
-(id)receivedSyncAnchorMapWithError:(*id)arg0 ;
-(id)syncEntityDependenciesForSyncEntity:(Class)arg0 ;
-(id)syncStoreDefaultSourceBundleIdentifier;
-(id)syncStoreForEpoch:(NSInteger)arg0 ;
-(id)syncStoreForProtocolVersion:(int)arg0 ;
-(id)syncStoreForTombstoneSyncOnly:(BOOL)arg0 ;
-(id)syncStoreIdentifier;
-(void)setExpectedSequenceNumber:(NSInteger)arg0 forSyncEntityClass:(Class)arg1 ;


@end


#endif