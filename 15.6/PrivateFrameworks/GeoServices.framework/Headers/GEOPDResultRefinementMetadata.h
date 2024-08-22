// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDRESULTREFINEMENTMETADATA_H
#define GEOPDRESULTREFINEMENTMETADATA_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDResultRefinementMetadataDefault.h"
#import "GEOPDResultRefinementMetadataSort.h"

@interface GEOPDResultRefinementMetadata : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDResultRefinementMetadataDefault *_metadataDefault;
    GEOPDResultRefinementMetadataSort *_metadataSort;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _metadataType;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasMetadataDefault;
@property (readonly, nonatomic) BOOL hasMetadataSort;
@property (nonatomic) BOOL hasMetadataType;
@property (retain, nonatomic) GEOPDResultRefinementMetadataDefault *metadataDefault;
@property (retain, nonatomic) GEOPDResultRefinementMetadataSort *metadataSort;
@property (nonatomic) int metadataType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)metadataTypeAsString:(int)arg0 ;
-(int)StringAsMetadataType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif