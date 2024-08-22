// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSYNCMANAGEDCOLLECTIONPLACEITEM_H
#define MAPSSYNCMANAGEDCOLLECTIONPLACEITEM_H

@class NSString, NSData, NSNumber;


#import "MapsSyncManagedCollectionItem.h"
#import "MapsSyncManagedMixinMapItem.h"

@interface MapsSyncManagedCollectionPlaceItem : MapsSyncManagedCollectionItem

@property (nonatomic, copy) NSString *customName;
@property (nonatomic, copy) NSData *droppedPinCoordinate;
@property (nonatomic) int droppedPinFloorOrdinal;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) MapsSyncManagedMixinMapItem *mapItem;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic) short origin;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif