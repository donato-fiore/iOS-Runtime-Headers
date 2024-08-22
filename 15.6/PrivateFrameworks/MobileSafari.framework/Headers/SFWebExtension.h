// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFWEBEXTENSION_H
#define SFWEBEXTENSION_H

@class WBSWebExtensionData, WKWebViewConfiguration;



@interface SFWebExtension : WBSWebExtensionData {
    id *_accessRequestDialogCompletionHandler;
    BOOL _isAccessRequestDialogPresentedOrScheduled;
    BOOL _isBannerShownOrScheduled;
}


@property (readonly, nonatomic) WKWebViewConfiguration *extensionWebViewConfiguration;
@property (readonly, nonatomic) BOOL isDevelopmentBuild;


-(BOOL)_applicationIsActive;
-(BOOL)_canShowBanner;
-(BOOL)canLoadWithErrorString:(*id)arg0 ;
-(id)_backgroundWebViewConfiguration;
-(id)_lastInteractionDate;
-(id)_updateLastInteractionDate;
-(id)defaultWebsiteDataStore;
-(id)webView:(id)arg0 createWebViewWithConfiguration:(id)arg1 forNavigationAction:(id)arg2 windowFeatures:(id)arg3 ;
-(void)_compileDeclarativeNetRequestRules:(id)arg0 completionHandler:(id)arg1 ;
-(void)_hidePermissionBanner;
-(void)_showAccessRequestDialogForPendingRequestsAndAdditionalURLs:(id)arg0 additionalCallingAPIName:(id)arg1 performingUserGestureInTab:(id)arg2 completionHandler:(id)arg3 ;
-(void)checkPermissionAndPromptIfNecessaryToAccessURLs:(id)arg0 inTab:(id)arg1 options:(NSUInteger)arg2 callingAPIName:(id)arg3 completionHandler:(id)arg4 ;
-(void)permissionRequestBannerWasDismissed;
-(void)requestPermissionsFromToolbarItemInTab:(id)arg0 completionHandler:(id)arg1 ;
-(void)showAlertForPendingPermissionRequests;
-(void)showOrHidePermissionRequestBannerIfNeeded;
-(void)userGesturePerformedInTab:(id)arg0 ;


@end


#endif