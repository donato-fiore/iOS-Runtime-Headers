// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCOLLABORATIONCLOUDSHARINGRESULT_H
#define SFCOLLABORATIONCLOUDSHARINGRESULT_H

@class NSUUID, NSError, CKShare, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SFCollaborationCloudSharingMailResult.h"

@interface SFCollaborationCloudSharingResult : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *collaborationItemIdentifier; // ivar: _collaborationItemIdentifier
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL existingShare; // ivar: _existingShare
@property (retain, nonatomic) SFCollaborationCloudSharingMailResult *mailResult; // ivar: _mailResult
@property (readonly, nonatomic) CKShare *share; // ivar: _share
@property (readonly, nonatomic) NSURL *sharingURL; // ivar: _sharingURL


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollaborationItemIdentifier:(id)arg0 sharingURL:(id)arg1 share:(id)arg2 error:(id)arg3 mailResult:(id)arg4 ;
-(id)initWithCollaborationItemIdentifier:(id)arg0 sharingURL:(id)arg1 share:(id)arg2 existingShare:(BOOL)arg3 error:(id)arg4 mailResult:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif