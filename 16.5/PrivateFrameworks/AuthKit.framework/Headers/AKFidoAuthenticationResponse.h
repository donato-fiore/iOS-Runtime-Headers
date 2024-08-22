// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKFIDOAUTHENTICATIONRESPONSE_H
#define AKFIDOAUTHENTICATIONRESPONSE_H

@class NSString;
@protocol AKFidoResponse, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AKFidoAuthenticationResponse : NSObject <AKFidoResponse, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *authenticatorData; // ivar: _authenticatorData
@property (readonly, nonatomic) NSString *challenge; // ivar: _challenge
@property (readonly, nonatomic) NSString *clientData; // ivar: _clientData
@property (readonly, nonatomic) NSString *credentialID; // ivar: _credentialID
@property (readonly, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (readonly, nonatomic) NSString *signature; // ivar: _signature
@property (readonly, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithAuthenticatorData:(id)arg0 challengeString:(id)arg1 relyingPartyIdentifier:(id)arg2 signature:(id)arg3 clientData:(id)arg4 credentialID:(id)arg5 userIdentifier:(id)arg6 ;
-(id)initWithAuthenticatorDataString:(id)arg0 challengeString:(id)arg1 relyingPartyIdentifier:(id)arg2 signature:(id)arg3 clientDataString:(id)arg4 credentialID:(id)arg5 userIdentifier:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif