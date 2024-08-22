// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC14SIRIKITRUNTIME27EXECUTIONBRIDGETOXPCADAPTER_H
#define _TTC14SIRIKITRUNTIME27EXECUTIONBRIDGETOXPCADAPTER_H

@class SwiftObject;
@protocol SKRExecutionBridge;



@interface _TtC14SiriKitRuntime27ExecutionBridgeToXPCAdapter : SwiftObject <SKRExecutionBridge>

 {
    ? wrapped;
}




-(void)acquireConversationUserInputForUserId:(id)arg0 requestId:(id)arg1 reply:(id)arg2 ;
-(void)closeServerRequestForExecutionRequestId:(id)arg0 ;
-(void)closeWithExecutionOutput:(id)arg0 ;
-(void)closeWithExecutionOutput:(id)arg0 errorString:(id)arg1 ;
-(void)closeWithExecutionOutput:(id)arg0 needsUserInput:(BOOL)arg1 ;
-(void)fallbackToServerForResultCandidateId:(id)arg0 ;
-(void)fetchContextsFor:(id)arg0 includesNearByDevices:(BOOL)arg1 completion:(id)arg2 ;
-(void)fetchSpeechInfoWithReply:(id)arg0 ;
-(void)flowPluginWillExecuteWithFlowPluginInfo:(id)arg0 ;
-(void)prepareForAudioHandoffFailedWithCompletion:(id)arg0 ;
-(void)prepareForAudioHandoffWithCompletion:(id)arg0 ;
-(void)retriggerOriginalRequestWithExecutionRequestId:(id)arg0 forUserId:(id)arg1 givenCurrentExecutionRequestId:(id)arg2 reply:(id)arg3 ;
-(void)submitWithExecutionOutput:(id)arg0 completion:(id)arg1 ;


@end


#endif