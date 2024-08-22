// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFOAUTH2ACCOUNT_H
#define WFOAUTH2ACCOUNT_H



#import "WFAccount.h"
#import "WFOAuth2Credential.h"

@interface WFOAuth2Account : WFAccount

@property (copy, nonatomic) WFOAuth2Credential *credential; // ivar: _credential


+(id)accountWithCredential:(id)arg0 ;
+(id)clientID;
+(id)clientSecret;
+(id)migrate:(id)arg0 ;
+(id)redirectURI;
+(id)responseType;
+(id)scopes;
+(id)sessionManager;
-(BOOL)isValid;
-(void)refreshWithCompletionHandler:(id)arg0 ;


@end


#endif