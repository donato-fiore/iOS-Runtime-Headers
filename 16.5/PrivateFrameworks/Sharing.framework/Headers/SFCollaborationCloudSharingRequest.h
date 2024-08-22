// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCOLLABORATIONCLOUDSHARINGREQUEST_H
#define SFCOLLABORATIONCLOUDSHARINGREQUEST_H

@class NSNumber, NSString, NSData, NSUUID, NSArray, NSURL, CKContainerSetupInfo, CKShare;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFCollaborationCloudSharingRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSNumber *accessType; // ivar: _accessType
@property (readonly, copy, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, nonatomic) NSNumber *allowOthersToInvite; // ivar: _allowOthersToInvite
@property (readonly, nonatomic) NSData *appIconData; // ivar: _appIconData
@property (readonly, copy, nonatomic) NSString *appName; // ivar: _appName
@property (readonly, copy, nonatomic) NSUUID *collaborationItemIdentifier; // ivar: _collaborationItemIdentifier
@property (readonly, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (readonly, nonatomic) NSURL *fileOrFolderURL; // ivar: _fileOrFolderURL
@property (readonly, copy, nonatomic) NSArray *options; // ivar: _options
@property (readonly, nonatomic) NSNumber *permissionType; // ivar: _permissionType
@property (readonly, nonatomic) NSArray *phoneNumbers; // ivar: _phoneNumbers
@property (readonly, nonatomic) CKContainerSetupInfo *setupInfo; // ivar: _setupInfo
@property (readonly, nonatomic) CKShare *share; // ivar: _share


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollaborationItemIdentifier:(id)arg0 options:(id)arg1 fileOrFolderURL:(id)arg2 share:(id)arg3 setupInfo:(id)arg4 activityType:(id)arg5 ;
-(id)initWithCollaborationItemIdentifier:(id)arg0 options:(id)arg1 fileOrFolderURL:(id)arg2 share:(id)arg3 setupInfo:(id)arg4 phoneNumbers:(id)arg5 emailAddresses:(id)arg6 activityType:(id)arg7 appName:(id)arg8 appIconData:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif