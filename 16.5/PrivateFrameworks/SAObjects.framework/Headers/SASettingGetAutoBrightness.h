// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASETTINGGETAUTOBRIGHTNESS_H
#define SASETTINGGETAUTOBRIGHTNESS_H



#import "SASettingGetBool.h"

@interface SASettingGetAutoBrightness : SASettingGetBool



+(id)getAutoBrightness;
+(id)getAutoBrightnessWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif