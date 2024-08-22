// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFWEBEXTENSIONPAGEMENUCONTROLLER_H
#define SFWEBEXTENSIONPAGEMENUCONTROLLER_H

@class WBSWebExtensionToolbarItem, WBSWebExtensionData, UIViewController, NSNumber, NSString;
@protocol WBSWebExtensionToolbarItemImplementation, WKUIDelegate, WBSWebExtensionTab, WBSWebExtensionWindow;


#import "_SFWebExtensionPopupViewController.h"
#import "_SFWebExtensionSettingsAlertItem.h"
#import "_SFWebExtensionActivity.h"

@interface SFWebExtensionPageMenuController : WBSWebExtensionToolbarItem <WBSWebExtensionToolbarItemImplementation, WKUIDelegate>

 {
    WBSWebExtensionData *_webExtension;
    UIViewController *_parentViewController;
    _SFWebExtensionPopupViewController *_popupViewController;
    id<WBSWebExtensionTab> *_tab;
    _SFWebExtensionSettingsAlertItem *_alertItem;
    _SFWebExtensionActivity *_activityItem;
    NSNumber *_tabIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<WBSWebExtensionWindow> *windowDisplayingPopupWebView;


+(id)_imageViewForWarningTriangleImage:(id)arg0 ;
+(id)badgeViewForText:(id)arg0 ;
-(BOOL)shouldShowWarningTriangleImageForTab:(id)arg0 ;
-(BOOL)showingExtensionPopup;
-(id)activityForTab:(id)arg0 ;
-(id)alertItemForTab:(id)arg0 ;
-(id)iconForTab:(id)arg0 ;
-(id)iconForTab:(id)arg0 size:(struct CGSize )arg1 ;
-(id)initWithExtension:(id)arg0 ;
-(id)popupWebView;
-(id)webExtension;
-(id)webView:(id)arg0 createWebViewWithConfiguration:(id)arg1 forNavigationAction:(id)arg2 windowFeatures:(id)arg3 ;
-(void)_createTabWithURL:(id)arg0 ;
-(void)_loadWebExtensionPopupURL:(id)arg0 parentViewController:(id)arg1 popoverSourceInfo:(id)arg2 forTab:(id)arg3 ;
-(void)didSetBadgeText:(id)arg0 forTabWithIdentifier:(id)arg1 ;
-(void)didSetEnabledState:(BOOL)arg0 forTabWithIdentifier:(id)arg1 ;
-(void)didSetIcon:(id)arg0 forTabWithIdentifier:(id)arg1 ;
-(void)dismissPopupImmediatelyIfNecessary;
-(void)performActionForTab:(id)arg0 parentViewController:(id)arg1 popoverSourceInfo:(id)arg2 ;
-(void)popupDidNavigateRequestingNewWindowToURL:(id)arg0 ;
-(void)webViewDidClose:(id)arg0 ;


@end


#endif