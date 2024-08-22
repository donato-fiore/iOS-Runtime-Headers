// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUWEBVIEWFACTORYITEM_H
#define MUWEBVIEWFACTORYITEM_H

@class WKWebView;

#import <Foundation/Foundation.h>

#import "MUWebBridgeConfiguration.h"
#import "MUWebViewMessageHandlerProxy.h"

@interface MUWebViewFactoryItem : NSObject

@property (readonly, copy, nonatomic) MUWebBridgeConfiguration *bridgeConfiguration; // ivar: _bridgeConfiguration
@property (readonly, nonatomic) MUWebViewMessageHandlerProxy *messageHandlerProxy; // ivar: _messageHandlerProxy
@property (readonly, nonatomic) WKWebView *webView; // ivar: _webView


-(id)initWithBridgeConfiguration:(id)arg0 webView:(id)arg1 messageHandlerProxy:(id)arg2 ;


@end


#endif