// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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


-(void)acceptShareWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)cloudSharingSpaceManagementRequestWithType:(NSUInteger)arg0 optionalBytesToPurge:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)createPhotostreamAlbumWithStreamID:(id)arg0 ;
-(void)emailAddressForKey:(NSInteger)arg0 reply:(id)arg1 ;
-(void)enablePhotostreamsWithStreamID:(id)arg0 ;
-(void)fetchShareWithURL:(id)arg0 reply:(id)arg1 ;
-(void)forceSyncMomentShareWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)getCurrentTransferProgress:(id)arg0 ;
-(void)getNotUploadedCount:(id)arg0 ;
-(void)getResetSyncStatusWithReply:(id)arg0 ;
-(void)getSystemBudgetsWithReply:(id)arg0 ;
-(void)isReadyForAnalysisWithReply:(id)arg0 ;
-(void)isReadyForCloudPhotoLibraryWithReply:(id)arg0 ;
-(void)keyForEmailAddress:(id)arg0 reply:(id)arg1 ;
-(void)markResourcesPurgeableWithUrgency:(NSInteger)arg0 assetUuids:(id)arg1 reply:(id)arg2 ;
-(void)overrideSystemBudgetsForSyncSession:(BOOL)arg0 systemBudgets:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)personInfoDictionaryForPersonID:(id)arg0 reply:(id)arg1 ;
-(void)publishShareWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)queryUserIdentitiesWithEmails:(id)arg0 phoneNumbers:(id)arg1 reply:(id)arg2 ;
-(void)rampingRequestForResourceType:(NSUInteger)arg0 numRequested:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)setCloudPhotoLibraryEnabledState:(BOOL)arg0 ;
-(void)setCloudPhotoLibraryPauseState:(BOOL)arg0 reason:(short)arg1 ;
-(void)setPersonInfoDictionary:(id)arg0 forPersonID:(id)arg1 ;
-(void)shouldAutoEnableiCPLOnOSXWithReply:(id)arg0 ;
-(void)syncCloudPhotoLibrary;
-(void)updateSharedAlbumsCachedServerConfigurationLimits;


@end


#endif