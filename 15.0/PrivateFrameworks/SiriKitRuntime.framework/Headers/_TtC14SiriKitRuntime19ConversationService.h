// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC14SIRIKITRUNTIME19CONVERSATIONSERVICE_H
#define _TTC14SIRIKITRUNTIME19CONVERSATIONSERVICE_H

@class SwiftObject;
@protocol SKEConversationServiceDelegate;



@interface _TtC14SiriKitRuntime19ConversationService : SwiftObject <SKEConversationServiceDelegate>

 {
    ? startTurnGroup;
    ? siriKitRuntime;
    ? state;
    ? jetsamHelper;
    ? idleTrackerActivity;
    ? selfHelper;
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