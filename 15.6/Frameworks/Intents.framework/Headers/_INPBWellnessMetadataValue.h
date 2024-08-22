// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBWELLNESSMETADATAVALUE_H
#define _INPBWELLNESSMETADATAVALUE_H

@class PBCodable, NSString;
@protocol _INPBWellnessMetadataValue, NSSecureCoding, NSCopying;


#import "_INPBInteger.h"
#import "_INPBDouble.h"
#import "_INPBString.h"

@interface _INPBWellnessMetadataValue : PBCodable <_INPBWellnessMetadataValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasOrdinalValue;
@property (readonly, nonatomic) BOOL hasPbDoubleValue;
@property (readonly, nonatomic) BOOL hasPbStringValue;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBInteger *ordinalValue; // ivar: _ordinalValue
@property (retain, nonatomic) _INPBDouble *pbDoubleValue; // ivar: _pbDoubleValue
@property (retain, nonatomic) _INPBString *pbStringValue; // ivar: _pbStringValue
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