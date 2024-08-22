// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCACHELRUMAXIMUMCOUNTPOLICY_H
#define PFCACHELRUMAXIMUMCOUNTPOLICY_H

@class NSMutableSet, NSMutableArray;
@protocol OS_dispatch_queue;


#import "PFCachePolicy.h"

@interface PFCacheLRUMaximumCountPolicy : PFCachePolicy {
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _maximumCount;
    NSMutableSet *_considerationSet;
    NSMutableArray *_orderedConsiderationList;
}




+(id)policyWithMaximumCount:(NSUInteger)arg0 ;
-(NSUInteger)capacityHint;
-(id)_keyToEvict:(id)arg0 ;
-(id)description;
-(id)initWithMaximumCount:(NSUInteger)arg0 ;
-(id)willAddOrReplaceEntry:(id)arg0 add:(BOOL)arg1 contents:(id)arg2 ;
-(void)_buildConsiderationSet:(id)arg0 ;
-(void)didAddCacheEntry:(id)arg0 ;
-(void)didGetCacheEntry:(id)arg0 ;
-(void)didRemoveAllCacheEntries;
-(void)didRemoveCacheEntry:(id)arg0 ;


@end


#endif