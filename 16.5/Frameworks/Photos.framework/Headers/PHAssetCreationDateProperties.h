// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASSETCREATIONDATEPROPERTIES_H
#define PHASSETCREATIONDATEPROPERTIES_H

@class NSDate;


#import "PHBatchFetchedAssetPropertySet.h"

@interface PHAssetCreationDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *creationDate;


+(BOOL)useNoIndexSelf;
+(BOOL)useObjectFetchingContext;
+(NSInteger)batchSize;
+(NSInteger)cacheSize;
+(id)propertiesToFetch;
+(id)propertiesToSortBy;


@end


#endif