// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASETTINGGETBOOLEANPREFERENCE_H
#define SASETTINGGETBOOLEANPREFERENCE_H

@class NSString;


#import "SASettingGetBool.h"

@interface SASettingGetBooleanPreference : SASettingGetBool

@property (copy, nonatomic) NSString *settingKey;


+(id)getBooleanPreference;
+(id)getBooleanPreferenceWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif