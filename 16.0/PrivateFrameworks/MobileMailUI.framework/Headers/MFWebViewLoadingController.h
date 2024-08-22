// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFWEBVIEWLOADINGCONTROLLER_H
#define MFWEBVIEWLOADINGCONTROLLER_H

@class EMContentRepresentation, NSString, NSError, NSURL, _WKRemoteObjectInterface, WKWebView;
@protocol EMRemoteContentURLSessionObserver, WKNavigationDelegate, WKNavigationDelegatePrivate, MFMailWebProcessDelegate;

#import <Foundation/Foundation.h>

#import "MFWebViewDictionary.h"

@interface MFWebViewLoadingController : NSObject <EMRemoteContentURLSessionObserver, WKNavigationDelegate, WKNavigationDelegatePrivate>



@property (retain, nonatomic) EMContentRepresentation *contentRepresentation; // ivar: _contentRepresentation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *loadingURL; // ivar: _loadingURL
@property (retain, nonatomic) _WKRemoteObjectInterface *remoteObjectInterface; // ivar: _remoteObjectInterface
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<MFMailWebProcessDelegate> *webProcessDelegate; // ivar: _webProcessDelegate
@property (nonatomic) BOOL webProcessPluginNeedsUpdate; // ivar: _webProcessPluginNeedsUpdate
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView
@property (readonly, nonatomic) MFWebViewDictionary *webViewConstants; // ivar: _webViewConstants


-(id)init;
-(void)_doIssueLoadRequest;
-(void)_reconveneWebProcessBundle;
-(void)_registerWebProcessDelegate:(id)arg0 ;
-(void)_unregisterWebProcessDelegate:(id)arg0 ;
-(void)dealloc;
-(void)reload;
-(void)remoteContentURLSession:(id)arg0 failedToProxyURL:(id)arg1 failureReason:(NSInteger)arg2 ;
-(void)requestWebViewLoadWithContentRepresentation:(id)arg0 ;
-(void)requestWebViewLoadWithContext:(id)arg0 ;
-(void)requestWebViewLoadWithError:(id)arg0 ;
-(void)requestWebViewLoadWithoutShowingMessageWithContext:(id)arg0 ;
-(void)requestWebViewLoadWithoutShowingMessageWithRepresentation:(id)arg0 ;
-(void)slapWebView;
-(void)stopLoading;
-(void)webProcessBrowserContextControllerDidBecomeAvailable;


@end


#endif