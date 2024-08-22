// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASETTINGSETSPOKENNOTIFICATIONSENABLED_H
#define SASETTINGSETSPOKENNOTIFICATIONSENABLED_H

@class NSString, NSDate;


#import "SASettingSetBool.h"

@interface SASettingSetSpokenNotificationsEnabled : SASettingSetBool

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSDate *timeToReEnable;


+(id)setSpokenNotificationsEnabled;
+(id)setSpokenNotificationsEnabledWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif