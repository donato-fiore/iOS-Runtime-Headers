// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCOLLABORATIONCLOUDSHARINGMAILREQUEST_H
#define SFCOLLABORATIONCLOUDSHARINGMAILREQUEST_H

@class NSNumber, NSData, NSString, NSUUID, NSURL, CKContainerSetupInfo, CKShare;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFCollaborationCloudSharingMailRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSNumber *accessType; // ivar: _accessType
@property (readonly, nonatomic) NSNumber *allowOthersToInvite; // ivar: _allowOthersToInvite
@property (readonly, nonatomic) NSData *appIconData; // ivar: _appIconData
@property (readonly, copy, nonatomic) NSString *appName; // ivar: _appName
@property (readonly, copy, nonatomic) NSUUID *collaborationItemIdentifier; // ivar: _collaborationItemIdentifier
@property (readonly, nonatomic) NSURL *fileOrFolderURL; // ivar: _fileOrFolderURL
@property (readonly, nonatomic) NSNumber *permissionType; // ivar: _permissionType
@property (readonly, nonatomic) CKContainerSetupInfo *setupInfo; // ivar: _setupInfo
@property (readonly, nonatomic) CKShare *share; // ivar: _share
@property (readonly, nonatomic) NSURL *sharingURL; // ivar: _sharingURL


+(BOOL)supportsSecureCoding;
-(id)initWithCloudSharingRequest:(id)arg0 result:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollaborationItemIdentifier:(id)arg0 fileOrFolderURL:(id)arg1 share:(id)arg2 setupInfo:(id)arg3 sharingURL:(id)arg4 accessType:(id)arg5 permissionType:(id)arg6 allowOthersToInvite:(id)arg7 appName:(id)arg8 appIconData:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif