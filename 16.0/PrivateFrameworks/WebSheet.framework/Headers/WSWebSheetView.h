// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WSWEBSHEETVIEW_H
#define WSWEBSHEETVIEW_H

@class UIView, _SFFormAutoFillController, UINavigationBar, UINavigationItem, UIBarButtonItem, UIImageView, UILabel, NSMutableArray, WBUSheetController, NSURL, UIAlertController, NSTimer, NSString, NSDictionary, NSMutableDictionary, WKWebView;
@protocol UINavigationBarDelegate, SFFormAutoFillControllerDelegate, _WSWebSheetDownloadDelegate, WKNavigationDelegate, _WKInputDelegate, WKUIDelegate, OS_dispatch_queue, WSWebSheetViewDelegate;


#import "WSWebSheetDownloadManager.h"
#import "WSWebSheetViewController.h"

@interface WSWebSheetView : UIView <UINavigationBarDelegate, SFFormAutoFillControllerDelegate, _WSWebSheetDownloadDelegate, WKNavigationDelegate, _WKInputDelegate, WKUIDelegate>

 {
    _SFFormAutoFillController *_autoFillController;
    UINavigationBar *_navigationBar;
    UINavigationItem *_navigationItem;
    UIBarButtonItem *_backButtonItem;
    UIBarButtonItem *_forwardButtonItem;
    UIBarButtonItem *_cancelDoneBarButtonItem;
    UIBarButtonItem *_backForwardButton;
    UIView *_addressView;
    UIImageView *_lockIconView;
    UILabel *_addressLabel;
    UILabel *_ssidLabel;
    NSMutableArray *_alerts;
    WBUSheetController *_sheetController;
    NSMutableArray *_redirectTypeQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _currentRedirectURLType;
    BOOL _currentRedirectURLTypeSet;
    BOOL _firstNavigation;
    BOOL _everReceivedUntrustedCertificate;
    NSURL *_navigationURLAtStart;
    WSWebSheetDownloadManager *_downloadManager;
    BOOL _inDoneState;
    UIAlertController *_stayConnectedAlertController;
    NSTimer *_captiveProbeDispatchTimer;
    NSString *_loginURL;
    NSString *_postMessage;
    NSString *_ssid;
    BOOL _lastResultWasTimeoutError;
}


@property (retain, nonatomic) NSURL *currentURL; // ivar: _currentURL
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WSWebSheetViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableTVMode; // ivar: _enableTVMode
@property (nonatomic) BOOL hasEVCert; // ivar: _hasEVCert
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCertTrustDone; // ivar: _isCertTrustDone
@property (copy, nonatomic) NSURL *probeURL; // ivar: _probeURL
@property (copy, nonatomic) NSDictionary *proxyConfiguration; // ivar: _proxyConfiguration
@property (retain, nonatomic) NSMutableDictionary *resultOptions; // ivar: _resultOptions
@property (nonatomic) BOOL shouldShowStayConnectedOptions; // ivar: _shouldShowStayConnectedOptions
@property (readonly) Class superclass;
@property (retain, nonatomic) WSWebSheetViewController *webSheetViewController; // ivar: _webSheetViewController
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


-(BOOL)_handleCertificateError:(struct __SecTrust *)arg0 newhost:(id)arg1 ;
-(BOOL)_isSecureAddress;
-(BOOL)_shouldShowPromptLabels;
-(BOOL)formAutoFillControllerCanPrefillForm:(id)arg0 ;
-(BOOL)formAutoFillControllerShouldDisableStreamlinedLogin:(id)arg0 ;
-(BOOL)isChinaRegion;
-(BOOL)isUserAprroved:(id)arg0 ;
-(CGFloat)_promptLabelFontLineHeight;
-(id)_evCertColor;
-(id)_lockIconImage;
-(id)_presentingViewControllerForWebView:(id)arg0 ;
-(id)_promptLabelFont;
-(id)_sheetController;
-(id)_specializedMessageForError:(id)arg0 ;
-(id)_titleForError:(id)arg0 ;
-(id)appNametoOpenURL:(id)arg0 ;
-(id)formAutoFillControllerURLForFormAutoFill:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)webView:(id)arg0 createWebViewWithConfiguration:(id)arg1 forNavigationAction:(id)arg2 windowFeatures:(id)arg3 ;
-(void)_addAndRemoveAddressViewsAsNeeded;
-(void)_backButtonPressed;
-(void)_captiveProbeDispatchTimerDidFire:(id)arg0 ;
-(void)_forwardButtonPressed;
-(void)_precheckTrustForServerCertificate:(struct __SecTrust *)arg0 host:(id)arg1 ;
-(void)_showGenericDownloadAlert;
-(void)_showProfileDownloadAlert;
-(void)_showProfileInstallAlert;
-(void)_startCaptiveProbeDispatchTimer;
-(void)_stopCaptiveProbeDispatchTimer;
-(void)_updateAddress;
-(void)_updateBackForwardButtons;
-(void)_updateTitle;
-(void)_webView:(id)arg0 accessoryViewCustomButtonTappedInFormInputSession:(id)arg1 ;
-(void)_webView:(id)arg0 didStartInputSession:(id)arg1 ;
-(void)_webView:(id)arg0 insertTextSuggestion:(id)arg1 inInputSession:(id)arg2 ;
-(void)_webView:(id)arg0 navigationDidFinishDocumentLoad:(id)arg1 ;
-(void)_webView:(id)arg0 renderingProgressDidChange:(NSUInteger)arg1 ;
-(void)_webView:(id)arg0 willSubmitFormValues:(id)arg1 userObject:(id)arg2 submissionHandler:(id)arg3 ;
-(void)addAlert:(id)arg0 ;
-(void)cancelTapped;
-(void)dealloc;
-(void)dequeueRedirectTypeQueue;
-(void)dismissWebSheetWithCaptiveWebSheetResult:(NSInteger)arg0 ;
-(void)dispatchCaptiveProbe;
-(void)doneTapped;
-(void)downloadDidFail:(id)arg0 ;
-(void)downloadDidFinish:(id)arg0 ;
-(void)handleProbeResult:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)pushBackToRedirectTypeQueue;
-(void)safeAreaInsetsDidChange;
-(void)setSSID:(id)arg0 ;
-(void)updateRedirectURLTypeSetting;
-(void)updateResultOptions;
-(void)updateToDoneButton;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didCommitLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didCommitNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1 ;


@end


#endif