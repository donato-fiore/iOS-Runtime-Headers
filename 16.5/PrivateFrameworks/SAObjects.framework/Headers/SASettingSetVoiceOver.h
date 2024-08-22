// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASETTINGSETVOICEOVER_H
#define SASETTINGSETVOICEOVER_H

@class NSString;
@protocol SASettingSettingsAction;


#import "SASettingSetBool.h"

@interface SASettingSetVoiceOver : SASettingSetBool <SASettingSettingsAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)setVoiceOver;
+(id)setVoiceOverWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif