// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSCLOUDSHARING_H
#define CSCLOUDSHARING_H


#import <Foundation/Foundation.h>


@interface CSCloudSharing : NSObject



+(void)addParticipantsToShare:(id)arg0 containerSetupInfo:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 completionHandler:(id)arg4 ;
+(void)addParticipantsToShare:(id)arg0 containerSetupInfo:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 permissionType:(NSInteger)arg4 allowOthersToInvite:(BOOL)arg5 completionHandler:(id)arg6 ;
+(void)ckMetadataFromShareURL:(id)arg0 containerSetupInfo:(id)arg1 completionHandler:(id)arg2 ;
+(void)completeShare:(id)arg0 containerSetupInfo:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 accessType:(NSInteger)arg4 permissionType:(NSInteger)arg5 allowOthersToInvite:(BOOL)arg6 completionHandler:(id)arg7 ;
+(void)completeShare:(id)arg0 containerSetupInfo:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 accessType:(NSInteger)arg4 permissionType:(NSInteger)arg5 allowOthersToInvite:(BOOL)arg6 keepExistingParticipants:(BOOL)arg7 completionHandler:(id)arg8 ;
+(void)existingShareForFileOrFolderURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)messageContentForMail:(id)arg0 share:(id)arg1 fileURL:(id)arg2 appName:(id)arg3 appIconData:(id)arg4 completionHandler:(id)arg5 ;
+(void)removeFromShare:(id)arg0 containerSetupInfo:(id)arg1 completionHandler:(id)arg2 ;
+(void)removeFromShareURL:(id)arg0 containerSetupInfo:(id)arg1 completionHandler:(id)arg2 ;
+(void)shareFileOrFolderShareURL:(id)arg0 emailAddresses:(id)arg1 phoneNumbers:(id)arg2 accessType:(NSInteger)arg3 permissionType:(NSInteger)arg4 allowOthersToInvite:(BOOL)arg5 keepExistingParticipants:(BOOL)arg6 completionHandler:(id)arg7 ;
+(void)shareFileOrFolderURL:(id)arg0 emailAddresses:(id)arg1 phoneNumbers:(id)arg2 accessType:(NSInteger)arg3 permissionType:(NSInteger)arg4 allowOthersToInvite:(BOOL)arg5 completionHandler:(id)arg6 ;
+(void)shareFileOrFolderURL:(id)arg0 emailAddresses:(id)arg1 phoneNumbers:(id)arg2 accessType:(NSInteger)arg3 permissionType:(NSInteger)arg4 allowOthersToInvite:(BOOL)arg5 keepExistingParticipants:(BOOL)arg6 completionHandler:(id)arg7 ;
+(void)shareFolderRemovingSubshares:(id)arg0 emailAddresses:(id)arg1 phoneNumbers:(id)arg2 accessType:(NSInteger)arg3 permissionType:(NSInteger)arg4 allowOthersToInvite:(BOOL)arg5 completionHandler:(id)arg6 ;
+(void)shareOrUpdateShareURL:(id)arg0 containerSetupInfo:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 accessType:(NSInteger)arg4 permissionType:(NSInteger)arg5 allowOthersToInvite:(BOOL)arg6 completionHandler:(id)arg7 ;
+(void)sharingStatusForFileOrFolderURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)sharingStatusForShare:(id)arg0 completionHandler:(id)arg1 ;
+(void)updateShare:(id)arg0 containerSetupInfo:(id)arg1 completionHandler:(id)arg2 ;
+(void)userNameAndEmail:(id)arg0 containerSetupInfo:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif