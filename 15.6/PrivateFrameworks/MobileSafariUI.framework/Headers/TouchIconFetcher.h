// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TOUCHICONFETCHER_H
#define TOUCHICONFETCHER_H

@class WKWebView, NSMutableArray, _WKRemoteObjectInterface, NSString;
@protocol TouchIconFetcherObserver, TouchIconFetcherWebProcessController;

#import <Foundation/Foundation.h>


@interface TouchIconFetcher : NSObject <TouchIconFetcherObserver>

 {
    WKWebView *_webView;
    BOOL _fetchingURLs;
    BOOL _invalidated;
    NSMutableArray *_completionBlocks;
    id<TouchIconFetcherWebProcessController> *_activityProxy;
    _WKRemoteObjectInterface *_touchIconFetcherObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_webProcessActivityProxy;
-(id)initWithWebView:(id)arg0 ;
-(void)_setUpTouchIconFetcherObserver;
-(void)didFetchTouchIconURLs:(id)arg0 forURL:(id)arg1 ;
-(void)fetchTouchIconURLsWithCompletion:(id)arg0 ;
-(void)invalidate;


@end


#endif