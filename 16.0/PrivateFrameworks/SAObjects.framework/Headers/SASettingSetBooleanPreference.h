// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETTINGSETBOOLEANPREFERENCE_H
#define SASETTINGSETBOOLEANPREFERENCE_H

@class NSString;


#import "SASettingSetBool.h"

@interface SASettingSetBooleanPreference : SASettingSetBool

@property (copy, nonatomic) NSString *settingKey;


+(id)setBooleanPreference;
+(id)setBooleanPreferenceWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif