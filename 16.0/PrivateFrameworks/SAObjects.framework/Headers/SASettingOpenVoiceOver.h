// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETTINGOPENVOICEOVER_H
#define SASETTINGOPENVOICEOVER_H

@class NSString;
@protocol SASettingSettingsAction;


#import "SASettingOpenSettings.h"

@interface SASettingOpenVoiceOver : SASettingOpenSettings <SASettingSettingsAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)openVoiceOver;
+(id)openVoiceOverWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif