// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPOCKETACCESSRESOURCE_H
#define WFPOCKETACCESSRESOURCE_H

@class WFAccessResource, NSString;
@protocol PocketAPIDelegate;


#import "PocketAPI.h"

@interface WFPocketAccessResource : WFAccessResource <PocketAPIDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *loginHandler; // ivar: _loginHandler
@property (retain, nonatomic) PocketAPI *pocket; // ivar: _pocket
@property (readonly) Class superclass;


-(BOOL)canLogOut;
-(NSUInteger)status;
-(id)associatedAppIdentifier;
-(id)protectedResourceDescription;
-(id)resourceName;
-(id)username;
-(void)logOut;
-(void)makeAvailableWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;
-(void)pocketAPI:(id)arg0 hadLoginError:(id)arg1 ;
-(void)pocketAPI:(id)arg0 requestedOpenURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)pocketAPILoggedIn:(id)arg0 ;
-(void)refreshAvailabilityWithNotification:(BOOL)arg0 ;


@end


#endif