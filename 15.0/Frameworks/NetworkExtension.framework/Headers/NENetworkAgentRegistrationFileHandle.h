// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NENETWORKAGENTREGISTRATIONFILEHANDLE_H
#define NENETWORKAGENTREGISTRATIONFILEHANDLE_H

@class NSUUID, NSString, NSNumber;


#import "NEFileHandle.h"

@interface NENetworkAgentRegistrationFileHandle : NEFileHandle

@property NSUInteger agentFlags; // ivar: _agentFlags
@property (readonly) NSUUID *agentUUID; // ivar: _agentUUID
@property (readonly) NSUUID *configurationIdentifier; // ivar: _configurationIdentifier
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSNumber *sessionType; // ivar: _sessionType


-(NSUInteger)type;
-(id)description;
-(id)dictionary;
-(id)initFromDictionary:(id)arg0 ;
-(id)initWithNetworkAgentRegistration:(id)arg0 sessionType:(id)arg1 configurationIdentifier:(id)arg2 agentUUID:(id)arg3 ;
-(id)initWithNetworkAgentRegistration:(id)arg0 sessionType:(id)arg1 configurationIdentifier:(id)arg2 agentUUID:(id)arg3 name:(id)arg4 ;


@end


#endif