// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBDATETIME_H
#define _INPBDATETIME_H

@class PBCodable, NSString;
@protocol _INPBDateTime, NSSecureCoding, NSCopying;


#import "_INPBLocalDate.h"
#import "_INPBLocalTime.h"

@interface _INPBDateTime : PBCodable <_INPBDateTime, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int calendarSystem; // ivar: _calendarSystem
@property (retain, nonatomic) _INPBLocalDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCalendarSystem;
@property (readonly, nonatomic) BOOL hasDate;
@property (readonly, nonatomic) BOOL hasTime;
@property (readonly, nonatomic) BOOL hasTimeZoneID;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBLocalTime *time; // ivar: _time
@property (copy, nonatomic) NSString *timeZoneID; // ivar: _timeZoneID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)calendarSystemAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsCalendarSystem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif