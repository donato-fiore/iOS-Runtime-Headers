// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSYNCMANAGEDMIXINMAPITEM_H
#define MAPSSYNCMANAGEDMIXINMAPITEM_H

@class NSManagedObject, NSData;


#import "MapsSyncManagedCollectionPlaceItem.h"
#import "MapsSyncManagedFavoriteItem.h"
#import "MapsSyncManagedHistoryPlaceItem.h"

@interface MapsSyncManagedMixinMapItem : NSManagedObject

@property (nonatomic, retain) MapsSyncManagedCollectionPlaceItem *collectionPlaceItem;
@property (nonatomic, retain) MapsSyncManagedFavoriteItem *favoriteItem;
@property (nonatomic, retain) MapsSyncManagedHistoryPlaceItem *historyPlaceItem;
@property (nonatomic) CGFloat latitude;
@property (nonatomic) CGFloat longitude;
@property (nonatomic, copy) NSData *mapItemStorage;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif