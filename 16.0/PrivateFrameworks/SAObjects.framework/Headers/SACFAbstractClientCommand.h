// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACFABSTRACTCLIENTCOMMAND_H
#define SACFABSTRACTCLIENTCOMMAND_H

@class NSString, NSArray;


#import "SADomainCommand.h"

@interface SACFAbstractClientCommand : SADomainCommand

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *jsFileNameSuffix;
@property (copy, nonatomic) NSArray *jsLibraries;
@property (copy, nonatomic) NSString *jsParameters;
@property (copy, nonatomic) NSString *jsScript;
@property (nonatomic) BOOL shouldCacheBytecode;
@property (nonatomic) BOOL shouldCacheScript;
@property (nonatomic) BOOL shouldRestartContext;


+(id)abstractClientCommand;
+(id)abstractClientCommandWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif