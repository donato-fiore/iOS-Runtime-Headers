// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSIGROUPAGGREGATE_H
#define PSIGROUPAGGREGATE_H

@class NSMutableArray, NSArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PSIGroup.h"

@interface PSIGroupAggregate : NSObject {
    NSMutableArray *_groupAggregateItems;
    NSMutableArray *_aggregatedGroupIds;
    NSMutableArray *_aggregateItemPool;
    NSUInteger _filenameGroupCount;
    NSObject<OS_dispatch_queue> *_groupResultsQueue;
}


@property (readonly, nonatomic) PSIGroup *filenameGroupInAggregate; // ivar: _filenameGroupInAggregate
@property (readonly, nonatomic) NSArray *searchTokens; // ivar: _searchTokens
@property (copy, nonatomic) NSString *transientToken; // ivar: _transientToken


-(BOOL)_verifySortedGroupIdsUnique;
-(BOOL)pushGroup:(id)arg0 ;
-(id)aggregateItemWithSearchToken:(id)arg0 rangeMatchingToken:(id)arg1 group:(id)arg2 ;
-(id)initWithSearchTokens:(id)arg0 groupResultsQueue:(id)arg1 ;
-(id)newGroupResult;
-(id)newGroupResultWithDateFilter:(id)arg0 datedTokens:(id)arg1 ;
-(struct _NSRange )_rangeOfString:(id)arg0 inGroup:(id)arg1 useNormalizedString:(BOOL)arg2 extendingSearchRange:(BOOL)arg3 matchingFullToken:(BOOL)arg4 excludingRanges:(id)arg5 ;
-(struct __CFArray *)_newSortedGroupIds;
-(void)pop;


@end


#endif