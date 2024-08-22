// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDMACCOUNTUTILITIES_H
#define MDMACCOUNTUTILITIES_H


#import <Foundation/Foundation.h>


@interface MDMAccountUtilities : NSObject



+(BOOL)updateOrganizationName:(id)arg0 rmAccountIdentifier:(id)arg1 personaID:(id)arg2 error:(*id)arg3 ;
+(id)_createMissingBearerTokenError;
+(id)_createMissingRMAccountError;
+(id)_longLivedTokenFromRMAccount:(id)arg0 inStore:(id)arg1 ;
+(id)_shortLivedTokenFromRMAccount:(id)arg0 inStore:(id)arg1 ;
+(id)authenticatorForRMAccountID:(id)arg0 ;
+(id)bearerTokenForRMAccountID:(id)arg0 error:(*id)arg1 ;
+(id)maidPropertiesForRMAccountID:(id)arg0 ;
+(id)rmAccountWithIdentifier:(id)arg0 fromStore:(id)arg1 error:(*id)arg2 ;
+(void)removeMAIDShortLivedTokenWithAccount:(id)arg0 ;
+(void)stashMAIDShortLivedTokenWithAccount:(id)arg0 authenticationResults:(id)arg1 ;


@end


#endif