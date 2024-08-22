// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDPLACERESPONSE_H
#define GEOPDPLACERESPONSE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOClientMetrics.h"
#import "GEOPDDatasetABStatus.h"
#import "GEOPDPlaceGlobalResult.h"

@interface GEOPDPlaceResponse : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOClientMetrics *_clientMetrics;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSString *_debugApiKey;
    NSUInteger _debugLatencyMs;
    NSMutableArray *_displayLanguages;
    NSString *_displayRegion;
    NSMutableArray *_dotPlaces;
    GEOPDPlaceGlobalResult *_globalResult;
    NSMutableArray *_mapsResults;
    NSMutableArray *_legacyPlaceResults;
    NSMutableArray *_spokenLanguages;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _requestType;
    int _status;
    ? _flags;
}


@property (retain, nonatomic) GEOClientMetrics *clientMetrics;
@property (retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property (retain, nonatomic) NSString *debugApiKey;
@property (nonatomic) NSUInteger debugLatencyMs;
@property (retain, nonatomic) NSMutableArray *displayLanguages;
@property (retain, nonatomic) NSString *displayRegion;
@property (retain, nonatomic) NSMutableArray *dotPlaces;
@property (retain, nonatomic) GEOPDPlaceGlobalResult *globalResult;
@property (readonly, nonatomic) BOOL hasClientMetrics;
@property (readonly, nonatomic) BOOL hasDatasetAbStatus;
@property (readonly, nonatomic) BOOL hasDebugApiKey;
@property (nonatomic) BOOL hasDebugLatencyMs;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (readonly, nonatomic) BOOL hasGlobalResult;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) NSMutableArray *legacyPlaceResults;
@property (retain, nonatomic) NSMutableArray *mapsResults;
@property (nonatomic) int requestType;
@property (retain, nonatomic) NSMutableArray *spokenLanguages;
@property (nonatomic) int status;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)displayLanguageType;
+(Class)dotPlaceType;
+(Class)legacyPlaceResultType;
+(Class)mapsResultType;
+(Class)spokenLanguageType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)resultsCountWithResultType:(int)arg0 ;
-(id)_disambiguationLabels;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayLanguageAtIndex:(NSUInteger)arg0 ;
-(id)dotPlaceAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithPlace:(id)arg0 forRequestType:(int)arg1 ;
-(id)jsonRepresentation;
-(id)legacyPlaceResultAtIndex:(NSUInteger)arg0 ;
-(id)mapsResultAtIndex:(NSUInteger)arg0 ;
-(id)requestTypeAsString:(int)arg0 ;
-(id)resultsWithResultType:(int)arg0 ;
-(id)spokenLanguageAtIndex:(NSUInteger)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsRequestType:(id)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)addDisplayLanguage:(id)arg0 ;
-(void)addDotPlace:(id)arg0 ;
-(void)addLegacyPlaceResult:(id)arg0 ;
-(void)addMapsResult:(id)arg0 ;
-(void)addSpokenLanguage:(id)arg0 ;
-(void)clearDisplayLanguages;
-(void)clearDotPlaces;
-(void)clearLegacyPlaceResults;
-(void)clearMapsResults;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearSpokenLanguages;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif