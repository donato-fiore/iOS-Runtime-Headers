// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHEURISTICCACHEEXPIRATIONENTRY_H
#define ATXHEURISTICCACHEEXPIRATIONENTRY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ATXHeuristicResultCache.h"

@interface ATXHeuristicCacheExpirationEntry : NSObject

@property (weak, nonatomic) ATXHeuristicResultCache *cache; // ivar: _cache
@property (retain, nonatomic) NSString *heuristicName; // ivar: _heuristicName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithHeuristic:(id)arg0 cache:(id)arg1 ;


@end


#endif