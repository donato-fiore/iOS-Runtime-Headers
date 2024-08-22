// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8MAPSSYNC35MAPSSYNCMUTABLEHISTORYRIDESHAREITEM_H
#define _TTC8MAPSSYNC35MAPSSYNCMUTABLEHISTORYRIDESHAREITEM_H

@class TtC8MapsSync26MapsSyncMutableHistoryItem, GEOComposedWaypoint;



@interface _TtC8MapsSync35MapsSyncMutableHistoryRideShareItem : TtC8MapsSync26MapsSyncMutableHistoryItem {
    ? _proxyHistory;
}


@property (nonatomic, retain) GEOComposedWaypoint *endWaypoint;
@property (nonatomic, retain) GEOComposedWaypoint *startWaypoint;


-(id)initWithProxyObject:(id)arg0 ;


@end


#endif