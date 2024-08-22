// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8MAPSSYNC36MAPSSYNCMUTABLEHISTORYDIRECTIONSITEM_H
#define _TTC8MAPSSYNC36MAPSSYNCMUTABLEHISTORYDIRECTIONSITEM_H

@class TtC8MapsSync26MapsSyncMutableHistoryItem, GEOStorageRouteRequestStorage, NSData;



@interface _TtC8MapsSync36MapsSyncMutableHistoryDirectionsItem : TtC8MapsSync26MapsSyncMutableHistoryItem {
    ? _proxyHistory;
}


@property (nonatomic) BOOL navigationInterrupted;
@property (nonatomic, retain) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;


-(id)initWithProxyObject:(id)arg0 ;


@end


#endif