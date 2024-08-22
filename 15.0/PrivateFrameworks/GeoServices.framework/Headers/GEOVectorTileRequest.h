// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOVECTORTILEREQUEST_H
#define GEOVECTORTILEREQUEST_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;



@interface GEOVectorTileRequest : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_accessKey;
    NSString *_countryCode;
    NSString *_languageCode;
    NSUInteger _lineId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    float _latitudeHint;
    float _longitudeHint;
    unsigned int _scale;
    unsigned int _size;
    unsigned int _style;
    unsigned int _version;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    BOOL _preflight;
    BOOL _venuesPreflight;
    BOOL _vloc;
    ? _flags;
}


@property (retain, nonatomic) NSString *accessKey;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL hasAccessKey;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (nonatomic) BOOL hasLatitudeHint;
@property (nonatomic) BOOL hasLineId;
@property (nonatomic) BOOL hasLongitudeHint;
@property (nonatomic) BOOL hasPreflight;
@property (nonatomic) BOOL hasScale;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) BOOL hasVenuesPreflight;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) BOOL hasVloc;
@property (nonatomic) BOOL hasX;
@property (nonatomic) BOOL hasY;
@property (nonatomic) BOOL hasZ;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic) float latitudeHint;
@property (nonatomic) NSUInteger lineId;
@property (nonatomic) float longitudeHint;
@property (nonatomic) BOOL preflight;
@property (nonatomic) unsigned int scale;
@property (nonatomic) unsigned int size;
@property (nonatomic) unsigned int style;
@property (nonatomic) BOOL venuesPreflight;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL vloc;
@property (nonatomic) unsigned int x;
@property (nonatomic) unsigned int y;
@property (nonatomic) unsigned int z;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif