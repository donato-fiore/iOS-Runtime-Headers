// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDINTERACTIONCACHE_H
#define _CDINTERACTIONCACHE_H

@class NSArray, NSMutableOrderedSet, NSPredicate;

#import <Foundation/Foundation.h>

#import "_CDInteractionStore.h"

@interface _CDInteractionCache : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) id *filterBlock; // ivar: _filterBlock
@property (readonly, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore
@property (readonly, copy, nonatomic) NSArray *interactions;
@property (readonly, nonatomic) NSMutableOrderedSet *mutableInteractions; // ivar: _mutableInteractions
@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, nonatomic) NSUInteger size; // ivar: _size


-(id)initWithInteractionStore:(id)arg0 size:(NSUInteger)arg1 queryPredicate:(id)arg2 filterBlock:(id)arg3 ;
-(void)_cacheInteractions:(id)arg0 ;
-(void)_refetch;
-(void)interactionsRecorded:(id)arg0 ;
-(void)refetch;


@end


#endif