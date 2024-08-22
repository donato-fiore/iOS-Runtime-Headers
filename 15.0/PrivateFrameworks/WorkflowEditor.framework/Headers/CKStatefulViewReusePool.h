// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSTATEFULVIEWREUSEPOOL_H
#define CKSTATEFULVIEWREUSEPOOL_H


#import <Foundation/Foundation.h>


@interface CKStatefulViewReusePool : NSObject {
    unordered_map<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem, PoolKeyHasher, std::equal_to<std::pair<__unsafe_unretained Class, id>>, std::allocator<std::pair<const std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>>> _pool;
    unordered_map<std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem, PoolKeyHasher, std::equal_to<std::pair<__unsafe_unretained Class, id>>, std::allocator<std::pair<const std::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>>> _pendingPool;
    BOOL _enqueuedPendingPurge;
}


@property (nonatomic) BOOL pendingReusePoolEnabled; // ivar: _pendingReusePoolEnabled


+(id)sharedPool;
-(id)dequeueStatefulViewForControllerClass:(Class)arg0 preferredSuperview:(id)arg1 context:(id)arg2 ;
-(void)enqueueStatefulView:(id)arg0 forControllerClass:(Class)arg1 context:(id)arg2 mayRelinquishBlock:(id)arg3 ;
-(void)purgePendingPool;


@end


#endif