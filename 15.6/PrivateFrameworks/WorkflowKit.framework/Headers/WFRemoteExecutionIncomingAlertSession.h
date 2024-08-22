// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFREMOTEEXECUTIONINCOMINGALERTSESSION_H
#define WFREMOTEEXECUTIONINCOMINGALERTSESSION_H

@class NSSet, NSDictionary;


#import "WFRemoteExecutionSession.h"

@interface WFRemoteExecutionIncomingAlertSession : WFRemoteExecutionSession

@property (retain, nonatomic) NSSet *lastKnownDestinations; // ivar: _lastKnownDestinations
@property (retain, nonatomic) NSDictionary *lastKnownOptions; // ivar: _lastKnownOptions


-(CGFloat)timeoutLimitInSeconds;
-(void)finishWithError:(id)arg0 ;
-(void)handleIncomingProtobuf:(id)arg0 currentlyActiveSessions:(id)arg1 responseDestinations:(id)arg2 options:(id)arg3 ;
-(void)handleTimeout;
-(void)sendSelectedButton:(id)arg0 forAlertWithIdentifier:(id)arg1 error:(id)arg2 destinations:(id)arg3 options:(id)arg4 ;


@end


#endif