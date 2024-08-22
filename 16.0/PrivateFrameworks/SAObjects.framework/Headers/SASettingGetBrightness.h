// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETTINGGETBRIGHTNESS_H
#define SASETTINGGETBRIGHTNESS_H



#import "SASettingGetFloat.h"

@interface SASettingGetBrightness : SASettingGetFloat



+(id)getBrightness;
+(id)getBrightnessWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif