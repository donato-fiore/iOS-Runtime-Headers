// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8MAPSSYNC27MAPSSYNCCOLLECTIONPLACEITEM_H
#define _TTC8MAPSSYNC27MAPSSYNCCOLLECTIONPLACEITEM_H

@class TtC8MapsSync22MapsSyncCollectionItem, NSString, GEOLatLng, NSNumber, GEOMapItemStorage;



@interface _TtC8MapsSync27MapsSyncCollectionPlaceItem : TtC8MapsSync22MapsSyncCollectionItem {
    ? _customName;
    ? _droppedPinCoordinate;
    ? _droppedPinFloorOrdinal;
    ? _mapItemStorage;
    ? _origin;
    ? _latitude;
    ? _longitude;
    ? _muid;
}


@property (nonatomic, readonly) NSString *customName;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) GEOLatLng *droppedPinCoordinate;
@property (nonatomic, readonly) int droppedPinFloorOrdinal;
@property (nonatomic, readonly) NSNumber *latitude;
@property (nonatomic, readonly) NSNumber *longitude;
@property (nonatomic, readonly) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, readonly) NSNumber *muid;
@property (nonatomic, readonly) short origin;


+(void)fetchNearbyPlacesWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 callbackQueue:(id)arg2 completion:(id)arg3 ;
-(BOOL)isDuplicateOfOther:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)copyWithZone:(*void)arg0 ;
-(id)initWithCollection:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif