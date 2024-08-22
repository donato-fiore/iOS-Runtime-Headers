// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCSHARINGGROUPINVITE_H
#define KCSHARINGGROUPINVITE_H

@class NSString, NSData, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KCSharingGroupInvite : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly, copy, nonatomic) NSData *inviteToken; // ivar: _inviteToken
@property (readonly, copy, nonatomic) NSString *inviteeHandle; // ivar: _inviteeHandle
@property (readonly, copy, nonatomic) NSString *senderHandle; // ivar: _senderHandle
@property (readonly, copy, nonatomic) NSURL *shareURL; // ivar: _shareURL


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroupID:(id)arg0 shareURL:(id)arg1 senderHandle:(id)arg2 inviteeHandle:(id)arg3 inviteToken:(id)arg4 displayName:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif