// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASETTINGOPENPASSCODESETTINGS_H
#define SASETTINGOPENPASSCODESETTINGS_H



#import "SASettingOpenSettings.h"

@interface SASettingOpenPasscodeSettings : SASettingOpenSettings



+(id)openPasscodeSettings;
+(id)openPasscodeSettingsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif