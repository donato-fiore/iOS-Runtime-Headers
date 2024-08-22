// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STUSAGECATEGORY_H
#define STUSAGECATEGORY_H

@class NSManagedObject, NSString, NSSet;


#import "STUsageBlock.h"

@interface STUsageCategory : NSManagedObject

@property (retain, nonatomic) STUsageBlock *block;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSSet *timedItems;
@property (nonatomic) NSInteger totalTimeInSeconds;


+(id)applicationAndWebItemsExcludingSystemHiddenApplications:(id)arg0 ;
+(id)categoryItemsExcludingSystemCategories:(id)arg0 ;


@end


#endif