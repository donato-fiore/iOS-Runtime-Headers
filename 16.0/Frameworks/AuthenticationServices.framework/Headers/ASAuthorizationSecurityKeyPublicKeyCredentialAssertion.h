// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASAUTHORIZATIONSECURITYKEYPUBLICKEYCREDENTIALASSERTION_H
#define ASAUTHORIZATIONSECURITYKEYPUBLICKEYCREDENTIALASSERTION_H

@class NSData, NSString;
@protocol ASAuthorizationPublicKeyCredentialAssertion;

#import <Foundation/Foundation.h>

#import "ASPublicKeyCredentialBase.h"

@interface ASAuthorizationSecurityKeyPublicKeyCredentialAssertion : NSObject <ASAuthorizationPublicKeyCredentialAssertion>

 {
    ASPublicKeyCredentialBase *_baseCredential;
}


@property (readonly, copy, nonatomic) NSData *credentialID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *rawAuthenticatorData; // ivar: _rawAuthenticatorData
@property (readonly, copy, nonatomic) NSData *rawClientDataJSON;
@property (readonly, copy, nonatomic) NSData *signature; // ivar: _signature
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSData *userID; // ivar: _userID


+(BOOL)supportsSecureCoding;
-(id)_initWithBaseCredential:(id)arg0 userID:(id)arg1 signature:(id)arg2 rawAuthenticatorData:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoreCredential:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif