// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDROPBOXACCOUNT_H
#define WFDROPBOXACCOUNT_H



#import "WFOAuth2Account.h"

@interface WFDropboxAccount : WFOAuth2Account



+(id)clientID;
+(id)clientSecret;
+(id)localizedServiceName;
+(id)redirectURI;
+(id)responseType;
+(id)serviceID;
+(id)sessionManager;


@end


#endif