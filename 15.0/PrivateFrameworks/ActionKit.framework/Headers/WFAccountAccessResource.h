// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFACCOUNTACCESSRESOURCE_H
#define WFACCOUNTACCESSRESOURCE_H

@class WFAccessResource, NSArray;



@interface WFAccountAccessResource : WFAccessResource {
    id *_observer;
    id *_completionHandler;
}


@property (readonly, nonatomic) Class accountClass;
@property (readonly, copy, nonatomic) NSArray *accounts;


-(BOOL)canLogOut;
-(BOOL)supportsMultipleAccounts;
-(NSUInteger)globalLevelStatus;
-(id)errorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)importErrorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)name;
-(id)protectedResourceDescription;
-(id)resourceName;
-(id)settingsUIDefinition;
-(id)username;
-(void)dealloc;
-(void)logOut;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;
-(void)makeAvailableAtGlobalLevelWithWebAuthenticationSessionInUserInterface:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif