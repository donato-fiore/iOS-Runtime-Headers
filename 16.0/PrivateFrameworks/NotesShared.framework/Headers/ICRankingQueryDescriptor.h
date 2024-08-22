// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICRANKINGQUERYDESCRIPTOR_H
#define ICRANKINGQUERYDESCRIPTOR_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICRankingQueryDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger displayedMatchedFields; // ivar: _displayedMatchedFields
@property (readonly, nonatomic) NSArray *expandedTokens; // ivar: _expandedTokens
@property (readonly, nonatomic) NSUInteger purpose; // ivar: _purpose
@property (readonly, nonatomic) NSArray *queryFields; // ivar: _queryFields
@property (retain, nonatomic) NSString *rankingQuery; // ivar: _rankingQuery
@property (readonly, nonatomic) NSString *rankingQueryFlags; // ivar: _rankingQueryFlags
@property (readonly, nonatomic) NSInteger rankingQueryType; // ivar: _rankingQueryType
@property (readonly, nonatomic) NSArray *tokens;


-(CGFloat)rankingScoreForSearchResultType:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithQueryFields:(id)arg0 expandedTokens:(id)arg1 rankingQueryType:(NSInteger)arg2 rankingQueryFlags:(id)arg3 displayedMatchedFields:(NSUInteger)arg4 purpose:(NSUInteger)arg5 ;
-(id)initWithQueryFields:(id)arg0 expandedTokens:(id)arg1 rankingQueryType:(NSInteger)arg2 rankingQueryFlags:(id)arg3 purpose:(NSUInteger)arg4 ;
-(id)rankingQueryForQueryField:(id)arg0 tokenString:(id)arg1 ;


@end


#endif