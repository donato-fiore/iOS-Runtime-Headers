// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC14SIRIKITRUNTIME31CONVERSATIONSERVICETOXPCADAPTER_H
#define _TTC14SIRIKITRUNTIME31CONVERSATIONSERVICETOXPCADAPTER_H

@class SwiftObject;
@protocol SKEConversationServing;



@interface _TtC14SiriKitRuntime31ConversationServiceToXPCAdapter : SwiftObject <SKEConversationServing>

 {
    ? wrapped;
}




-(void)bridgeWithDidReceiveCancelRequest:(id)arg0 from:(id)arg1 ;
-(void)bridgeWithDidReceiveClearContext:(id)arg0 from:(id)arg1 ;
-(void)bridgeWithDidReceiveCommitResultCandidateId:(id)arg0 from:(id)arg1 ;
-(void)bridgeWithDidReceiveInput:(id)arg0 from:(id)arg1 ;
-(void)bridgeWithDidReceiveRSKE:(id)arg0 withRequestContextData:(id)arg1 from:(id)arg2 ;
-(void)bridgeWithDidReceiveRequestContextData:(id)arg0 from:(id)arg1 ;
-(void)bridgeWithDidReceiveSiriKitPluginSignal:(id)arg0 from:(id)arg1 ;
-(void)bridgeWithDidReceiveStartExecutionTurn:(id)arg0 from:(id)arg1 reply:(id)arg2 ;


@end


#endif