// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREMOTEEXECUTIONOUTGOINGALERTSESSION_H
#define WFREMOTEEXECUTIONOUTGOINGALERTSESSION_H



#import "WFRemoteExecutionSession.h"

@interface WFRemoteExecutionOutgoingAlertSession : WFRemoteExecutionSession

@property (readonly, copy, nonatomic) id *completion; // ivar: _completion


-(CGFloat)timeoutLimitInSeconds;
-(id)initWithService:(id)arg0 request:(id)arg1 completion:(id)arg2 ;
-(void)finish;
-(void)finishWithError:(id)arg0 ;
-(void)handleIncomingProtobuf:(id)arg0 ;
-(void)handleTimeout;
-(void)sendToDestinations:(id)arg0 options:(id)arg1 ;


@end


#endif