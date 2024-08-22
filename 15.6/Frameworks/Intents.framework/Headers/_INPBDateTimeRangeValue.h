// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBDATETIMERANGEVALUE_H
#define _INPBDATETIMERANGEVALUE_H

@class PBCodable, NSString;
@protocol _INPBDateTimeRangeValue, NSSecureCoding, NSCopying;


#import "_INPBDateTime.h"
#import "_INPBRecurrenceValue.h"
#import "_INPBValueMetadata.h"

@interface _INPBDateTimeRangeValue : PBCodable <_INPBDateTimeRangeValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL allDay; // ivar: _allDay
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger endCalendar; // ivar: _endCalendar
@property (retain, nonatomic) _INPBDateTime *endDateTime; // ivar: _endDateTime
@property (nonatomic) BOOL hasAllDay;
@property (nonatomic) BOOL hasEndCalendar;
@property (readonly, nonatomic) BOOL hasEndDateTime;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasRecurrence;
@property (nonatomic) BOOL hasStartCalendar;
@property (readonly, nonatomic) BOOL hasStartDateTime;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) _INPBRecurrenceValue *recurrence; // ivar: _recurrence
@property (nonatomic) NSInteger startCalendar; // ivar: _startCalendar
@property (retain, nonatomic) _INPBDateTime *startDateTime; // ivar: _startDateTime
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata; // ivar: _valueMetadata


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif