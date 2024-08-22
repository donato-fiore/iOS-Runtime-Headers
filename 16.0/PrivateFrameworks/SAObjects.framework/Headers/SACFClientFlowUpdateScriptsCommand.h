// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACFCLIENTFLOWUPDATESCRIPTSCOMMAND_H
#define SACFCLIENTFLOWUPDATESCRIPTSCOMMAND_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SACFClientFlowUpdateScriptsCommand : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *scripts;


+(id)clientFlowUpdateScriptsCommand;
+(id)clientFlowUpdateScriptsCommandWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif