// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STUSAGEBLOCK_H
#define STUSAGEBLOCK_H

@class NSManagedObject, NSSet, NSDate;


#import "STUsage.h"

@interface STUsageBlock : NSManagedObject

@property (retain, nonatomic) NSSet *categories;
@property (retain, nonatomic) NSSet *countedItems;
@property (nonatomic) NSInteger durationInMinutes;
@property (retain, nonatomic) NSDate *firstPickupDate;
@property (retain, nonatomic) NSDate *lastEventDate;
@property (retain, nonatomic) NSDate *longestSessionEndDate;
@property (retain, nonatomic) NSDate *longestSessionStartDate;
@property (nonatomic) NSInteger numberOfPickupsWithoutApplicationUsage;
@property (nonatomic) NSInteger screenTimeInSeconds;
@property (copy, nonatomic) NSDate *startDate;
@property (retain, nonatomic) STUsage *usage;


+(CGFloat)totalScreenTimeForUsageBlocks:(id)arg0 ;
+(NSInteger)totalNotificationsForUsageBlocks:(id)arg0 ;
+(NSInteger)totalPickupsForUsageBlocks:(id)arg0 ;
+(id)fetchRequestMatchingUsage:(id)arg0 dateInterval:(id)arg1 ;
+(id)usageCategoriesForUsageBlocks:(id)arg0 ;
+(id)usageCountedItemsForUsageBlocks:(id)arg0 ;


@end


#endif