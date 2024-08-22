// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBVOLUMEVALUE_H
#define _INPBVOLUMEVALUE_H

@class PBCodable, NSString;
@protocol _INPBVolumeValue, NSSecureCoding, NSCopying;


#import "_INPBValueMetadata.h"

@interface _INPBVolumeValue : PBCodable <_INPBVolumeValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasMagnitude;
@property (nonatomic) BOOL hasUnit;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat magnitude; // ivar: _magnitude
@property (readonly) Class superclass;
@property (nonatomic) int unit; // ivar: _unit
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata; // ivar: _valueMetadata


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)unitAsString:(int)arg0 ;
-(int)StringAsUnit:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif