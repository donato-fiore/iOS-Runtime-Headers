// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASETTINGSETMIDNIGHTMODE_H
#define SASETTINGSETMIDNIGHTMODE_H



#import "SASettingSetBool.h"

@interface SASettingSetMidnightMode : SASettingSetBool



+(id)setMidnightMode;
+(id)setMidnightModeWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif