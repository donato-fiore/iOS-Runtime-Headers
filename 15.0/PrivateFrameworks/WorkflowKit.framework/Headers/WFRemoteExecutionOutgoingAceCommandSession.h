// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREMOTEEXECUTIONOUTGOINGACECOMMANDSESSION_H
#define WFREMOTEEXECUTIONOUTGOINGACECOMMANDSESSION_H



#import "WFRemoteExecutionSession.h"
#import "WFRemoteExecutionAceCommandRequest.h"

@interface WFRemoteExecutionOutgoingAceCommandSession : WFRemoteExecutionSession

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) WFRemoteExecutionAceCommandRequest *request;


-(id)initWithService:(id)arg0 request:(id)arg1 completion:(id)arg2 ;
-(void)finish;
-(void)finishWithError:(id)arg0 ;
-(void)handleIncomingProtobuf:(id)arg0 ;
-(void)sendToDestinations:(id)arg0 options:(id)arg1 ;


@end


#endif