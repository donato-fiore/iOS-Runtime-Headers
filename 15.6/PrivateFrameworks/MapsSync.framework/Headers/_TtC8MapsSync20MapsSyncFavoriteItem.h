// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8MAPSSYNC20MAPSSYNCFAVORITEITEM_H
#define _TTC8MAPSSYNC20MAPSSYNCFAVORITEITEM_H

@class TtC8MapsSync16MapsSyncBaseItem, NSSet, NSString, NSNumber, GEOMapItemStorage;



@interface _TtC8MapsSync20MapsSyncFavoriteItem : TtC8MapsSync16MapsSyncBaseItem {
    ? _contactHandles;
    ? _customName;
    ? _hidden;
    ? _mapItemStorage;
    ? _originatingAddressString;
    ? _type;
    ? _source;
    ? _shortcutIdentifier;
    ? _version;
    ? _latitude;
    ? _longitude;
    ? _muid;
}


@property (nonatomic, readonly) NSSet *contactHandles;
@property (nonatomic, readonly) NSString *customName;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL hidden;
@property (nonatomic, readonly) NSNumber *latitude;
@property (nonatomic, readonly) NSNumber *longitude;
@property (nonatomic, readonly) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, readonly) NSNumber *muid;
@property (nonatomic, readonly) NSString *originatingAddressString;
@property (nonatomic, readonly) NSString *shortcutIdentifier;
@property (nonatomic, readonly) short source;
@property (nonatomic, readonly) short type;
@property (nonatomic, readonly) short version;


+(id)fetchFavoriteItemForIdentifier:(id)arg0 ;
+(id)fetchFavoriteItemForShortcutIdentifier:(id)arg0 ;
+(void)fetch:(NSInteger)arg0 sort:(NSInteger)arg3 ascending:(BOOL)arg4 completion:(id)arg5 ;
+(void)fetchNearbyPlacesWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 callbackQueue:(id)arg2 completion:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif