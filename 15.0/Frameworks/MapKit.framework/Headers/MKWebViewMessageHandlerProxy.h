// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKWEBVIEWMESSAGEHANDLERPROXY_H
#define MKWEBVIEWMESSAGEHANDLERPROXY_H

@class NSString;
@protocol WKScriptMessageHandler;

#import <Foundation/Foundation.h>


@interface MKWebViewMessageHandlerProxy : NSObject <WKScriptMessageHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<WKScriptMessageHandler> *target; // ivar: _target


-(void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1 ;


@end


#endif