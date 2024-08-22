// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMRSTOPWATCH_H
#define PMRSTOPWATCH_H

@class NSMutableArray, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface PMRStopwatch : NSObject {
    NSMutableArray *_splitTimeStack;
}


@property NSUInteger coreAnimationTotalTime; // ivar: _coreAnimationTotalTime
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) NSUInteger maxSplitTimes; // ivar: _maxSplitTimes
@property (readonly, nonatomic) NSArray *splitTimes; // ivar: _splitTimes
@property (nonatomic) NSUInteger startTime; // ivar: _startTime


+(id)sharedStopwatch;
// +(void)benchmarkBlockWithTitle:(id)arg0 iterations:(NSUInteger)arg1 usingBlock:(id)arg2 onCompletion:(unk)arg3  ;
+(void)setSharedStopwatch:(id)arg0 ;
-(id)_subtreeDescription;
-(id)description;
-(id)descriptionWithFormat:(int)arg0 key:(id)arg1 comment:(id)arg2 ;
-(id)formattedUserInfoForSplitTime:(id)arg0 ;
-(id)init;
-(id)initWithDomain:(id)arg0 ;
-(void)_purgeOldestSplitTimeIfNeeded;
-(void)addSplit:(id)arg0 ;
-(void)beginTimingGroupForMethod:(SEL)arg0 inClass:(Class)arg1 comment:(id)arg2 ;
// -(void)benchmarkBlockWithTitle:(id)arg0 iterations:(NSUInteger)arg1 currentIteration:(NSUInteger)arg2 usingBlock:(id)arg3 onCompletion:(unk)arg4  ;
-(void)dealloc;
-(void)endTimingGroup;
-(void)logEvent:(id)arg0 comment:(id)arg1 ;
-(void)logEvent:(id)arg0 comment:(id)arg1 userInfo:(id)arg2 ;
-(void)logToLocation:(id)arg0 key:(id)arg1 ;
-(void)logWithFormat:(int)arg0 ;
-(void)reset;
-(void)writeToFile:(id)arg0 key:(id)arg1 comment:(id)arg2 fileFormat:(int)arg3 ;


@end


#endif