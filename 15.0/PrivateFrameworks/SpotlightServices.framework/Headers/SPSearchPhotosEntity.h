// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPSEARCHPHOTOSENTITY_H
#define SPSEARCHPHOTOSENTITY_H

@class NSString, NSDictionary;


#import "SPSearchEntity.h"

@interface SPSearchPhotosEntity : SPSearchEntity {
    NSString *_searchString;
    NSString *_queryString;
    NSString *_spotlightQueryString;
    NSDictionary *_rankCategories;
    NSDictionary *_rankTerms;
    BOOL _isNLP;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isNLPEntitySearch;
-(BOOL)isPhotosEntitySearch;
-(BOOL)isScopedSearch;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPhotosSearchString:(id)arg0 spotlightQueryString:(id)arg1 rankCategories:(id)arg2 rankTerms:(id)arg3 isNLQuery:(BOOL)arg4 includeSyndicatedPhotos:(BOOL)arg5 fromSuggestion:(BOOL)arg6 ;
-(id)queryString;
-(id)searchString;
-(id)spotlightFilterQueries;
-(id)spotlightQueryString;
-(id)symbolName;
-(id)tokenText;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateSearchString:(id)arg0 ;


@end


#endif