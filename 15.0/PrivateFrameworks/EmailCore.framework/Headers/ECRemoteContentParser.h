// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ECREMOTECONTENTPARSER_H
#define ECREMOTECONTENTPARSER_H

@class _WKRemoteObjectInterface, EFLocked, NSString, WKWebView;
@protocol ECRemoteContentWebViewObserver, EFSignpostable, WKNavigationDelegate;

#import <Foundation/Foundation.h>

#import "ECRemoteContentWebViewObserver.h"

@interface ECRemoteContentParser : NSObject <ECRemoteContentWebViewObserver, EFSignpostable, WKNavigationDelegate>

 {
    _WKRemoteObjectInterface *_observerInterface;
    ECRemoteContentWebViewObserver *_observer;
    EFLocked *_state;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger signpostID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKWebView *webView; // ivar: _webView


+(id)signpostLog;
-(id)init;
-(id)remoteContentLinksFromHTMLData:(id)arg0 cancelationToken:(id)arg1 defaultCharsetName:(id)arg2 ;
-(void)baseURL:(id)arg0 didRequestRemoteContentURLs:(id)arg1 ;
-(void)dealloc;
-(void)setContentRuleLists:(id)arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;


@end


#endif