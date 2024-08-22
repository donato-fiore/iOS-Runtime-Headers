// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASETTINGSETFLOATPREFERENCE_H
#define SASETTINGSETFLOATPREFERENCE_H

@class NSString;


#import "SASettingSetFloat.h"

@interface SASettingSetFloatPreference : SASettingSetFloat

@property (copy, nonatomic) NSString *settingKey;


+(id)setFloatPreference;
+(id)setFloatPreferenceWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif