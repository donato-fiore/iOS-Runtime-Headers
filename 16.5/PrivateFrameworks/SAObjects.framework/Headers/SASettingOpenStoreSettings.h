// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASETTINGOPENSTORESETTINGS_H
#define SASETTINGOPENSTORESETTINGS_H



#import "SASettingOpenAppSettings.h"

@interface SASettingOpenStoreSettings : SASettingOpenAppSettings



+(id)openStoreSettings;
+(id)openStoreSettingsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif