// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPSEARCHSUGGESTION_H
#define SPSEARCHSUGGESTION_H

@class SFSearchSuggestion, NSString, NSDictionary, NSArray;



@interface SPSearchSuggestion : SFSearchSuggestion {
    NSString *_completion;
    NSString *_spotlightQuery;
    NSDictionary *_categories;
    NSDictionary *_terms;
}


@property CGFloat age; // ivar: _age
@property (retain) NSArray *bundleIDs; // ivar: _bundleIDs
@property int completionType; // ivar: _completionType
@property CGFloat compositeScore; // ivar: _compositeScore
@property float fieldWeight; // ivar: _fieldWeight
@property NSUInteger fragments; // ivar: _fragments
@property BOOL hasMultipleResults; // ivar: _hasMultipleResults
@property BOOL hasUsedDate; // ivar: _hasUsedDate
@property BOOL isShortcut; // ivar: _isShortcut
@property BOOL isSingleThread; // ivar: _isSingleThread
@property NSUInteger maxscore; // ivar: _maxscore
@property int parentWeight; // ivar: _parentWeight
@property CGFloat phraseScore; // ivar: _phraseScore
@property int prefixLen; // ivar: _prefixLen
@property CGFloat prob; // ivar: _prob
@property CGFloat punishment; // ivar: _punishment
@property NSUInteger queryCompletionCount; // ivar: _queryCompletionCount
@property NSUInteger queryFragmentCount; // ivar: _queryFragmentCount
@property NSUInteger queryLen; // ivar: _queryLen
@property int rootWeight; // ivar: _rootWeight
@property (readonly, nonatomic) NSArray *searchEntities;
@property int weight; // ivar: _weight


+(id)suggestionsWithData:(id)arg0 queryString:(id)arg1 ;
+(id)suggestionsWithNLPData:(id)arg0 queryString:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithNLPData:(id)arg0 queryString:(id)arg1 ;
-(id)initWithSuggestion:(id)arg0 query:(id)arg1 scores:(id)arg2 bundleIDs:(id)arg3 ;
-(id)suggestionsFeedbackData;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif