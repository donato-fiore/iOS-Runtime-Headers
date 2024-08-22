// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAACECALENDARSYSTEMSETTING_H
#define SAACECALENDARSYSTEMSETTING_H

@class NSString;


#import "SADomainObject.h"

@interface SAAceCalendarSystemSetting : SADomainObject

@property (copy, nonatomic) NSString *calendarType;


+(id)aceCalendarSystemSetting;
+(id)aceCalendarSystemSettingWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif