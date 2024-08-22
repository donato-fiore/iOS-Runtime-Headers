// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPINBOARDACCESSRESOURCE_H
#define WFPINBOARDACCESSRESOURCE_H

@class WFAccessResource;



@interface WFPinboardAccessResource : WFAccessResource



+(id)pinboardPassword;
+(id)pinboardToken;
+(id)pinboardUsername;
-(BOOL)canLogOut;
-(NSUInteger)globalLevelStatus;
-(id)icon;
-(id)name;
-(id)protectedResourceDescription;
-(id)resourceName;
-(id)username;
-(void)logOut;


@end


#endif