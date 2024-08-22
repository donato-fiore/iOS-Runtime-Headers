// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASETTINGSETSIRIAUTHORIZATIONFORAPP_H
#define SASETTINGSETSIRIAUTHORIZATIONFORAPP_H

@class NSString;


#import "SASettingSetBool.h"

@interface SASettingSetSiriAuthorizationForApp : SASettingSetBool

@property (copy, nonatomic) NSString *bundleId;


+(id)setSiriAuthorizationForApp;
+(id)setSiriAuthorizationForAppWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif