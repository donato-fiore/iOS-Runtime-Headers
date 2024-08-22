// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCSOLARTICLEGROUP_H
#define FCSOLARTICLEGROUP_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "FCHeadlineClusteringRules.h"
#import "FCSolTagID.h"

@interface FCSolArticleGroup : NSObject

@property (retain, nonatomic) NSMutableSet *articles; // ivar: _articles
@property (nonatomic) CGFloat heuristicScore; // ivar: _heuristicScore
@property (readonly, nonatomic) NSMutableSet *orphans; // ivar: _orphans
@property (nonatomic) CGFloat personalizationScore; // ivar: _personalizationScore
@property (retain, nonatomic) FCHeadlineClusteringRules *rules; // ivar: _rules
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (retain, nonatomic) FCSolTagID *tagId; // ivar: _tagId
@property (readonly, nonatomic) NSMutableSet *topArticles; // ivar: _topArticles


+(id)formBestOfGroup:(id)arg0 clusteringRules:(id)arg1 topicDiversityThreshold:(CGFloat)arg2 topicDiversityWindowSize:(NSInteger)arg3 allowUnfilteredArticles:(BOOL)arg4 ;
+(id)formGroup:(id)arg0 withMinClusterSize:(NSInteger)arg1 maxClusterSize:(NSInteger)arg2 maxPublisherOccurrences:(NSInteger)arg3 maxUnpaidArticles:(NSInteger)arg4 maxEvergreenArticles:(NSInteger)arg5 enforcePublisherCap:(BOOL)arg6 ;
+(id)predictBestGroup:(id)arg0 ungroupedArticles:(id)arg1 ungroupedTags:(id)arg2 articlesByTag:(id)arg3 heuristic:(id)arg4 autoFavoriteHeuristic:(id)arg5 ;
-(id)initWithTagId:(id)arg0 personalizationScore:(CGFloat)arg1 articles:(id)arg2 rules:(id)arg3 ;
-(void)computeTopArticlesAndScore;
-(void)intersectArticles:(id)arg0 ;


@end


#endif