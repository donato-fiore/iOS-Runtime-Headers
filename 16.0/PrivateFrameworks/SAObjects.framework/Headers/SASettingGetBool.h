// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETTINGGETBOOL_H
#define SASETTINGGETBOOL_H



#import "SASettingGetValue.h"

@interface SASettingGetBool : SASettingGetValue



+(id)getBool;
+(id)getBoolWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif