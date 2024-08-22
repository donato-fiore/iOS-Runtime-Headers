// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOETARESULTBYTYPE_H
#define GEOETARESULTBYTYPE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEORouteTrafficDetail.h"
#import "GEOShortTrafficSummary.h"

@interface GEOETAResultByType : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CGFloat _expectedTimeOfDeparture;
    GEORouteTrafficDetail *_routeTrafficDetail;
    GEOShortTrafficSummary *_shortTrafficSummary;
    NSMutableArray *_summaryForPredictedDestinations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    int _licensePlateRestrictionImpact;
    unsigned int _staticTravelTime;
    int _status;
    int _transportType;
    unsigned int _travelTimeBestEstimate;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeConservativeEstimate;
    ? _flags;
}


@property (nonatomic) unsigned int distance;
@property (nonatomic) CGFloat expectedTimeOfDeparture;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) BOOL hasExpectedTimeOfDeparture;
@property (nonatomic) BOOL hasHistoricTravelTime;
@property (nonatomic) BOOL hasLicensePlateRestrictionImpact;
@property (readonly, nonatomic) BOOL hasRouteTrafficDetail;
@property (readonly, nonatomic) BOOL hasShortTrafficSummary;
@property (nonatomic) BOOL hasStaticTravelTime;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL hasTravelTimeAggressiveEstimate;
@property (nonatomic) BOOL hasTravelTimeBestEstimate;
@property (nonatomic) BOOL hasTravelTimeConservativeEstimate;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic) int licensePlateRestrictionImpact;
@property (retain, nonatomic) GEORouteTrafficDetail *routeTrafficDetail;
@property (retain, nonatomic) GEOShortTrafficSummary *shortTrafficSummary;
@property (nonatomic) unsigned int staticTravelTime;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *summaryForPredictedDestinations;
@property (nonatomic) int transportType;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeBestEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)summaryForPredictedDestinationType;
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
-(id)licensePlateRestrictionImpactAsString:(int)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(id)summaryForPredictedDestinationAtIndex:(NSUInteger)arg0 ;
-(id)transportTypeAsString:(int)arg0 ;
-(int)StringAsLicensePlateRestrictionImpact:(id)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(int)StringAsTransportType:(id)arg0 ;
-(void)addSummaryForPredictedDestination:(id)arg0 ;
-(void)clearSummaryForPredictedDestinations;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif