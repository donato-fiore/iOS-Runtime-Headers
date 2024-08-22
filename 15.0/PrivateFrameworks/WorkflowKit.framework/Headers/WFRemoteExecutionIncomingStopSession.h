// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREMOTEEXECUTIONINCOMINGSTOPSESSION_H
#define WFREMOTEEXECUTIONINCOMINGSTOPSESSION_H



#import "WFRemoteExecutionSession.h"

@interface WFRemoteExecutionIncomingStopSession : WFRemoteExecutionSession



-(void)finishWithError:(id)arg0 ;
-(void)handleIncomingProtobuf:(id)arg0 currentlyActiveSessions:(id)arg1 ;


@end


#endif