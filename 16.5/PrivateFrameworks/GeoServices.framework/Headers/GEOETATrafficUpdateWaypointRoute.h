// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOETATRAFFICUPDATEWAYPOINTROUTE_H
#define GEOETATRAFFICUPDATEWAYPOINTROUTE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEONavigabilityInfo.h"
#import "GEOTrafficBannerText.h"
#import "GEOTraversalTimes.h"

@interface GEOETATrafficUpdateWaypointRoute : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_incidentsOnUserWaypointRoutes;
    GEONavigabilityInfo *_navigabilityInfo;
    NSMutableArray *_newWaypointRoutes;
    NSMutableArray *_routeLegs;
    GEOTrafficBannerText *_trafficBannerText;
    GEOTraversalTimes *_traversalTimes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _identifier;
    ? _flags;
}


@property (nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasNavigabilityInfo;
@property (readonly, nonatomic) BOOL hasTrafficBannerText;
@property (readonly, nonatomic) BOOL hasTraversalTimes;
@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NSMutableArray *incidentsOnUserWaypointRoutes;
@property (retain, nonatomic) GEONavigabilityInfo *navigabilityInfo;
@property (retain, nonatomic) NSMutableArray *newWaypointRoutes;
@property (retain, nonatomic) NSMutableArray *routeLegs;
@property (retain, nonatomic) GEOTrafficBannerText *trafficBannerText;
@property (retain, nonatomic) GEOTraversalTimes *traversalTimes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)incidentsOnUserWaypointRouteType;
+(Class)routeLegType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)incidentsOnUserWaypointRouteAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)newWaypointRoutesAtIndex:(NSUInteger)arg0 ;
-(id)routeLegAtIndex:(NSUInteger)arg0 ;
-(void)addIncidentsOnUserWaypointRoute:(id)arg0 ;
-(void)addNewWaypointRoutes:(id)arg0 ;
-(void)addRouteLeg:(id)arg0 ;
-(void)clearIncidentsOnUserWaypointRoutes;
-(void)clearNewWaypointRoutes;
-(void)clearRouteLegs;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif