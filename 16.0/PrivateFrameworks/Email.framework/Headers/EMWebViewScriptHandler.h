// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMWEBVIEWSCRIPTHANDLER_H
#define EMWEBVIEWSCRIPTHANDLER_H

@class NSString, WKWebView;
@protocol WKScriptMessageHandler;

#import <Foundation/Foundation.h>


@interface EMWebViewScriptHandler : NSObject <WKScriptMessageHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (weak, nonatomic) WKWebView *webView; // ivar: _webView


+(void)addScriptHandlerForWebView:(id)arg0 key:(id)arg1 handler:(id)arg2 ;
-(void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1 ;


@end


#endif