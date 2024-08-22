// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOROUTEINCIDENT_H
#define GEOROUTEINCIDENT_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOPBTransitArtwork.h"
#import "GEOLatLng.h"
#import "GEORestrictionInfo.h"

@interface GEORouteIncident : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_artwork;
    NSString *_crossStreet;
    NSInteger _endTime;
    NSString *_incidentId;
    NSString *_info;
    GEOLatLng *_position;
    GEORestrictionInfo *_restrictionInfo;
    NSInteger _startTime;
    NSString *_street;
    NSInteger _updateTime;
    NSMutableArray *_userReportIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _delaySeconds;
    unsigned int _laneClosureCount;
    int _laneClosureType;
    int _significance;
    int _type;
    unsigned int _userReportsCount;
    BOOL _endTimeReliable;
    BOOL _shouldDisplayOnMap;
    ? _flags;
}


@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (retain, nonatomic) NSString *crossStreet;
@property (nonatomic) unsigned int delaySeconds;
@property (nonatomic) NSInteger endTime;
@property (nonatomic) BOOL endTimeReliable;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (readonly, nonatomic) BOOL hasCrossStreet;
@property (nonatomic) BOOL hasDelaySeconds;
@property (nonatomic) BOOL hasEndTime;
@property (nonatomic) BOOL hasEndTimeReliable;
@property (readonly, nonatomic) BOOL hasIncidentId;
@property (readonly, nonatomic) BOOL hasInfo;
@property (nonatomic) BOOL hasLaneClosureCount;
@property (nonatomic) BOOL hasLaneClosureType;
@property (readonly, nonatomic) BOOL hasPosition;
@property (readonly, nonatomic) BOOL hasRestrictionInfo;
@property (nonatomic) BOOL hasShouldDisplayOnMap;
@property (nonatomic) BOOL hasSignificance;
@property (nonatomic) BOOL hasStartTime;
@property (readonly, nonatomic) BOOL hasStreet;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasUpdateTime;
@property (nonatomic) BOOL hasUserReportsCount;
@property (retain, nonatomic) NSString *incidentId;
@property (retain, nonatomic) NSString *info;
@property (nonatomic) unsigned int laneClosureCount;
@property (nonatomic) int laneClosureType;
@property (retain, nonatomic) GEOLatLng *position;
@property (retain, nonatomic) GEORestrictionInfo *restrictionInfo;
@property (nonatomic) BOOL shouldDisplayOnMap;
@property (nonatomic) int significance;
@property (nonatomic) NSInteger startTime;
@property (retain, nonatomic) NSString *street;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) NSInteger updateTime;
@property (retain, nonatomic) NSMutableArray *userReportIds;
@property (nonatomic) unsigned int userReportsCount;


+(BOOL)isValid:(id)arg0 ;
+(Class)userReportIdType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
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
-(id)laneClosureTypeAsString:(int)arg0 ;
-(id)significanceAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(id)userReportIdAtIndex:(NSUInteger)arg0 ;
-(int)StringAsLaneClosureType:(id)arg0 ;
-(int)StringAsSignificance:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addUserReportId:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearUserReportIds;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif