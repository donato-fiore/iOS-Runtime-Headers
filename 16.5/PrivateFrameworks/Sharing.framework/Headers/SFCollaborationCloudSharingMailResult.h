// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCOLLABORATIONCLOUDSHARINGMAILRESULT_H
#define SFCOLLABORATIONCLOUDSHARINGMAILRESULT_H

@class NSNumber, NSString, CKContainerID, NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFCollaborationCloudSharingMailResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSNumber *allowOthersToInvite; // ivar: _allowOthersToInvite
@property (readonly, copy, nonatomic) NSString *body; // ivar: _body
@property (readonly, nonatomic) NSNumber *canEdit; // ivar: _canEdit
@property (readonly, nonatomic) CKContainerID *containerID; // ivar: _containerID
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) NSString *subject; // ivar: _subject


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubject:(id)arg0 body:(id)arg1 containerID:(id)arg2 canEdit:(id)arg3 allowOthersToInvite:(id)arg4 error:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif