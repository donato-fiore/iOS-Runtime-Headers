// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDWEBCONTENTPARSER_H
#define EDWEBCONTENTPARSER_H

@class _WKRemoteObjectInterface, EFCancelationToken, EFLocked, NSMutableArray, NSString, WKWebView;
@protocol ECWebContentObserver, WKNavigationDelegate, EFSignpostable, WKScriptMessageHandler, EFScheduler;

#import <Foundation/Foundation.h>

#import "ECWebContentObserver.h"

@interface EDWebContentParser : NSObject <ECWebContentObserver, WKNavigationDelegate, EFSignpostable, WKScriptMessageHandler>

 {
    _WKRemoteObjectInterface *_webContentObserverInterface;
    ECWebContentObserver *_webContentObserver;
    EFCancelationToken *_token;
    EFLocked *_state;
    os_unfair_lock_s _remoteContentParserLock;
    os_unfair_lock_s _contentRuleListsLock;
    NSMutableArray *_currentContentRuleLists;
    BOOL _contentRuleListsNeedUpdate;
    EFCancelationToken *_contentRuleListsObservationToken;
}


@property (readonly, nonatomic) NSObject<EFScheduler> *backgroundWorkScheduler; // ivar: _backgroundWorkScheduler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDataDetectionEnabled; // ivar: _isDataDetectionEnabled
@property (nonatomic) NSUInteger options; // ivar: _options
@property (readonly) NSUInteger signpostID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKWebView *webView; // ivar: _webView


+(id)signpostLog;
-(id)_extractDataDetectorResultsMetadata:(id)arg0 ;
-(id)_getDataDetectionCategoryString:(int)arg0 ;
-(id)_parseHTMLData:(id)arg0 withOptions:(NSUInteger)arg1 characterEncodingName:(id)arg2 messageID:(id)arg3 ;
-(id)_richLinkMetadataScript;
-(id)initWithOptions:(NSUInteger)arg0 cancelationToken:(id)arg1 ;
-(void)_addRemoteContentWebViewObserver;
-(void)_disableDataDetection;
-(void)_enableDataDetection;
-(void)_retrieveRichLinkMetadata:(id)arg0 ;
-(void)_updateContentRuleListsIfNeededForWebViewConfiguration:(id)arg0 ;
-(void)baseURL:(id)arg0 didRequestRemoteContentURLs:(id)arg1 ;
-(void)contentRuleListManager:(id)arg0 didAddRuleList:(id)arg1 ;
-(void)contentRuleListManager:(id)arg0 didRemoveRuleList:(id)arg1 ;
-(void)contentRuleListManager:(id)arg0 didUpdateContentRuleList:(id)arg1 oldContentRuleList:(id)arg2 ;
-(void)dealloc;
-(void)logWebBundleMessage:(id)arg0 ;
-(void)parseHTMLData:(id)arg0 withOptions:(NSUInteger)arg1 characterEncodingName:(id)arg2 forMessage:(id)arg3 completionHandler:(id)arg4 ;
-(void)receiveDataDetectionResults:(id)arg0 ;
-(void)requestDataDetectionResultsWithBaseURL:(id)arg0 ;
-(void)test_tearDown;
-(void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;


@end


#endif