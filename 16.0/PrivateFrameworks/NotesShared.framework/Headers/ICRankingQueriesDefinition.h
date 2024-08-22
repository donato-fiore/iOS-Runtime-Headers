// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICRANKINGQUERIESDEFINITION_H
#define ICRANKINGQUERIESDEFINITION_H

@class NSArray, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface ICRankingQueriesDefinition : NSObject

@property (retain, nonatomic) NSArray *expandedTokens; // ivar: _expandedTokens
@property (retain, nonatomic) NSMutableDictionary *matchingDescriptorsCache; // ivar: _matchingDescriptorsCache
@property (readonly, nonatomic) NSArray *rankingQueries; // ivar: _rankingQueries
@property (readonly, nonatomic) NSArray *rankingQueryDescriptors; // ivar: _rankingQueryDescriptors
@property (retain, nonatomic) NSString *rankingQueryFlags; // ivar: _rankingQueryFlags
@property (nonatomic) NSInteger rankingQueryType; // ivar: _rankingQueryType


+(NSUInteger)bucketOfTimeInterval:(CGFloat)arg0 ;
+(NSUInteger)maxCountOfVariantsForCountOfTokens:(NSUInteger)arg0 ;
+(NSUInteger)modificationDateBucketForSearchableItem:(id)arg0 ;
+(NSUInteger)relevanceBitFieldForSearchableItem:(id)arg0 ;
-(CGFloat)rankingScoreForSearchableItem:(id)arg0 ;
-(id)highlightInfoForSearchableItem:(id)arg0 ;
-(id)initWithExpandedTokens:(id)arg0 rankingQueryType:(NSInteger)arg1 rankingQueryFlags:(id)arg2 ;
-(id)initWithSearchString:(id)arg0 rankingQueryType:(NSInteger)arg1 rankingQueryFlags:(id)arg2 ;
-(id)matchingDescriptorsForBitFields:(NSUInteger)arg0 ;
-(void)addDescriptor:(id)arg0 intoSearchResultHighlightInfoFieldElement:(id)arg1 ;


@end


#endif