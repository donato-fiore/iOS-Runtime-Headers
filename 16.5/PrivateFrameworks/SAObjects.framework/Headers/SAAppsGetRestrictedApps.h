// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAAPPSGETRESTRICTEDAPPS_H
#define SAAPPSGETRESTRICTEDAPPS_H

@class NSArray, NSString;


#import "SABaseClientBoundCommand.h"

@interface SAAppsGetRestrictedApps : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *appIds;
@property (copy, nonatomic) NSString *executionEnvironment;


+(id)getRestrictedApps;
+(id)getRestrictedAppsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif