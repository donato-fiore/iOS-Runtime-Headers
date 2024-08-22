// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLTHREADSTATS_H
#define PLTHREADSTATS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PLThreadStats : NSObject

@property CGFloat absoluteTimeFilter; // ivar: _absoluteTimeFilter
@property (retain) NSDictionary *currentSnapshot; // ivar: _currentSnapshot
@property NSUInteger percentTimeFilter; // ivar: _percentTimeFilter
@property (retain) NSDictionary *processThreadMap; // ivar: _processThreadMap


+(id)getThreadName:(NSUInteger)arg0 inProcess:(int)arg1 isNamed:(*BOOL)arg2 ;
-(BOOL)shouldGatherStatsForProcessName:(id)arg0 ;
-(BOOL)shouldIncludeThread:(id)arg0 withTotalSystemTime:(CGFloat)arg1 withTotalUserTime:(CGFloat)arg2 ;
-(id)diffSinceLastSnapshot;
-(id)diffSnapshotWithNew:(id)arg0 andOld:(id)arg1 ;
-(id)filterDiff:(id)arg0 ;
-(id)initWithTimeFilter:(CGFloat)arg0 withPercentFilter:(NSUInteger)arg1 withProcessThreadMapping:(id)arg2 withError:(*id)arg3 ;


@end


#endif