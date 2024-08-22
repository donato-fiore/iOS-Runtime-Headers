// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSEARCHQUERY_H
#define CHSEARCHQUERY_H

@class NSArray, NSString;


#import "CHQuery.h"

@interface CHSearchQuery : CHQuery

@property (copy, nonatomic, setter=_setFoundItems:) NSArray *foundItems; // ivar: _foundItems
@property (copy, nonatomic) NSString *queryString; // ivar: _queryString


-(BOOL)_findMatchingTokenPathInResult:(id)arg0 initialTokenLocation:(struct ? )arg1 queryString:(id)arg2 fromIndex:(NSInteger)arg3 coveredStrokeIndexes:(id)arg4 reverseMatchedTokens:(*id)arg5 ;
-(BOOL)_isMatchSeparatorBeforeToken:(id)arg0 atLocation:(struct ? )arg1 inResult:(id)arg2 queryString:(id)arg3 fromIndex:(NSInteger)arg4 matchedLength:(*NSInteger)arg5 ;
-(BOOL)_isMatchStringForToken:(id)arg0 queryString:(id)arg1 fromIndex:(NSInteger)arg2 requirePrefixMatch:(BOOL)arg3 matchedLength:(*NSInteger)arg4 ;
-(id)debugName;
-(id)initWithRecognitionSession:(id)arg0 ;
-(id)q_foundItemsForSearchString:(id)arg0 sessionResult:(id)arg1 ;
-(void)_enumerateMatchesForStrokeGroupResult:(id)arg0 locales:(id)arg1 queryString:(id)arg2 usingBlock:(id)arg3 ;
-(void)dealloc;
-(void)q_updateQueryResult;
-(void)stop;


@end


#endif