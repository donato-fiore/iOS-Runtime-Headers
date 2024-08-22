// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLAUTHENTICATIONCREDENTIALS_H
#define WLAUTHENTICATIONCREDENTIALS_H


#import <Foundation/Foundation.h>


@interface WLAuthenticationCredentials : NSObject

@property (nonatomic) *__SecCertificate localCertificate; // ivar: _localCertificate
@property (nonatomic) *__SecKey privateKey; // ivar: _privateKey
@property (nonatomic) *__SecKey publicKey; // ivar: _publicKey
@property (nonatomic) *__SecCertificate remoteCertificate; // ivar: _remoteCertificate


+(id)generateAuthenticationCredentialsContainingSelfSignedCertificate;


@end


#endif