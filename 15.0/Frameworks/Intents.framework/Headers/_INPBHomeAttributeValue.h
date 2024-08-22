// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBHOMEATTRIBUTEVALUE_H
#define _INPBHOMEATTRIBUTEVALUE_H

@class PBCodable, NSString;
@protocol _INPBHomeAttributeValue, NSSecureCoding, NSCopying;


#import "_INPBHomeAttributeRange.h"

@interface _INPBHomeAttributeValue : PBCodable <_INPBHomeAttributeValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL booleanValue; // ivar: _booleanValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (nonatomic) BOOL hasBooleanValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasIntegerValue;
@property (nonatomic) BOOL hasLimitValue;
@property (readonly, nonatomic) BOOL hasRangeValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) BOOL hasUnit;
@property (nonatomic) BOOL hasValueType;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger integerValue; // ivar: _integerValue
@property (nonatomic) int limitValue; // ivar: _limitValue
@property (retain, nonatomic) _INPBHomeAttributeRange *rangeValue; // ivar: _rangeValue
@property (copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (readonly) Class superclass;
@property (nonatomic) int unit; // ivar: _unit
@property (nonatomic) int valueType; // ivar: _valueType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)limitValueAsString:(int)arg0 ;
-(id)unitAsString:(int)arg0 ;
-(id)valueTypeAsString:(int)arg0 ;
-(int)StringAsLimitValue:(id)arg0 ;
-(int)StringAsUnit:(id)arg0 ;
-(int)StringAsValueType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif