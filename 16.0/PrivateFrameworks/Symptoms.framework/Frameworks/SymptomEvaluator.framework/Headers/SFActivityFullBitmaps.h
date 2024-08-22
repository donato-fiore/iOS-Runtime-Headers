// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFACTIVITYFULLBITMAPS_H
#define SFACTIVITYFULLBITMAPS_H

@class NSMutableDictionary;


#import "SFActivityBitmaps.h"

@interface SFActivityFullBitmaps : SFActivityBitmaps

@property (retain) NSMutableDictionary *flows; // ivar: _flows


-(NSUInteger)getHammingWeightForFlowId:(NSUInteger)arg0 ;
-(NSUInteger)getLongestContiguousHammingWeightForFlowId:(NSUInteger)arg0 ;
-(id)getAllFlowIds;
-(id)init;
-(void)addActivityWithFlowId:(NSUInteger)arg0 startTime:(NSUInteger)arg1 part1:(NSUInteger)arg2 part2:(NSUInteger)arg3 ;
-(void)freeUpBufferSpace;
-(void)resetAllActivities;


@end


#endif