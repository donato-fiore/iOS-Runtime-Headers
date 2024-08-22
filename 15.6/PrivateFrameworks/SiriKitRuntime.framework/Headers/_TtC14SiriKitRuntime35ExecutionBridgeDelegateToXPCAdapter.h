// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC14SIRIKITRUNTIME35EXECUTIONBRIDGEDELEGATETOXPCADAPTER_H
#define _TTC14SIRIKITRUNTIME35EXECUTIONBRIDGEDELEGATETOXPCADAPTER_H

@class SwiftObject;
@protocol SKRExecutionBridge;



@interface _TtC14SiriKitRuntime35ExecutionBridgeDelegateToXPCAdapter : SwiftObject <SKRExecutionBridge>

 {
    ? wrapped;
    ? runtimeNotReadyHandler;
}




-(void)closeWithExecutionOutput:(id)arg0 ;
-(void)closeWithExecutionOutput:(id)arg0 errorString:(id)arg1 ;
-(void)fallbackToServerForResultCandidateId:(id)arg0 ;
-(void)fetchContextsFor:(id)arg0 includesNearByDevices:(BOOL)arg1 completion:(id)arg2 ;
-(void)fetchSpeechInfoWithReply:(id)arg0 ;
-(void)flowPluginWillExecuteWithFlowPluginInfo:(id)arg0 ;
-(void)prepareForAudioHandoffFailedWithCompletion:(id)arg0 ;
-(void)prepareForAudioHandoffWithCompletion:(id)arg0 ;
-(void)runtimeWasNotReadyWithReply:(id)arg0 ;
-(void)submitWithExecutionOutput:(id)arg0 completion:(id)arg1 ;


@end


#endif