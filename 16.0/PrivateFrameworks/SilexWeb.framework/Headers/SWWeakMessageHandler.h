// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWWEAKMESSAGEHANDLER_H
#define SWWEAKMESSAGEHANDLER_H

@class NSString;
@protocol SWMessageHandler;

#import <Foundation/Foundation.h>


@interface SWWeakMessageHandler : NSObject <SWMessageHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<SWMessageHandler> *messageHandler; // ivar: _messageHandler
@property (readonly) Class superclass;


+(id)handlerWithMessageHandler:(id)arg0 ;
-(void)didReceiveMessage:(id)arg0 securityOrigin:(id)arg1 ;


@end


#endif