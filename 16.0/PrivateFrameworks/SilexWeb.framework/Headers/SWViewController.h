// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWVIEWCONTROLLER_H
#define SWVIEWCONTROLLER_H

@class UIViewController, NSURL, NSString, WKWebView;
@protocol WKNavigationDelegate, WKUIDelegate, _WKFullscreenDelegate, SWURLSchemeHandlerManager, SWContentRuleManager, SWDatastoreSynchronizationManager, SWDocumentStateReporting, SWErrorReporting, SWDatastoreManager, SWLogger, SWMessageHandlerManager, SWNavigationManager, SWReachabilityProvider, SWScriptsManager, SWSessionManager, SWSetupManager, SWProcessTerminationManager, SWTimeoutManager;


#import "SWLoader.h"

@interface SWViewController : UIViewController <WKNavigationDelegate, WKUIDelegate, _WKFullscreenDelegate>



@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSObject<SWURLSchemeHandlerManager> *URLSchemeHandlerManager; // ivar: _URLSchemeHandlerManager
@property (nonatomic) BOOL allowsRemoteInspection;
@property (readonly, nonatomic) NSObject<SWContentRuleManager> *contentRuleManager; // ivar: _contentRuleManager
@property (readonly, nonatomic) NSObject<SWDatastoreSynchronizationManager> *datastoreSynchronizationManager; // ivar: _datastoreSynchronizationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SWDocumentStateReporting> *documentStateReporter; // ivar: _documentStateReporter
@property (readonly, nonatomic) NSObject<SWErrorReporting> *errorReporter; // ivar: _errorReporter
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isWebViewPresentingInFullScreen; // ivar: _isWebViewPresentingInFullScreen
@property (retain, nonatomic) SWLoader *loader; // ivar: _loader
@property (readonly, nonatomic) NSObject<SWDatastoreManager> *localDatastoreManager; // ivar: _localDatastoreManager
@property (readonly, nonatomic) NSObject<SWLogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<SWMessageHandlerManager> *messageHandlerManager; // ivar: _messageHandlerManager
@property (readonly, nonatomic) NSObject<SWNavigationManager> *navigationManager; // ivar: _navigationManager
@property (readonly, nonatomic) NSObject<SWReachabilityProvider> *reachabilityProvider; // ivar: _reachabilityProvider
@property (readonly, nonatomic) NSObject<SWScriptsManager> *scriptsManager; // ivar: _scriptsManager
@property (readonly, nonatomic) NSObject<SWSessionManager> *sessionManager; // ivar: _sessionManager
@property (readonly, nonatomic) NSObject<SWSetupManager> *setupManager; // ivar: _setupManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SWProcessTerminationManager> *terminationManager; // ivar: _terminationManager
@property (readonly, nonatomic) NSObject<SWTimeoutManager> *timeoutManager; // ivar: _timeoutManager
@property (readonly, nonatomic) WKWebView *webView; // ivar: _webView


-(BOOL)webView:(id)arg0 shouldPreviewElement:(id)arg1 ;
-(id)accessibilityElements;
-(id)initWithWebView:(id)arg0 setupManager:(id)arg1 scriptsManager:(id)arg2 messageHandlerManager:(id)arg3 navigationManager:(id)arg4 errorReporter:(id)arg5 documentStateReporter:(id)arg6 timeoutManager:(id)arg7 terminationManager:(id)arg8 contentRuleManager:(id)arg9 reachabilityProvider:(id)arg10 logger:(id)arg11 sessionManager:(id)arg12 datastoreSynchronizationManager:(id)arg13 localDatastoreManager:(id)arg14 URLSchemeHandlerManager:(id)arg15 ;
-(id)webView:(id)arg0 previewingViewControllerForElement:(id)arg1 defaultActions:(id)arg2 ;
-(void)_webView:(id)arg0 navigation:(id)arg1 didSameDocumentNavigation:(NSInteger)arg2 ;
-(void)_webViewDidEnterElementFullscreen:(id)arg0 ;
-(void)_webViewDidExitElementFullscreen:(id)arg0 ;
-(void)initiateLoadingWithLoader:(id)arg0 ;
-(void)loadHTMLString:(id)arg0 baseURL:(id)arg1 ;
-(void)loadLocalDatastore:(id)arg0 completion:(id)arg1 ;
-(void)loadURL:(id)arg0 ;
-(void)loadURL:(id)arg0 completion:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)webView:(id)arg0 commitPreviewingViewController:(id)arg1 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg0 ;


@end


#endif