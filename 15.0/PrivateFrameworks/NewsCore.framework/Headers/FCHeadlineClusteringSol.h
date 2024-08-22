// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCHEADLINECLUSTERINGSOL_H
#define FCHEADLINECLUSTERINGSOL_H

@class NSSet, NSDictionary, NSMutableArray, NSMutableSet, NSString;
@protocol FCHeadlineClustering;

#import <Foundation/Foundation.h>

#import "FCHeadlineClusteringRules.h"
#import "FCSolHeuristic.h"

@interface FCHeadlineClusteringSol : NSObject <FCHeadlineClustering>

 {
    FCHeadlineClusteringRules *_rules;
    NSSet *_articleIds;
    NSDictionary *_articlesByTag;
    NSDictionary *_tagsByArticle;
    NSDictionary *_tagScores;
    NSDictionary *_headlinesById;
    NSSet *_hardOrphans;
    FCSolHeuristic *_heuristic;
    FCSolHeuristic *_autoFavoriteHeuristic;
    NSMutableArray *_articleGroups;
    NSMutableSet *_groupableTags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)clusterHeadlinesByTopic:(id)arg0 subscribedTags:(id)arg1 favoritesPersonalizer:(id)arg2 personalizer:(id)arg3 rules:(id)arg4 translationProvider:(id)arg5 unpaidHeadlineIDs:(id)arg6 ;


@end


#endif