// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPFLOWDIVERT_H
#define NSPFLOWDIVERT_H

@class NEAppProxyProviderContainer, NEFlowDivertFileHandle, NEPolicySession;


#import "NSPConfiguration.h"

@interface NSPFlowDivert : NEAppProxyProviderContainer

@property (retain, nonatomic) NSPConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NEFlowDivertFileHandle *flowDivertControlHandle; // ivar: _flowDivertControlHandle
@property (retain) NEPolicySession *policySession; // ivar: _policySession
@property BOOL shouldResetPolicies; // ivar: _shouldResetPolicies
@property BOOL started; // ivar: _started


-(BOOL)resetPolicies:(BOOL)arg0 ;
-(id)createFlowDivertSocketHandle;
-(id)createPolicySession;
-(id)getAgentResults:(id)arg0 ;
-(id)getAgentResultsForSelf;
-(id)getEffectiveAppRules:(id)arg0 ;
-(id)getExecutableConditions:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 providerClass:(Class)arg1 configuration:(id)arg2 ;
-(void)addPoliciesForAgent:(id)arg0 conditions:(id)arg1 ;
-(void)addPoliciesForDivertDNSOnly:(id)arg0 domainConditions:(id)arg1 divertResult:(id)arg2 ;
-(void)addPolicy:(id)arg0 ;
-(void)destroyFlowDivertSocketHandles;
-(void)destroyPolicySession;
-(void)didFailWithError:(id)arg0 ;
-(void)didStartWithError:(id)arg0 ;
-(void)startWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)stop;
-(void)teardown;


@end


#endif