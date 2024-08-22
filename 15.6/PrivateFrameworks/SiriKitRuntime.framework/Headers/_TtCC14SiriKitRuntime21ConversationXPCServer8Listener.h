// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCC14SIRIKITRUNTIME21CONVERSATIONXPCSERVER8LISTENER_H
#define _TTCC14SIRIKITRUNTIME21CONVERSATIONXPCSERVER8LISTENER_H

@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCC14SiriKitRuntime21ConversationXPCServer8Listener : NSObject <NSXPCListenerDelegate>

 {
    ? conversationService;
    ? listener;
}




-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;


@end


#endif