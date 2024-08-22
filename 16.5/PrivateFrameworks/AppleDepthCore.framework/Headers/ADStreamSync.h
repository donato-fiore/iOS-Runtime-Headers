// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADSTREAMSYNC_H
#define ADSTREAMSYNC_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ADStreamSync : NSObject {
    NSMutableArray *_streamsHistory;
    *NSUInteger _historySizes;
    *NSUInteger _aggregationCounts;
    *CGFloat _allowedAggregationIntervals;
    *CGFloat _matchedTimestampsArray;
    CGFloat _allowedMatchTimeInterval;
}




-(BOOL)areOldestMatchingObjectsInAllowedInterval:(NSUInteger)arg0 ;
-(BOOL)checkOnceForMatch:(*id)arg0 ;
-(BOOL)streamContainsMinimalFrameCount:(NSUInteger)arg0 ;
-(CGFloat)oldestAverageTimestampForStream:(NSUInteger)arg0 ;
-(NSInteger)reset;
-(NSInteger)setStream:(NSUInteger)arg0 queueSize:(NSUInteger)arg1 ;
-(NSInteger)setStream:(NSUInteger)arg0 queueSize:(NSUInteger)arg1 aggregationCount:(NSUInteger)arg2 allowedAggregationInterval:(CGFloat)arg3 ;
-(id)checkForMatch;
-(id)createAndPopulateMatch;
-(id)initWithStreamCount:(NSUInteger)arg0 allowedMatchTimeInterval:(CGFloat)arg1 ;
-(id)pushData:(id)arg0 streamIndex:(NSUInteger)arg1 timestamp:(CGFloat)arg2 pose:(struct ? )arg3 ;
-(id)pushData:(id)arg0 streamIndex:(NSUInteger)arg1 timestamp:(CGFloat)arg2 pose:(struct ? )arg3 meta:(id)arg4 ;
-(void)dealloc;
-(void)dropOldFramesFromStream:(NSUInteger)arg0 belowTimestampThreshold:(CGFloat)arg1 ;


@end


#endif