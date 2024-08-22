// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEPROXYCONFIGURATIONNETWORKAGENT_H
#define NEPROXYCONFIGURATIONNETWORKAGENT_H

@class NSData;


#import "NENetworkAgent.h"

@interface NEProxyConfigurationNetworkAgent : NENetworkAgent

@property (retain) NSData *agentData; // ivar: _agentData


+(id)agentDomain;
+(id)agentFromData:(id)arg0 ;
+(id)agentType;
-(id)agentDescription;
-(id)copyAgentData;
-(id)initWithProxyConfiguration:(id)arg0 ;


@end


#endif