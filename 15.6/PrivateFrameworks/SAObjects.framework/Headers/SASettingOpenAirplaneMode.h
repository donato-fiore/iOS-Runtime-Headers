// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASETTINGOPENAIRPLANEMODE_H
#define SASETTINGOPENAIRPLANEMODE_H

@class NSString;
@protocol SASettingSettingsAction;


#import "SASettingOpenSettings.h"

@interface SASettingOpenAirplaneMode : SASettingOpenSettings <SASettingSettingsAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)openAirplaneMode;
+(id)openAirplaneModeWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif