// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCSECURITYKEYPUBLICKEYCREDENTIALASSERTION_H
#define ASCSECURITYKEYPUBLICKEYCREDENTIALASSERTION_H

@class NSString, NSData;
@protocol ASCCredentialProtocol;

#import <Foundation/Foundation.h>


@interface ASCSecurityKeyPublicKeyCredentialAssertion : NSObject <ASCCredentialProtocol>



@property (readonly, copy, nonatomic) NSString *attachment; // ivar: _attachment
@property (readonly, copy, nonatomic) NSData *authenticatorData; // ivar: _authenticatorData
@property (readonly, copy, nonatomic) NSData *credentialID; // ivar: _credentialID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSData *extensionOutputsCBOR; // ivar: _extensionOutputsCBOR
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *rawClientDataJSON; // ivar: _rawClientDataJSON
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (readonly, copy, nonatomic) NSData *signature; // ivar: _signature
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSData *userHandle; // ivar: _userHandle


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRelyingPartyIdentifier:(id)arg0 authenticatorData:(id)arg1 signature:(id)arg2 userHandle:(id)arg3 rawClientDataJSON:(id)arg4 credentialID:(id)arg5 extensionOutputsCBOR:(id)arg6 attachment:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif