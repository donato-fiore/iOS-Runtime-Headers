// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTCARRIERSPACEUIPLANPURCHASEWEBVIEWCONTROLLER_H
#define CTCARRIERSPACEUIPLANPURCHASEWEBVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, WKWebView;
@protocol WKScriptMessageHandler, WKNavigationDelegate, CTCarrierSpaceUIPlanPurchaseWebViewControllerDelegate;


#import "LoadingIndicatorViewController.h"

@interface CTCarrierSpaceUIPlanPurchaseWebViewController : UIViewController <WKScriptMessageHandler, WKNavigationDelegate>



@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CTCarrierSpaceUIPlanPurchaseWebViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LoadingIndicatorViewController *loadingViewController; // ivar: _loadingViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


-(void)_accountUpdatedWithStatus:(id)arg0 ;
-(void)_swapOutLoadingView;
-(void)loadFileURL:(id)arg0 ;
-(void)loadRequest:(id)arg0 ;
-(void)loadView;
-(void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;


@end


#endif