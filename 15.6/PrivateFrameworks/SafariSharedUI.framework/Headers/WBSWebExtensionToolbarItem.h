// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSWEBEXTENSIONTOOLBARITEM_H
#define WBSWEBEXTENSIONTOOLBARITEM_H

@class NSMutableDictionary, NSString, NSURL, UIImage, NSMutableSet, WKWebView;
@protocol WKNavigationDelegate;

#import <Foundation/Foundation.h>

#import "WBSWebExtensionsController.h"
#import "WBSSafariExtensionStateObserver.h"
#import "WBSWebExtensionData.h"

@interface WBSWebExtensionToolbarItem : NSObject <WKNavigationDelegate>

 {
    NSMutableDictionary *_tabIdentifierToTitleMap;
    NSString *_badgeText;
    NSMutableDictionary *_tabIdentifierToBadgeTextMap;
    NSURL *_popupURL;
    NSMutableDictionary *_tabIdentifierToPopupURLMap;
    BOOL _enabled;
    NSMutableDictionary *_tabIdentifierToEnabledMap;
    UIImage *_runtimeIcon;
    NSMutableDictionary *_tabIdentifierToIconMap;
    WBSWebExtensionsController *_extensionsController;
    WBSSafariExtensionStateObserver *_extensionStateObserver;
    BOOL _hasUpdatedBadgeForAllTabs;
    NSMutableSet *_tabIdentifiersWithUpdatedBadgeText;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) UIImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) WKWebView *popupWebView; // ivar: _popupWebView
@property (readonly, nonatomic) BOOL showingExtensionPopup; // ivar: _showingExtensionPopup
@property (readonly) Class superclass;
@property (readonly, nonatomic) WBSWebExtensionData *webExtension;


-(BOOL)hasUpdatedBadgeTextInTabWithIdentifier:(id)arg0 ;
-(BOOL)isEnabledForTabWithIdentifier:(id)arg0 ;
-(BOOL)shouldRequestAccessForTab:(id)arg0 ;
-(id)badgeTextForTabWithIdentifier:(id)arg0 ;
-(id)iconForTabWithIdentifier:(id)arg0 ;
-(id)initWithWebExtension:(id)arg0 extensionsController:(id)arg1 label:(id)arg2 popupURL:(id)arg3 image:(id)arg4 ;
-(id)popupURLForTabWithIdentifier:(id)arg0 ;
-(id)titleForTabWithIdentifier:(id)arg0 ;
-(void)_webViewDidDisableInspectorBrowserDomain:(id)arg0 ;
-(void)_webViewDidEnableInspectorBrowserDomain:(id)arg0 ;
-(void)clearStateForTabWithIdentifier:(id)arg0 ;
-(void)didSelectTab:(id)arg0 ;
-(void)didViewBadgeInTabWithIdentifier:(id)arg0 ;
-(void)setBadgeText:(id)arg0 forTabWithIdentifier:(id)arg1 ;
-(void)setEnabled:(BOOL)arg0 forTabWithIdentifier:(id)arg1 ;
-(void)setIcon:(id)arg0 forTabWithIdentifier:(id)arg1 ;
-(void)setPopupURL:(id)arg0 forTabWithIdentifier:(id)arg1 ;
-(void)setTitle:(id)arg0 forTabWithIdentifier:(id)arg1 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg0 ;


@end


#endif