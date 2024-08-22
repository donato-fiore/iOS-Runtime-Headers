// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSYNCMANAGEDFAVORITEITEM_H
#define MAPSSYNCMANAGEDFAVORITEITEM_H

@class NSManagedObject, NSSet, NSDate, NSString, NSUUID, NSNumber;


#import "MapsSyncManagedMixinMapItem.h"

@interface MapsSyncManagedFavoriteItem : NSManagedObject

@property (nonatomic, retain) NSSet *contactHandles;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSString *customName;
@property (nonatomic) BOOL hidden;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) MapsSyncManagedMixinMapItem *mapItem;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, copy) NSString *originatingAddressString;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic, copy) NSString *shortcutIdentifier;
@property (nonatomic) short source;
@property (nonatomic) short type;
@property (nonatomic) short version;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif