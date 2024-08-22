// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12CLOUDSHARING15INITIATESHARING_H
#define _TTC12CLOUDSHARING15INITIATESHARING_H


#import <Foundation/Foundation.h>


@interface _TtC12CloudSharing15InitiateSharing : NSObject



-(id)init;
-(void)callForAddParticipantsToShare:(id)arg0 containerSetupInfo:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 permissionType:(NSInteger)arg4 allowOthersToInvite:(BOOL)arg5 reply:(id)arg6 ;
-(void)callForAddParticipantsToShare:(id)arg0 containerSetupInfo:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 reply:(id)arg4 ;
-(void)callForCloudKitAddToShare:(id)arg0 containerSetupInfo:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 accessType:(NSInteger)arg4 permissionType:(NSInteger)arg5 allowOthersToInvite:(BOOL)arg6 reply:(id)arg7 ;
-(void)callForCurrentUserSharingStatus:(id)arg0 reply:(id)arg1 ;
-(void)callForExistingShareForFile:(id)arg0 reply:(id)arg1 ;
-(void)callForFileSharing:(id)arg0 emailAddresses:(id)arg1 phoneNumbers:(id)arg2 accessType:(NSInteger)arg3 permissionType:(NSInteger)arg4 allowOthersToInvite:(BOOL)arg5 reply:(id)arg6 ;
-(void)callForForciblyShareFolder:(id)arg0 emailAddresses:(id)arg1 phoneNumbers:(id)arg2 accessType:(NSInteger)arg3 permissionType:(NSInteger)arg4 allowOthersToInvite:(BOOL)arg5 reply:(id)arg6 ;
-(void)callForMailContent:(id)arg0 share:(id)arg1 fileURL:(id)arg2 appName:(id)arg3 appIconData:(id)arg4 reply:(id)arg5 ;
-(void)callForMetadataFromShareURL:(id)arg0 containerSetupInfo:(id)arg1 reply:(id)arg2 ;
-(void)callForRemoveShare:(id)arg0 containerSetupInfo:(id)arg1 reply:(id)arg2 ;
-(void)callForSharingStatus:(id)arg0 reply:(id)arg1 ;
-(void)callForSharingURLAddToShare:(id)arg0 containerSetupInfo:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 accessType:(NSInteger)arg4 permissionType:(NSInteger)arg5 allowOthersToInvite:(BOOL)arg6 reply:(id)arg7 ;
-(void)callForSharingURLRemoveShare:(id)arg0 containerSetupInfo:(id)arg1 reply:(id)arg2 ;
-(void)callForUpdateShare:(id)arg0 containerSetupInfo:(id)arg1 reply:(id)arg2 ;
-(void)callForUserNameAndEmail:(id)arg0 containerSetupInfo:(id)arg1 reply:(id)arg2 ;


@end


#endif