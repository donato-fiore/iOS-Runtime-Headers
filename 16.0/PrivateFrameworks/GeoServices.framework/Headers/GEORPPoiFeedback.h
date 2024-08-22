// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPPOIFEEDBACK_H
#define GEORPPOIFEEDBACK_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEORPPoiCorrections.h"
#import "GEOPDPlaceRequest.h"
#import "GEOPDPlace.h"
#import "GEORPCuratedCollectionContext.h"

@interface GEORPPoiFeedback : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPPoiCorrections *_corrections;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlace *_place;
    GEORPCuratedCollectionContext *_poiCuratedCollectionContext;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _correctionType;
    BOOL _addOtherPoi;
    ? _flags;
}


@property (nonatomic) BOOL addOtherPoi;
@property (nonatomic) int correctionType;
@property (retain, nonatomic) GEORPPoiCorrections *corrections;
@property (nonatomic) BOOL hasAddOtherPoi;
@property (nonatomic) BOOL hasCorrectionType;
@property (readonly, nonatomic) BOOL hasCorrections;
@property (readonly, nonatomic) BOOL hasPlace;
@property (readonly, nonatomic) BOOL hasPlaceRequest;
@property (readonly, nonatomic) BOOL hasPoiCuratedCollectionContext;
@property (retain, nonatomic) GEOPDPlace *place;
@property (retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property (retain, nonatomic) GEORPCuratedCollectionContext *poiCuratedCollectionContext;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)correctionTypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsCorrectionType:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif