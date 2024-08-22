// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8MAPSSYNC31MAPSSYNCMUTABLEHISTORYPLACEITEM_H
#define _TTC8MAPSSYNC31MAPSSYNCMUTABLEHISTORYPLACEITEM_H

@class TtC8MapsSync26MapsSyncMutableHistoryItem, GEOMapItemStorage, NSUUID;



@interface _TtC8MapsSync31MapsSyncMutableHistoryPlaceItem : TtC8MapsSync26MapsSyncMutableHistoryItem {
    ? _proxyHistory;
}


@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, copy) NSUUID *supersededSearchId;


-(id)initWithProxyObject:(id)arg0 ;


@end


#endif