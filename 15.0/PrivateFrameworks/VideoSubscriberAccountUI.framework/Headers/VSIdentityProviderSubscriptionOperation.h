// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSIDENTITYPROVIDERSUBSCRIPTIONOPERATION_H
#define VSIDENTITYPROVIDERSUBSCRIPTIONOPERATION_H

@class VSAsyncOperation, VSDeveloperSettingsFetchOperation, VSIdentityProvider, NSOperationQueue, VSSubscriptionRegistrationCenter, NSArray;



@interface VSIdentityProviderSubscriptionOperation : VSAsyncOperation

@property (retain, nonatomic) VSDeveloperSettingsFetchOperation *developerSettingsFetchOperation; // ivar: _developerSettingsFetchOperation
@property (retain, nonatomic) VSIdentityProvider *identityProvider; // ivar: _identityProvider
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) VSSubscriptionRegistrationCenter *registrationCenter; // ivar: _registrationCenter
@property (copy, nonatomic) NSArray *subscriptionsToAdd; // ivar: _subscriptionsToAdd
@property (copy, nonatomic) NSArray *subscriptionsToRemoveByBundleID; // ivar: _subscriptionsToRemoveByBundleID


-(id)_authorizedBundleIdsFromAppDescriptions:(id)arg0 ;
-(id)init;
-(id)initWithRegistrationCenter:(id)arg0 andDeveloperSettingsFetchOperation:(id)arg1 ;
-(void)_registerSubscriptions:(id)arg0 withAuthorizedBundleIdentifiers:(id)arg1 ;
-(void)_removeSubscriptionsForBundleIdentifiers:(id)arg0 withAuthorizedBundleIdentifiers:(id)arg1 ;
-(void)cancel;
-(void)executionDidBegin;


@end


#endif