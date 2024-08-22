// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBTEMPORALEVENTTRIGGER_H
#define _INPBTEMPORALEVENTTRIGGER_H

@class PBCodable, NSString;
@protocol _INPBTemporalEventTrigger, NSSecureCoding, NSCopying;


#import "_INPBDateTimeRangeValue.h"

@interface _INPBTemporalEventTrigger : PBCodable <_INPBTemporalEventTrigger, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBDateTimeRangeValue *dateTime; // ivar: _dateTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasDateTime;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


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