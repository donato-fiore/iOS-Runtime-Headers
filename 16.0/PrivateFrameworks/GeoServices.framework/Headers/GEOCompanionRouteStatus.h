// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPANIONROUTESTATUS_H
#define GEOCOMPANIONROUTESTATUS_H

@class PBCodable, PBDataReader, NSData, NSArray;
@protocol NSCopying;


#import "GEOCompanionTransitAlightMessage.h"
#import "GEOLocation.h"
#import "GEOLatLng.h"

@interface GEOCompanionRouteStatus : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _selectedRideIndexs;
    GEOCompanionTransitAlightMessage *_alightMessage;
    GEOLocation *_location;
    NSData *_routeID;
    GEOLatLng *_routeMatchCoordinate;
    CGFloat _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _distanceRemainingOnRoute;
    unsigned int _distanceToManeuver;
    unsigned int _distanceToRoute;
    int _feedbackType;
    int _hapticsType;
    unsigned int _remainingTime;
    unsigned int _routeLocationIndex;
    float _routeLocationOffset;
    unsigned int _stepID;
    BOOL _guidancePromptsEnabled;
    BOOL _isConnectedToCarplay;
    BOOL _lowGuidanceNavigation;
    ? _flags;
}


@property (retain, nonatomic) GEOCompanionTransitAlightMessage *alightMessage;
@property (nonatomic) unsigned int distanceRemainingOnRoute;
@property (nonatomic) unsigned int distanceToManeuver;
@property (nonatomic) unsigned int distanceToRoute;
@property (readonly, nonatomic) unsigned int effectiveDistanceToManeuver;
@property (readonly, nonatomic) unsigned int effectiveStepID;
@property (nonatomic) int feedbackType;
@property (nonatomic) BOOL guidancePromptsEnabled;
@property (nonatomic) int hapticsType;
@property (readonly, nonatomic) BOOL hasAlightMessage;
@property (nonatomic) BOOL hasDistanceRemainingOnRoute;
@property (nonatomic) BOOL hasDistanceToManeuver;
@property (nonatomic) BOOL hasDistanceToRoute;
@property (readonly, nonatomic) BOOL hasEffectiveDistanceToManeuver;
@property (readonly, nonatomic) BOOL hasEffectiveStepID;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) BOOL hasGuidancePromptsEnabled;
@property (nonatomic) BOOL hasHapticsType;
@property (nonatomic) BOOL hasIsConnectedToCarplay;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasLowGuidanceNavigation;
@property (nonatomic) BOOL hasRemainingTime;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (nonatomic) BOOL hasRouteLocationIndex;
@property (nonatomic) BOOL hasRouteLocationOffset;
@property (readonly, nonatomic) BOOL hasRouteMatchCoordinate;
@property (nonatomic) BOOL hasStepID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL isConnectedToCarplay;
@property (readonly, nonatomic) BOOL isNavigating;
@property (readonly, nonatomic) BOOL isRecalculating;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) BOOL lowGuidanceNavigation;
@property (nonatomic) unsigned int remainingTime;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) unsigned int routeLocationIndex;
@property (nonatomic) float routeLocationOffset;
@property (retain, nonatomic) GEOLatLng *routeMatchCoordinate;
@property (readonly, nonatomic) *unsigned int selectedRideIndexs;
@property (readonly, nonatomic) NSUInteger selectedRideIndexsCount;
@property (readonly, nonatomic) NSArray *selectedRideIndices;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) CGFloat timestamp;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasArrivedAtIntermediateWaypointInRoute:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedbackTypeAsString:(int)arg0 ;
-(id)hapticsTypeAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithRoute:(id)arg0 routeID:(id)arg1 ;
-(id)initWithRouteID:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsFeedbackType:(id)arg0 ;
-(int)StringAsHapticsType:(id)arg0 ;
-(unsigned int)effectiveStepIDInRoute:(id)arg0 ;
-(unsigned int)selectedRideIndexAtIndex:(NSUInteger)arg0 ;
-(void)_updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg0 ;
-(void)addSelectedRideIndex:(unsigned int)arg0 ;
-(void)clearSelectedRideIndexs;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg0 routeID:(id)arg1 ;
-(void)updateFeedbackWithNavigationState:(int)arg0 locationUnreliable:(BOOL)arg1 announcementStage:(NSUInteger)arg2 nextAnnouncementStage:(NSUInteger)arg3 nextAnnouncementTime:(CGFloat)arg4 ;
-(void)updateWithRoute:(id)arg0 routeID:(id)arg1 ;
-(void)writeTo:(id)arg0 ;


@end


#endif