// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBWELLNESSVALUE_H
#define _INPBWELLNESSVALUE_H

@class PBCodable, NSString;
@protocol _INPBWellnessValue, NSSecureCoding, NSCopying;


#import "_INPBInteger.h"
#import "_INPBDouble.h"
#import "_INPBValueMetadata.h"

@interface _INPBWellnessValue : PBCodable <_INPBWellnessValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasOrdinalValue;
@property (readonly, nonatomic) BOOL hasPbDoubleValue;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBInteger *ordinalValue; // ivar: _ordinalValue
@property (retain, nonatomic) _INPBDouble *pbDoubleValue; // ivar: _pbDoubleValue
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata; // ivar: _valueMetadata


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