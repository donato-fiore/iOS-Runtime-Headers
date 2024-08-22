// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDMAPSRESULT_H
#define GEOPDMAPSRESULT_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDBatchReverseGeocodeResult.h"
#import "GEOPDCollectionResult.h"
#import "GEOPDPlaceQuestionnaireResult.h"
#import "GEOPDPlace.h"
#import "GEOPDPublisherResult.h"

@interface GEOPDMapsResult : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDBatchReverseGeocodeResult *_batchReverseGeocode;
    GEOPDCollectionResult *_collection;
    GEOPDPlaceQuestionnaireResult *_placeQuestionnaire;
    GEOPDPlace *_place;
    GEOPDPublisherResult *_publisher;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _resultType;
    ? _flags;
}


@property (retain, nonatomic) GEOPDBatchReverseGeocodeResult *batchReverseGeocode;
@property (retain, nonatomic) GEOPDCollectionResult *collection;
@property (readonly, nonatomic) BOOL hasBatchReverseGeocode;
@property (readonly, nonatomic) BOOL hasCollection;
@property (readonly, nonatomic) BOOL hasPlace;
@property (readonly, nonatomic) BOOL hasPlaceQuestionnaire;
@property (readonly, nonatomic) BOOL hasPublisher;
@property (nonatomic) BOOL hasResultType;
@property (retain, nonatomic) GEOPDPlace *place;
@property (retain, nonatomic) GEOPDPlaceQuestionnaireResult *placeQuestionnaire;
@property (retain, nonatomic) GEOPDPublisherResult *publisher;
@property (nonatomic) int resultType;
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
-(id)resultTypeAsString:(int)arg0 ;
-(int)StringAsResultType:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif