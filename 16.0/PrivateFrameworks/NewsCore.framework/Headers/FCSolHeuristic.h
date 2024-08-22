// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCSOLHEURISTIC_H
#define FCSOLHEURISTIC_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface FCSolHeuristic : NSObject {
    BOOL _alternate;
    BOOL _enforcePublisherCap;
    NSArray *_groupSizes;
    NSInteger _iterations;
    NSInteger _maxPublisherOccurrences;
    NSInteger _maxUnpaidArticles;
    NSInteger _maxEvergreenArticles;
    NSInteger _heuristicSampleSize;
    id *_utilityBlock;
}




-(CGFloat)computeScoreWithSelectedGroup:(id)arg0 remainingArticles:(id)arg1 remainingTags:(id)arg2 articlesByTag:(id)arg3 ;
-(id)initWithOption:(NSInteger)arg0 minClusterSize:(NSInteger)arg1 maxClusterSize:(NSInteger)arg2 minIdealClusterSize:(NSInteger)arg3 maxIdealClusterSize:(NSInteger)arg4 maxPublisherOccurrences:(NSInteger)arg5 enforcePublisherCap:(BOOL)arg6 maxUnpaidArticles:(NSInteger)arg7 maxEvergreenArticles:(NSInteger)arg8 heuristicSampleSize:(NSInteger)arg9 utilityBlock:(id)arg10 ;


@end


#endif