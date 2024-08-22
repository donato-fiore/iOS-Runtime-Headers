// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBCREATEALARMINTENT_H
#define _INPBCREATEALARMINTENT_H

@class PBCodable, NSString;
@protocol _INPBCreateAlarmIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"
#import "_INPBDataString.h"
#import "_INPBDateTimeRange.h"

@interface _INPBCreateAlarmIntent : PBCodable <_INPBCreateAlarmIntent, NSSecureCoding, NSCopying>

 {
    ? _alarmRepeatScheduleOptions;
    ? _has;
}


@property (readonly, nonatomic) *int alarmRepeatScheduleOptions;
@property (readonly, nonatomic) NSUInteger alarmRepeatScheduleOptionsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL hasRelativeOffsetInMinutes;
@property (readonly, nonatomic) BOOL hasTime;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBDataString *label; // ivar: _label
@property (nonatomic) int relativeOffsetInMinutes; // ivar: _relativeOffsetInMinutes
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBDateTimeRange *time; // ivar: _time


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