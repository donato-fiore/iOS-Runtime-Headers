// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEDNSSETTINGSNETWORKAGENT_H
#define NEDNSSETTINGSNETWORKAGENT_H



#import "NENetworkAgent.h"
#import "NEDNSSettings.h"

@interface NEDNSSettingsNetworkAgent : NENetworkAgent

@property (retain) NEDNSSettings *settings; // ivar: _settings


+(id)agentDomain;
+(id)agentFromData:(id)arg0 ;
+(id)agentType;
-(id)agentDescription;
-(id)copyAgentData;


@end


#endif