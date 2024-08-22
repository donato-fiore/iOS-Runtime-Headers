// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8MAPSSYNC34MAPSSYNCMUTABLECOLLECTIONPLACEITEM_H
#define _TTC8MAPSSYNC34MAPSSYNCMUTABLECOLLECTIONPLACEITEM_H

@class TtC8MapsSync29MapsSyncMutableCollectionItem, NSString, GEOLatLng, GEOMapItemStorage;



@interface _TtC8MapsSync34MapsSyncMutableCollectionPlaceItem : TtC8MapsSync29MapsSyncMutableCollectionItem {
    ? _proxyCollectionPlaceItem;
}


@property (nonatomic, copy) NSString *customName;
@property (nonatomic, retain) GEOLatLng *droppedPinCoordinate;
@property (nonatomic) int droppedPinFloorOrdinal;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic) short origin;


-(id)initWithProxyObject:(id)arg0 ;


@end


#endif