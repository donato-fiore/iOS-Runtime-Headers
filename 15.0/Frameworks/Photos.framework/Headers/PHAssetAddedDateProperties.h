// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASSETADDEDDATEPROPERTIES_H
#define PHASSETADDEDDATEPROPERTIES_H

@class NSDate;


#import "PHBatchFetchedAssetPropertySet.h"

@interface PHAssetAddedDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *addedDate;


+(BOOL)useNoIndexSelf;
+(BOOL)useObjectFetchingContext;
+(NSInteger)batchSize;
+(NSInteger)cacheSize;
+(id)propertiesToFetch;
+(id)propertiesToSortBy;


@end


#endif