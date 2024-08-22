// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLLIBRARYSCOPE_H
#define PLLIBRARYSCOPE_H

@class NSString, NSDate, NSSet, NSData;
@protocol PLSyncableObject, PLCloudDeletable;


#import "PLShare.h"

@interface PLLibraryScope : PLShare <PLSyncableObject, PLCloudDeletable>



@property (nonatomic) short autoSharePolicy;
@property (nonatomic) short cloudDeleteState;
@property (readonly) NSInteger cloudDeletionType;
@property (nonatomic) int cloudItemCount;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) int cloudPhotoCount;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (nonatomic) int cloudVideoCount;
@property (nonatomic) int countOfAssetsAddedByCameraSmartSharing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short exitSource;
@property (nonatomic) short exitState;
@property (nonatomic) short exitType;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *lastParticipantAssetTrashNotificationDate;
@property (copy, nonatomic) NSDate *lastParticipantAssetTrashNotificationViewedDate;
@property (retain, nonatomic) NSSet *libraryScopeAssets;
@property (readonly, retain, nonatomic) id *localID;
@property (nonatomic) short participantCloudUpdateState;
@property (nonatomic) short previewState;
@property (retain, nonatomic) NSData *rulesData;
@property (nonatomic) short scopeSyncingState;
@property (readonly) Class superclass;


+(BOOL)_preflightChecksForFiringParticipantAssetTrashNotificationWithPhotoLibrary:(id)arg0 ;
+(BOOL)_queryIsShareEverythingInternalQuery:(id)arg0 ;
+(BOOL)libraryScopeIsActiveWithScopeSyncingState:(short)arg0 ;
+(BOOL)libraryScopeScopeIdentifierWasCreatedInLocalOnlyMode:(id)arg0 ;
+(BOOL)shouldAllowFetchURLWithScopeChange:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
+(BOOL)supportsCPLScopeType:(NSInteger)arg0 ;
+(id)_computeCountOfContributedAssetsTrashedByOtherParticipantsInLibraryScope:(id)arg0 outPhotoCount:(*NSUInteger)arg1 outVideoCount:(*NSUInteger)arg2 outItemCount:(*NSUInteger)arg3 ;
+(id)_nearestDateSetToHour:(NSInteger)arg0 ;
+(id)_shareEverythingInternalQuery;
+(id)activeLibraryScopeInManagedObjectContext:(id)arg0 ;
+(id)compoundPredicateForMarkingOnboardingPreviewAssetsWithRulePredicate:(id)arg0 ;
+(id)createOwnedShareWithUUID:(id)arg0 creationDate:(id)arg1 title:(id)arg2 unitTestMode:(BOOL)arg3 inPhotoLibrary:(id)arg4 ;
+(id)entityName;
+(id)fireParticipantAssetTrashNotificationIfNeededWithPhotoLibrary:(id)arg0 forceNotification:(BOOL)arg1 ;
+(id)insertOrUpdateShareWithCPLScopeChange:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(id)localOnlySharedSyncScopeIdentifierPrefix;
+(id)predicateForActiveLibraryScope;
+(id)predicateForPreviewLibraryScope;
+(id)predicateToExcludeExitingLibraryScopes;
+(id)resetLibraryScopeAssetStatesWithManagedObjectContext:(id)arg0 ;
+(id)resetLocalOnlyLibraryScopesAndAllLibraryScopeAssetStatesWithManagedObjectContext:(id)arg0 ;
+(id)scopeIdentifierPrefix;
+(short)activeSyncingStateToUse;
+(short)participationStateFromLibraryScope:(id)arg0 ;
+(void)_cleanupLocalPreviewLibraryScopesInManagedObjectContext:(id)arg0 ;
+(void)assertIfGoldilocksSyncingAndLocalModeEnabled;
+(void)informRapportToAddShareParticipantUUIDs:(id)arg0 photoLibrary:(id)arg1 ;
+(void)informRapportToRemoveShareParticipantUUIDs:(id)arg0 photoLibrary:(id)arg1 ;
+(void)updateLibraryScopeActiveDefaultsWithManagedObjectContext:(id)arg0 ;
-(BOOL)_libraryScopeWasCreatedInLocalOnlyMode;
-(BOOL)confirmAllRemainingOnboardingPreviewAssetsWithProgress:(id)arg0 databaseContext:(id)arg1 withError:(*id)arg2 ;
-(BOOL)isSyncableChange;
-(BOOL)libraryScopeIsActive;
-(BOOL)shouldEnableRulesChangeTracker;
-(BOOL)supportsCloudUpload;
-(BOOL)updatePeopleRulesForAllTombstonedPersons;
-(BOOL)updatePeopleRulesForTombstonePersonUUID:(id)arg0 replaceWithPersonUUID:(id)arg1 ;
-(id)_cplShare;
-(id)activateScopeWithCompletionHandler:(id)arg0 ;
-(id)cloudSyncableRulesData;
-(id)cplFullRecord;
-(id)cplScopeChange;
-(id)markOnboardingPreviewAssetsByProcessingRulesWithCompletionHandler:(id)arg0 ;
-(void)_confirmAllRemainingOnboardingPreviewAssetsWithProgress:(id)arg0 photoLibrary:(id)arg1 ;
-(void)_insertOwnedParticipantInLibrary:(id)arg0 unitTestMode:(BOOL)arg1 ;
-(void)_verifyCurrentUserParticipantExists;
-(void)acceptWithCompletionHandler:(id)arg0 ;
-(void)deactivateScopeWithCompletionHandler:(id)arg0 ;
-(void)prepareForDeletion;
-(void)publishWithCompletionHandler:(id)arg0 ;
-(void)removeParticipantsWithParticipantUUIDs:(id)arg0 fromLibraryScopeWithIdentifier:(id)arg1 retentionPolicy:(NSInteger)arg2 exitSource:(unsigned short)arg3 completionHandler:(id)arg4 ;
-(void)startExitWithRetentionPolicy:(NSInteger)arg0 exitSource:(unsigned short)arg1 completionHandler:(id)arg2 ;
-(void)startTrackingParticipantAssetTrashStateIfNeeded;
-(void)stopTrackingParticipantAssetTrashedStateIfNeeded;
-(void)updateRulesDataWithCloudSyncableRulesData:(id)arg0 ;
-(void)userViewedAssetTrashNotificationWithManagedObjectContext:(id)arg0 ;
-(void)willSave;


@end


#endif