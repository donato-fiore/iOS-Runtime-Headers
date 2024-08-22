// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSAUTHENTICATIONSIGNINGRESULT_H
#define IDSAUTHENTICATIONSIGNINGRESULT_H

@class NSArray, NSData, NSString;

#import <Foundation/Foundation.h>


@interface IDSAuthenticationSigningResult : NSObject

@property (readonly, nonatomic) NSArray *authenticationCertificateSignatures; // ivar: _authenticationCertificateSignatures
@property (readonly, nonatomic) NSData *inputData; // ivar: _inputData
@property (readonly, nonatomic) NSData *nonce; // ivar: _nonce
@property (readonly, nonatomic) NSString *serverVerifiableEncoding;


-(id)description;
-(id)initWithSubscriptionIdentifiers:(id)arg0 authenticationCertificates:(id)arg1 inputData:(id)arg2 nonce:(id)arg3 signature:(id)arg4 ;


@end


#endif