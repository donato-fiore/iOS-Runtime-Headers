// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOINDEXANDOFFSET_H
#define GEOINDEXANDOFFSET_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOIndexAndOffset : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    unsigned int _index;
    unsigned int _offset;
    ? _flags;
}


@property (nonatomic) BOOL hasIndex;
@property (nonatomic) BOOL hasOffset;
@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned int offset;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif