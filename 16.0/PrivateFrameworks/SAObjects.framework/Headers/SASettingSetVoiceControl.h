// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETTINGSETVOICECONTROL_H
#define SASETTINGSETVOICECONTROL_H

@class NSString;
@protocol SASettingSettingsAction;


#import "SASettingSetBool.h"

@interface SASettingSetVoiceControl : SASettingSetBool <SASettingSettingsAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)setVoiceControl;
+(id)setVoiceControlWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif