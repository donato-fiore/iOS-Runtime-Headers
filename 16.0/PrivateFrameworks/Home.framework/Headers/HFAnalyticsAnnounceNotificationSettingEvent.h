// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFANALYTICSANNOUNCENOTIFICATIONSETTINGEVENT_H
#define HFANALYTICSANNOUNCENOTIFICATIONSETTINGEVENT_H

@class NSNumber, NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsAnnounceNotificationSettingEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *announceNotificationSettingOption; // ivar: _announceNotificationSettingOption
@property (retain, nonatomic) NSNumber *announceSettingChangeFailed; // ivar: _announceSettingChangeFailed
@property (copy, nonatomic) NSString *processName; // ivar: _processName
@property (retain, nonatomic) NSNumber *settingChangedByAdmin; // ivar: _settingChangedByAdmin
@property (retain, nonatomic) NSNumber *settingChangedByOwner; // ivar: _settingChangedByOwner
@property (retain, nonatomic) NSNumber *settingChangedDuringOnboarding; // ivar: _settingChangedDuringOnboarding
@property (retain, nonatomic) NSNumber *settingChangedFromHomePodSettings; // ivar: _settingChangedFromHomePodSettings
@property (retain, nonatomic) NSNumber *settingChangedFromUserSettings; // ivar: _settingChangedFromUserSettings


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif