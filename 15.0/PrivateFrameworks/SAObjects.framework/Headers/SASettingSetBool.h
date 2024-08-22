// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASETTINGSETBOOL_H
#define SASETTINGSETBOOL_H



#import "SASettingSetValue.h"

@interface SASettingSetBool : SASettingSetValue

@property (nonatomic) BOOL toggle;
@property (nonatomic) BOOL value;


+(id)setBool;
+(id)setBoolWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif