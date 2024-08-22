// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSVIEWCONTROLLERFACTORY_H
#define VSVIEWCONTROLLERFACTORY_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface VSViewControllerFactory : NSObject

@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue


+(id)sharedFactory;
-(id)authenticationViewControllerForViewModel:(id)arg0 ;
-(id)identityProviderPickerViewControllerWithIdentityProviders:(id)arg0 ;
-(id)init;
-(id)loadingViewController;
-(id)viewControllerForAppsSupportedByIdentityProvider:(id)arg0 supportedApps:(id)arg1 delegate:(id)arg2 ;
-(id)viewControllerForPlaybackActivityReportingFromAppsWithBundleIDs:(id)arg0 grantingVouchers:(BOOL)arg1 appleAccountName:(id)arg2 identityProvider:(id)arg3 completionHandler:(id)arg4 ;
-(id)viewControllerForUnsupportedProvider:(id)arg0 withRequestingAppDisplayName:(id)arg1 storage:(id)arg2 acknowledgementHandler:(id)arg3 ;
-(id)viewControllerToConfirmAccountDeletionForAccount:(id)arg0 preferredStyle:(NSInteger)arg1 confirmationHandler:(id)arg2 ;
-(id)viewControllerToConfirmDeveloperIdentityProviderDeletionWithConfirmationHandler:(id)arg0 ;
-(void)viewServiceRemoteViewControllerWithCompletion:(id)arg0 ;


@end


#endif