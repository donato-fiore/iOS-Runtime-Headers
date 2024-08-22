// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREMOTEEXECUTIONOUTGOINGRUNREQUESTRESPONSESESSION_H
#define WFREMOTEEXECUTIONOUTGOINGRUNREQUESTRESPONSESESSION_H

@class NSData;


#import "WFRemoteExecutionSession.h"

@interface WFRemoteExecutionOutgoingRunRequestResponseSession : WFRemoteExecutionSession

@property (readonly, nonatomic) NSData *responseData; // ivar: _responseData


-(CGFloat)timeoutLimitInSeconds;
-(id)initWithService:(id)arg0 responseData:(id)arg1 ;
-(void)handleTimeout;
-(void)sendToDestinations:(id)arg0 options:(id)arg1 ;


@end


#endif