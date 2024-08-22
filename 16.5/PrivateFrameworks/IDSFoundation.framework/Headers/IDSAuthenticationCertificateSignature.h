// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSAUTHENTICATIONCERTIFICATESIGNATURE_H
#define IDSAUTHENTICATIONCERTIFICATESIGNATURE_H

@class NSString, NSData;

#import <Foundation/Foundation.h>

#import "IDSAuthenticationCertificate.h"

@interface IDSAuthenticationCertificateSignature : NSObject

@property (readonly, nonatomic) IDSAuthenticationCertificate *authenticationCertificate; // ivar: _authenticationCertificate
@property (readonly, nonatomic) NSString *serverVerifiableEncoding; // ivar: _serverVerifiableEncoding
@property (readonly, nonatomic) NSData *signature; // ivar: _signature
@property (readonly, nonatomic) NSString *subscriptionIdentifier; // ivar: _subscriptionIdentifier


-(id)description;
-(id)initWithSubscriptionIdentifier:(id)arg0 authenticationCertificate:(id)arg1 signature:(id)arg2 nonce:(id)arg3 ;
-(id)initWithSubscriptionIdentifier:(id)arg0 authenticationCertificate:(id)arg1 signature:(id)arg2 serverVerifiableEncoding:(id)arg3 ;


@end


#endif