// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBURLVALUE_H
#define _INPBURLVALUE_H

@class PBCodable, NSString, NSData;
@protocol _INPBURLValue, NSSecureCoding, NSCopying;


#import "_INPBValueMetadata.h"

@interface _INPBURLValue : PBCodable <_INPBURLValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *absoluteString; // ivar: _absoluteString
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAbsoluteString;
@property (readonly, nonatomic) BOOL hasScope;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *scope; // ivar: _scope
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