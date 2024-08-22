// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSWEBVIEWMETADATAFETCHOPERATION_H
#define WBSWEBVIEWMETADATAFETCHOPERATION_H

@class NSString, WKWebView, WKWebViewConfiguration;
@protocol WKNavigationDelegate, WBSWebViewMetadataFetchOperationDelegate;


#import "WBSSiteMetadataFetchOperation.h"

@interface WBSWebViewMetadataFetchOperation : WBSSiteMetadataFetchOperation <WKNavigationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WBSWebViewMetadataFetchOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKWebView *webView; // ivar: _webView
@property (readonly, nonatomic) WKWebViewConfiguration *webViewConfiguration;
@property (readonly, nonatomic) CGSize webViewSize;


-(void)_setUpWebViewAndStartOffscreenFetching;
-(void)_webViewWebProcessDidCrash:(id)arg0 ;
-(void)cancel;
-(void)clearWebView;
-(void)dealloc;
-(void)didCreateWebView;
-(void)didFailFetch;
-(void)start;
-(void)startOffscreenFetching;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)willClearWebView;


@end


#endif