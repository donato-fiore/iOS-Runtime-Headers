// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEPATHCONTROLLERNETWORKAGENT_H
#define NEPATHCONTROLLERNETWORKAGENT_H

@class NSString, NSMutableArray;


#import "NENetworkAgent.h"

@interface NEPathControllerNetworkAgent : NENetworkAgent {
    BOOL updateClientsImmediately;
}


@property (retain) NSString *advisoryAgentDomain; // ivar: _advisoryAgentDomain
@property (retain) NSString *advisoryAgentType; // ivar: _advisoryAgentType
@property (retain) NSMutableArray *advisoryInterfaceArray; // ivar: _advisoryInterfaceArray
@property (copy) id *internalAssertHandler; // ivar: _internalAssertHandler
@property (copy) id *internalUnassertHandler; // ivar: _internalUnassertHandler
@property (nonatomic) BOOL isForcedAdvisory; // ivar: _isForcedAdvisory
@property BOOL noAdvisoryTimer; // ivar: _noAdvisoryTimer
@property (retain) NSMutableArray *predictedInterfaceArray; // ivar: _predictedInterfaceArray
@property BOOL preferAdvisory; // ivar: _preferAdvisory
@property BOOL weakAdvisory; // ivar: _weakAdvisory


+(id)agentFromData:(id)arg0 ;
+(id)agentType;
-(BOOL)assertAgentWithOptions:(id)arg0 ;
-(BOOL)updateClientsImmediately;
-(id)copyAgentData;
-(id)initWithAdvisoryAgentDomain:(id)arg0 agentType:(id)arg1 advisoryMode:(NSUInteger)arg2 ;
-(id)initWithAdvisoryInterface:(id)arg0 advisoryMode:(NSUInteger)arg1 ;
-(void)setAssertHandler:(id)arg0 ;
-(void)setUnassertHandler:(id)arg0 ;
-(void)setUpdateClientsImmediately:(BOOL)arg0 ;
-(void)unassertAgentWithOptions:(id)arg0 ;


@end


#endif