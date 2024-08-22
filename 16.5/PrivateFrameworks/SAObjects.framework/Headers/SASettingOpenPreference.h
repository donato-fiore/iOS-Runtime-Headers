// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASETTINGOPENPREFERENCE_H
#define SASETTINGOPENPREFERENCE_H

@class NSString;


#import "SASettingOpenSettings.h"

@interface SASettingOpenPreference : SASettingOpenSettings

@property (copy, nonatomic) NSString *pane;
@property (copy, nonatomic) NSString *tag;


+(id)openPreference;
+(id)openPreferenceWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif