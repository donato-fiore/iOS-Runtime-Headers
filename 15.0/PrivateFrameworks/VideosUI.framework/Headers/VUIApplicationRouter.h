// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIAPPLICATIONROUTER_H
#define VUIAPPLICATIONROUTER_H


#import <Foundation/Foundation.h>


@interface VUIApplicationRouter : NSObject



+(BOOL)_handleDocumentDataSource:(id)arg0 targetResponder:(id)arg1 appContext:(id)arg2 documentOptions:(id)arg3 completion:(id)arg4 ;
+(BOOL)_handleEvent:(id)arg0 targetResponder:(id)arg1 appContext:(id)arg2 eventDataSource:(id)arg3 documentOptions:(id)arg4 extraInfo:(*id)arg5 ;
+(BOOL)handleAccountSettingsEvent:(id)arg0 url:(id)arg1 amsBagKey:(id)arg2 useAMSWebView:(BOOL)arg3 ;
+(BOOL)handleEvent:(id)arg0 targetResponder:(id)arg1 appContext:(id)arg2 routerDataSource:(id)arg3 supplementaryData:(id)arg4 extraInfo:(*id)arg5 ;
+(id)_viewControllerWithIdentifier:(id)arg0 ;
+(id)currentNavigationController;
+(id)eventDataSourceForEvent:(id)arg0 routerDataSource:(id)arg1 ;
+(id)topMostVisibleViewController;
+(id)topPresentedViewController;
+(void)_amsBagURLForKey:(id)arg0 withCompletion:(id)arg1 ;
+(void)_dismissPresentedViewControllerWithCompletion:(id)arg0 ;
+(void)_handleAccountSettingsPresentationWithViewController:(id)arg0 shouldEmbedInNavController:(BOOL)arg1 ;
+(void)_performForType:(NSInteger)arg0 targetResponder:(id)arg1 appContext:(id)arg2 eventDataSource:(id)arg3 documentOptions:(id)arg4 ;
+(void)dismissOrPopLastViewControllerWithCompletion:(id)arg0 ;
+(void)dismissOrPopViewControllerWithId:(id)arg0 completion:(id)arg1 ;
+(void)dismissPresentedViewController;


@end


#endif