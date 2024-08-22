// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAEASOAUTHCLIENT_H
#define DAEASOAUTHCLIENT_H


#import <Foundation/Foundation.h>


@interface DAEASOAuthClient : NSObject



+(id)_defaultScopeWithDomainForOAuthType:(NSUInteger)arg0 ;
+(id)_defaultScopeWithoutDomainForOAuthType:(NSUInteger)arg0 forToken:(BOOL)arg1 ;
+(id)clientIDForOAuthType:(NSUInteger)arg0 ;
+(id)clientRedirect;
+(id)clientRedirectForOAuthType:(NSUInteger)arg0 ;
+(id)defaultScopeForOAuthType:(NSUInteger)arg0 withResourceIdentifier:(id)arg1 ;
+(id)defaultScopeForOAuthType:(NSUInteger)arg0 withResourceIdentifier:(id)arg1 forToken:(BOOL)arg2 ;
+(id)scopeForUpgradingFromBasicCreds;


@end


#endif