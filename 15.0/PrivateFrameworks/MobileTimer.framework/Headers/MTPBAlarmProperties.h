// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTPBALARMPROPERTIES_H
#define MTPBALARMPROPERTIES_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "MTPBSound.h"

@interface MTPBAlarmProperties : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *alarmID; // ivar: _alarmID
@property (nonatomic) BOOL allowsSnooze; // ivar: _allowsSnooze
@property (nonatomic) unsigned int bedtimeDismissedAction; // ivar: _bedtimeDismissedAction
@property (nonatomic) CGFloat bedtimeDismissedDate; // ivar: _bedtimeDismissedDate
@property (nonatomic) CGFloat bedtimeFiredDate; // ivar: _bedtimeFiredDate
@property (nonatomic) unsigned int bedtimeHour; // ivar: _bedtimeHour
@property (nonatomic) unsigned int bedtimeMinute; // ivar: _bedtimeMinute
@property (nonatomic) unsigned int bedtimeReminderMinutes; // ivar: _bedtimeReminderMinutes
@property (nonatomic) CGFloat bedtimeSnoozeFireDate; // ivar: _bedtimeSnoozeFireDate
@property (nonatomic) unsigned int daySetting; // ivar: _daySetting
@property (nonatomic) unsigned int dismissedAction; // ivar: _dismissedAction
@property (nonatomic) CGFloat dismissedDate; // ivar: _dismissedDate
@property (nonatomic) CGFloat firedDate; // ivar: _firedDate
@property (readonly, nonatomic) BOOL hasAlarmID;
@property (nonatomic) BOOL hasAllowsSnooze;
@property (nonatomic) BOOL hasBedtimeDismissedAction;
@property (nonatomic) BOOL hasBedtimeDismissedDate;
@property (nonatomic) BOOL hasBedtimeFiredDate;
@property (nonatomic) BOOL hasBedtimeHour;
@property (nonatomic) BOOL hasBedtimeMinute;
@property (nonatomic) BOOL hasBedtimeReminderMinutes;
@property (nonatomic) BOOL hasBedtimeSnoozeFireDate;
@property (nonatomic) BOOL hasDaySetting;
@property (nonatomic) BOOL hasDismissedAction;
@property (nonatomic) BOOL hasDismissedDate;
@property (nonatomic) BOOL hasFiredDate;
@property (nonatomic) BOOL hasHour;
@property (nonatomic) BOOL hasIsEnabled;
@property (nonatomic) BOOL hasIsSleepAlarm;
@property (nonatomic) BOOL hasKeepOffUntilDate;
@property (nonatomic) BOOL hasLastModifiedDate;
@property (nonatomic) BOOL hasMinute;
@property (nonatomic) BOOL hasOnboardingVersion;
@property (nonatomic) BOOL hasPlayOptions;
@property (nonatomic) BOOL hasRevision;
@property (nonatomic) BOOL hasSleepMode;
@property (nonatomic) BOOL hasSleepModeOptions;
@property (nonatomic) BOOL hasSleepSchedule;
@property (nonatomic) BOOL hasSleepTracking;
@property (nonatomic) BOOL hasSnoozeFireDate;
@property (readonly, nonatomic) BOOL hasSound;
@property (nonatomic) BOOL hasTimeInBedTracking;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) unsigned int hour; // ivar: _hour
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) BOOL isSleepAlarm; // ivar: _isSleepAlarm
@property (nonatomic) CGFloat keepOffUntilDate; // ivar: _keepOffUntilDate
@property (nonatomic) CGFloat lastModifiedDate; // ivar: _lastModifiedDate
@property (nonatomic) unsigned int minute; // ivar: _minute
@property (nonatomic) unsigned int onboardingVersion; // ivar: _onboardingVersion
@property (nonatomic) unsigned int playOptions; // ivar: _playOptions
@property (nonatomic) unsigned int revision; // ivar: _revision
@property (nonatomic) BOOL sleepMode; // ivar: _sleepMode
@property (nonatomic) unsigned int sleepModeOptions; // ivar: _sleepModeOptions
@property (nonatomic) BOOL sleepSchedule; // ivar: _sleepSchedule
@property (nonatomic) BOOL sleepTracking; // ivar: _sleepTracking
@property (nonatomic) CGFloat snoozeFireDate; // ivar: _snoozeFireDate
@property (retain, nonatomic) MTPBSound *sound; // ivar: _sound
@property (nonatomic) BOOL timeInBedTracking; // ivar: _timeInBedTracking
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif