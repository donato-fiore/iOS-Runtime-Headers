// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSHISTORYPLACEITEM_H
#define MSHISTORYPLACEITEM_H

@class NSNumber, GEOMapItemStorage, NSUUID;


#import "MSHistoryItem.h"

@interface MSHistoryPlaceItem : MSHistoryItem {
    ? _latitude;
    ? _longitude;
    ? _muid;
    ? _supersededSearchId;
    ? _mapItemStorage;
}


@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, copy) NSUUID *supersededSearchId;


+(Class)managedClass;
+(id)strippedMapItemWith:(id)arg0 ;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 latitude:(id)arg1 longitude:(id)arg2 muid:(id)arg3 supersededSearchId:(id)arg4 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif