// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDAUTOCOMPLETEENTRYADDRESS_H
#define GEOPDAUTOCOMPLETEENTRYADDRESS_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOLatLng.h"
#import "GEOPDMapsIdentifier.h"

@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_center;
    CGFloat _disambiguationRadiusMeters;
    CGFloat _distance;
    GEOPDMapsIdentifier *_mapsId;
    NSUInteger _opaqueGeoId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _placeType;
    BOOL _shouldCallPlacesForClientization;
    ? _flags;
}


@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic) CGFloat disambiguationRadiusMeters;
@property (nonatomic) CGFloat distance;
@property (readonly, nonatomic) BOOL hasCenter;
@property (nonatomic) BOOL hasDisambiguationRadiusMeters;
@property (nonatomic) BOOL hasDistance;
@property (readonly, nonatomic) BOOL hasMapsId;
@property (nonatomic) BOOL hasOpaqueGeoId;
@property (nonatomic) BOOL hasPlaceType;
@property (nonatomic) BOOL hasShouldCallPlacesForClientization;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (nonatomic) NSUInteger opaqueGeoId;
@property (nonatomic) int placeType;
@property (nonatomic) BOOL shouldCallPlacesForClientization;
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
-(id)placeTypeAsString:(int)arg0 ;
-(int)StringAsPlaceType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif