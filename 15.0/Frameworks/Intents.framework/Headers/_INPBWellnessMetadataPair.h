// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBWELLNESSMETADATAPAIR_H
#define _INPBWELLNESSMETADATAPAIR_H

@class PBCodable, NSString;
@protocol _INPBWellnessMetadataPair, NSSecureCoding, NSCopying;


#import "_INPBString.h"
#import "_INPBWellnessMetadataValue.h"
#import "_INPBValueMetadata.h"

@interface _INPBWellnessMetadataPair : PBCodable <_INPBWellnessMetadataPair, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBString *key; // ivar: _key
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBWellnessMetadataValue *value; // ivar: _value
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