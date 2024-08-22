// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDAUTOCOMPLETEENTRYBUSINESS_H
#define GEOPDAUTOCOMPLETEENTRYBUSINESS_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDMapsIdentifier.h"
#import "GEOPDPlace.h"

@interface GEOPDAutocompleteEntryBusiness : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CGFloat _distance;
    GEOPDMapsIdentifier *_mapsId;
    NSUInteger _muid;
    GEOPDPlace *_place;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _resultProviderId;
    ? _flags;
}


@property (nonatomic) CGFloat distance;
@property (nonatomic) BOOL hasDistance;
@property (readonly, nonatomic) BOOL hasMapsId;
@property (nonatomic) BOOL hasMuid;
@property (readonly, nonatomic) BOOL hasPlace;
@property (nonatomic) BOOL hasResultProviderId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (nonatomic) NSUInteger muid;
@property (retain, nonatomic) GEOPDPlace *place;
@property (nonatomic) int resultProviderId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
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
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif