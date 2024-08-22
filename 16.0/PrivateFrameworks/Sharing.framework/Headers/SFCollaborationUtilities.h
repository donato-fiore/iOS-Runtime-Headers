// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCOLLABORATIONUTILITIES_H
#define SFCOLLABORATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface SFCollaborationUtilities : NSObject



+(BOOL)CKShareItemProviderContainsCopyItem:(id)arg0 ;
+(BOOL)canDeleteShareForCollaborationItem:(id)arg0 existingShare:(BOOL)arg1 ;
+(BOOL)hasSendCopyRepresentationForItemProvider:(id)arg0 ;
+(BOOL)isCKShareItemProvider:(id)arg0 ;
+(BOOL)isCollaborationItemPrivateShare:(id)arg0 ;
+(BOOL)isHeroCollaborationActivityType:(id)arg0 ;
+(BOOL)isPostCKShareItemProvider:(id)arg0 ;
+(BOOL)isPreCKShareItemProvider:(id)arg0 ;
+(BOOL)isSWYActivityItemProvider:(id)arg0 ;
+(BOOL)isServiceManateeCKShareItemProvider:(id)arg0 ;
+(BOOL)isSharedFileURL:(id)arg0 isLocalStorageFileURL:(*BOOL)arg1 isiCloudDriveFileURL:(*BOOL)arg2 ;
+(BOOL)isThirdPartyFileProviderBackedURL:(id)arg0 ;
+(id)_copyRepresentationTypeIdentifier;
+(id)_dataForFilepath:(id)arg0 ;
+(id)createItemProviderForFileURL:(id)arg0 ;
+(id)createLinkMetadataWithCKShareItemProvider:(id)arg0 ;
+(id)defaultCKOptionsSummary;
+(id)fileCollaborationItemFromActivityItems:(id)arg0 ;
+(id)urlFromActivityItem:(id)arg0 ;
+(id)urlRequestsForCollaborationItems:(id)arg0 ;
+(void)_addParticipantsAllowedForShare:(id)arg0 completionHandler:(id)arg1 ;
+(void)_addParticipantsAllowedForURL:(id)arg0 share:(id)arg1 collaborationService:(id)arg2 completionHandler:(id)arg3 ;
+(void)_findOriginatingSharedItemInParentItems:(id)arg0 forSubitem:(id)arg1 completionHandler:(id)arg2 ;
+(void)_loadCKShareWithMetadataForItemProvider:(id)arg0 completionHandler:(id)arg1 ;
+(void)_loadShareOptionsForCKShareItemProvider:(id)arg0 completionHandler:(id)arg1 ;
+(void)_loadShareOptionsForSWYItemProvider:(id)arg0 completionHandler:(id)arg1 ;
+(void)addParticipantsAllowedForCollaborationItem:(id)arg0 collaborationService:(id)arg1 completionHandler:(id)arg2 ;
+(void)addParticipantsAllowedForURL:(id)arg0 share:(id)arg1 completionHandler:(id)arg2 ;
+(void)canShowShareOptionsForCollaborationItem:(id)arg0 service:(id)arg1 completionHandler:(id)arg2 ;
+(void)createMailContentForRequest:(id)arg0 completionHandler:(id)arg1 ;
+(void)createSharingURLForCollaborationRequest:(id)arg0 completionHandler:(id)arg1 ;
+(void)deleteSharingURL:(id)arg0 containerSetupInfo:(id)arg1 completionHandler:(id)arg2 ;
+(void)findOriginatingSharedItemForSubitemURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)getCKSharingOptionsFromOptions:(id)arg0 accessType:(*id)arg1 permissionType:(*id)arg2 allowOthersToInvite:(*id)arg3 ;
+(void)getFailureTitle:(*id)arg0 message:(*id)arg1 error:(id)arg2 ;
+(void)isShareOwnerForFileURL:(id)arg0 share:(id)arg1 completionHandler:(id)arg2 ;
+(void)loadCKContainerForItemProvider:(id)arg0 completionHandler:(id)arg1 ;
+(void)loadCKShareItemProvider:(id)arg0 completionHandler:(id)arg1 ;
+(void)loadCopyRepresentationURLForItemProvider:(id)arg0 completionHandler:(id)arg1 ;
+(void)loadMetadataForFileURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)loadMetadataForItemProvider:(id)arg0 completionHandler:(id)arg1 ;
+(void)loadPendingCollaborationForItemProvider:(id)arg0 completionHandler:(id)arg1 ;
+(void)loadShareOptionsForItemProvider:(id)arg0 completionHandler:(id)arg1 ;
+(void)requestSharedURLForCollaborationItem:(id)arg0 collaborationService:(id)arg1 completionHandler:(id)arg2 ;
+(void)requestSharedURLForURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)shareStatusForURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif