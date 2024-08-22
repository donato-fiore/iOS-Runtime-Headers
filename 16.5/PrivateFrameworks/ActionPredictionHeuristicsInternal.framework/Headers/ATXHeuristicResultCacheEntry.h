// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHEURISTICRESULTCACHEENTRY_H
#define ATXHEURISTICRESULTCACHEENTRY_H

@class NSString, NSArray, NSSet;

#import <Foundation/Foundation.h>

#import "ATXHeuristicResultCache.h"

@interface ATXHeuristicResultCacheEntry : NSObject {
    NSString *_heuristicName;
    ATXHeuristicResultCache *_cache;
    NSArray *_actions;
    NSSet *_expirers;
}




-(id)initWithHeuristic:(id)arg0 cache:(id)arg1 ;
-(void)dealloc;
-(void)setActions:(id)arg0 expirers:(id)arg1 ;


@end


#endif