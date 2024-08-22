// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKLOCATIONHISTORYCACHE_H
#define _DKLOCATIONHISTORYCACHE_H

@class NSMutableArray, NSMutableSet, NSDate;

#import <Foundation/Foundation.h>


@interface _DKLocationHistoryCache : NSObject {
    NSMutableArray *_visits;
    NSMutableSet *_visitSet;
    CGFloat _earliestTime;
    CGFloat _latestTime;
    NSUInteger _index;
    BOOL _needsSorting;
}


@property (readonly) NSUInteger count;
@property (readonly) NSDate *newestExitDate;
@property (readonly) NSDate *oldestEntryDate;


-(id)init;
-(id)lookupLocationIdforDate:(id)arg0 ;
-(void)addVisitWithEntryDate:(id)arg0 exitDate:(id)arg1 locationId:(id)arg2 ;
-(void)clear;
-(void)clearOldest:(NSUInteger)arg0 ;
-(void)sortIfNecessary;


@end


#endif