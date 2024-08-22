// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASETTINGGETSPOKENNOTIFICATIONSENABLED_H
#define SASETTINGGETSPOKENNOTIFICATIONSENABLED_H

@class NSString;


#import "SASettingGetBool.h"

@interface SASettingGetSpokenNotificationsEnabled : SASettingGetBool

@property (copy, nonatomic) NSString *appBundleId;


+(id)getSpokenNotificationsEnabled;
+(id)getSpokenNotificationsEnabledWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif