// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSYNCMANAGEDCOMMUNITYID_H
#define MAPSSYNCMANAGEDCOMMUNITYID_H

@class NSManagedObject, NSString, NSDate, NSUUID, NSSet;



@interface MapsSyncManagedCommunityID : NSManagedObject

@property (nonatomic, copy) NSString *communityIdentifier;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) BOOL expired;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic, retain) NSSet *rapRecords;
@property (nonatomic, retain) NSSet *reviewedPlaces;
@property (nonatomic) NSInteger usedCount;


+(Class)wrapperClass;
-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif