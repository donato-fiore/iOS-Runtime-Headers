// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFINSTAPAPERACCESSRESOURCE_H
#define WFINSTAPAPERACCESSRESOURCE_H

@class WFAccessResource;



@interface WFInstapaperAccessResource : WFAccessResource



+(id)instapaperToken;
+(id)instapaperTokenSecret;
+(id)instapaperUsername;
+(id)keychain;
+(id)userInterfaceClasses;
+(id)userInterfaceProtocol;
+(void)initialize;
+(void)setInstapaperToken:(id)arg0 ;
+(void)setInstapaperTokenSecret:(id)arg0 ;
+(void)setInstapaperUsername:(id)arg0 ;
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