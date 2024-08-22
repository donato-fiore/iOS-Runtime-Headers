// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SL_OOPAWEBVIEWCONTROLLER_H
#define SL_OOPAWEBVIEWCONTROLLER_H

@class UIViewController, WKWebView, UIWebView, NSURL, NSString;
@protocol WKNavigationDelegate, UIWebViewDelegate, UIWebViewPrivateDelegate, SL_OOPAuthFlowDelegate, SL_OOPAWebViewControllerDelegate;


#import "SL_OOPASpinnerTitle.h"

@interface SL_OOPAWebViewController : UIViewController <WKNavigationDelegate, UIWebViewDelegate, UIWebViewPrivateDelegate>

 {
    WKWebView *_wkWebView;
    UIWebView *_uiWebView;
    SL_OOPASpinnerTitle *_spinnerTitleView;
    *__CFURLStorageSession _storageSession;
    BOOL _hidingWebView;
    BOOL _didLoadWebView;
    BOOL _didFinish;
}


@property (retain, nonatomic) NSObject<SL_OOPAuthFlowDelegate> *authFlowDelegate; // ivar: _authFlowDelegate
@property (copy, nonatomic) NSURL *authURL; // ivar: _authURL
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SL_OOPAWebViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *navBarTitle;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *username; // ivar: _username


-(BOOL)webView:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(NSInteger)arg2 ;
-(id)init;
-(void)_cancelButtonTapped:(id)arg0 ;
-(void)_didFinishWithSuccess:(BOOL)arg0 response:(id)arg1 error:(id)arg2 ;
-(void)_evaluateDocumentTitleForUIWebView:(id)arg0 retryCount:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_evaluateDocumentTitleForWebView:(id)arg0 retryCount:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_loadWebView;
-(void)_loadWebViewIfReady;
-(void)_updateNavigationPromptWithActiveURL:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailLoadWithError:(id)arg1 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didReceiveServerRedirectForProvisionalNavigation:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg0 ;
-(void)webViewDidStartLoad:(id)arg0 ;


@end


#endif