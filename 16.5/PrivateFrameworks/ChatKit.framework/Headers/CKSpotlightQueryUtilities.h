// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSPOTLIGHTQUERYUTILITIES_H
#define CKSPOTLIGHTQUERYUTILITIES_H


#import <Foundation/Foundation.h>


@interface CKSpotlightQueryUtilities : NSObject



+(NSUInteger)countOfNonSpaceCharsInSearchString:(id)arg0 ;
+(id)annotatedResultStringWithSearchText:(id)arg0 resultText:(id)arg1 primaryTextColor:(id)arg2 primaryFont:(id)arg3 annotatedTextColor:(id)arg4 annotatedFont:(id)arg5 ;
+(id)defaultSearchControllers;
+(id)detailsSearchControllers;
+(id)matchedRankingQueriesForResult:(id)arg0 withRankingQueryCount:(NSUInteger)arg1 maxRankingQuery:(*NSUInteger)arg2 ;
+(id)queryStringByOringSubqueries:(id)arg0 ;
+(id)queryStringForSearchString:(id)arg0 attributes:(id)arg1 matchType:(NSUInteger)arg2 ;
+(id)rankingQueriesForSearchString:(id)arg0 attributes:(id)arg1 ;
+(id)rankingQueryForField:(id)arg0 matchType:(NSUInteger)arg1 searchString:(id)arg2 ;
+(id)stringByEscapingSearchString:(id)arg0 ;


@end


#endif