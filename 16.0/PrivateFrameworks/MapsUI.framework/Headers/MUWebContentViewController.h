// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUWEBCONTENTVIEWCONTROLLER_H
#define MUWEBCONTENTVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint, WKWebView, UIActivityIndicatorView, NSURL, NSString, WKNavigation;
@protocol WKNavigationDelegate, WKUIDelegate, MKInfoCardThemeListener, MUWebBridgeDelegate, MUWebContentViewControllerDelegate;


#import "MUWebViewFactoryItem.h"
#import "MUWebBridge.h"
#import "MUWebContentTraits.h"
#import "MUPlaceEnrichmentActionManager.h"

@interface MUWebContentViewController : UIViewController <WKNavigationDelegate, WKUIDelegate, MKInfoCardThemeListener, MUWebBridgeDelegate>

 {
    NSLayoutConstraint *_heightConstraint;
    MUWebViewFactoryItem *_webViewFactoryItem;
    WKWebView *_webView;
    MUWebBridge *_bridge;
    UIActivityIndicatorView *_activityIndicatorView;
    CGFloat _defaultHeight;
    NSURL *_resolvedURL;
    NSString *_html;
    WKNavigation *_currentWebNavigation;
    MUWebContentTraits *_webContentTraits;
}


@property (retain, nonatomic) MUPlaceEnrichmentActionManager *actionManager; // ivar: _actionManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUWebContentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(id)resolvedURLForRelativeURL:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAddLoadingIndicator;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 traits:(id)arg1 ;
-(void)_addLoadingSpinner;
-(void)_cancel;
-(void)_finishLoading;
-(void)_getAnalyticsShortSessionSnapshotWithCallbackHandler:(id)arg0 ;
-(void)_invokeAction:(id)arg0 callbackHandler:(id)arg1 ;
-(void)_removeLoadingSpinner;
-(void)_removeModuleWithArguments:(id)arg0 callbackHandler:(id)arg1 ;
-(void)_resetBridge;
-(void)_setHeight:(CGFloat)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_setHeight:(id)arg0 callbackHandler:(id)arg1 ;
-(void)_startLoading;
-(void)configureWithHTML:(id)arg0 actionManager:(id)arg1 initialDefaultHeight:(CGFloat)arg2 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateActionOverBridge:(id)arg0 ;
-(void)viewDidLoad;
-(void)webBridgeDidConnect:(id)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didCommitNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;


@end


#endif