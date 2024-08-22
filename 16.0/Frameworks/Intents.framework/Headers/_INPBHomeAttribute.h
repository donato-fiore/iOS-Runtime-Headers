// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBHOMEATTRIBUTE_H
#define _INPBHOMEATTRIBUTE_H

@class PBCodable, NSString;
@protocol _INPBHomeAttribute, NSSecureCoding, NSCopying;


#import "_INPBHomeAttributeValue.h"

@interface _INPBHomeAttribute : PBCodable <_INPBHomeAttribute, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int attributeType; // ivar: _attributeType
@property (retain, nonatomic) _INPBHomeAttributeValue *attributeValue; // ivar: _attributeValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAttributeType;
@property (readonly, nonatomic) BOOL hasAttributeValue;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)attributeTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsAttributeType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif