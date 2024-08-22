// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDCLOUDINTERNALCLIENT_H
#define PLASSETSDCLOUDINTERNALCLIENT_H



#import "PLAssetsdBaseClient.h"

@interface PLAssetsdCloudInternalClient : PLAssetsdBaseClient



-(BOOL)isReadyForAnalysis;
-(BOOL)isReadyForCloudPhotoLibrary;
-(BOOL)shouldAutoEnableiCPLOnOSXWithError:(*id)arg0 ;
-(NSInteger)keyForEmailAddress:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)cloudSharingSpaceManagementRequestWithType:(NSUInteger)arg0 optionalBytesToPurge:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)getResetSyncStatusWithError:(*id)arg0 ;
-(id)emailAddressForKey:(NSInteger)arg0 error:(*id)arg1 ;
-(id)personInfoDictionaryForPersonID:(id)arg0 error:(*id)arg1 ;
-(void)acceptShare:(id)arg0 completionHandler:(id)arg1 ;
-(void)createPhotostreamAlbumWithStreamID:(id)arg0 ;
-(void)enablePhotostreamsWithStreamID:(id)arg0 ;
-(void)fetchShareFromShareURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)forceSyncMomentShare:(id)arg0 completionHandler:(id)arg1 ;
-(void)getCurrentTransferProgress:(id)arg0 ;
-(void)getNotUploadedCount:(id)arg0 ;
-(void)getSystemBudgetsWithReply:(id)arg0 ;
-(void)markResourcesPurgeableWithUrgency:(NSInteger)arg0 assetUuids:(id)arg1 completionHandler:(id)arg2 ;
-(void)overrideSystemBudgetsForSyncSession:(BOOL)arg0 systemBudgets:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)publishShare:(id)arg0 completionHandler:(id)arg1 ;
-(void)queryParticipantsWithEmails:(id)arg0 phoneNumbers:(id)arg1 completionHandler:(id)arg2 ;
-(void)rampingRequestForResourceType:(NSUInteger)arg0 numRequested:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)setCloudPhotoLibraryEnabledState:(BOOL)arg0 ;
-(void)setCloudPhotoLibraryEnabledStateSync:(BOOL)arg0 ;
-(void)setCloudPhotoLibraryPauseState:(BOOL)arg0 reason:(short)arg1 ;
-(void)setPersonInfoDictionary:(id)arg0 forPersonID:(id)arg1 ;
-(void)syncCloudPhotoLibrary;
-(void)synchronouslySetCloudPhotoLibraryPauseState:(BOOL)arg0 reason:(short)arg1 ;
-(void)updateSharedAlbumsCachedServerConfigurationLimits;


@end


#endif