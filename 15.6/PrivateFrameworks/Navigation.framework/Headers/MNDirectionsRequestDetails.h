// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNDIRECTIONSREQUESTDETAILS_H
#define MNDIRECTIONSREQUESTDETAILS_H

@class PBCodable, GEOCommonOptions, GEOMapRegion, GEOLocation, GEOComposedWaypoint, GEODirectionsRequestFeedback, GEORouteAttributes, NSString;
@protocol NSCopying;



@interface MNDirectionsRequestDetails : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) GEOCommonOptions *commonOptions; // ivar: _commonOptions
@property (retain, nonatomic) GEOMapRegion *currentMapRegion; // ivar: _currentMapRegion
@property (retain, nonatomic) GEOLocation *currentUserLocation; // ivar: _currentUserLocation
@property (retain, nonatomic) GEOComposedWaypoint *destination; // ivar: _destination
@property (retain, nonatomic) GEODirectionsRequestFeedback *directionsRequestFeedback; // ivar: _directionsRequestFeedback
@property (readonly, nonatomic) BOOL hasCommonOptions;
@property (readonly, nonatomic) BOOL hasCurrentMapRegion;
@property (readonly, nonatomic) BOOL hasCurrentUserLocation;
@property (readonly, nonatomic) BOOL hasDestination;
@property (readonly, nonatomic) BOOL hasDirectionsRequestFeedback;
@property (nonatomic) BOOL hasMaxRouteCount;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (readonly, nonatomic) BOOL hasRouteAttributes;
@property (readonly, nonatomic) BOOL hasTracePath;
@property (nonatomic) unsigned int maxRouteCount; // ivar: _maxRouteCount
@property (retain, nonatomic) GEOComposedWaypoint *origin; // ivar: _origin
@property (retain, nonatomic) GEORouteAttributes *routeAttributes; // ivar: _routeAttributes
@property (retain, nonatomic) NSString *tracePath; // ivar: _tracePath


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif