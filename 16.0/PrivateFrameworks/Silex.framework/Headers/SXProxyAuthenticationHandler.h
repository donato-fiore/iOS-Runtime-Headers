// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXPROXYAUTHENTICATIONHANDLER_H
#define SXPROXYAUTHENTICATIONHANDLER_H

@class NSString;
@protocol SXProxyAuthenticationHandler, SXProxyAuthenticationCredentialFactory, SXProxyConfiguration;

#import <Foundation/Foundation.h>


@interface SXProxyAuthenticationHandler : NSObject <SXProxyAuthenticationHandler>



@property (readonly, nonatomic) NSObject<SXProxyAuthenticationCredentialFactory> *credentialFactory; // ivar: _credentialFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXProxyConfiguration> *proxyConfiguration; // ivar: _proxyConfiguration
@property (readonly, nonatomic) NSUInteger retryCount; // ivar: _retryCount
@property (readonly) Class superclass;


-(id)initWithCredentialFactory:(id)arg0 proxyConfiguration:(id)arg1 retryCount:(NSUInteger)arg2 ;
-(void)handleAuthenticationChallenge:(id)arg0 completion:(id)arg1 ;


@end


#endif