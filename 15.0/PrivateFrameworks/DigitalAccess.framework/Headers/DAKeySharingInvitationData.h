// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAKEYSHARINGINVITATIONDATA_H
#define DAKEYSHARINGINVITATIONDATA_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DAKeySharingInvitationData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *friendKeyIdentifier; // ivar: _friendKeyIdentifier
@property (readonly, nonatomic) NSString *invitationIdentifier; // ivar: _invitationIdentifier
@property (readonly, nonatomic) NSInteger invitationState; // ivar: _invitationState
@property (readonly, nonatomic) NSString *passwordPiece; // ivar: _passwordPiece
@property (readonly, nonatomic) NSUUID *sharingSessionIdentifier; // ivar: _sharingSessionIdentifier
@property (readonly, nonatomic) NSInteger sharingTargetType; // ivar: _sharingTargetType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionUUID:(id)arg0 invitationIdentifier:(id)arg1 friendKeyIdentifier:(id)arg2 sharingTarget:(NSInteger)arg3 state:(NSInteger)arg4 passwordPiece:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif