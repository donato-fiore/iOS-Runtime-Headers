// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFREADEREXTRACTOR_H
#define _SFREADEREXTRACTOR_H

@class WKWebView, WKProcessPool, NSURL, NSTimer, NSString;
@protocol WKNavigationDelegate, _SFReaderControllerDelegate;

#import <Foundation/Foundation.h>

#import "_SFReaderController.h"

@interface _SFReaderExtractor : NSObject <WKNavigationDelegate, _SFReaderControllerDelegate>

 {
    WKWebView *_webView;
    WKWebView *_readerWebView;
    WKProcessPool *_processPool;
    NSURL *_currentURL;
    _SFReaderController *_readerController;
    NSTimer *_loadingTimeoutTimer;
    NSTimer *_readerExtractionTimer;
    id *_completionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_configuration;
-(id)_processPool;
-(id)init;
-(void)_finishWithContent:(id)arg0 error:(id)arg1 ;
-(void)_invalidateTimers;
-(void)_scheduleLoadingTimeout;
-(void)_scheduleReaderDataExtractionTimeout;
-(void)_setUpReaderController;
-(void)getExtractedDataForURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)getExtractedDataForURL:(id)arg0 withData:(id)arg1 withCompletion:(id)arg2 ;
-(void)readerController:(id)arg0 didCollectArticleContent:(id)arg1 ;
-(void)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg0 ;


@end


#endif