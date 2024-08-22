// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOGUIDANCEEVENTFEEDBACK_H
#define GEOGUIDANCEEVENTFEEDBACK_H

@class PBCodable, PBDataReader, NSData;
@protocol NSCopying;


#import "GEOJunctionViewGuidanceFeedback.h"
#import "GEOSignGuidanceFeedback.h"
#import "GEOSpokenGuidanceFeedback.h"
#import "GEOTrafficCameraInformation.h"

@interface GEOGuidanceEventFeedback : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOJunctionViewGuidanceFeedback *_junctionViewGuidanceFeedback;
    NSData *_routeID;
    GEOSignGuidanceFeedback *_signGuidanceFeedback;
    GEOSpokenGuidanceFeedback *_spokenGuidanceFeedback;
    GEOTrafficCameraInformation *_trafficCameraGuidanceFeedback;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    float _distanceToManeuver;
    float _duration;
    unsigned int _enrouteNoticeIndex;
    unsigned int _eventIndex;
    unsigned int _stepID;
    float _timeToManeuver;
    int _trafficSpeed;
    float _vehicleSpeed;
    ? _flags;
}


@property (nonatomic) float distanceToManeuver;
@property (nonatomic) float duration;
@property (nonatomic) unsigned int enrouteNoticeIndex;
@property (nonatomic) unsigned int eventIndex;
@property (nonatomic) BOOL hasDistanceToManeuver;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEnrouteNoticeIndex;
@property (nonatomic) BOOL hasEventIndex;
@property (readonly, nonatomic) BOOL hasJunctionViewGuidanceFeedback;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (readonly, nonatomic) BOOL hasSignGuidanceFeedback;
@property (readonly, nonatomic) BOOL hasSpokenGuidanceFeedback;
@property (nonatomic) BOOL hasStepID;
@property (nonatomic) BOOL hasTimeToManeuver;
@property (readonly, nonatomic) BOOL hasTrafficCameraGuidanceFeedback;
@property (nonatomic) BOOL hasTrafficSpeed;
@property (nonatomic) BOOL hasVehicleSpeed;
@property (retain, nonatomic) GEOJunctionViewGuidanceFeedback *junctionViewGuidanceFeedback;
@property (retain, nonatomic) NSData *routeID;
@property (retain, nonatomic) GEOSignGuidanceFeedback *signGuidanceFeedback;
@property (retain, nonatomic) GEOSpokenGuidanceFeedback *spokenGuidanceFeedback;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) float timeToManeuver;
@property (retain, nonatomic) GEOTrafficCameraInformation *trafficCameraGuidanceFeedback;
@property (nonatomic) int trafficSpeed;
@property (nonatomic) float vehicleSpeed;


+(BOOL)isValid:(id)arg0 ;
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
-(id)trafficSpeedAsString:(int)arg0 ;
-(int)StringAsTrafficSpeed:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif