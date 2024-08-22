// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SADOMAINCOMMAND_H
#define SADOMAINCOMMAND_H

@class NSURL, NSNumber;


#import "SABaseClientBoundCommand.h"

@interface SADomainCommand : SABaseClientBoundCommand

@property (copy, nonatomic) NSURL *targetAppId;
@property (copy, nonatomic) NSURL *targetPluginId;
@property (copy, nonatomic) NSNumber *timeout;


+(id)domainCommand;
+(id)domainCommandWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif