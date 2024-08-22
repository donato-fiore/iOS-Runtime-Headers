// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPPBDATECOMPONENTS_H
#define PPPBDATECOMPONENTS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPPBDateComponents : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *calendarIdentifier; // ivar: _calendarIdentifier
@property (nonatomic) int day; // ivar: _day
@property (readonly, nonatomic) BOOL hasCalendarIdentifier;
@property (nonatomic) BOOL hasDay;
@property (nonatomic) BOOL hasMonth;
@property (readonly, nonatomic) BOOL hasTimeZoneName;
@property (nonatomic) BOOL hasYear;
@property (nonatomic) int month; // ivar: _month
@property (retain, nonatomic) NSString *timeZoneName; // ivar: _timeZoneName
@property (nonatomic) int year; // ivar: _year


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif