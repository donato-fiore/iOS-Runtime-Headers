// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8MAPSSYNC37MAPSSYNCMUTABLEHISTORYMULTIPOINTROUTE_H
#define _TTC8MAPSSYNC37MAPSSYNCMUTABLEHISTORYMULTIPOINTROUTE_H

@class TtC8MapsSync26MapsSyncMutableHistoryItem, NSNumber, GEOStorageRouteRequestStorage, NSData, NSString;



@interface _TtC8MapsSync37MapsSyncMutableHistoryMultiPointRoute : TtC8MapsSync26MapsSyncMutableHistoryItem {
    ? _proxyHistory;
}


@property (nonatomic) BOOL navigationInterrupted;
@property (nonatomic, retain) NSNumber *requiredCharge;
@property (nonatomic) short routeProgressWaypointIndex;
@property (nonatomic, retain) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;
@property (nonatomic) short type;
@property (nonatomic, copy) NSString *vehicleIdentifier;


-(id)initWithProxyObject:(id)arg0 ;


@end


#endif