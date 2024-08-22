// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAEASOAUTHCLIENT_H
#define DAEASOAUTHCLIENT_H


#import <Foundation/Foundation.h>


@interface DAEASOAuthClient : NSObject



+(id)_defaultScopeWithDomainForOAuthType:(NSUInteger)arg0 ;
+(id)_defaultScopeWithoutDomainForOAuthType:(NSUInteger)arg0 ;
+(id)clientIDForOAuthType:(NSUInteger)arg0 ;
+(id)clientRedirect;
+(id)clientRedirectForOAuthType:(NSUInteger)arg0 ;
+(id)defaultScopeForOAuthType:(NSUInteger)arg0 withResourceIdentifier:(id)arg1 ;
+(id)scopeForUpgradingFromBasicCreds;


@end


#endif