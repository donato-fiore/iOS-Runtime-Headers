// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSVGIMAGERENDERINGFETCHOPERATION_H
#define WBSSVGIMAGERENDERINGFETCHOPERATION_H

@class NSMutableArray, NSTimer, _WKRemoteObjectInterface, NSString;
@protocol WBSSVGImageRenderingObserver;


#import "WBSWebViewMetadataFetchOperation.h"
#import "WBSSVGImageRenderingRequest.h"

@interface WBSSVGImageRenderingFetchOperation : WBSWebViewMetadataFetchOperation <WBSSVGImageRenderingObserver>

 {
    NSMutableArray *_remainingURLs;
    NSTimer *_loadingTimeoutTimer;
    _WKRemoteObjectInterface *_svgImageRenderingObserverInterface;
}


@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBSSVGImageRenderingRequest *request;
@property (readonly) Class superclass;


-(id)_htmlStringWithImageElementString:(id)arg0 ;
-(id)_htmlStringWithSVGContent:(id)arg0 ;
-(id)_htmlStringWithURL:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)webViewConfiguration;
-(struct CGSize )webViewSize;
-(void)_didCompleteWithImage:(id)arg0 ;
-(void)_loadSVGFileURL:(id)arg0 ;
-(void)_loadingTimerDidTimeout:(id)arg0 ;
-(void)_renderNextImage;
-(void)didCreateWebView;
-(void)didFailFetch;
-(void)didRenderImage:(id)arg0 ;
-(void)startOffscreenFetching;
-(void)willClearWebView;


@end


#endif