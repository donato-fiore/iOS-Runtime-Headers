// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPSEARCHENTITY_H
#define SPSEARCHENTITY_H

@class SFCommand, NSArray, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPSearchEntity : NSObject <NSSecureCoding>



@property (readonly, nonatomic) SFCommand *command;
@property BOOL hasWords; // ivar: _hasWords
@property BOOL includeSyndicatedPhotos; // ivar: _includeSyndicatedPhotos
@property (readonly) BOOL isAppEntitySearch;
@property (readonly) BOOL isCommandEntitySearch;
@property (readonly) BOOL isContactEntitySearch;
@property (readonly) BOOL isNLPEntitySearch;
@property (readonly) BOOL isPhotosEntitySearch;
@property (readonly) BOOL isScopedSearch;
@property BOOL isSuggestion; // ivar: _isSuggestion
@property (copy, nonatomic) NSArray *preferredBundleIDs; // ivar: _preferredBundleIDs
@property (readonly, nonatomic) NSString *queryString;
@property (readonly, nonatomic) NSString *searchString;
@property (copy, nonatomic) NSArray *spotlightFilterQueries; // ivar: _spotlightFilterQueries
@property (readonly, nonatomic) NSString *spotlightQueryString;
@property (readonly, nonatomic) NSDictionary *spotlightRankCategories;
@property (readonly, nonatomic) NSDictionary *spotlightRankTerms;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSString *tokenText;


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)searchEntityWithBundleIdentifier:(id)arg0 appName:(id)arg1 fromSuggestion:(BOOL)arg2 ;
+(id)searchEntityWithCommand:(id)arg0 fromSuggestion:(BOOL)arg1 ;
+(id)searchEntityWithContactIdentifier:(id)arg0 fromSuggestion:(BOOL)arg1 ;
+(id)searchEntityWithNLPSearchString:(id)arg0 spotlightQueryString:(id)arg1 rankCategories:(id)arg2 rankTerms:(id)arg3 fromSuggestion:(BOOL)arg4 ;
+(id)searchEntityWithPersonQueryIdentifier:(id)arg0 personName:(id)arg1 fromSuggestion:(BOOL)arg2 ;
+(id)searchEntityWithPhotosSearchString:(id)arg0 spotlightQueryString:(id)arg1 rankCategories:(id)arg2 rankTerms:(id)arg3 isNLQuery:(BOOL)arg4 includeSyndicatedPhotos:(BOOL)arg5 fromSuggestion:(BOOL)arg6 ;
+(id)searchEntityWithSearchString:(id)arg0 spotlightQueryString:(id)arg1 preferredBundleIDs:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)appendToQuery:(id)arg0 key:(id)arg1 value:(id)arg2 additions:(id)arg3 ;
-(void)appendToQuery:(id)arg0 key:(id)arg1 value:(id)arg2 optionalValue:(id)arg3 additions:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateSearchString:(id)arg0 ;


@end


#endif