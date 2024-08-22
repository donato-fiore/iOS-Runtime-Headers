// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPITEMCORRECTEDLOCATIONATTRIBUTES_H
#define GEOMAPITEMCORRECTEDLOCATIONATTRIBUTES_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOAddress.h"
#import "GEOLatLng.h"

@interface GEOMapItemCorrectedLocationAttributes : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_correctedAddressSecondaryStreetLine;
    GEOAddress *_correctedAddress;
    GEOLatLng *_correctedCoordinate;
    NSString *_customLabel;
    CGFloat _lastUpdateDate;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _hasSubmittedRAP;
    ? _flags;
}


@property (retain, nonatomic) GEOAddress *correctedAddress;
@property (retain, nonatomic) NSString *correctedAddressSecondaryStreetLine;
@property (retain, nonatomic) GEOLatLng *correctedCoordinate;
@property (retain, nonatomic) NSString *customLabel;
@property (readonly, nonatomic) BOOL hasCorrectedAddress;
@property (readonly, nonatomic) BOOL hasCorrectedAddressSecondaryStreetLine;
@property (readonly, nonatomic) BOOL hasCorrectedCoordinate;
@property (readonly, nonatomic) BOOL hasCustomLabel;
@property (nonatomic) BOOL hasHasSubmittedRAP;
@property (nonatomic) BOOL hasLastUpdateDate;
@property (nonatomic) BOOL hasSubmittedRAP;
@property (nonatomic) CGFloat lastUpdateDate;
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
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif