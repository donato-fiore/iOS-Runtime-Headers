// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLENGINESCOPESTORAGE_H
#define CPLENGINESCOPESTORAGE_H

@class NSMutableSet, NSString;
@protocol CPLAbstractObject;


#import "CPLEngineStorage.h"
#import "_CPLEngineScopeCache.h"
#import "CPLPlatformObject.h"

@interface CPLEngineScopeStorage : CPLEngineStorage <CPLAbstractObject>

 {
    _CPLEngineScopeCache *_scopeCache;
    NSMutableSet *_scopeIdentifiersExcludedFromMingling;
    NSMutableSet *_scopeIdentifiersManuallyExcludedFromMingling;
    BOOL _shouldResetGlobalsForMainScope;
    BOOL _scheduleATransportUpdate;
    BOOL _scheduleAScopeUpdate;
    BOOL _schedulePushHighPriorityToTransport;
    BOOL _schedulePushToTransport;
    BOOL _schedulePullFromTransport;
    BOOL _schedulePullFromClient;
    BOOL _shouldChangeSyncManagerPriorityBoost;
    BOOL _syncManagerPriorityBoost;
    BOOL _someScopeMightHaveToBePulledByClient;
    BOOL _clearSomeScopeMightHaveToBePulledByClient;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasStagedSyncAnchors;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


-(BOOL)_forceClientToPullScopeIfNecessary:(id)arg0 error:(*id)arg1 ;
-(BOOL)_handledDisabledFeaturesForScopeIfNecessary:(id)arg0 type:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)_resetCompleteSyncStateForScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)_resetLocalSyncStateForScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setScopeType:(NSInteger)arg0 forScope:(id)arg1 error:(*id)arg2 ;
-(BOOL)activateScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)clearTransportGroupsForScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)clientAcknowledegedScopeChanges:(id)arg0 error:(*id)arg1 ;
-(BOOL)commitSyncAnchorForScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)deactivateScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteScopeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)didDropSomeRecordsForScope:(id)arg0 ;
-(BOOL)disableInitialQueriesForScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)disablePrimaryScopeWithError:(*id)arg0 ;
-(BOOL)discardStagedSyncAnchorForScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)discardStagedSyncAnchorWithScopeFilter:(id)arg0 error:(*id)arg1 ;
-(BOOL)doScopesNeedMetadataSync:(id)arg0 ;
-(BOOL)doesScopeAllowCourtesyMingling:(id)arg0 ;
-(BOOL)doesScopeNeedToBePulledByClient:(id)arg0 ;
-(BOOL)doesScopeNeedToPullChangesFromTransport:(id)arg0 ;
-(BOOL)doesScopeNeedToPushChangesToTransport:(id)arg0 ;
-(BOOL)doesScopeNeedToUpdateTransport:(id)arg0 ;
-(BOOL)doesScopeSupportToBePulledByClient:(id)arg0 ;
-(BOOL)enablePrimaryScopeWithError:(*id)arg0 ;
-(BOOL)hasFinishedAFullSyncForScope:(id)arg0 ;
-(BOOL)hasFinishedInitialSyncForScope:(id)arg0 ;
-(BOOL)hasScopeFetchedInitialSyncAnchor:(id)arg0 ;
-(BOOL)hasScopesNeedingToPullChangesFromTransport;
-(BOOL)hasScopesNeedingToPushChangesToTransport;
-(BOOL)hasScopesNeedingToPushHighPriorityChangesToTransport;
-(BOOL)hasScopesNeedingToUpdateTransport;
-(BOOL)hasStagedSyncAnchorForScope:(id)arg0 ;
-(BOOL)markInitialQueryIsDoneForRecordsOfClass:(Class)arg0 forScope:(id)arg1 error:(*id)arg2 ;
-(BOOL)openWithError:(*id)arg0 ;
-(BOOL)resetCloudRecordsForScopeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetCompleteSyncStateForScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetCompleteSyncStateIncludingIDMappingForScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetInitialSyncAnchorForScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetLocalRecordsForScopeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetLocalSyncStateForScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetStableRecordsForScopeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetSyncAnchorForScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetSyncStateForScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)setAllScopesHasChangesToPullFromTransportWithError:(*id)arg0 ;
-(BOOL)setCloudScopeIndexOnChange:(id)arg0 ;
-(BOOL)setDeleteDate:(id)arg0 forScope:(id)arg1 error:(*id)arg2 ;
-(BOOL)setDidDropSomeRecordsForScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)setDisabledDate:(id)arg0 forScope:(id)arg1 error:(*id)arg2 ;
-(BOOL)setHasFetchedInitialSyncAnchor:(BOOL)arg0 forScope:(id)arg1 error:(*id)arg2 ;
-(BOOL)setInitialSyncAnchor:(id)arg0 forScope:(id)arg1 error:(*id)arg2 ;
-(BOOL)setLocalScopeIndexOnChange:(id)arg0 ;
-(BOOL)setPullFromTransportExpirationInterval:(CGFloat)arg0 scope:(id)arg1 error:(*id)arg2 ;
-(BOOL)setScope:(id)arg0 hasCompletedPullFromTransportTask:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)setScope:(id)arg0 hasCompletedPushToTransportTask:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)setScope:(id)arg0 hasCompletedTransportUpdate:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)setScopeHasChangesToPullFromTransport:(id)arg0 error:(*id)arg1 ;
-(BOOL)setScopeHasChangesToPushToTransport:(id)arg0 error:(*id)arg1 ;
-(BOOL)setScopeNeedsToBePulledByClient:(id)arg0 error:(*id)arg1 ;
-(BOOL)setScopeNeedsToUpdateTransport:(id)arg0 error:(*id)arg1 ;
-(BOOL)setScopeNeedsUpdateFromTransport:(id)arg0 error:(*id)arg1 ;
-(BOOL)setSyncAnchor:(id)arg0 forScope:(id)arg1 error:(*id)arg2 ;
-(BOOL)setTransportScope:(id)arg0 forScope:(id)arg1 error:(*id)arg2 ;
-(BOOL)setValue:(BOOL)arg0 forFlag:(NSInteger)arg1 forScope:(id)arg2 error:(*id)arg3 ;
-(BOOL)setupAnchorResetTransportGroupForScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)setupInitialSyncTransportGroupsForScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)setupResetSyncTransportGroupForScope:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldAutoactivateScopeWithIdentifier:(id)arg0 scopeType:(NSInteger)arg1 ;
-(BOOL)storeEstimatedSize:(NSUInteger)arg0 estimatedAssetCount:(NSUInteger)arg1 forScope:(id)arg2 error:(*id)arg3 ;
-(BOOL)storeLastDateOfClearedPushRepository:(id)arg0 forScope:(id)arg1 error:(*id)arg2 ;
-(BOOL)storeScopeChange:(id)arg0 forScope:(id)arg1 error:(*id)arg2 ;
-(BOOL)storeScopeListSyncAnchor:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeSupportedFeatureVersionInLastSync:(NSUInteger)arg0 forScope:(id)arg1 error:(*id)arg2 ;
-(BOOL)storeTransientSyncAnchor:(id)arg0 forScope:(id)arg1 error:(*id)arg2 ;
-(BOOL)supportedFeatureVersionIsMostRecentForScope:(id)arg0 ;
-(BOOL)updateFlags:(id)arg0 forScope:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateInitialSyncTransportGroupEstimatedSize:(NSUInteger)arg0 assetCount:(NSUInteger)arg1 forScope:(id)arg2 error:(*id)arg3 ;
-(BOOL)updateScopeWithChange:(id)arg0 error:(*id)arg1 ;
-(BOOL)upgradeScopesWithNewLibraryOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)valueForFlag:(NSInteger)arg0 forScope:(id)arg1 ;
-(Class)classOfRecordsForInitialQueryForScope:(id)arg0 ;
-(NSInteger)indexForCloudScopeIdentifier:(id)arg0 ;
-(NSInteger)indexForLocalScopeIdentifier:(id)arg0 ;
-(NSInteger)pullFromTransportTaskForScope:(id)arg0 ;
-(NSInteger)pushToTransportTaskForScope:(id)arg0 ;
-(NSInteger)stableScopeIndexForScopeIdentifier:(id)arg0 ;
-(NSInteger)transportUpdateTaskForScope:(id)arg0 ;
-(NSUInteger)_indexOfCurrentClassForInitialQueriesForScope:(id)arg0 ;
-(NSUInteger)estimatedAssetCountForScope:(id)arg0 ;
-(NSUInteger)estimatedSizeForScope:(id)arg0 ;
-(NSUInteger)scopeType;
-(NSUInteger)supportedFeatureVersionInLastSyncForScope:(id)arg0 ;
-(id)_createScopeFromScopeChange:(id)arg0 error:(*id)arg1 ;
-(id)_scopeChangeToBePulledByClientForScope:(id)arg0 ;
-(id)_scopeWithIdentifier:(id)arg0 ;
-(id)_scopeWithStableIndex:(NSInteger)arg0 ;
-(id)allScopeIdentifiersIncludeInactive:(BOOL)arg0 ;
-(id)createScopeWithIdentifier:(id)arg0 scopeType:(NSInteger)arg1 flags:(NSInteger)arg2 transportScope:(id)arg3 error:(*id)arg4 ;
-(id)deleteDateForScope:(id)arg0 ;
-(id)disabledDateForScope:(id)arg0 ;
-(id)downloadTransportGroupForScope:(id)arg0 ;
-(id)enumeratorForScopesIncludeInactive:(BOOL)arg0 ;
-(id)enumeratorForScopesNeedingToPullChangesFromTransport;
-(id)enumeratorForScopesNeedingToPushChangesToTransport;
-(id)enumeratorForScopesNeedingToPushHighPriorityChangesToTransport;
-(id)enumeratorForScopesNeedingToUpdateTransport;
-(id)enumeratorForScopesNeedingUpdateFromTransport;
-(id)filterForExcludedScopeIdentifiers:(id)arg0 ;
-(id)filterForIncludedScopeIdentifiers:(id)arg0 ;
-(id)filterOnScopesAllowingMingling;
-(id)flagsForScope:(id)arg0 ;
-(id)initWithEngineStore:(id)arg0 name:(id)arg1 ;
-(id)initialSyncAnchorForScope:(id)arg0 ;
-(id)lastDateOfClearedPushRepositoryForScope:(id)arg0 ;
-(id)lastDateOfCompletedPullFromTransportForScope:(id)arg0 ;
-(id)primaryScope;
-(id)remainingClassesForInitialQueryForScope:(id)arg0 ;
-(id)scopeChangeForScope:(id)arg0 ;
-(id)scopeChangesNeedingToBePulledByClientWithMaximumCount:(NSUInteger)arg0 ;
-(id)scopeIdentifierForCloudScopeIndex:(NSInteger)arg0 ;
-(id)scopeIdentifierForLocalScopeIndex:(NSInteger)arg0 ;
-(id)scopeListSyncAnchor;
-(id)scopeWithCloudScopeIndex:(NSInteger)arg0 ;
-(id)scopeWithIdentifier:(id)arg0 ;
-(id)scopeWithLocalScopeIndex:(NSInteger)arg0 ;
-(id)scopedIdentifierForCloudScopedIdentifier:(id)arg0 ;
-(id)scopedIdentifierForLocalScopedIdentifier:(id)arg0 ;
-(id)status;
-(id)statusDictionaryForScope:(id)arg0 ;
-(id)syncAnchorForScope:(id)arg0 ;
-(id)transientSyncAnchorForScope:(id)arg0 ;
-(id)transportScopeForScope:(id)arg0 ;
-(id)uploadTransportGroupForScope:(id)arg0 ;
-(id)validCloudScopeIndexes;
-(id)validLocalScopeIndexes;
-(void)_cacheScope:(id)arg0 ;
-(void)_checkSyncManagerPriorityBoost;
-(void)_clearScopeCache;
-(void)_forceSyncManagerPriorityBoost;
-(void)_resetGlobalsForMainScope;
-(void)excludeScopeIdentifierFromMingling:(id)arg0 ;
-(void)forceExcludeScopeIdentifierFromMingling:(id)arg0 ;
-(void)forceIncludeScopeIdentifierInMingling:(id)arg0 ;
-(void)includeScopeIdentifierInMingling:(id)arg0 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;


@end


#endif