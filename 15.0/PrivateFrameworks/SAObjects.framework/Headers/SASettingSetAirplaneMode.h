// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASETTINGSETAIRPLANEMODE_H
#define SASETTINGSETAIRPLANEMODE_H

@class NSString;
@protocol SASettingSettingsAction;


#import "SASettingSetBool.h"

@interface SASettingSetAirplaneMode : SASettingSetBool <SASettingSettingsAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)setAirplaneMode;
+(id)setAirplaneModeWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif