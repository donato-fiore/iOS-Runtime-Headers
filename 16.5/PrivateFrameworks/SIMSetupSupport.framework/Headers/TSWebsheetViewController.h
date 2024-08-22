// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWEBSHEETVIEWCONTROLLER_H
#define TSWEBSHEETVIEWCONTROLLER_H

@class UIBarButtonItem, _SFFormAutoFillController, WKWebView, WKUserContentController, NSString, UIViewController;
@protocol UIScrollViewDelegate, SFFormAutoFillControllerDelegate, WKNavigationDelegate, WKScriptMessageHandler, WKUIDelegate, _WKInputDelegate, TSSetupFlowItem, TSEntitlementJSHandlerDelegate, TSSIMSetupFlowDelegate;


#import "SSUIViewController.h"
#import "TSCellularSetupLoadingView.h"

@interface TSWebsheetViewController : SSUIViewController <UIScrollViewDelegate, SFFormAutoFillControllerDelegate, WKNavigationDelegate, WKScriptMessageHandler, WKUIDelegate, _WKInputDelegate, TSSetupFlowItem>

 {
    UIBarButtonItem *_cancelButton;
    BOOL _didFinishDocumentLoad;
    BOOL _didFirstLayout;
    BOOL _didReceivePurchaseCallback;
    BOOL _isRemotePlan;
    BOOL _didViewAppear;
    _SFFormAutoFillController *_autoFillController;
    WKWebView *_webView;
    WKUserContentController *_wkUserContentController;
    NSString *_currentTitle;
    UIViewController *_viewController;
    TSCellularSetupLoadingView *_loadingView;
    id *_requestLoadedCompletion;
}


@property (weak) NSObject<TSEntitlementJSHandlerDelegate> *callbackDelegate; // ivar: _callbackDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger dismissCause; // ivar: _dismissCause
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_currentLanguageIsRTL;
-(BOOL)_isHexadecimalString:(id)arg0 ;
-(BOOL)_isProfilePendingRelease:(id)arg0 ;
-(BOOL)_shouldIgnoreWebviewError:(id)arg0 ;
-(BOOL)formAutoFillControllerCanPrefillForm:(id)arg0 ;
-(BOOL)formAutoFillControllerShouldDisableAutoFill:(id)arg0 ;
-(id)_processPool;
-(id)_webViewConfigurationWithProcessPool:(id)arg0 ;
-(id)formAutoFillControllerURLForFormAutoFill:(id)arg0 ;
-(id)initForRemotePlan:(BOOL)arg0 carrierName:(id)arg1 ;
-(id)initForRemotePlan:(BOOL)arg0 carrierName:(id)arg1 viewController:(id)arg2 ;
-(void)_doneButtonTapped;
-(void)_handlePlanPurchaseWithMessageBody:(id)arg0 ;
-(void)_handleTransferWithMessageBody:(id)arg0 ;
-(void)_showCancelButton:(BOOL)arg0 ;
-(void)_showVerifyingIndicator:(BOOL)arg0 ;
-(void)_transferESimInstallationStarted;
-(void)_webView:(id)arg0 accessoryViewCustomButtonTappedInFormInputSession:(id)arg1 ;
-(void)_webView:(id)arg0 insertTextSuggestion:(id)arg1 inInputSession:(id)arg2 ;
-(void)_webView:(id)arg0 navigationDidFinishDocumentLoad:(id)arg1 ;
-(void)_webView:(id)arg0 renderingProgressDidChange:(NSUInteger)arg1 ;
-(void)_webView:(id)arg0 willStartInputSession:(id)arg1 ;
-(void)_webView:(id)arg0 willSubmitFormValues:(id)arg1 userObject:(id)arg2 submissionHandler:(id)arg3 ;
-(void)loadRequest:(id)arg0 completion:(id)arg1 ;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)sendRequest:(id)arg0 ;
-(void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1 ;


@end


#endif