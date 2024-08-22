// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFREMOTEEXECUTIONOUTGOINGASKEACHTIMESESSION_H
#define WFREMOTEEXECUTIONOUTGOINGASKEACHTIMESESSION_H



#import "WFRemoteExecutionSession.h"
#import "WFRemoteExecutionAskEachTimeRequest.h"

@interface WFRemoteExecutionOutgoingAskEachTimeSession : WFRemoteExecutionSession

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) WFRemoteExecutionAskEachTimeRequest *request;


-(CGFloat)timeoutLimitInSeconds;
-(id)initWithService:(id)arg0 request:(id)arg1 completion:(id)arg2 ;
-(void)finish;
-(void)finishWithError:(id)arg0 ;
-(void)finishWithoutCallingCompletion;
-(void)handleIncomingProtobuf:(id)arg0 ;
-(void)handleTimeout;
-(void)sendToDestinations:(id)arg0 options:(id)arg1 ;


@end


#endif