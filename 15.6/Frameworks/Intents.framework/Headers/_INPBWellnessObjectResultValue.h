// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBWELLNESSOBJECTRESULTVALUE_H
#define _INPBWELLNESSOBJECTRESULTVALUE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBWellnessObjectResultValue, NSSecureCoding, NSCopying;


#import "_INPBDateTimeRange.h"
#import "_INPBString.h"

@interface _INPBWellnessObjectResultValue : PBCodable <_INPBWellnessObjectResultValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasRecordDate;
@property (nonatomic) BOOL hasResultType;
@property (readonly, nonatomic) BOOL hasUnit;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBDateTimeRange *recordDate; // ivar: _recordDate
@property (nonatomic) int resultType; // ivar: _resultType
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBString *unit; // ivar: _unit
@property (copy, nonatomic) NSArray *values; // ivar: _values
@property (readonly, nonatomic) NSUInteger valuesCount;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)resultTypeAsString:(int)arg0 ;
-(id)valuesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsResultType:(id)arg0 ;
-(void)addValues:(id)arg0 ;
-(void)clearValues;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif