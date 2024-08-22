// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFEVERNOTEACCESSRESOURCE_H
#define WFEVERNOTEACCESSRESOURCE_H

@class WFAccessResource;



@interface WFEvernoteAccessResource : WFAccessResource



+(id)evernoteCallbackScheme;
+(id)evernoteSession;
+(id)userInterfaceClasses;
+(id)userInterfaceProtocol;
-(BOOL)canLogOut;
-(NSUInteger)status;
-(id)associatedAppIdentifier;
-(id)initWithDefinition:(id)arg0 ;
-(id)protectedResourceDescription;
-(id)resourceName;
-(id)username;
-(void)dealloc;
-(void)logOut;
-(void)makeAvailableWithRemoteInterface:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif