// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASETTINGOPENCOMPASSSETTINGS_H
#define SASETTINGOPENCOMPASSSETTINGS_H



#import "SASettingOpenAppSettings.h"

@interface SASettingOpenCompassSettings : SASettingOpenAppSettings



+(id)openCompassSettings;
+(id)openCompassSettingsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif