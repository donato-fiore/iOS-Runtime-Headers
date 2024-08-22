// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIAPPLICATIONROUTER_H
#define VUIAPPLICATIONROUTER_H


#import <Foundation/Foundation.h>


@interface VUIApplicationRouter : NSObject



+(BOOL)_handleDocumentDataSource:(id)arg0 targetResponder:(id)arg1 appContext:(id)arg2 documentOptions:(id)arg3 completion:(id)arg4 ;
+(BOOL)_handleEvent:(id)arg0 targetResponder:(id)arg1 appContext:(id)arg2 eventDataSource:(id)arg3 documentOptions:(id)arg4 extraInfo:(*id)arg5 ;
+(BOOL)handleAccountSettingsEventWithUrl:(id)arg0 amsBagKey:(id)arg1 useAMSWebView:(BOOL)arg2 ;
+(BOOL)handleEvent:(id)arg0 targetResponder:(id)arg1 appContext:(id)arg2 routerDataSource:(id)arg3 supplementaryData:(id)arg4 extraInfo:(*id)arg5 ;
+(id)_viewControllerWithIdentifier:(id)arg0 ;
+(id)currentNavigationController;
+(id)eventDataSourceForEvent:(id)arg0 routerDataSource:(id)arg1 ;
+(id)topMostVisibleViewController;
+(id)topPresentedViewController;
+(void)_amsBagURLForKey:(id)arg0 withCompletion:(id)arg1 ;
+(void)_dismissPresentedViewControllerWithCompletion:(id)arg0 ;
+(void)_handleAccountSettingsEventWithUrl:(id)arg0 amsBagKey:(id)arg1 useAMSWebView:(BOOL)arg2 isModalPresentation:(BOOL)arg3 originalNavigationController:(id)arg4 ;
+(void)_navigateAccountSettingsWithDestinationViewController:(id)arg0 shouldEmbedInNavController:(BOOL)arg1 isModalPresentation:(BOOL)arg2 originalNavigationController:(id)arg3 ;
+(void)_performForType:(NSInteger)arg0 targetResponder:(id)arg1 appContext:(id)arg2 eventDataSource:(id)arg3 documentOptions:(id)arg4 ;
+(void)dismissOrPopLastViewControllerWithCompletion:(id)arg0 ;
+(void)dismissOrPopViewControllerWithId:(id)arg0 completion:(id)arg1 ;
+(void)dismissPresentedViewController;
+(void)pushAccountSettingsEventWithUrl:(id)arg0 amsBagKey:(id)arg1 useAMSWebView:(BOOL)arg2 fromNavigationController:(id)arg3 ;


@end


#endif