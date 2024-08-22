// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSYNCMANAGEDSHAREDTRIPBLOCKEDITEM_H
#define MAPSSYNCMANAGEDSHAREDTRIPBLOCKEDITEM_H

@class NSManagedObject, NSDate, NSUUID, NSString;



@interface MapsSyncManagedSharedTripBlockedItem : NSManagedObject

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) NSInteger expiryTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic, copy) NSString *sharedTripIdentifier;


+(Class)wrapperClass;
-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif