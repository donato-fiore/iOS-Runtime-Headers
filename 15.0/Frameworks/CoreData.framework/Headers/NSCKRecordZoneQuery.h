// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCKRECORDZONEQUERY_H
#define NSCKRECORDZONEQUERY_H

@class NSDate, NSPredicate, CKQueryCursor, NSString;


#import "NSManagedObject.h"
#import "NSCKRecordZoneMetadata.h"

@interface NSCKRecordZoneQuery : NSManagedObject

@property (retain, nonatomic) NSDate *lastFetchDate;
@property (retain, nonatomic) NSDate *mostRecentRecordModificationDate;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) CKQueryCursor *queryCursor;
@property (retain, nonatomic) NSString *recordType;
@property (retain, nonatomic) NSCKRecordZoneMetadata *recordZone;


+(id)entityPath;


@end


#endif