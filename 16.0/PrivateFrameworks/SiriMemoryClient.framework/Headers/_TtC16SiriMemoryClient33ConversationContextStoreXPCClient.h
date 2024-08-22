// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16SIRIMEMORYCLIENT33CONVERSATIONCONTEXTSTOREXPCCLIENT_H
#define _TTC16SIRIMEMORYCLIENT33CONVERSATIONCONTEXTSTOREXPCCLIENT_H

@class SwiftObject;
@protocol _TtP14SiriMemoryCore35ConversationContextStoreXPCProtocol_;



@interface _TtC16SiriMemoryClient33ConversationContextStoreXPCClient : SwiftObject <_TtP14SiriMemoryCore35ConversationContextStoreXPCProtocol_>

 {
    ? queue;
    ? xpcConnection;
}




-(void)donateWithData:(id)arg0 key:(id)arg1 for:(id)arg2 completionHandler:(id)arg3 ;
-(void)queryWithKeys:(id)arg0 for:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeWithKey:(id)arg0 for:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif