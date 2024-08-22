// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSCOLLECTIONPLACEITEM_H
#define MSCOLLECTIONPLACEITEM_H

@class NSString, NSData, NSNumber, GEOMapItemStorage;


#import "MSCollectionItem.h"

@interface MSCollectionPlaceItem : MSCollectionItem {
    ? _customName;
    ? _droppedPinCoordinate;
    ? _droppedPinFloorOrdinal;
    ? _latitude;
    ? _longitude;
    ? _muid;
    ? _origin;
    ? _mapItemStorage;
}


@property (nonatomic, copy) NSString *customName;
@property (nonatomic, copy) NSData *droppedPinCoordinate;
@property (nonatomic) int droppedPinFloorOrdinal;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic) short origin;


+(Class)managedClass;
+(id)optionsWith:(id)arg0 ;
+(id)strippedMapItemWith:(id)arg0 ;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 customName:(id)arg1 droppedPinCoordinate:(id)arg2 droppedPinFloorOrdinal:(int)arg3 latitude:(id)arg4 longitude:(id)arg5 muid:(id)arg6 origin:(short)arg7 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif