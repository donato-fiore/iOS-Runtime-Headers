// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCACHEAPPROXIMATELRUMAXIMUMCOUNTPOLICY_H
#define PFCACHEAPPROXIMATELRUMAXIMUMCOUNTPOLICY_H

@protocol OS_dispatch_queue;


#import "PFCachePolicy.h"

@interface PFCacheApproximateLRUMaximumCountPolicy : PFCachePolicy {
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _maximumCount;
    unsigned int _seed;
    NSUInteger _tick;
    NSUInteger _tickMaximum;
    NSUInteger _considerationCount;
    *id _considerationKeys;
}




+(id)policyWithMaximumCount:(NSUInteger)arg0 ;
-(NSUInteger)capacityHint;
-(id)cacheEntryWithKey:(id)arg0 value:(id)arg1 ;
-(id)description;
-(id)initWithMaximumCount:(NSUInteger)arg0 ;
-(id)willAddOrReplaceEntry:(id)arg0 add:(BOOL)arg1 contents:(id)arg2 ;
-(void)_rebuildConsiderationKeys:(id)arg0 ;
-(void)dealloc;
-(void)didAddCacheEntry:(id)arg0 ;
-(void)didGetCacheEntry:(id)arg0 ;
-(void)didRemoveAllCacheEntries;
-(void)didRemoveCacheEntry:(id)arg0 ;


@end


#endif