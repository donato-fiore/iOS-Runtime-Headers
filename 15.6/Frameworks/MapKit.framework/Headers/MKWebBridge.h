// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKWEBBRIDGE_H
#define MKWEBBRIDGE_H

@class NSMutableDictionary, NSDictionary, NSString;
@protocol WKScriptMessageHandler, MKWebBridgeDelegate;

#import <Foundation/Foundation.h>

#import "MKWebViewFactoryItem.h"

@interface MKWebBridge : NSObject <WKScriptMessageHandler>

 {
    NSMutableDictionary *_pendingCallbackHandlers;
    NSInteger _nextCallNumber;
    id *_defaultCallbackHandler;
}


@property (readonly, copy, nonatomic) NSDictionary *callHandlers; // ivar: _callHandlers
@property (readonly, nonatomic) NSInteger connectionState; // ivar: _connectionState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKWebBridgeDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MKWebViewFactoryItem *webViewFactoryItem; // ivar: _webViewFactoryItem


+(id)URLByAddingConfiguration:(id)arg0 toURL:(id)arg1 additionalQueryItems:(id)arg2 ;
+(id)_operatingSystemName;
+(id)_operatingSystemVersion;
-(id)initWithWebViewFactoryItem:(id)arg0 ;
-(void)_consumeCallbackHandlerWithNumber:(id)arg0 result:(id)arg1 errorMessage:(id)arg2 ;
-(void)_dispatchCall:(id)arg0 ;
-(void)_dispatchCallback:(id)arg0 ;
-(void)_initializeConnection;
-(void)_postMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)_receiveMessage:(id)arg0 ;
-(void)addCallableMethod:(id)arg0 handler:(id)arg1 ;
-(void)callMethod:(id)arg0 arguments:(id)arg1 callbackHandler:(id)arg2 ;
-(void)closeConnection;
-(void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1 ;


@end


#endif