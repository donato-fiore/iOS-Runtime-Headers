// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDAPPUSAGESTORE_H
#define ASDAPPUSAGESTORE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ASDAppUsageStats.h"

@interface ASDAppUsageStore : NSObject

@property (readonly, nonatomic) ASDAppUsageStats *leastUsageCount; // ivar: _leastUsageCount
@property (readonly, nonatomic) ASDAppUsageStats *leastUsageTime; // ivar: _leastUsageTime
@property (readonly, nonatomic) ASDAppUsageStats *topUsageCount; // ivar: _topUsageCount
@property (readonly, nonatomic) ASDAppUsageStats *topUsageTime; // ivar: _topUsageTime
@property (readonly, nonatomic) NSArray *usageStats; // ivar: _usageStats
@property (nonatomic) BOOL verbose; // ivar: _verbose


+(id)allUsageForStreams:(NSUInteger)arg0 fromDate:(id)arg1 endDate:(id)arg2 error:(*id)arg3 ;
-(id)_calcluateUsageFromDate:(id)arg0 endDate:(id)arg1 bundleIDs:(id)arg2 includeExtensionUsage:(BOOL)arg3 ;
-(id)_calculateRawUsageFromDate:(id)arg0 endDate:(id)arg1 stats:(id)arg2 streams:(NSUInteger)arg3 ;
-(id)_calculateUsageFromDate:(id)arg0 endDate:(id)arg1 stats:(id)arg2 includeExtensionUsage:(BOOL)arg3 ;
-(id)_sortDescriptors;
-(id)calcluateUsageFromDate:(id)arg0 endDate:(id)arg1 appMetadata:(id)arg2 streams:(NSUInteger)arg3 ;
-(id)calcluateUsageFromDate:(id)arg0 endDate:(id)arg1 bundleIDs:(id)arg2 ;
-(id)initWithDurationInDays:(CGFloat)arg0 bundleIDs:(id)arg1 ;
-(id)initWithDurationInDays:(CGFloat)arg0 bundleIDs:(id)arg1 includeExtensionUsage:(BOOL)arg2 ;
-(void)_calculateUsageForDurationInDays:(CGFloat)arg0 bundleIDs:(id)arg1 includeExtensionUsage:(BOOL)arg2 ;


@end


#endif