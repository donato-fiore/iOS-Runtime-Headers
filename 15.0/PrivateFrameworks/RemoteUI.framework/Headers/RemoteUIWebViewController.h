// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMOTEUIWEBVIEWCONTROLLER_H
#define REMOTEUIWEBVIEWCONTROLLER_H

@class UIViewController, WKWebView, UINavigationBar, UINavigationItem, NSString, UIToolbar;
@protocol WKScriptMessageHandler, WKNavigationDelegate, RemoteUIWebViewControllerDelegate;


#import "RUIStyle.h"

@interface RemoteUIWebViewController : UIViewController <WKScriptMessageHandler, WKNavigationDelegate>

 {
    WKWebView *_webView;
    id *_loadCompletion;
    UINavigationBar *_navigationBar;
    UINavigationItem *_navigationItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RemoteUIWebViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *dismissButtonAlignment; // ivar: _dismissButtonAlignment
@property (copy, nonatomic) NSString *dismissButtonLabel; // ivar: _dismissButtonLabel
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL scalesPageToFit; // ivar: _scalesPageToFit
@property (retain, nonatomic) RUIStyle *style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIToolbar *toolbar; // ivar: _toolbar
@property (readonly, nonatomic) WKWebView *webView;


-(id)_spinnerManagerIdentifier;
-(id)navigationBar;
-(id)navigationItem;
-(id)scriptForJSBridge;
-(id)scriptForScalesPageToFit;
-(void)_dismissWithPayload:(id)arg0 ;
-(void)_startActivityIndicator;
-(void)_stopActivityIndicator;
-(void)dealloc;
-(void)donePressed:(id)arg0 ;
-(void)loadURL:(id)arg0 ;
-(void)loadURL:(id)arg0 completion:(id)arg1 ;
-(void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;


@end


#endif