// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBVIEW_H
#define AMSUIWEBVIEW_H

@class NSArray, AMSBinaryPromise, NSString, WKWebView;
@protocol WKUIDelegate, WKNavigationDelegatePrivate, WKScriptMessageHandlerWithReply;


#import "AMSUICommonView.h"
#import "AMSUIWebClientContext.h"

@interface AMSUIWebView : AMSUICommonView <WKUIDelegate, WKNavigationDelegatePrivate, WKScriptMessageHandlerWithReply>



@property (retain, nonatomic) NSArray *baseScripts; // ivar: _baseScripts
@property (nonatomic) CGFloat bottomInset;
@property (readonly, nonatomic) BOOL contentLoaded; // ivar: _contentLoaded
@property (retain, nonatomic) AMSBinaryPromise *contentRulesPromise; // ivar: _contentRulesPromise
@property (weak, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (retain, nonatomic) AMSBinaryPromise *currentLoadPromise; // ivar: _currentLoadPromise
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topInset; // ivar: _topInset
@property (readonly, nonatomic) WKWebView *underlyingWebView; // ivar: _underlyingWebView


+(id)_getSetCookiesForResponse:(id)arg0 ;
-(id)_jsonLogStringWithDictionary:(id)arg0 ;
-(id)_parseRequestError:(id)arg0 logKey:(id)arg1 ;
-(id)_prepareWithURL:(id)arg0 loadBlock:(id)arg1 ;
-(id)_setupContentRulesForWebView:(id)arg0 context:(id)arg1 ;
-(id)initWithContext:(id)arg0 additionalScripts:(id)arg1 ;
-(id)loadRequest:(id)arg0 ;
-(id)loadRequest:(id)arg0 response:(id)arg1 responseData:(id)arg2 ;
-(id)sendJSRequest:(id)arg0 ;
-(void)_addScriptsToContentController:(id)arg0 additionalScripts:(id)arg1 ;
-(void)_finishedLoading;
-(void)_openURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_receiveJSObject:(id)arg0 logKey:(id)arg1 replyHandler:(id)arg2 ;
-(void)_webView:(id)arg0 contentRuleListWithIdentifier:(id)arg1 performedAction:(id)arg2 forURL:(id)arg3 ;
-(void)_webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 userInfo:(id)arg3 ;
-(void)_webView:(id)arg0 navigation:(id)arg1 didFailProvisionalLoadInSubframe:(id)arg2 withError:(id)arg3 ;
-(void)_webView:(id)arg0 navigation:(id)arg1 didSameDocumentNavigation:(NSInteger)arg2 ;
-(void)_webView:(id)arg0 navigationDidFinishDocumentLoad:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)takeSnapshotWithCompletion:(id)arg0 ;
-(void)updateUserScriptsWithScripts:(id)arg0 ;
-(void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1 replyHandler:(id)arg2 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didCommitNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1 ;


@end


#endif