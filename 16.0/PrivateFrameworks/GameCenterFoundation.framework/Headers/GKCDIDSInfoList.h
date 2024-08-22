// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCDIDSINFOLIST_H
#define GKCDIDSINFOLIST_H

@class NSManagedObject, NSSet, NSNumber, NSDate;



@interface GKCDIDSInfoList : NSManagedObject

@property (retain, nonatomic) NSSet *entries;
@property (copy, nonatomic) NSNumber *updateIntervalHandlesCount;
@property (copy, nonatomic) NSDate *updateIntervalStartTimeStamp;


+(id)fetchRequest;


@end


#endif