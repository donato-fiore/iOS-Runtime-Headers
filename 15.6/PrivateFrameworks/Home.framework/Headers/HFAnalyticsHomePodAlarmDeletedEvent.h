// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFANALYTICSHOMEPODALARMDELETEDEVENT_H
#define HFANALYTICSHOMEPODALARMDELETEDEVENT_H

@class NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsHomePodAlarmDeletedEvent : HFAnalyticsEvent

@property (nonatomic) BOOL alarmDeletedSuccessfully; // ivar: _alarmDeletedSuccessfully
@property (nonatomic) float customVolumeLevel; // ivar: _customVolumeLevel
@property (nonatomic) BOOL hasCustomVolume; // ivar: _hasCustomVolume
@property (retain, nonatomic) NSString *homePodAlarmID; // ivar: _homePodAlarmID
@property (nonatomic) BOOL isMusicAlarm; // ivar: _isMusicAlarm
@property (retain, nonatomic) NSString *processName; // ivar: _processName


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif