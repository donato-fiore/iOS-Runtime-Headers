// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCPLATFORMPUBLICKEYCREDENTIALREGISTRATION_H
#define ASCPLATFORMPUBLICKEYCREDENTIALREGISTRATION_H

@class NSData, NSString;
@protocol ASCCredentialProtocol;

#import <Foundation/Foundation.h>


@interface ASCPlatformPublicKeyCredentialRegistration : NSObject <ASCCredentialProtocol>



@property (readonly, copy, nonatomic) NSData *attestationObject; // ivar: _attestationObject
@property (readonly, copy, nonatomic) NSData *credentialID; // ivar: _credentialID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *rawClientDataJSON; // ivar: _rawClientDataJSON
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)_initWithRelyingPartyIdentifier:(id)arg0 attestationObject:(id)arg1 rawClientDataJSON:(id)arg2 credentialID:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRelyingPartyIdentifier:(id)arg0 authenticatorAttestationResponse:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif