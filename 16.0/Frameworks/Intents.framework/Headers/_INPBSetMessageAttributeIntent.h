// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBSETMESSAGEATTRIBUTEINTENT_H
#define _INPBSETMESSAGEATTRIBUTEINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBSetMessageAttributeIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"

@interface _INPBSetMessageAttributeIntent : PBCodable <_INPBSetMessageAttributeIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int attribute; // ivar: _attribute
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAttribute;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (readonly, nonatomic) NSUInteger identifiersCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)attributeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)identifierAtIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsAttribute:(id)arg0 ;
-(void)addIdentifier:(id)arg0 ;
-(void)clearIdentifiers;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif