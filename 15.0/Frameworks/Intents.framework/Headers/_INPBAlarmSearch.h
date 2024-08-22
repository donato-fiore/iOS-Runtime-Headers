// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBALARMSEARCH_H
#define _INPBALARMSEARCH_H

@class PBCodable, NSString;
@protocol _INPBAlarmSearch, NSSecureCoding, NSCopying;


#import "_INPBDataString.h"
#import "_INPBDateTimeRangeValue.h"

@interface _INPBAlarmSearch : PBCodable <_INPBAlarmSearch, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int alarmReferenceType; // ivar: _alarmReferenceType
@property (nonatomic) int alarmSearchStatus; // ivar: _alarmSearchStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAlarmReferenceType;
@property (nonatomic) BOOL hasAlarmSearchStatus;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasIncludeSleepAlarm;
@property (nonatomic) BOOL hasIsMeridianInferred;
@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL hasPeriod;
@property (readonly, nonatomic) BOOL hasTime;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL includeSleepAlarm; // ivar: _includeSleepAlarm
@property (nonatomic) BOOL isMeridianInferred; // ivar: _isMeridianInferred
@property (retain, nonatomic) _INPBDataString *label; // ivar: _label
@property (nonatomic) int period; // ivar: _period
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBDateTimeRangeValue *time; // ivar: _time


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)alarmReferenceTypeAsString:(int)arg0 ;
-(id)alarmSearchStatusAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)periodAsString:(int)arg0 ;
-(int)StringAsAlarmReferenceType:(id)arg0 ;
-(int)StringAsAlarmSearchStatus:(id)arg0 ;
-(int)StringAsPeriod:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif