// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETTINGOPENVOICECONTROL_H
#define SASETTINGOPENVOICECONTROL_H

@class NSString;
@protocol SASettingSettingsAction;


#import "SASettingOpenSettings.h"

@interface SASettingOpenVoiceControl : SASettingOpenSettings <SASettingSettingsAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)openVoiceControl;
+(id)openVoiceControlWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif