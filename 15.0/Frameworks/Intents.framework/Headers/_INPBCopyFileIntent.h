// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBCOPYFILEINTENT_H
#define _INPBCOPYFILEINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBCopyFileIntent, NSSecureCoding, NSCopying;


#import "_INPBString.h"
#import "_INPBIntentMetadata.h"

@interface _INPBCopyFileIntent : PBCodable <_INPBCopyFileIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBString *destinationName; // ivar: _destinationName
@property (nonatomic) int destinationType; // ivar: _destinationType
@property (retain, nonatomic) _INPBString *entityName; // ivar: _entityName
@property (nonatomic) int entityType; // ivar: _entityType
@property (readonly, nonatomic) BOOL hasDestinationName;
@property (nonatomic) BOOL hasDestinationType;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) BOOL hasEntityType;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasSourceName;
@property (nonatomic) BOOL hasSourceType;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (copy, nonatomic) NSArray *properties; // ivar: _properties
@property (readonly, nonatomic) NSUInteger propertiesCount;
@property (retain, nonatomic) _INPBString *sourceName; // ivar: _sourceName
@property (nonatomic) int sourceType; // ivar: _sourceType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)destinationTypeAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)entityTypeAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)propertiesAtIndex:(NSUInteger)arg0 ;
-(id)sourceTypeAsString:(int)arg0 ;
-(int)StringAsDestinationType:(id)arg0 ;
-(int)StringAsEntityType:(id)arg0 ;
-(int)StringAsSourceType:(id)arg0 ;
-(void)addProperties:(id)arg0 ;
-(void)clearProperties;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif