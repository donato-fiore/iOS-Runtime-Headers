// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOWAYPOINTID_H
#define GEOWAYPOINTID_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOStructuredAddress.h"
#import "GEOLatLng.h"

@interface GEOWaypointID : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOStructuredAddress *_addressHint;
    NSMutableArray *_formattedAddressLineHints;
    GEOLatLng *_locationHint;
    NSUInteger _muid;
    NSString *_placeNameHint;
    NSUInteger _resultProviderId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _addressGeocodeAccuracyHint;
    int _placeTypeHint;
    ? _flags;
}


@property (nonatomic) int addressGeocodeAccuracyHint;
@property (retain, nonatomic) GEOStructuredAddress *addressHint;
@property (retain, nonatomic) NSMutableArray *formattedAddressLineHints;
@property (nonatomic) BOOL hasAddressGeocodeAccuracyHint;
@property (readonly, nonatomic) BOOL hasAddressHint;
@property (readonly, nonatomic) BOOL hasLocationHint;
@property (nonatomic) BOOL hasMuid;
@property (readonly, nonatomic) BOOL hasPlaceNameHint;
@property (nonatomic) BOOL hasPlaceTypeHint;
@property (nonatomic) BOOL hasResultProviderId;
@property (retain, nonatomic) GEOLatLng *locationHint;
@property (nonatomic) NSUInteger muid;
@property (retain, nonatomic) NSString *placeNameHint;
@property (nonatomic) int placeTypeHint;
@property (nonatomic) NSUInteger resultProviderId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)formattedAddressLineHintType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)addressGeocodeAccuracyHintAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)formattedAddressLineHintAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)placeTypeHintAsString:(int)arg0 ;
-(int)StringAsAddressGeocodeAccuracyHint:(id)arg0 ;
-(int)StringAsPlaceTypeHint:(id)arg0 ;
-(void)addFormattedAddressLineHint:(id)arg0 ;
-(void)clearFormattedAddressLineHints;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif