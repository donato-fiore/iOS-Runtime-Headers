// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBUNCOMPRESSFILEINTENT_H
#define _INPBUNCOMPRESSFILEINTENT_H

@class PBCodable, NSString;
@protocol _INPBUncompressFileIntent, NSSecureCoding, NSCopying;


#import "_INPBString.h"
#import "_INPBIntentMetadata.h"

@interface _INPBUncompressFileIntent : PBCodable <_INPBUncompressFileIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBString *entityName; // ivar: _entityName
@property (nonatomic) int entityType; // ivar: _entityType
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) BOOL hasEntityType;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)entityTypeAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsEntityType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif