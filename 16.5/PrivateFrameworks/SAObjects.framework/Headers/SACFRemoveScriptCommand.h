// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SACFREMOVESCRIPTCOMMAND_H
#define SACFREMOVESCRIPTCOMMAND_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SACFRemoveScriptCommand : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *scriptIdentifiers;


+(id)removeScriptCommand;
+(id)removeScriptCommandWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif