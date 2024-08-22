// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPPROBLEMCONTEXT_H
#define GEORPPROBLEMCONTEXT_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOABAssignmentResponse.h"
#import "GEORPCurrentEnvironmentManifestURLs.h"
#import "GEORPMapLocation.h"
#import "GEORPMerchantLookupContext.h"
#import "GEORPNavigationSettings.h"
#import "GEOPlace.h"
#import "GEORPPersonalizedMaps.h"
#import "GEORPPlaceInfo.h"
#import "GEOPDPlace.h"
#import "GEOServicesState.h"
#import "GEORPTransitLineTileInfo.h"

@interface GEORPProblemContext : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOSessionID _sessionId;
    NSMutableArray *_autocompleteSuggestionLists;
    NSMutableArray *_auxiliaryControls;
    CGFloat _creationDate;
    GEOABAssignmentResponse *_currentAbAssignmentResponse;
    GEORPCurrentEnvironmentManifestURLs *_currentEnvironmentManifestUrls;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    NSMutableArray *_directionsWaypointPlaceInfos;
    NSString *_lastSearchString;
    NSString *_lastUserTypedSearchString;
    GEORPMapLocation *_mapLocation;
    GEORPMerchantLookupContext *_merchantLookupContext;
    GEORPNavigationSettings *_navigationSettings;
    GEOPlace *_originalPlace;
    NSUInteger _originatingAuxiliaryControlIndex;
    GEORPPersonalizedMaps *_personalizedMaps;
    GEORPPlaceInfo *_placeInfo;
    GEOPDPlace *_place;
    GEOServicesState *_servicesState;
    NSString *_tileStateLog;
    GEORPTransitLineTileInfo *_transitLineTileInfo;
    NSMutableArray *_visibleTileSets;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _deviceGmtOffset;
    int _pinType;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *autocompleteSuggestionLists;
@property (retain, nonatomic) NSMutableArray *auxiliaryControls;
@property (nonatomic) CGFloat creationDate;
@property (retain, nonatomic) GEOABAssignmentResponse *currentAbAssignmentResponse;
@property (retain, nonatomic) GEORPCurrentEnvironmentManifestURLs *currentEnvironmentManifestUrls;
@property (nonatomic) int deviceGmtOffset;
@property (retain, nonatomic) NSMutableArray *directionsRequests;
@property (retain, nonatomic) NSMutableArray *directionsResponses;
@property (retain, nonatomic) NSMutableArray *directionsWaypointPlaceInfos;
@property (nonatomic) BOOL hasCreationDate;
@property (readonly, nonatomic) BOOL hasCurrentAbAssignmentResponse;
@property (readonly, nonatomic) BOOL hasCurrentEnvironmentManifestUrls;
@property (nonatomic) BOOL hasDeviceGmtOffset;
@property (readonly, nonatomic) BOOL hasLastSearchString;
@property (readonly, nonatomic) BOOL hasLastUserTypedSearchString;
@property (readonly, nonatomic) BOOL hasMapLocation;
@property (readonly, nonatomic) BOOL hasMerchantLookupContext;
@property (readonly, nonatomic) BOOL hasNavigationSettings;
@property (readonly, nonatomic) BOOL hasOriginalPlace;
@property (nonatomic) BOOL hasOriginatingAuxiliaryControlIndex;
@property (readonly, nonatomic) BOOL hasPersonalizedMaps;
@property (nonatomic) BOOL hasPinType;
@property (readonly, nonatomic) BOOL hasPlace;
@property (readonly, nonatomic) BOOL hasPlaceInfo;
@property (readonly, nonatomic) BOOL hasServicesState;
@property (nonatomic) BOOL hasSessionId;
@property (readonly, nonatomic) BOOL hasTileStateLog;
@property (readonly, nonatomic) BOOL hasTransitLineTileInfo;
@property (retain, nonatomic) NSString *lastSearchString;
@property (retain, nonatomic) NSString *lastUserTypedSearchString;
@property (retain, nonatomic) GEORPMapLocation *mapLocation;
@property (retain, nonatomic) GEORPMerchantLookupContext *merchantLookupContext;
@property (retain, nonatomic) GEORPNavigationSettings *navigationSettings;
@property (retain, nonatomic) GEOPlace *originalPlace;
@property (nonatomic) NSUInteger originatingAuxiliaryControlIndex;
@property (retain, nonatomic) GEORPPersonalizedMaps *personalizedMaps;
@property (nonatomic) int pinType;
@property (retain, nonatomic) GEOPDPlace *place;
@property (retain, nonatomic) GEORPPlaceInfo *placeInfo;
@property (retain, nonatomic) GEOServicesState *servicesState;
@property (nonatomic) GEOSessionID sessionId;
@property (retain, nonatomic) NSString *tileStateLog;
@property (retain, nonatomic) GEORPTransitLineTileInfo *transitLineTileInfo;
@property (retain, nonatomic) NSMutableArray *visibleTileSets;


+(BOOL)isValid:(id)arg0 ;
+(Class)autocompleteSuggestionListType;
+(Class)auxiliaryControlType;
+(Class)directionsRequestType;
+(Class)directionsResponseType;
+(Class)directionsWaypointPlaceInfoType;
+(Class)visibleTileSetType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)autocompleteSuggestionListAtIndex:(NSUInteger)arg0 ;
-(id)auxiliaryControlAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)directionsRequestAtIndex:(NSUInteger)arg0 ;
-(id)directionsResponseAtIndex:(NSUInteger)arg0 ;
-(id)directionsWaypointPlaceInfoAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)pinTypeAsString:(int)arg0 ;
-(id)visibleTileSetAtIndex:(NSUInteger)arg0 ;
-(int)StringAsPinType:(id)arg0 ;
-(void)addAutocompleteSuggestionList:(id)arg0 ;
-(void)addAuxiliaryControl:(id)arg0 ;
-(void)addDirectionsRequest:(id)arg0 ;
-(void)addDirectionsResponse:(id)arg0 ;
-(void)addDirectionsWaypointPlaceInfo:(id)arg0 ;
-(void)addVisibleTileSet:(id)arg0 ;
-(void)clearAutocompleteSuggestionLists;
-(void)clearAuxiliaryControls;
-(void)clearDirectionsRequests;
-(void)clearDirectionsResponses;
-(void)clearDirectionsWaypointPlaceInfos;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearVisibleTileSets;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif