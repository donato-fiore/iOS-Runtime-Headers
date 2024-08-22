// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOETARESPONSE_H
#define GEOETARESPONSE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOClientMetrics.h"
#import "GEOPDDatasetABStatus.h"
#import "GEOETAResult.h"
#import "GEOETAServiceResponseSummary.h"
#import "GEOPlaceSearchResponse.h"

@interface GEOETAResponse : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    *GEOProblemDetail _problemDetails;
    NSUInteger _problemDetailsCount;
    NSUInteger _problemDetailsSpace;
    GEOClientMetrics *_clientMetrics;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSString *_debugData;
    NSUInteger _debugServerLatencyMs;
    NSMutableArray *_etaResultReferencePointDestinations;
    GEOETAResult *_etaResultReferencePointOrigin;
    NSMutableArray *_etaResults;
    GEOETAServiceResponseSummary *_etaServiceSummary;
    GEOPlaceSearchResponse *_originPlaceSearchResponse;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _status;
    ? _flags;
}


@property (retain, nonatomic) GEOClientMetrics *clientMetrics;
@property (retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property (retain, nonatomic) NSString *debugData;
@property (nonatomic) NSUInteger debugServerLatencyMs;
@property (retain, nonatomic) NSMutableArray *etaResultReferencePointDestinations;
@property (retain, nonatomic) GEOETAResult *etaResultReferencePointOrigin;
@property (retain, nonatomic) NSMutableArray *etaResults;
@property (retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property (readonly, nonatomic) BOOL hasClientMetrics;
@property (readonly, nonatomic) BOOL hasDatasetAbStatus;
@property (readonly, nonatomic) BOOL hasDebugData;
@property (nonatomic) BOOL hasDebugServerLatencyMs;
@property (readonly, nonatomic) BOOL hasEtaResultReferencePointOrigin;
@property (readonly, nonatomic) BOOL hasEtaServiceSummary;
@property (readonly, nonatomic) BOOL hasOriginPlaceSearchResponse;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) GEOPlaceSearchResponse *originPlaceSearchResponse;
@property (readonly, nonatomic) *GEOProblemDetail problemDetails;
@property (readonly, nonatomic) NSUInteger problemDetailsCount;
@property (nonatomic) int status;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)etaResultReferencePointDestinationType;
+(Class)etaResultType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)etaResultAtIndex:(NSUInteger)arg0 ;
-(id)etaResultReferencePointDestinationAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(struct GEOProblemDetail )problemDetailAtIndex:(NSUInteger)arg0 ;
-(void)addEtaResult:(id)arg0 ;
-(void)addEtaResultReferencePointDestination:(id)arg0 ;
-(void)addProblemDetail:(struct GEOProblemDetail )arg0 ;
-(void)clearEtaResultReferencePointDestinations;
-(void)clearEtaResults;
-(void)clearProblemDetails;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif