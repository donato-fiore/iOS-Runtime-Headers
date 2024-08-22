// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8MAPSSYNC24MAPSSYNCHISTORYPLACEITEM_H
#define _TTC8MAPSSYNC24MAPSSYNCHISTORYPLACEITEM_H

@class TtC8MapsSync19MapsSyncHistoryItem, NSString, NSNumber, GEOMapItemStorage, NSUUID;



@interface _TtC8MapsSync24MapsSyncHistoryPlaceItem : TtC8MapsSync19MapsSyncHistoryItem {
    ? _mapItemStorage;
    ? _supersededSearchId;
    ? _latitude;
    ? _longitude;
    ? _muid;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSNumber *latitude;
@property (nonatomic, readonly) NSNumber *longitude;
@property (nonatomic, readonly) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, readonly) NSNumber *muid;
@property (nonatomic, readonly) NSUUID *supersededSearchId;


+(void)fetchNearbyPlacesWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 callbackQueue:(id)arg2 completion:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif