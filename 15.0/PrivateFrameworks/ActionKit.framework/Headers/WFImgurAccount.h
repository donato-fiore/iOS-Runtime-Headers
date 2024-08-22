// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFIMGURACCOUNT_H
#define WFIMGURACCOUNT_H



#import "WFOAuth2Account.h"

@interface WFImgurAccount : WFOAuth2Account



+(id)clientID;
+(id)clientSecret;
+(id)localizedServiceName;
+(id)redirectURI;
+(id)responseType;
+(id)serviceID;
+(id)sessionManager;
-(void)refreshWithCompletionHandler:(id)arg0 ;


@end


#endif