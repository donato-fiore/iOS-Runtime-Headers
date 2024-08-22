// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBRECURRENCEVALUE_H
#define _INPBRECURRENCEVALUE_H

@class PBCodable, NSString;
@protocol _INPBRecurrenceValue, NSSecureCoding, NSCopying;



@interface _INPBRecurrenceValue : PBCodable <_INPBRecurrenceValue, NSSecureCoding, NSCopying>

 {
    ? _weeklyRecurrenceDays;
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int frequency; // ivar: _frequency
@property (nonatomic) BOOL hasFrequency;
@property (nonatomic) BOOL hasInterval;
@property (nonatomic) BOOL hasOrdinal;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger interval; // ivar: _interval
@property (nonatomic) NSInteger ordinal; // ivar: _ordinal
@property (readonly) Class superclass;
@property (readonly, nonatomic) *int weeklyRecurrenceDays;
@property (readonly, nonatomic) NSUInteger weeklyRecurrenceDaysCount;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)frequencyAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)weeklyRecurrenceDaysAsString:(int)arg0 ;
-(int)StringAsFrequency:(id)arg0 ;
-(int)StringAsWeeklyRecurrenceDays:(id)arg0 ;
-(int)weeklyRecurrenceDaysAtIndex:(NSUInteger)arg0 ;
-(void)addWeeklyRecurrenceDays:(int)arg0 ;
-(void)clearWeeklyRecurrenceDays;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif