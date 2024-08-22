// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRICKNATIVEARTIFACTPROVIDER_H
#define TRICKNATIVEARTIFACTPROVIDER_H

@class NSString, CKContainer, CKRecordZoneID;
@protocol TRIArtifactProvider, TRIDateProviding, TRINamespaceDescriptorProviding;

#import <Foundation/Foundation.h>

#import "TRICKQueryLog.h"

@interface TRICKNativeArtifactProvider : NSObject <TRIArtifactProvider>



@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) CKContainer *container; // ivar: _container
@property (readonly, nonatomic) NSObject<TRIDateProviding> *dateProvider; // ivar: _dateProvider
@property (readonly, nonatomic) NSObject<TRINamespaceDescriptorProviding> *namespaceDescriptorProvider; // ivar: _namespaceDescriptorProvider
@property (readonly, nonatomic) TRICKQueryLog *queryLog; // ivar: _queryLog
@property (readonly, nonatomic) NSString *teamId; // ivar: _teamId
@property (readonly, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID


+(BOOL)isActivityDeferralError:(id)arg0 ;
+(id)cloudkitIdentifierForContainer:(int)arg0 ;
+(id)containerForIdentifier:(id)arg0 serverContext:(id)arg1 ;
+(id)fetchRetryDateFromErrorAndOptions:(id)arg0 options:(id)arg1 ;
+(id)mockSQLiteContainerWithIdentifier:(id)arg0 serverContext:(id)arg1 failureInjectionDelegate:(id)arg2 ;
+(id)providerForContainer:(int)arg0 teamId:(id)arg1 bundleId:(id)arg2 dateProvider:(id)arg3 namespaceDescriptorProvider:(id)arg4 serverContext:(id)arg5 ;
+(id)recordZoneForContainerIdentifier:(id)arg0 teamId:(id)arg1 ;
+(int)containerFromCkContainer:(id)arg0 ;
-(id)configurationFromOptions:(id)arg0 ;
// -(id)fetchAssetsWithIndexes:(id)arg0 fromTreatmentWithRecordId:(id)arg1 options:(id)arg2 progress:(id)arg3 completion:(unk)arg4  ;
// -(id)fetchAssetsWithRecordIds:(id)arg0 options:(id)arg1 perRecordProgress:(id)arg2 perRecordCompletionBlockOnSuccess:(unk)arg3 completion:(id)arg4  ;
// -(id)fetchDiffSourceRecordIdsWithTargetAssetIds:(id)arg0 isAcceptableSourceAssetId:(id)arg1 options:(unk)arg2 completion:(id)arg3  ;
// -(id)fetchDiffsWithRecordIds:(id)arg0 options:(id)arg1 perRecordProgress:(id)arg2 perRecordCompletionBlockOnSuccess:(unk)arg3 completion:(id)arg4  ;
-(id)fetchRecordIdsForAssetsWithIds:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(id)fetchTreatmentWithId:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(id)initWithCloudKitContainer:(id)arg0 zoneId:(id)arg1 teamId:(id)arg2 bundleId:(id)arg3 dateProvider:(id)arg4 namespaceDescriptorProvider:(id)arg5 ;
// -(id)queryOperationForRecordType:(id)arg0 predicate:(id)arg1 options:(id)arg2 recordFetchedBlock:(id)arg3 queryCompletionBlock:(unk)arg4  ;
// -(id)queryOperationForRecordType:(id)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 options:(id)arg3 recordFetchedBlock:(id)arg4 queryCompletionBlock:(unk)arg5  ;
// -(id)queryOperationWithCursor:(id)arg0 options:(id)arg1 recordFetchedBlock:(id)arg2 queryCompletionBlock:(unk)arg3  ;
-(void)_fetchExperimentWithExperimentId:(id)arg0 deploymentId:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)_fetchExperimentsWithCursor:(id)arg0 withNamespaceNames:(id)arg1 sinceDate:(id)arg2 fetchRollbacksOnly:(BOOL)arg3 options:(id)arg4 resultsHandler:(id)arg5 ;
-(void)_fetchNotificationsWithQueryType:(NSUInteger)arg0 withCursor:(id)arg1 withNamespaceNames:(id)arg2 sinceDate:(id)arg3 options:(id)arg4 resultsHandler:(id)arg5 ;
-(void)_fetchRecordIdsForAssetsWithIds:(id)arg0 options:(id)arg1 cursor:(id)arg2 cancelableOp:(id)arg3 resultBuffer:(id)arg4 completion:(id)arg5 ;
-(void)_fetchRolloutNotificationWithRolloutId:(id)arg0 deploymentId:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)_fetchRolloutNotificationsWithCursor:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)_fetchRolloutNotificationsWithCursor:(id)arg0 options:(id)arg1 sinceDate:(id)arg2 namespaceNames:(id)arg3 resultsHandler:(id)arg4 ;
-(void)fetchExperimentNotificationsWithNamespaceNames:(id)arg0 rollbacksOnly:(BOOL)arg1 lastFetchDateOverride:(id)arg2 options:(id)arg3 completion:(id)arg4 ;
-(void)fetchExperimentWithExperimentDeployment:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)fetchExperimentWithLatestDeploymentForExperimentId:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)fetchFactorPackSetWithId:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)fetchRolloutNotificationWithDeployment:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)fetchRolloutNotificationWithLatestDeploymentForRolloutId:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)fetchRolloutNotificationsDateAscendingWithOptions:(id)arg0 lastFetchDateOverride:(id)arg1 namespaceNames:(id)arg2 completion:(id)arg3 ;
-(void)fetchRolloutNotificationsDateDescendingWithOptions:(id)arg0 completion:(id)arg1 ;


@end


#endif