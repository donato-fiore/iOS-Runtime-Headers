// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPTRANSITPOIFEEDBACK_H
#define GEORPTRANSITPOIFEEDBACK_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEORPTransitPoiCorrections.h"
#import "GEOPDPlaceRequest.h"
#import "GEOPDPlace.h"
#import "GEORPTransitLineTileInfo.h"

@interface GEORPTransitPoiFeedback : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPTransitPoiCorrections *_corrections;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlace *_place;
    GEORPTransitLineTileInfo *_transitLineTileInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _correctionType;
    ? _flags;
}


@property (nonatomic) int correctionType;
@property (retain, nonatomic) GEORPTransitPoiCorrections *corrections;
@property (retain, nonatomic) NSMutableArray *directionsRequests;
@property (retain, nonatomic) NSMutableArray *directionsResponses;
@property (nonatomic) BOOL hasCorrectionType;
@property (readonly, nonatomic) BOOL hasCorrections;
@property (readonly, nonatomic) BOOL hasPlace;
@property (readonly, nonatomic) BOOL hasPlaceRequest;
@property (readonly, nonatomic) BOOL hasTransitLineTileInfo;
@property (retain, nonatomic) GEOPDPlace *place;
@property (retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property (retain, nonatomic) GEORPTransitLineTileInfo *transitLineTileInfo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)directionsRequestType;
+(Class)directionsResponseType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)correctionTypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)directionsRequestAtIndex:(NSUInteger)arg0 ;
-(id)directionsResponseAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsCorrectionType:(id)arg0 ;
-(void)addDirectionsRequest:(id)arg0 ;
-(void)addDirectionsResponse:(id)arg0 ;
-(void)clearDirectionsRequests;
-(void)clearDirectionsResponses;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif