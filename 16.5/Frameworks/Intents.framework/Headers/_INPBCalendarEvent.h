// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBCALENDAREVENT_H
#define _INPBCALENDAREVENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBCalendarEvent, NSSecureCoding, NSCopying;


#import "_INPBDateTimeRangeValue.h"
#import "_INPBLocation.h"

@interface _INPBCalendarEvent : PBCodable <_INPBCalendarEvent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *calendarPunchoutURI; // ivar: _calendarPunchoutURI
@property (retain, nonatomic) _INPBDateTimeRangeValue *dateTimeRange; // ivar: _dateTimeRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (readonly, nonatomic) BOOL hasCalendarPunchoutURI;
@property (readonly, nonatomic) BOOL hasDateTimeRange;
@property (readonly, nonatomic) BOOL hasEventIdentifier;
@property (nonatomic) BOOL hasIsContactBirthday;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isContactBirthday; // ivar: _isContactBirthday
@property (retain, nonatomic) _INPBLocation *location; // ivar: _location
@property (copy, nonatomic) NSArray *participants; // ivar: _participants
@property (readonly, nonatomic) NSUInteger participantsCount;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)participantsAtIndex:(NSUInteger)arg0 ;
-(void)addParticipants:(id)arg0 ;
-(void)clearParticipants;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif