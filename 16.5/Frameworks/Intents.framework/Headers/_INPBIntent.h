// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBINTENT_H
#define _INPBINTENT_H

@class PBCodable, NSString;
@protocol _INPBIntent, NSSecureCoding, NSCopying;


#import "_INPBAppIdentifier.h"

@interface _INPBIntent : PBCodable <_INPBIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBAppIdentifier *appIdentifier; // ivar: _appIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *encodedIntent; // ivar: _encodedIntent
@property (copy, nonatomic) NSString *encodedIntentDefinition; // ivar: _encodedIntentDefinition
@property (nonatomic) int encodingFormat; // ivar: _encodingFormat
@property (readonly, nonatomic) BOOL hasAppIdentifier;
@property (readonly, nonatomic) BOOL hasEncodedIntent;
@property (readonly, nonatomic) BOOL hasEncodedIntentDefinition;
@property (nonatomic) BOOL hasEncodingFormat;
@property (readonly, nonatomic) BOOL hasIntentTypeName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *intentTypeName; // ivar: _intentTypeName
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)encodingFormatAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsEncodingFormat:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif