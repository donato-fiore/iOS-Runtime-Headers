// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAWAITFORCOMMANDS_H
#define SAWAITFORCOMMANDS_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SAWaitForCommands : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *commandAceIds;


+(id)waitForCommands;
+(id)waitForCommandsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif