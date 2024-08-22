// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBTICKETEDEVENT_H
#define _INPBTICKETEDEVENT_H

@class PBCodable, NSString;
@protocol _INPBTicketedEvent, NSSecureCoding, NSCopying;


#import "_INPBDateTimeRange.h"
#import "_INPBLocationValue.h"

@interface _INPBTicketedEvent : PBCodable <_INPBTicketedEvent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int category; // ivar: _category
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBDateTimeRange *eventDuration; // ivar: _eventDuration
@property (nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasEventDuration;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBLocationValue *location; // ivar: _location
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)categoryAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsCategory:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif