// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOROUTEATTRIBUTES_H
#define GEOROUTEATTRIBUTES_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOAutomobileOptions.h"
#import "GEOCyclingOptions.h"
#import "GEODestinationInfo.h"
#import "GEOTransitOptions.h"
#import "GEOWalkingOptions.h"

@interface GEORouteAttributes : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _additionalTransportTypes;
    ? _initialPromptTypes;
    ? _uiContexts;
    GEOTimepoint _timepoint;
    GEOAutomobileOptions *_automobileOptions;
    GEOCyclingOptions *_cyclingOptions;
    GEODestinationInfo *_destinationInfo;
    NSString *_phoneticLocaleIdentifier;
    GEOTransitOptions *_transitOptions;
    GEOWalkingOptions *_walkingOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _basicPointsToBeIncluded;
    int _destinationType;
    int _mainTransportType;
    int _trafficType;
    unsigned int _walkingLimitMeters;
    BOOL _directZilchByLaneFlowlines;
    BOOL _enableExperimentalMode;
    BOOL _includeContingencyRoutes;
    BOOL _includeHistoricTravelTime;
    BOOL _includeLaneGuidance;
    BOOL _includeManeuverIcons;
    BOOL _includePhonetics;
    BOOL _includeTrafficAlongRoute;
    BOOL _includeTrafficIncidents;
    BOOL _includeZilchPoints;
    BOOL _includeCellularCoverage;
    BOOL _includeCrossLanguagePhonetics;
    BOOL _includeLaneWidths;
    BOOL _includeRoutingPathLeg;
    BOOL _useMetricThreshold;
    ? _flags;
}


@property (readonly, nonatomic) *int additionalTransportTypes;
@property (readonly, nonatomic) NSUInteger additionalTransportTypesCount;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (nonatomic) int basicPointsToBeIncluded;
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (retain, nonatomic) GEODestinationInfo *destinationInfo;
@property (nonatomic) int destinationType;
@property (nonatomic) BOOL directZilchByLaneFlowlines;
@property (nonatomic) BOOL enableExperimentalMode;
@property (readonly, nonatomic) BOOL hasAutomobileOptions;
@property (nonatomic) BOOL hasBasicPointsToBeIncluded;
@property (readonly, nonatomic) BOOL hasCyclingOptions;
@property (readonly, nonatomic) BOOL hasDestinationInfo;
@property (nonatomic) BOOL hasDestinationType;
@property (nonatomic) BOOL hasDirectZilchByLaneFlowlines;
@property (nonatomic) BOOL hasEnableExperimentalMode;
@property (nonatomic) BOOL hasIncludeCellularCoverage;
@property (nonatomic) BOOL hasIncludeContingencyRoutes;
@property (nonatomic) BOOL hasIncludeCrossLanguagePhonetics;
@property (nonatomic) BOOL hasIncludeHistoricTravelTime;
@property (nonatomic) BOOL hasIncludeLaneGuidance;
@property (nonatomic) BOOL hasIncludeLaneWidths;
@property (nonatomic) BOOL hasIncludeManeuverIcons;
@property (nonatomic) BOOL hasIncludePhonetics;
@property (nonatomic) BOOL hasIncludeRoutingPathLeg;
@property (nonatomic) BOOL hasIncludeTrafficAlongRoute;
@property (nonatomic) BOOL hasIncludeTrafficIncidents;
@property (nonatomic) BOOL hasIncludeZilchPoints;
@property (nonatomic) BOOL hasMainTransportType;
@property (readonly, nonatomic) BOOL hasPhoneticLocaleIdentifier;
@property (nonatomic) BOOL hasTimepoint;
@property (nonatomic) BOOL hasTrafficType;
@property (readonly, nonatomic) BOOL hasTransitOptions;
@property (nonatomic) BOOL hasUseMetricThreshold;
@property (nonatomic) BOOL hasWalkingLimitMeters;
@property (readonly, nonatomic) BOOL hasWalkingOptions;
@property (nonatomic) BOOL includeCellularCoverage;
@property (nonatomic) BOOL includeContingencyRoutes;
@property (nonatomic) BOOL includeCrossLanguagePhonetics;
@property (nonatomic) BOOL includeHistoricTravelTime;
@property (nonatomic) BOOL includeLaneGuidance;
@property (nonatomic) BOOL includeLaneWidths;
@property (nonatomic) BOOL includeManeuverIcons;
@property (nonatomic) BOOL includePhonetics;
@property (nonatomic) BOOL includeRoutingPathLeg;
@property (nonatomic) BOOL includeTrafficAlongRoute;
@property (nonatomic) BOOL includeTrafficIncidents;
@property (nonatomic) BOOL includeZilchPoints;
@property (readonly, nonatomic) *int initialPromptTypes;
@property (readonly, nonatomic) NSUInteger initialPromptTypesCount;
@property (nonatomic) int mainTransportType;
@property (retain, nonatomic) NSString *phoneticLocaleIdentifier;
@property (nonatomic) GEOTimepoint timepoint;
@property (nonatomic) int trafficType;
@property (retain, nonatomic) GEOTransitOptions *transitOptions;
@property (readonly, nonatomic) *int uiContexts;
@property (readonly, nonatomic) NSUInteger uiContextsCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) BOOL useMetricThreshold;
@property (nonatomic) unsigned int walkingLimitMeters;
@property (retain, nonatomic) GEOWalkingOptions *walkingOptions;


+(BOOL)isValid:(id)arg0 ;
+(id)defaultRouteAttributes;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(NSUInteger)hash;
-(id)additionalTransportTypesAsString:(int)arg0 ;
-(id)basicPointsToBeIncludedAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)destinationTypeAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initialPromptTypesAsString:(int)arg0 ;
-(id)jsonRepresentation;
-(id)mainTransportTypeAsString:(int)arg0 ;
-(id)trafficTypeAsString:(int)arg0 ;
-(id)uiContextsAsString:(int)arg0 ;
-(int)StringAsAdditionalTransportTypes:(id)arg0 ;
-(int)StringAsBasicPointsToBeIncluded:(id)arg0 ;
-(int)StringAsDestinationType:(id)arg0 ;
-(int)StringAsInitialPromptTypes:(id)arg0 ;
-(int)StringAsMainTransportType:(id)arg0 ;
-(int)StringAsTrafficType:(id)arg0 ;
-(int)StringAsUiContexts:(id)arg0 ;
-(int)additionalTransportTypeAtIndex:(NSUInteger)arg0 ;
-(int)initialPromptTypeAtIndex:(NSUInteger)arg0 ;
-(int)uiContextAtIndex:(NSUInteger)arg0 ;
-(void)addAdditionalTransportType:(int)arg0 ;
-(void)addInitialPromptType:(int)arg0 ;
-(void)addUiContext:(int)arg0 ;
-(void)buildRouteAttributes:(id)arg0 result:(id)arg1 ;
-(void)buildRouteAttributesForETAUpdateRequest:(id)arg0 queue:(id)arg1 result:(id)arg2 ;
-(void)clearAdditionalTransportTypes;
-(void)clearInitialPromptTypes;
-(void)clearUiContexts;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)setRoutePointTypeForTransportType:(int)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif