// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCDIDSINFOLIST_H
#define GKCDIDSINFOLIST_H

@class NSManagedObject, NSNumber, NSDate;



@interface GKCDIDSInfoList : NSManagedObject

@property (copy, nonatomic) NSNumber *updateIntervalHandlesCount;
@property (copy, nonatomic) NSDate *updateIntervalStartTimeStamp;


+(id)fetchRequest;


@end


#endif