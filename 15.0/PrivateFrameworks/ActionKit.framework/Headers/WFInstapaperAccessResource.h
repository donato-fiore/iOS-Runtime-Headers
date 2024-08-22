// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFINSTAPAPERACCESSRESOURCE_H
#define WFINSTAPAPERACCESSRESOURCE_H

@class WFAccessResource;



@interface WFInstapaperAccessResource : WFAccessResource



+(id)instapaperToken;
+(id)instapaperTokenSecret;
+(id)instapaperUsername;
+(void)initialize;
-(BOOL)canLogOut;
-(NSUInteger)globalLevelStatus;
-(id)associatedAppIdentifier;
-(id)protectedResourceDescription;
-(id)resourceName;
-(id)username;
-(void)logOut;


@end


#endif