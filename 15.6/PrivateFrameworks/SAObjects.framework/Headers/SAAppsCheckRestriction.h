// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAAPPSCHECKRESTRICTION_H
#define SAAPPSCHECKRESTRICTION_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAAppsCheckRestriction : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *executionEnvironment;
@property (copy, nonatomic) NSString *launchId;


+(id)checkRestriction;
+(id)checkRestrictionWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif