// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPDIRECTIONSFEEDBACKCONTEXT_H
#define GEORPDIRECTIONSFEEDBACKCONTEXT_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEORPUserSearchInput.h"

@interface GEORPDirectionsFeedbackContext : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    NSMutableArray *_directionsWaypointPlaceInfos;
    GEORPUserSearchInput *_endWaypoint;
    GEORPUserSearchInput *_startWaypoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *directionsRequests;
@property (retain, nonatomic) NSMutableArray *directionsResponses;
@property (retain, nonatomic) NSMutableArray *directionsWaypointPlaceInfos;
@property (retain, nonatomic) GEORPUserSearchInput *endWaypoint;
@property (readonly, nonatomic) BOOL hasEndWaypoint;
@property (readonly, nonatomic) BOOL hasStartWaypoint;
@property (retain, nonatomic) GEORPUserSearchInput *startWaypoint;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)directionsRequestType;
+(Class)directionsResponseType;
+(Class)directionsWaypointPlaceInfoType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
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
-(void)addDirectionsRequest:(id)arg0 ;
-(void)addDirectionsResponse:(id)arg0 ;
-(void)addDirectionsWaypointPlaceInfo:(id)arg0 ;
-(void)clearDirectionsRequests;
-(void)clearDirectionsResponses;
-(void)clearDirectionsWaypointPlaceInfos;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif