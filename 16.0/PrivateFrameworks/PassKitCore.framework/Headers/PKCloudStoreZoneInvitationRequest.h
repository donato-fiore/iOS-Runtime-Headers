// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCLOUDSTOREZONEINVITATIONREQUEST_H
#define PKCLOUDSTOREZONEINVITATIONREQUEST_H

@class NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKSharingDestination.h"
#import "PKCloudStoreZoneInvitation.h"

@interface PKCloudStoreZoneInvitationRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) PKSharingDestination *destination; // ivar: _destination
@property (retain, nonatomic) PKCloudStoreZoneInvitation *invitation; // ivar: _invitation
@property (copy, nonatomic) NSError *invitationError; // ivar: _invitationError


+(BOOL)supportsSecureCoding;
+(id)cloudStoreZoneInvitationRequestWithProtobuf:(id)arg0 ;
+(id)invitationErrorWithProtobuf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif