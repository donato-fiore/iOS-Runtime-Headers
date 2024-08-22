// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBFILEPROPERTY_H
#define _INPBFILEPROPERTY_H

@class PBCodable, NSString;
@protocol _INPBFileProperty, NSSecureCoding, NSCopying;


#import "_INPBFilePropertyValue.h"

@interface _INPBFileProperty : PBCodable <_INPBFileProperty, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasQualifier;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly) NSUInteger hash;
@property (nonatomic) int name; // ivar: _name
@property (nonatomic) int qualifier; // ivar: _qualifier
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBFilePropertyValue *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)nameAsString:(int)arg0 ;
-(id)qualifierAsString:(int)arg0 ;
-(int)StringAsName:(id)arg0 ;
-(int)StringAsQualifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif