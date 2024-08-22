// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SARDREMOTEEXECUTIONCONTEXTUPDATE_H
#define SARDREMOTEEXECUTIONCONTEXTUPDATE_H

@class NSData, NSString;


#import "SABaseClientBoundCommand.h"

@interface SARDRemoteExecutionContextUpdate : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *executionContextUpdate;
@property (copy, nonatomic) NSString *remoteDeviceAssistantId;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif