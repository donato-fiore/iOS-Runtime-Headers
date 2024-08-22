// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMTUMBLRAUTHENTICATOR_H
#define TMTUMBLRAUTHENTICATOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TMTumblrAuthenticator : NSObject

@property (copy, nonatomic) NSString *OAuthConsumerKey; // ivar: _OAuthConsumerKey
@property (copy, nonatomic) NSString *OAuthConsumerSecret; // ivar: _OAuthConsumerSecret
@property (copy, nonatomic) id *threeLeggedOAuthCallback; // ivar: _threeLeggedOAuthCallback
@property (copy, nonatomic) NSString *threeLeggedOAuthTokenSecret; // ivar: _threeLeggedOAuthTokenSecret


+(id)sharedInstance;
+(void)signRequest:(id)arg0 withParameters:(id)arg1 consumerKey:(id)arg2 consumerSecret:(id)arg3 token:(id)arg4 tokenSecret:(id)arg5 ;
-(BOOL)handleOpenURL:(id)arg0 ;
// -(void)authenticate:(id)arg0 urlBlock:(id)arg1 callback:(unk)arg2  ;
-(void)xAuth:(id)arg0 password:(id)arg1 callback:(id)arg2 ;


@end


#endif