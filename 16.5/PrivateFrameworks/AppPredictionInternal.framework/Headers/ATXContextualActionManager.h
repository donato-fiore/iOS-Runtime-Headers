// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCONTEXTUALACTIONMANAGER_H
#define ATXCONTEXTUALACTIONMANAGER_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "ATXContextualActionCountCache.h"

@interface ATXContextualActionManager : NSObject {
    ATXContextualActionCountCache *actionCountCache;
    NSDate *actionCountCacheCreationDate;
}




-(CGFloat)getIntervalSinceOldestEvent;
-(id)getAllCounts;
-(id)getCountsForContext:(id)arg0 ;
-(id)init;
-(id)initWithStaticActions:(id)arg0 ;
-(void)_getActionsFromLastMonth;
-(void)_updateCacheIfNeeded;


@end


#endif