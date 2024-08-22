// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POAUTHENTICATIONCONTEXT_H
#define POAUTHENTICATIONCONTEXT_H

@class NSString, NSURLSession, NSURL;

#import <Foundation/Foundation.h>


@interface POAuthenticationContext : NSObject

@property (retain, nonatomic) NSString *apv; // ivar: _apv
@property (nonatomic) BOOL federated; // ivar: _federated
@property NSUInteger loginType; // ivar: _loginType
@property (retain, nonatomic) NSString *nonce; // ivar: _nonce
@property (retain, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (retain, nonatomic) NSString *scope; // ivar: _scope
@property (retain, nonatomic) NSString *serverNonce; // ivar: _serverNonce
@property (retain, nonatomic) NSString *tokenTypeNamespace; // ivar: _tokenTypeNamespace
@property (retain, nonatomic) NSURLSession *urlSession; // ivar: _urlSession
@property (retain, nonatomic) NSURL *wsTrustFederationMexURL; // ivar: _wsTrustFederationMexURL
@property (retain, nonatomic) NSString *wsTrustFederationNonce; // ivar: _wsTrustFederationNonce
@property (retain, nonatomic) NSURL *wsTrustFederationURL; // ivar: _wsTrustFederationURL
@property NSUInteger wsTrustVersion; // ivar: _wsTrustVersion


-(id)init;


@end


#endif