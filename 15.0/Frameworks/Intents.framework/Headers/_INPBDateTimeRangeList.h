// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBDATETIMERANGELIST_H
#define _INPBDATETIMERANGELIST_H

@class PBCodable, NSArray, NSString;
@protocol _INPBDateTimeRangeList, NSSecureCoding, NSCopying;


#import "_INPBCondition.h"

@interface _INPBDateTimeRangeList : PBCodable <_INPBDateTimeRangeList, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBCondition *condition; // ivar: _condition
@property (copy, nonatomic) NSArray *dateRanges; // ivar: _dateRanges
@property (readonly, nonatomic) NSUInteger dateRangesCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCondition;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)dateRangeType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateRangeAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addDateRange:(id)arg0 ;
-(void)clearDateRanges;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif