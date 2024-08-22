// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASETTINGGETMIDNIGHTMODE_H
#define SASETTINGGETMIDNIGHTMODE_H



#import "SASettingGetBool.h"

@interface SASettingGetMidnightMode : SASettingGetBool



+(id)getMidnightMode;
+(id)getMidnightModeWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif