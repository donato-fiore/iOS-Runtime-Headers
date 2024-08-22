// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSAMPLEAGGREGATECACHESTORE_H
#define HDSAMPLEAGGREGATECACHESTORE_H

@class NSString, NSDate, NSDateComponents, NSArray;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDSourceEntity.h"
#import "HDQueryDescriptor.h"

@interface HDSampleAggregateCacheStore : NSObject {
    HDProfile *_profile;
    NSString *_cachingIdentifier;
    HDSourceEntity *_sourceEntity;
    NSDate *_anchorDate;
    NSDate *_persistentAnchorDate;
    NSDateComponents *_intervalComponents;
}


@property (copy, nonatomic) NSArray *invalidationQueryDescriptors; // ivar: _invalidationQueryDescriptors
@property (readonly, copy, nonatomic) HDQueryDescriptor *queryDescriptor; // ivar: _queryDescriptor
@property (copy, nonatomic) id *timeIntervalToBucketIndex; // ivar: _timeIntervalToBucketIndex


-(BOOL)enumerateForInterval:(id)arg0 cachedClass:(Class)arg1 anchorAfterDatabaseScan:(*NSInteger)arg2 error:(*id)arg3 cacheHandler:(id)arg4 ;
-(BOOL)enumerateForInterval:(id)arg0 cachedClass:(Class)arg1 anchorAfterDatabaseScan:(*NSInteger)arg2 nowDate:(id)arg3 calendar:(id)arg4 error:(*id)arg5 cacheHandler:(id)arg6 ;
-(BOOL)saveCaches:(id)arg0 generationNumber:(NSInteger)arg1 error:(*id)arg2 ;
-(NSInteger)cachesExistWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 queryDescriptor:(id)arg1 cachingIdentifier:(id)arg2 sourceEntity:(id)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5 timeIntervalToBucketIndex:(id)arg6 ;
-(id)persistentAnchorDateWithError:(*id)arg0 ;


@end


#endif