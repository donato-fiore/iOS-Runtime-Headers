// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ALARM_H
#define ALARM_H

@class NSMutableDictionary, NSArray, NSString, NSURL, NSNumber, NSDate, NSDictionary;
@protocol AlarmDelegate;

#import <Foundation/Foundation.h>

#import "Alarm.h"

@interface Alarm : NSObject {
    BOOL _pretendActiveIfProxy;
    NSMutableDictionary *_settings;
    NSArray *_repeatDays;
    NSString *_vibrationID;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) NSString *alarmID; // ivar: _alarmID
@property (retain, nonatomic) NSURL *alarmIDURL; // ivar: _alarmIDURL
@property (nonatomic) BOOL allowsSnooze; // ivar: _allowsSnooze
@property (nonatomic) NSInteger bedtimeHour;
@property (nonatomic) NSInteger bedtimeMinute;
@property (copy, nonatomic) NSNumber *bedtimeReminderMinutes;
@property (nonatomic) unsigned int daySetting; // ivar: _daySetting
@property (weak, nonatomic) NSObject<AlarmDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) Alarm *editingProxy; // ivar: _editingProxy
@property (nonatomic) BOOL forceActiveForMigration; // ivar: _forceActiveForMigration
@property (nonatomic) unsigned int hour; // ivar: _hour
@property (nonatomic) BOOL isSleepAlarm; // ivar: _isSleepAlarm
@property (readonly, nonatomic) NSDate *lastModified; // ivar: _lastModified
@property (nonatomic) unsigned int minute; // ivar: _minute
@property (readonly, nonatomic) NSArray *repeatDays;
@property (readonly, nonatomic) BOOL repeats;
@property (readonly, nonatomic) unsigned int revision; // ivar: _revision
@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly, nonatomic, getter=isSnoozed) BOOL snoozed; // ivar: _snoozed
@property (readonly, nonatomic) NSString *sound; // ivar: _sound
@property (readonly, nonatomic) NSInteger soundType; // ivar: _soundType
@property (copy, nonatomic) NSNumber *soundVolume;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *uiTitle;
@property (retain, nonatomic) NSString *vibrationID;


+(BOOL)verifyDaySetting:(id)arg0 withMessageList:(id)arg1 ;
+(BOOL)verifyHourSetting:(id)arg0 withMessageList:(id)arg1 ;
+(BOOL)verifyIdSetting:(id)arg0 withMessageList:(id)arg1 ;
+(BOOL)verifyMinuteSetting:(id)arg0 withMessageList:(id)arg1 ;
+(BOOL)verifySettings:(id)arg0 ;
+(id)timeComparator:(SEL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)alarmSoundType;
-(NSInteger)compareTime:(id)arg0 ;
-(NSUInteger)hash;
-(id)_newBaseDateComponentsForDay:(NSInteger)arg0 ;
-(id)alarmSoundIdentifier;
-(id)alarmSoundVolume;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)nowDateForOffsetCalculation;
-(id)timeZoneForOffsetCalculation;
-(void)applyChangesFromEditingProxy;
-(void)applySettings:(id)arg0 ;
-(void)dropEditingProxy;
-(void)markModified;
-(void)prepareEditingProxy;
-(void)refreshActiveState;
-(void)setAlarmSoundIdentifier:(id)arg0 ofType:(NSInteger)arg1 ;
-(void)setAlarmSoundVolume:(id)arg0 ;


@end


#endif