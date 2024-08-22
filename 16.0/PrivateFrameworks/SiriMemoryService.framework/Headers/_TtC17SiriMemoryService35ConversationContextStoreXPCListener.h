// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17SIRIMEMORYSERVICE35CONVERSATIONCONTEXTSTOREXPCLISTENER_H
#define _TTC17SIRIMEMORYSERVICE35CONVERSATIONCONTEXTSTOREXPCLISTENER_H

@protocol NSXPCListenerDelegate, _TtP14SiriMemoryCore35ConversationContextStoreXPCProtocol_;

#import <Foundation/Foundation.h>


@interface _TtC17SiriMemoryService35ConversationContextStoreXPCListener : NSObject <NSXPCListenerDelegate, _TtP14SiriMemoryCore35ConversationContextStoreXPCProtocol_>

 {
    ? module;
    ? listener;
}




-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)donateWithData:(id)arg0 key:(id)arg1 for:(id)arg2 completionHandler:(id)arg3 ;
-(void)queryWithKeys:(id)arg0 for:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeWithKey:(id)arg0 for:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif