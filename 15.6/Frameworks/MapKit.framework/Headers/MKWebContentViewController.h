// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKWEBCONTENTVIEWCONTROLLER_H
#define MKWEBCONTENTVIEWCONTROLLER_H

@class NSLayoutConstraint, WKWebView, UIActivityIndicatorView, NSURL, WKNavigation, NSString;
@protocol WKNavigationDelegate, WKUIDelegate, MKInfoCardThemeListener, MKWebBridgeDelegate, MKModuleViewControllerProtocol, MKWebContentViewControllerDelegate;


#import "MKPlaceSectionViewController.h"
#import "MKWebViewFactoryItem.h"
#import "MKWebBridge.h"
#import "MKWebContentTraits.h"

@interface MKWebContentViewController : MKPlaceSectionViewController <WKNavigationDelegate, WKUIDelegate, MKInfoCardThemeListener, MKWebBridgeDelegate, MKModuleViewControllerProtocol>

 {
    NSLayoutConstraint *_heightConstraint;
    MKWebViewFactoryItem *_webViewFactoryItem;
    WKWebView *_webView;
    MKWebBridge *_bridge;
    UIActivityIndicatorView *_activityIndicatorView;
    NSURL *_resolvedURL;
    WKNavigation *_currentWebNavigation;
    MKWebContentTraits *_webContentTraits;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKWebContentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(id)resolvedURLForRelativeURL:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 traits:(id)arg1 ;
-(void)_addLoadingSpinner;
-(void)_cancel;
-(void)_finishLoading;
-(void)_getAnalyticsShortSessionSnapshotWithCallbackHandler:(id)arg0 ;
-(void)_removeLoadingSpinner;
-(void)_removeModuleWithCallbackHandler:(id)arg0 ;
-(void)_resetBridge;
-(void)_setHeight:(CGFloat)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_setHeight:(id)arg0 callbackHandler:(id)arg1 ;
-(void)_startLoading;
-(void)dealloc;
-(void)infoCardThemeChanged;
-(void)viewDidLoad;
-(void)webBridgeDidConnect:(id)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didCommitNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;


@end


#endif