// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8MAPSSYNC30MAPSSYNCHISTORYMULTIPOINTROUTE_H
#define _TTC8MAPSSYNC30MAPSSYNCHISTORYMULTIPOINTROUTE_H

@class TtC8MapsSync19MapsSyncHistoryItem, NSString, NSNumber, GEOStorageRouteRequestStorage, NSData;



@interface _TtC8MapsSync30MapsSyncHistoryMultiPointRoute : TtC8MapsSync19MapsSyncHistoryItem {
    ? _navigationInterrupted;
    ? _routeProgressWaypointIndex;
    ? _routeRequestStorage;
    ? _sharedETAData;
    ? _requiredCharge;
    ? _type;
    ? _vehicleIdentifier;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL navigationInterrupted;
@property (nonatomic, readonly) NSNumber *requiredCharge;
@property (nonatomic, readonly) short routeProgressWaypointIndex;
@property (nonatomic, readonly) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, readonly) NSData *sharedETAData;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly) NSString *vehicleIdentifier;


-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif