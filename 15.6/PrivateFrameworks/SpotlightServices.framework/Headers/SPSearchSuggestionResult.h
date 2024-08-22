// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPSEARCHSUGGESTIONRESULT_H
#define SPSEARCHSUGGESTIONRESULT_H

@class SpotlightExtras, NSString, NSArray, SFSearchSuggestion;



@interface SPSearchSuggestionResult : SpotlightExtras

@property (retain, nonatomic) NSString *query; // ivar: _query
@property (retain, nonatomic) NSArray *searchEntities; // ivar: _searchEntities
@property (retain, nonatomic) SFSearchSuggestion *suggestion; // ivar: _suggestion


+(BOOL)supportsSecureCoding;
+(id)_richDisplayTextForSuggestion:(id)arg0 forQuery:(id)arg1 ;
+(id)searchSuggestionRankingResultWithResult:(id)arg0 query:(id)arg1 sectionBundleIdentifier:(id)arg2 queryId:(NSUInteger)arg3 ;
+(id)searchSuggestionRankingResultWithSuggestion:(id)arg0 query:(id)arg1 sectionBundleIdentifier:(id)arg2 queryId:(NSUInteger)arg3 ;
+(void)updateRankingItemForSuggestionResult:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSearchResult:(id)arg0 query:(id)arg1 sectionBundleIdentifier:(id)arg2 queryId:(NSUInteger)arg3 ;
-(id)initWithSearchSuggestion:(id)arg0 query:(id)arg1 sectionBundleIdentifier:(id)arg2 queryId:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif