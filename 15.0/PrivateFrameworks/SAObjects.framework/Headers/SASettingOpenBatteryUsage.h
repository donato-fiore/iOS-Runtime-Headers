// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASETTINGOPENBATTERYUSAGE_H
#define SASETTINGOPENBATTERYUSAGE_H

@class NSString;
@protocol SASettingSettingsAction;


#import "SASettingOpenSettings.h"

@interface SASettingOpenBatteryUsage : SASettingOpenSettings <SASettingSettingsAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)openBatteryUsage;
+(id)openBatteryUsageWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif