// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASETTINGSETBRIGHTNESS_H
#define SASETTINGSETBRIGHTNESS_H



#import "SASettingSetFloat.h"

@interface SASettingSetBrightness : SASettingSetFloat



+(id)setBrightness;
+(id)setBrightnessWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif