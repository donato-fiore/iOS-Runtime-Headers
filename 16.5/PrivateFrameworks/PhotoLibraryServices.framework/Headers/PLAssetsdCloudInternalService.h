// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLASSETSDCLOUDINTERNALSERVICE_H
#define PLASSETSDCLOUDINTERNALSERVICE_H

@class NSString;
@protocol PLAssetsdCloudInternalServiceProtocol;


#import "PLAbstractLibraryServicesManagerService.h"

@interface PLAssetsdCloudInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdCloudInternalServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activateLibraryScopeWithUUID:(id)arg0 reply:(id)arg1 ;
-(id)markOnboardingPreviewAssetsByProcessingRulesOnLibraryScopeWithUUID:(id)arg0 excludePersonUUIDs:(id)arg1 reply:(id)arg2 ;
-(void)acceptShareWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)cloudSharingSpaceManagementRequestWithType:(NSUInteger)arg0 optionalBytesToPurge:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)confirmAllRemainingOnboardingPreviewAssetsOnLibraryScopeWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)createPhotostreamAlbumWithStreamID:(id)arg0 ;
-(void)deactivateLibraryScopeWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)emailAddressForKey:(NSInteger)arg0 reply:(id)arg1 ;
-(void)enablePhotostreamsWithStreamID:(id)arg0 ;
-(void)fetchShareWithURL:(id)arg0 ignoreExistingShare:(BOOL)arg1 reply:(id)arg2 ;
-(void)forceParticipantAssetTrashNotificationWithReply:(id)arg0 ;
-(void)forceSyncMomentShareWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)getCurrentTransferProgress:(id)arg0 ;
-(void)getLibraryScopeStatusCountsForScopeWithIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)getNotUploadedCount:(id)arg0 ;
-(void)getResetSyncStatusWithReply:(id)arg0 ;
-(void)getSystemBudgetsWithReply:(id)arg0 ;
-(void)isReadyForAnalysisWithReply:(id)arg0 ;
-(void)isReadyForCloudPhotoLibraryWithReply:(id)arg0 ;
-(void)keyForEmailAddress:(id)arg0 reply:(id)arg1 ;
-(void)markResourcesPurgeableWithUrgency:(NSInteger)arg0 assetUuids:(id)arg1 reply:(id)arg2 ;
-(void)overrideSystemBudgetsForSyncSession:(BOOL)arg0 pauseReason:(id)arg1 systemBudgets:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)personInfoDictionaryForPersonID:(id)arg0 reply:(id)arg1 ;
-(void)publishShareWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)queryUserIdentitiesWithEmails:(id)arg0 phoneNumbers:(id)arg1 reply:(id)arg2 ;
-(void)rampingRequestForResourceType:(NSUInteger)arg0 numRequested:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)removeParticipantsWithParticipantUUIDs:(id)arg0 fromLibraryScopeWithIdentifier:(id)arg1 retentionPolicy:(NSInteger)arg2 exitSource:(NSInteger)arg3 reply:(id)arg4 ;
-(void)requestDeviceLibraryConfigurationChange:(NSInteger)arg0 reply:(id)arg1 ;
-(void)resetLocalOnlyLibraryScopesAndAllLibraryScopeAssetStatesWithReply:(id)arg0 ;
-(void)setCloudPhotoLibraryEnabledState:(BOOL)arg0 ;
-(void)setCloudPhotoLibraryPauseState:(BOOL)arg0 reason:(short)arg1 ;
-(void)setPersonInfoDictionary:(id)arg0 forPersonID:(id)arg1 ;
-(void)sharedLibraryRampCheckWithReply:(id)arg0 ;
-(void)shouldAutoEnableiCPLOnOSXWithReply:(id)arg0 ;
-(void)startExitFromLibraryScopeWithIdentifier:(id)arg0 retentionPolicy:(NSInteger)arg1 exitSource:(NSInteger)arg2 reply:(id)arg3 ;
-(void)syncCloudPhotoLibrary;
-(void)unsharePendingAssetsSharedToScopeWithIdentifier:(id)arg0 ;
-(void)updateSharedAlbumsCachedServerConfigurationLimits;
-(void)userViewedSharedLibraryParticipantAssetTrashNotificationWithReply:(id)arg0 ;


@end


#endif