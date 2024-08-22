// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCYCLERITERATIONCOUNTER_H
#define WBSCYCLERITERATIONCOUNTER_H


#import <Foundation/Foundation.h>


@interface WBSCyclerIterationCounter : NSObject

@property (readonly, nonatomic) BOOL hasReachedMaximumIterationCount;
@property (readonly, nonatomic) NSUInteger iterationCount; // ivar: _iterationCount
@property (readonly, nonatomic) NSUInteger maximumIterationCount; // ivar: _maximumIterationCount


-(id)init;
-(id)initWithMaximumIterationCount:(NSUInteger)arg0 ;
-(void)incrementIterationCount;


@end


#endif