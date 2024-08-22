// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSTEPFEEDBACK_H
#define GEOSTEPFEEDBACK_H

@class PBCodable, PBDataReader, NSData;
@protocol NSCopying;


#import "GEOEVStepFeedbackInfo.h"

@interface GEOStepFeedback : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    CGFloat _completionTimeStamp;
    NSData *_etaTrafficUpdateResponseId;
    GEOEVStepFeedbackInfo *_evStepInfo;
    NSData *_routeID;
    CGFloat _stepEndPathPointOffset;
    NSData *_stepZilch;
    NSData *_tripID;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _expectedTime;
    int _maneuverType;
    unsigned int _routeIndex;
    unsigned int _stepID;
    int _stepEndPathPointIndex;
    unsigned int _waypointRouteID;
    BOOL _completedStep;
    BOOL _lightGuidance;
    BOOL _routePaused;
    BOOL _routeResumed;
    ? _flags;
}


@property (nonatomic) BOOL completedStep;
@property (nonatomic) CGFloat completionTimeStamp;
@property (retain, nonatomic) NSData *etaTrafficUpdateResponseId;
@property (retain, nonatomic) GEOEVStepFeedbackInfo *evStepInfo;
@property (nonatomic) unsigned int expectedTime;
@property (nonatomic) BOOL hasCompletedStep;
@property (nonatomic) BOOL hasCompletionTimeStamp;
@property (readonly, nonatomic) BOOL hasEtaTrafficUpdateResponseId;
@property (readonly, nonatomic) BOOL hasEvStepInfo;
@property (nonatomic) BOOL hasExpectedTime;
@property (nonatomic) BOOL hasLightGuidance;
@property (nonatomic) BOOL hasManeuverType;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (nonatomic) BOOL hasRouteIndex;
@property (nonatomic) BOOL hasRoutePaused;
@property (nonatomic) BOOL hasRouteResumed;
@property (nonatomic) BOOL hasStepEndPathPointIndex;
@property (nonatomic) BOOL hasStepEndPathPointOffset;
@property (nonatomic) BOOL hasStepID;
@property (readonly, nonatomic) BOOL hasStepZilch;
@property (readonly, nonatomic) BOOL hasTripID;
@property (nonatomic) BOOL hasWaypointRouteID;
@property (nonatomic) BOOL lightGuidance;
@property (nonatomic) int maneuverType;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) unsigned int routeIndex;
@property (nonatomic) BOOL routePaused;
@property (nonatomic) BOOL routeResumed;
@property (nonatomic) int stepEndPathPointIndex;
@property (nonatomic) CGFloat stepEndPathPointOffset;
@property (nonatomic) unsigned int stepID;
@property (retain, nonatomic) NSData *stepZilch;
@property (retain, nonatomic) NSData *tripID;
@property (nonatomic) unsigned int waypointRouteID;


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
-(id)maneuverTypeAsString:(int)arg0 ;
-(int)StringAsManeuverType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif