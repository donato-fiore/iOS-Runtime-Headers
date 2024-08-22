// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWWEAKSCRIPTMESSAGEHANDLER_H
#define SWWEAKSCRIPTMESSAGEHANDLER_H

@class NSString;
@protocol WKScriptMessageHandler;

#import <Foundation/Foundation.h>


@interface SWWeakScriptMessageHandler : NSObject <WKScriptMessageHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<WKScriptMessageHandler> *scriptMessageHandler; // ivar: _scriptMessageHandler
@property (readonly) Class superclass;


-(id)initWithScriptMessageHandler:(id)arg0 ;
-(void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1 ;


@end


#endif