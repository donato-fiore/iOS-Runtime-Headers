// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBALARM_H
#define _INPBALARM_H

@class PBCodable, NSString;
@protocol _INPBAlarm, NSSecureCoding, NSCopying;


#import "_INPBDateTime.h"
#import "_INPBDataString.h"
#import "_INPBSleepAlarmAttribute.h"

@interface _INPBAlarm : PBCodable <_INPBAlarm, NSSecureCoding, NSCopying>

 {
    ? _alarmRepeatScheduleOptions;
    ? _has;
}


@property (readonly, nonatomic) *int alarmRepeatScheduleOptions;
@property (readonly, nonatomic) NSUInteger alarmRepeatScheduleOptionsCount;
@property (retain, nonatomic) _INPBDateTime *dateTime; // ivar: _dateTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL firing; // ivar: _firing
@property (readonly, nonatomic) BOOL hasDateTime;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL hasFiring;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) BOOL hasSleepAlarmAttribute;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) _INPBDataString *label; // ivar: _label
@property (retain, nonatomic) _INPBSleepAlarmAttribute *sleepAlarmAttribute; // ivar: _sleepAlarmAttribute
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)alarmRepeatScheduleOptionsAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsAlarmRepeatScheduleOptions:(id)arg0 ;
-(int)alarmRepeatScheduleOptionsAtIndex:(NSUInteger)arg0 ;
-(void)addAlarmRepeatScheduleOptions:(int)arg0 ;
-(void)clearAlarmRepeatScheduleOptions;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif