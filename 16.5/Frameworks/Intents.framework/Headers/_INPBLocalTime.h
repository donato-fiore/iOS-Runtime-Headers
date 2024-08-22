// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBLOCALTIME_H
#define _INPBLOCALTIME_H

@class PBCodable, NSString;
@protocol _INPBLocalTime, NSSecureCoding, NSCopying;



@interface _INPBLocalTime : PBCodable <_INPBLocalTime, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasHourOfDay;
@property (nonatomic) BOOL hasMillisOfSecond;
@property (nonatomic) BOOL hasMinuteOfHour;
@property (nonatomic) BOOL hasSecondOfMinute;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger hourOfDay; // ivar: _hourOfDay
@property (nonatomic) NSInteger millisOfSecond; // ivar: _millisOfSecond
@property (nonatomic) NSInteger minuteOfHour; // ivar: _minuteOfHour
@property (nonatomic) NSInteger secondOfMinute; // ivar: _secondOfMinute
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