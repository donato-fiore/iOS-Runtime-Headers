// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATIDSSERVICECONNECTIONINVITATIONREQUEST_H
#define CATIDSSERVICECONNECTIONINVITATIONREQUEST_H

@class NSString, NSUUID, NSDictionary;
@protocol CATCancelable;

#import <Foundation/Foundation.h>


@interface CATIDSServiceConnectionInvitationRequest : NSObject

@property (readonly, copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (readonly, nonatomic) NSObject<CATCancelable> *assertion; // ivar: _assertion
@property (readonly, nonatomic) NSUUID *invitationIdentifier; // ivar: _invitationIdentifier
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)initWithInvitationIdentifier:(id)arg0 appleID:(id)arg1 assertion:(id)arg2 userInfo:(id)arg3 ;


@end


#endif