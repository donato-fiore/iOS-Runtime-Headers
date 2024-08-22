// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKWEBVIEWFACTORYITEM_H
#define MKWEBVIEWFACTORYITEM_H

@class WKWebView;

#import <Foundation/Foundation.h>

#import "MKWebBridgeConfiguration.h"
#import "MKWebViewMessageHandlerProxy.h"

@interface MKWebViewFactoryItem : NSObject

@property (readonly, copy, nonatomic) MKWebBridgeConfiguration *bridgeConfiguration; // ivar: _bridgeConfiguration
@property (readonly, nonatomic) MKWebViewMessageHandlerProxy *messageHandlerProxy; // ivar: _messageHandlerProxy
@property (readonly, nonatomic) WKWebView *webView; // ivar: _webView


-(id)initWithBridgeConfiguration:(id)arg0 webView:(id)arg1 messageHandlerProxy:(id)arg2 ;


@end


#endif