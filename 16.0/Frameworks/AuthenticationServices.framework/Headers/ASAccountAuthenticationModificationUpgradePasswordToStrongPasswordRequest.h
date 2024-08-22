// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASACCOUNTAUTHENTICATIONMODIFICATIONUPGRADEPASSWORDTOSTRONGPASSWORDREQUEST_H
#define ASACCOUNTAUTHENTICATIONMODIFICATIONUPGRADEPASSWORDTOSTRONGPASSWORDREQUEST_H

@class NSExtension, NSString, NSDictionary;


#import "ASAccountAuthenticationModificationRequest.h"
#import "ASCredentialServiceIdentifier.h"

@interface ASAccountAuthenticationModificationUpgradePasswordToStrongPasswordRequest : ASAccountAuthenticationModificationRequest

@property (readonly, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) ASCredentialServiceIdentifier *serviceIdentifier; // ivar: _serviceIdentifier
@property (readonly, nonatomic) NSString *user; // ivar: _user
@property (readonly, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)initWithUser:(id)arg0 password:(id)arg1 extension:(id)arg2 serviceIdentifier:(id)arg3 userInfo:(id)arg4 ;
-(id)initWithUser:(id)arg0 serviceIdentifier:(id)arg1 userInfo:(id)arg2 ;


@end


#endif