// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFMESSAGECONTENTVIEWSCRIPTHANDLER_H
#define _MFMESSAGECONTENTVIEWSCRIPTHANDLER_H

@class NSString, WKWebView;
@protocol WKScriptMessageHandler;

#import <Foundation/Foundation.h>


@interface _MFMessageContentViewScriptHandler : NSObject <WKScriptMessageHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (weak, nonatomic) WKWebView *webView; // ivar: _webView


-(void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1 ;


@end


#endif