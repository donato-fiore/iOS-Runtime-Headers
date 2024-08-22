// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTUMBLRACCESSRESOURCE_H
#define WFTUMBLRACCESSRESOURCE_H

@class WFAccessResource, NSString;



@interface WFTumblrAccessResource : WFAccessResource

@property (copy, nonatomic) NSString *OAuthToken; // ivar: _OAuthToken
@property (copy, nonatomic) NSString *OAuthTokenSecret; // ivar: _OAuthTokenSecret


+(void)setTumblrOAuthToken:(id)arg0 ;
+(void)setTumblrOAuthTokenSecret:(id)arg0 ;
-(BOOL)canLogOut;
-(NSUInteger)globalLevelStatus;
-(id)associatedAppIdentifier;
-(id)protectedResourceDescription;
-(id)resourceName;
-(id)username;
-(void)logOut;


@end


#endif