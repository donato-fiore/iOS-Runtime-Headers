// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSLACKACCOUNT_H
#define WFSLACKACCOUNT_H

@class NSString;


#import "WFOAuth2Account.h"

@interface WFSlackAccount : WFOAuth2Account

@property (copy, nonatomic) NSString *teamName; // ivar: _teamName
@property (copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)allowsMultipleAccounts;
+(id)clientID;
+(id)clientSecret;
+(id)localizedServiceName;
+(id)redirectURI;
+(id)scopes;
+(id)serviceID;
+(id)sessionManager;
-(id)localizedName;
-(void)refreshWithCompletionHandler:(id)arg0 ;


@end


#endif