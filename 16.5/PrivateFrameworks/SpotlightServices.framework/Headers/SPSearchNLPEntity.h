// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPSEARCHNLPENTITY_H
#define SPSEARCHNLPENTITY_H

@class NSString, NSDictionary;


#import "SPSearchEntity.h"

@interface SPSearchNLPEntity : SPSearchEntity {
    NSString *_searchString;
    NSString *_queryString;
    NSString *_spotlightQueryString;
    NSDictionary *_rankCategories;
    NSDictionary *_rankTerms;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isNLPEntitySearch;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSearchString:(id)arg0 spotlightQueryString:(id)arg1 spotlightRankCategories:(id)arg2 spotlightRankTerms:(id)arg3 fromSuggestion:(BOOL)arg4 ;
-(id)queryString;
-(id)searchString;
-(id)spotlightQueryString;
-(id)spotlightRankCategories;
-(id)spotlightRankTerms;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateSearchString:(id)arg0 ;


@end


#endif