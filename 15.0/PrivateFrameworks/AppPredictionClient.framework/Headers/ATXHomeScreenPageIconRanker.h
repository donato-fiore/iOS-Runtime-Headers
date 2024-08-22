// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXHOMESCREENPAGEICONRANKER_H
#define ATXHOMESCREENPAGEICONRANKER_H


#import <Foundation/Foundation.h>

#import "ATXHomeScreenConfigCache.h"

@interface ATXHomeScreenPageIconRanker : NSObject {
    ATXHomeScreenConfigCache *_cache;
}




-(id)_pageForPageIndex:(NSUInteger)arg0 ;
-(id)iconIndexesInAscendingOrderOfHistoricalUsageForPageIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCache:(id)arg0 ;


@end


#endif