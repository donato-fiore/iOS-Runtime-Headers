// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPOSEDWAYPOINT_H
#define GEOCOMPOSEDWAYPOINT_H

@class PBCodable, PBDataReader, NSData;
@protocol NSCopying;


#import "GEOLatLng.h"
#import "GEOMapItemStorage.h"
#import "GEOWaypointTyped.h"

@interface GEOComposedWaypoint : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOLatLng *_latLng;
    GEOMapItemStorage *_mapItemStorage;
    NSData *_styleAttributesData;
    NSData *_uniqueWaypointID;
    GEOWaypointTyped *_waypoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasLatLng;
@property (readonly, nonatomic) BOOL hasMapItemStorage;
@property (readonly, nonatomic) BOOL hasStyleAttributesData;
@property (readonly, nonatomic) BOOL hasUniqueWaypointID;
@property (readonly, nonatomic) BOOL hasWaypoint;
@property (retain, nonatomic) GEOLatLng *latLng;
@property (retain, nonatomic) GEOMapItemStorage *mapItemStorage;
@property (retain, nonatomic) NSData *styleAttributesData;
@property (retain, nonatomic) NSData *uniqueWaypointID;
@property (retain, nonatomic) GEOWaypointTyped *waypoint;


+(BOOL)isValid:(id)arg0 ;
// +(id)composedWaypointForAddressString:(id)arg0 traits:(id)arg1 clientAttributes:(id)arg2 completionHandler:(id)arg3 networkActivityHandler:(unk)arg4  ;
// +(id)composedWaypointForCurrentLocation:(id)arg0 traits:(id)arg1 auditToken:(id)arg2 completionHandler:(id)arg3 networkActivityHandler:(unk)arg4  ;
// +(id)composedWaypointForCurrentLocation:(id)arg0 traits:(id)arg1 completionHandler:(id)arg2 networkActivityHandler:(unk)arg3  ;
// +(id)composedWaypointForID:(NSUInteger)arg0 resultsProviderID:(int)arg1 contentProvider:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 completionHandler:(id)arg5 networkActivityHandler:(unk)arg6  ;
// +(id)composedWaypointForIdentifier:(id)arg0 traits:(id)arg1 clientAttributes:(id)arg2 completionHandler:(id)arg3 networkActivityHandler:(unk)arg4  ;
// +(id)composedWaypointForIncompleteMapItem:(id)arg0 traits:(id)arg1 clientAttributes:(id)arg2 completionHandler:(id)arg3 networkActivityHandler:(unk)arg4  ;
// +(id)composedWaypointForLocation:(id)arg0 mapItem:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 completionHandler:(id)arg4 networkActivityHandler:(unk)arg5  ;
// +(id)composedWaypointForLocation:(id)arg0 mapItem:(id)arg1 traits:(id)arg2 completionHandler:(id)arg3 networkActivityHandler:(unk)arg4  ;
// +(id)composedWaypointForMapItem:(id)arg0 traits:(id)arg1 auditToken:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id)arg4 networkActivityHandler:(unk)arg5  ;
// +(id)composedWaypointForMapItem:(id)arg0 traits:(id)arg1 clientAttributes:(id)arg2 completionHandler:(id)arg3 networkActivityHandler:(unk)arg4  ;
// +(id)composedWaypointForMapItemToRefine:(id)arg0 traits:(id)arg1 auditToken:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id)arg4 networkActivityHandler:(unk)arg5  ;
// +(id)composedWaypointForMapItemToRefine:(id)arg0 traits:(id)arg1 clientAttributes:(id)arg2 completionHandler:(id)arg3 networkActivityHandler:(unk)arg4  ;
// +(id)composedWaypointForSearchString:(id)arg0 completionItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 clientResolvedCompletionHandler:(id)arg4 completionHandler:(unk)arg5 networkActivityHandler:(id)arg6  ;
// +(id)composedWaypointForSearchString:(id)arg0 completionItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(id)arg4 networkActivityHandler:(unk)arg5  ;
// +(id)composedWaypointForTransitID:(NSUInteger)arg0 coordinate:(struct ? )arg1 isCurrentLocation:(BOOL)arg2 traits:(id)arg3 clientAttributes:(id)arg4 completionHandler:(id)arg5 networkActivityHandler:(unk)arg6  ;
// +(id)composedWaypointForWaypointTyped:(id)arg0 completionHandler:(id)arg1 networkActivityHandler:(unk)arg2  ;
+(void)composedWaypointForMapServiceResponse:(id)arg0 clientAttributes:(id)arg1 error:(id)arg2 handler:(id)arg3 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isCurrentLocation;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLocationWaypointType;
-(BOOL)isSameAs:(id)arg0 ;
-(BOOL)isSameAs:(id)arg0 comparisonCriteria:(NSUInteger)arg1 ;
-(BOOL)isServerProvidedWaypoint;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)muid;
-(id)_addressCandidatesForComparison;
-(id)_locationCandidatesForComparison;
-(id)_muidCandidatesForComparison;
-(id)_regionCandidatesForContainment;
-(id)artwork;
-(id)bestLatLng;
-(id)chargingInfo;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)geoMapItem;
-(id)init;
-(id)initWithCompanionWaypoint:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithLocation:(id)arg0 isCurrentLocation:(BOOL)arg1 ;
-(id)initWithMapItem:(id)arg0 ;
-(id)jsonRepresentation;
-(id)name;
-(id)styleAttributes;
-(id)timezone;
-(id)uniqueID;
-(struct ? )coordinate;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)setIsCurrentLocation:(BOOL)arg0 ;
-(void)setStyleAttributes:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif