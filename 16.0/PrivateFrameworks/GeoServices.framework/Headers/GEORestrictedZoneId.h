// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORESTRICTEDZONEID_H
#define GEORESTRICTEDZONEID_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEOMapRegion.h"

@interface GEORestrictedZoneId : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_boundingBox;
    NSUInteger _identifier;
    int _type;
    unsigned int _version;
    ? _flags;
}


@property (retain, nonatomic) GEOMapRegion *boundingBox;
@property (readonly, nonatomic) BOOL hasBoundingBox;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) NSUInteger identifier;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int version;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif