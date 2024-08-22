// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFANALYTICSANNOUNCEUSERSETTINGEVENT_H
#define HFANALYTICSANNOUNCEUSERSETTINGEVENT_H

@class NSNumber, NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsAnnounceUserSettingEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *announceEnabledForUser; // ivar: _announceEnabledForUser
@property (retain, nonatomic) NSNumber *announceSettingChangeFailed; // ivar: _announceSettingChangeFailed
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (retain, nonatomic) NSNumber *settingChangedByAdmin; // ivar: _settingChangedByAdmin
@property (retain, nonatomic) NSNumber *settingChangedByOwner; // ivar: _settingChangedByOwner
@property (retain, nonatomic) NSNumber *settingChangedDuringOnboarding; // ivar: _settingChangedDuringOnboarding
@property (retain, nonatomic) NSNumber *settingChangedForAdminUser; // ivar: _settingChangedForAdminUser
@property (retain, nonatomic) NSNumber *settingChangedForCurrentUser; // ivar: _settingChangedForCurrentUser
@property (retain, nonatomic) NSNumber *settingChangedFromHomePodSettings; // ivar: _settingChangedFromHomePodSettings
@property (retain, nonatomic) NSNumber *settingChangedFromUserSettings; // ivar: _settingChangedFromUserSettings


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif