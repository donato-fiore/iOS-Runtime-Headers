// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBLOCALDATE_H
#define _INPBLOCALDATE_H

@class PBCodable, NSString;
@protocol _INPBLocalDate, NSSecureCoding, NSCopying;



@interface _INPBLocalDate : PBCodable <_INPBLocalDate, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger dayOfMonth; // ivar: _dayOfMonth
@property (nonatomic) int dayOfWeek; // ivar: _dayOfWeek
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDayOfMonth;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) BOOL hasMonth;
@property (nonatomic) BOOL hasYear;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger month; // ivar: _month
@property (readonly) Class superclass;
@property (nonatomic) NSInteger year; // ivar: _year


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dayOfWeekAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsDayOfWeek:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif