// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SWMESSAGEHANDLERMANAGER_H
#define SWMESSAGEHANDLERMANAGER_H

@class NSString, NSMutableDictionary;
@protocol WKScriptMessageHandler, SWMessageHandlerManager, SWLogger;

#import <Foundation/Foundation.h>


@interface SWMessageHandlerManager : NSObject <WKScriptMessageHandler, SWMessageHandlerManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWLogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSMutableDictionary *messageHandlers; // ivar: _messageHandlers
@property (readonly) Class superclass;


-(id)initWithUserContentController:(id)arg0 logger:(id)arg1 ;
-(void)addMessageHandler:(id)arg0 name:(id)arg1 ;
-(void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1 ;


@end


#endif