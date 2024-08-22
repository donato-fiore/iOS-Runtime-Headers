// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOGUIDANCEEVENT_H
#define GEOGUIDANCEEVENT_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOARGuidance.h"
#import "GEOGuidanceImportanceMode.h"
#import "GEOJunctionView.h"
#import "GEOVisualLaneGuidance.h"
#import "GEOSignGuidance.h"
#import "GEOSpokenGuidance.h"

@interface GEOGuidanceEvent : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOARGuidance *_arGuidance;
    GEOGuidanceImportanceMode *_importanceInfo;
    GEOJunctionView *_junctionView;
    GEOVisualLaneGuidance *_laneGuidance;
    CGFloat _maxSpeed;
    CGFloat _minSpeed;
    GEOSignGuidance *_signGuidance;
    GEOSpokenGuidance *_spokenGuidance;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _displayDistanceEndpointOffsetCm;
    int _distanceZilchIndex;
    unsigned int _endValidDistanceOffsetCm;
    int _endValidDistance;
    unsigned int _enrouteNoticeIndex;
    int _eventType;
    unsigned int _identifier;
    int _offsetForDistanceString;
    unsigned int _startValidDistanceOffsetCm;
    int _startValidDistance;
    unsigned int _zilchPathIndex;
    BOOL _preserveEventInUpdates;
    BOOL _sticky;
    ? _flags;
}


@property (retain, nonatomic) GEOARGuidance *arGuidance;
@property (nonatomic) unsigned int displayDistanceEndpointOffsetCm;
@property (nonatomic) int distanceZilchIndex;
@property (nonatomic) int endValidDistance;
@property (nonatomic) unsigned int endValidDistanceOffsetCm;
@property (nonatomic) unsigned int enrouteNoticeIndex;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) BOOL hasArGuidance;
@property (nonatomic) BOOL hasDisplayDistanceEndpointOffsetCm;
@property (nonatomic) BOOL hasDistanceZilchIndex;
@property (nonatomic) BOOL hasEndValidDistance;
@property (nonatomic) BOOL hasEndValidDistanceOffsetCm;
@property (nonatomic) BOOL hasEnrouteNoticeIndex;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasImportanceInfo;
@property (readonly, nonatomic) BOOL hasJunctionView;
@property (readonly, nonatomic) BOOL hasLaneGuidance;
@property (nonatomic) BOOL hasMaxSpeed;
@property (nonatomic) BOOL hasMinSpeed;
@property (nonatomic) BOOL hasOffsetForDistanceString;
@property (nonatomic) BOOL hasPreserveEventInUpdates;
@property (readonly, nonatomic) BOOL hasSignGuidance;
@property (readonly, nonatomic) BOOL hasSpokenGuidance;
@property (nonatomic) BOOL hasStartValidDistance;
@property (nonatomic) BOOL hasStartValidDistanceOffsetCm;
@property (nonatomic) BOOL hasSticky;
@property (nonatomic) BOOL hasZilchPathIndex;
@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) GEOGuidanceImportanceMode *importanceInfo;
@property (retain, nonatomic) GEOJunctionView *junctionView;
@property (retain, nonatomic) GEOVisualLaneGuidance *laneGuidance;
@property (nonatomic) CGFloat maxSpeed;
@property (nonatomic) CGFloat minSpeed;
@property (nonatomic) int offsetForDistanceString;
@property (nonatomic) BOOL preserveEventInUpdates;
@property (retain, nonatomic) GEOSignGuidance *signGuidance;
@property (retain, nonatomic) GEOSpokenGuidance *spokenGuidance;
@property (nonatomic) int startValidDistance;
@property (nonatomic) unsigned int startValidDistanceOffsetCm;
@property (nonatomic) BOOL sticky;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int zilchPathIndex;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTypeAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsEventType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif