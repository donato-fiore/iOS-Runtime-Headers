// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASETTINGGETFLASHLIGHT_H
#define SASETTINGGETFLASHLIGHT_H



#import "SASettingGetBool.h"

@interface SASettingGetFlashlight : SASettingGetBool



+(id)getFlashlight;
+(id)getFlashlightWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif