// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDSPICONTAINER_H
#define CKDSPICONTAINER_H

@protocol CKXPCContainerScopedDaemonSPI;


#import "CKDContainer.h"

@interface CKDSPIContainer : CKDContainer <CKXPCContainerScopedDaemonSPI>





-(void)clearAssetCacheWithDatabaseScope:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)clearAuthTokensWithRecordID:(id)arg0 databaseScope:(NSInteger)arg1 ;
-(void)clearCachesForRecordWithRecordID:(id)arg0 databaseScope:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)clearCachesForZoneWithZoneID:(id)arg0 databaseScope:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)clearCachesWithOptions:(NSUInteger)arg0 databaseScope:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)clearContainerFromMetadataCache;
-(void)clearInvalidatedPCSCacheEntriesIfNeeded;
-(void)clearPILSCacheForLookupInfos:(id)arg0 ;
-(void)clearRecordCacheWithDatabaseScope:(NSInteger)arg0 ;
-(void)countAssetCacheItemsWithDatabaseScope:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)currentDeviceIDWithCompletionHandler:(id)arg0 ;
-(void)currentUserBoundaryKeyWithCompletionHandler:(id)arg0 ;
-(void)decryptPersonalInfoOnShare:(id)arg0 completionHandler:(id)arg1 ;
-(void)deviceCountWithCompletionHandler:(id)arg0 ;
-(void)dropDetachedContainersWithCompletionHandler:(id)arg0 ;
-(void)fetchPCSFromCacheForShareWithRecordID:(id)arg0 databaseScope:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)fetchPCSFromCacheForZoneWithZoneID:(id)arg0 databaseScope:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)frameworkCachesDirectoryWithCompletionHandler:(id)arg0 ;
-(void)getNewWebSharingIdentityDataWithCompletionHandler:(id)arg0 ;
-(void)getNewWebSharingIdentityWithCompletionHandler:(id)arg0 ;
-(void)getOutstandingOperationCountWithCompletionHandler:(id)arg0 ;
-(void)getPCSDiagnosticsForZonesWithCompletionHandler:(id)arg0 ;
-(void)getRecordPCSDiagnosticsForZonesWithCompletionHandler:(id)arg0 ;
-(void)performAggregateZonePCSOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performArchiveRecordsOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performCompleteParticipantVettingOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performDeserializeRecordModificationsOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchArchivedRecordsOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchMergeableDeltaMetadataOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchMergeableDeltasOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchRecordVersionsOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchRegisteredBundleIDsOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchShareParticipantKeyOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchUserQuotaOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performFetchWhitelistedBundleIDsOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performInitiateParticipantVettingOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performMarkAssetBrokenOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performModifyRecordAccessOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performModifyWebSharingOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performPublishAssetsOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performRepairAssetsOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performRepairZonePCSOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performReplaceMergeableDeltasOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performSerializeRecordModificationsOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)performUploadMergeableDeltasOperation:(id)arg0 clientOperationCallbackProxy:(id)arg1 withBlock:(id)arg2 ;
-(void)representativeDataclassEnabledWithCompletionHandler:(id)arg0 ;
-(void)resetAllApplicationPermissionsWithCompletionHandler:(id)arg0 ;
-(void)serverEnvironmentWithCompletionHandler:(id)arg0 ;
-(void)serverPreferredPushEnvironmentWithCompletionHandler:(id)arg0 ;
-(void)setApplicationPermission:(NSUInteger)arg0 enabled:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)setFakeError:(id)arg0 forNextRequestOfClassName:(id)arg1 ;
-(void)setFakeResponseOperationResult:(id)arg0 forNextRequestOfClassName:(id)arg1 forItemID:(id)arg2 withLifetime:(int)arg3 ;
-(void)showAssetCacheWithDatabaseScope:(NSInteger)arg0 ;
-(void)statusGroupsForApplicationPermission:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)tossConfigWithCompletionHandler:(id)arg0 ;


@end


#endif