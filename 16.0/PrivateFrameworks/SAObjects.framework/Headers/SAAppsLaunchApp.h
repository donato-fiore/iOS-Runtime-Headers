// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAAPPSLAUNCHAPP_H
#define SAAPPSLAUNCHAPP_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAAppsLaunchApp : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *applicationClientIdentifier;
@property (copy, nonatomic) NSString *executionEnvironment;
@property (copy, nonatomic) NSString *launchId;


+(id)launchApp;
+(id)launchAppWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif