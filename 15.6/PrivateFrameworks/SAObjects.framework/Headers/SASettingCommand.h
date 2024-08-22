// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASETTINGCOMMAND_H
#define SASETTINGCOMMAND_H



#import "SADomainCommand.h"

@interface SASettingCommand : SADomainCommand



+(id)command;
+(id)commandWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif