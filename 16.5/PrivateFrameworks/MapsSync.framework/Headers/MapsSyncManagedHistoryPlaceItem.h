// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSYNCMANAGEDHISTORYPLACEITEM_H
#define MAPSSYNCMANAGEDHISTORYPLACEITEM_H

@class NSNumber, NSUUID;


#import "MapsSyncManagedHistoryItem.h"
#import "MapsSyncManagedMixinMapItem.h"

@interface MapsSyncManagedHistoryPlaceItem : MapsSyncManagedHistoryItem

@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) MapsSyncManagedMixinMapItem *mapItem;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, copy) NSUUID *supersededSearchId;


+(Class)wrapperClass;
-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif