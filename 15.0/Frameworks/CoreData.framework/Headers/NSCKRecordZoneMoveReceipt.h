// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCKRECORDZONEMOVERECEIPT_H
#define NSCKRECORDZONEMOVERECEIPT_H

@class NSDate, NSString;


#import "NSManagedObject.h"
#import "NSCKRecordMetadata.h"

@interface NSCKRecordZoneMoveReceipt : NSManagedObject

@property (retain, nonatomic) NSDate *movedAt;
@property (nonatomic) BOOL needsCloudDelete;
@property (retain, nonatomic) NSString *ownerName;
@property (retain, nonatomic) NSCKRecordMetadata *recordMetadata;
@property (retain, nonatomic) NSString *recordName;
@property (retain, nonatomic) NSString *zoneName;


+(id)countMoveReceiptsInStore:(id)arg0 matchingPredicate:(id)arg1 withManagedObjectContext:(id)arg2 error:(*id)arg3 ;
+(id)entityPath;
+(id)moveReceiptsMatchingRecordIDs:(id)arg0 inManagedObjectContext:(id)arg1 persistentStore:(id)arg2 error:(*id)arg3 ;
-(id)createRecordIDForMovedRecord;


@end


#endif