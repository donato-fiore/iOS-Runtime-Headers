// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC14SIRIKITRUNTIME36SENDABLEREMOTECONVERSATIONXPCWRAPPER_H
#define _TTC14SIRIKITRUNTIME36SENDABLEREMOTECONVERSATIONXPCWRAPPER_H

@class SwiftObject;
@protocol SKRRemoteConversationXPC;



@interface _TtC14SiriKitRuntime36SendableRemoteConversationXPCWrapper : SwiftObject <SKRRemoteConversationXPC>

 {
    ? wrapped;
}




-(void)acceptInitialInputWithInputIdentifier:(id)arg0 rcId:(id)arg1 asrOnDevice:(BOOL)arg2 userSpecificInfo:(id)arg3 speechPackage:(id)arg4 reply:(id)arg5 ;
-(void)acceptWithInputData:(id)arg0 rcId:(id)arg1 asrOnDevice:(BOOL)arg2 userSpecificInfo:(id)arg3 speechPackage:(id)arg4 reply:(id)arg5 ;
-(void)canHandleWithInputData:(id)arg0 reply:(id)arg1 ;
-(void)cancelWithReply:(id)arg0 ;
-(void)commitWithBridge:(id)arg0 reply:(id)arg1 ;
-(void)drainAsyncWorkWithReply:(id)arg0 ;
-(void)ensureReadyWithReply:(id)arg0 ;
-(void)isEmptyWithReply:(id)arg0 ;
-(void)prepareWithBridge:(id)arg0 reply:(id)arg1 ;
-(void)resetWithReply:(id)arg0 ;
-(void)startTurnWithTurnData:(id)arg0 bridge:(id)arg1 reply:(id)arg2 ;
-(void)warmupWithRefId:(id)arg0 reply:(id)arg1 ;


@end


#endif