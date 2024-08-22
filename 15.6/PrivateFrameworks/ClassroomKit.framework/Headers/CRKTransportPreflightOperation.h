// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKTRANSPORTPREFLIGHTOPERATION_H
#define CRKTRANSPORTPREFLIGHTOPERATION_H

@class CATOperation, NSString, NSDictionary, CATTransport;
@protocol CATTransportDelegate, CATRemoteTransportDelegate;


#import "CRKSession.h"

@interface CRKTransportPreflightOperation : CATOperation <CATTransportDelegate, CATRemoteTransportDelegate>



@property (nonatomic) BOOL cancellationRequested; // ivar: _cancellationRequested
@property (nonatomic) BOOL connectionInterruptedDueToDecisionHandler; // ivar: _connectionInterruptedDueToDecisionHandler
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL decisionHandlerWantsBackoffReset; // ivar: _decisionHandlerWantsBackoffReset
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL invalidationTriggered; // ivar: _invalidationTriggered
@property (readonly, weak, nonatomic) CRKSession *session; // ivar: _session
@property (readonly, copy, nonatomic) NSDictionary *stateDictionary;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CATTransport *transport; // ivar: _transport


-(BOOL)anyCommonNameInArrayHasLeaderPrefix:(id)arg0 ;
-(BOOL)commonNameHasLeaderPrefix:(id)arg0 ;
-(BOOL)errorIndicatesThatInterruptionWasCausedByDecisionHandler:(id)arg0 ;
-(BOOL)isAsynchronous;
-(BOOL)isCommonNamePrefixValidForRemoteTransport:(id)arg0 ;
-(BOOL)isCommonNamePrefixValidForTransport:(id)arg0 ;
-(BOOL)isInsecureConnectionError:(id)arg0 ;
-(id)initWithTransport:(id)arg0 session:(id)arg1 ;
-(void)cancel;
-(void)clearDelegatesOnTransport:(id)arg0 ;
-(void)finishWithShouldResetBackoff:(BOOL)arg0 ;
-(void)finishWithTransport:(id)arg0 ;
-(void)handleContinuationDecision:(NSUInteger)arg0 forTrustDecision:(id)arg1 ;
-(void)invalidateTransport;
-(void)main;
-(void)respondToTrustDecision:(id)arg0 withAllowUntrustedConnections:(BOOL)arg1 ;
-(void)setDelegatesOnTransport:(id)arg0 ;
-(void)transport:(id)arg0 didInterruptWithError:(id)arg1 ;
-(void)transport:(id)arg0 encounteredTrustDecisionWhileTryingToSecure:(id)arg1 ;
-(void)transportDidConnect:(id)arg0 ;
-(void)transportDidInvalidate:(id)arg0 ;


@end


#endif