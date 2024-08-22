// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCONTEXTUALACTIONCOUNTCACHE_H
#define ATXCONTEXTUALACTIONCOUNTCACHE_H

@class NSCountedSet, NSDateInterval, NSDate;

#import <Foundation/Foundation.h>


@interface ATXContextualActionCountCache : NSObject {
    NSCountedSet *headingToWorkActions;
    NSCountedSet *headingHomeActions;
    NSCountedSet *unspecifiedActions;
    NSCountedSet *allActions;
    NSDateInterval *headingToWorkDateInterval;
    NSDateInterval *headingHomeDateInterval;
    NSDateInterval *otherDateInterval;
}


@property (readonly, nonatomic) NSDate *oldestAction; // ivar: _oldestAction


-(BOOL)isHeadingHomeActionTime:(id)arg0 ;
-(BOOL)isHeadingToWorkActionTime:(id)arg0 ;
-(BOOL)isOtherActionTime:(id)arg0 ;
-(id)getAllCounts;
-(id)getCountsForContext:(id)arg0 ;
-(id)init;
-(void)addMinimalActionParameter:(id)arg0 ;


@end


#endif