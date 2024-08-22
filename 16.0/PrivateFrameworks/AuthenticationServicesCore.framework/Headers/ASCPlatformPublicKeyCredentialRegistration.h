// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCPLATFORMPUBLICKEYCREDENTIALREGISTRATION_H
#define ASCPLATFORMPUBLICKEYCREDENTIALREGISTRATION_H

@class NSString, NSData, NSArray;
@protocol ASCCredentialProtocol;

#import <Foundation/Foundation.h>


@interface ASCPlatformPublicKeyCredentialRegistration : NSObject <ASCCredentialProtocol>



@property (readonly, copy, nonatomic) NSString *attachment; // ivar: _attachment
@property (readonly, copy, nonatomic) NSData *attestationObject; // ivar: _attestationObject
@property (readonly, copy, nonatomic) NSData *credentialID; // ivar: _credentialID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSData *extensionOutputsCBOR; // ivar: _extensionOutputsCBOR
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *rawClientDataJSON; // ivar: _rawClientDataJSON
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *transports; // ivar: _transports


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRelyingPartyIdentifier:(id)arg0 attestationObject:(id)arg1 rawClientDataJSON:(id)arg2 credentialID:(id)arg3 transports:(id)arg4 extensionOutputsCBOR:(id)arg5 attachment:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif