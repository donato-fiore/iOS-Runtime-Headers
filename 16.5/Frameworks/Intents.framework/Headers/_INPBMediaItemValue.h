// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBMEDIAITEMVALUE_H
#define _INPBMEDIAITEMVALUE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBMediaItemValue, NSSecureCoding, NSCopying;


#import "_INPBImageValue.h"
#import "_INPBPrivateMediaItemValueData.h"
#import "_INPBValueMetadata.h"

@interface _INPBMediaItemValue : PBCodable <_INPBMediaItemValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *artist; // ivar: _artist
@property (retain, nonatomic) _INPBImageValue *artwork; // ivar: _artwork
@property (copy, nonatomic) NSString *assetInfo; // ivar: _assetInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasArtist;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (readonly, nonatomic) BOOL hasAssetInfo;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasPrivateMediaItemValueData;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *namedEntities; // ivar: _namedEntities
@property (readonly, nonatomic) NSUInteger namedEntitiesCount;
@property (retain, nonatomic) _INPBPrivateMediaItemValueData *privateMediaItemValueData; // ivar: _privateMediaItemValueData
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSArray *topics; // ivar: _topics
@property (readonly, nonatomic) NSUInteger topicsCount;
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata; // ivar: _valueMetadata


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)namedEntitiesAtIndex:(NSUInteger)arg0 ;
-(id)topicsAtIndex:(NSUInteger)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addNamedEntities:(id)arg0 ;
-(void)addTopics:(id)arg0 ;
-(void)clearNamedEntities;
-(void)clearTopics;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif