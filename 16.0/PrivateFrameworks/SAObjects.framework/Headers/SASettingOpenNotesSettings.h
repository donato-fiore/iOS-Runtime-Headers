// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETTINGOPENNOTESSETTINGS_H
#define SASETTINGOPENNOTESSETTINGS_H



#import "SASettingOpenAppSettings.h"

@interface SASettingOpenNotesSettings : SASettingOpenAppSettings



+(id)openNotesSettings;
+(id)openNotesSettingsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif