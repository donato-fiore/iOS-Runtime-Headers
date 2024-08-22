// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSTOUCHICONFETCHOPERATION_H
#define WBSTOUCHICONFETCHOPERATION_H

@class _WKRemoteObjectInterface, NSTimer, NSArray, NSSet, NSString;
@protocol WBSTouchIconObserver;


#import "WBSWebViewMetadataFetchOperation.h"

@interface WBSTouchIconFetchOperation : WBSWebViewMetadataFetchOperation <WBSTouchIconObserver>

 {
    _WKRemoteObjectInterface *_touchIconObserverInterface;
    NSTimer *_loadingTimeoutTimer;
    NSArray *_pendingTouchIconURLs;
    NSSet *_touchIconURLs;
    NSInteger _state;
    BOOL _allowFetchingOverCellularNetwork;
}


@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 allowFetchingOverCellularNetwork:(BOOL)arg1 completionHandler:(id)arg2 ;
-(id)initWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)webViewConfiguration;
-(void)_downloadFirstValidImageWithURLs:(id)arg0 failureHandler:(id)arg1 ;
-(void)_downloadPendingTouchIconURLs;
-(void)_scheduleTimeoutWithTimeInterval:(CGFloat)arg0 ;
-(void)_setUpRemoteObjectProxies;
-(void)_tearDownRemoteObjectProxies;
-(void)clearWebView;
-(void)didCompleteWithResult:(id)arg0 ;
-(void)didCreateWebView;
-(void)didFailFetch;
-(void)didFetchTouchIconURLs:(id)arg0 andFaviconURLs:(id)arg1 forURL:(id)arg2 ;
-(void)loadRequest;
-(void)resetState;
-(void)startOffscreenFetching;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)willClearWebView;


@end


#endif