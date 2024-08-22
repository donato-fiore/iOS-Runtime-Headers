// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASAUTHORIZATIONSECURITYKEYPUBLICKEYCREDENTIALREGISTRATION_H
#define ASAUTHORIZATIONSECURITYKEYPUBLICKEYCREDENTIALREGISTRATION_H

@class NSData, NSString;
@protocol ASAuthorizationPublicKeyCredentialRegistration;

#import <Foundation/Foundation.h>

#import "ASPublicKeyCredentialBase.h"

@interface ASAuthorizationSecurityKeyPublicKeyCredentialRegistration : NSObject <ASAuthorizationPublicKeyCredentialRegistration>

 {
    ASPublicKeyCredentialBase *_baseCredential;
}


@property (readonly, copy, nonatomic) NSData *credentialID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *rawAttestationObject; // ivar: _rawAttestationObject
@property (readonly, copy, nonatomic) NSData *rawClientDataJSON;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)_initWithBaseCredential:(id)arg0 rawAttestationObject:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoreCredential:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif