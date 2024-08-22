// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPINBOARDACCESSRESOURCE_H
#define WFPINBOARDACCESSRESOURCE_H

@class WFAccessResource;



@interface WFPinboardAccessResource : WFAccessResource



+(id)pinboardPassword;
+(id)pinboardToken;
+(id)pinboardUsername;
+(id)userInterfaceClasses;
+(id)userInterfaceProtocol;
-(BOOL)canLogOut;
-(NSUInteger)status;
-(id)icon;
-(id)name;
-(id)protectedResourceDescription;
-(id)resourceName;
-(id)username;
-(void)logOut;
-(void)makeAvailableWithRemoteInterface:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif