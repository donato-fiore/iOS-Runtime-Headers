// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFEVERNOTEACCESSRESOURCE_H
#define WFEVERNOTEACCESSRESOURCE_H

@class WFAccessResource;



@interface WFEvernoteAccessResource : WFAccessResource



+(id)evernoteCallbackScheme;
+(id)evernoteSession;
-(BOOL)canLogOut;
-(NSUInteger)globalLevelStatus;
-(id)associatedAppIdentifier;
-(id)initWithDefinition:(id)arg0 ;
-(id)protectedResourceDescription;
-(id)resourceName;
-(id)username;
-(void)dealloc;
-(void)logOut;


@end


#endif