// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTUMBLRACCESSRESOURCE_H
#define WFTUMBLRACCESSRESOURCE_H

@class WFAccessResource, NSString;



@interface WFTumblrAccessResource : WFAccessResource

@property (copy, nonatomic) NSString *OAuthToken; // ivar: _OAuthToken
@property (copy, nonatomic) NSString *OAuthTokenSecret; // ivar: _OAuthTokenSecret


+(id)keychain;
+(id)userInterfaceClasses;
+(id)userInterfaceProtocol;
+(void)setTumblrOAuthToken:(id)arg0 ;
+(void)setTumblrOAuthTokenSecret:(id)arg0 ;
-(BOOL)canLogOut;
-(NSUInteger)status;
-(id)associatedAppIdentifier;
-(id)protectedResourceDescription;
-(id)resourceName;
-(id)username;
-(void)logOut;
-(void)makeAvailableWithRemoteInterface:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif