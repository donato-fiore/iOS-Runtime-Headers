// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSEARCHPROVIDER_H
#define WBSSEARCHPROVIDER_H

@class WBSURLSuffixChecker, NSString, NSSet, NSArray, NSDictionary, WBSOpenSearchURLTemplate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSSearchProvider : NSObject <NSCopying, NSSecureCoding>

 {
    WBSURLSuffixChecker *_suffixChecker;
    NSString *_queryKey;
}


@property (readonly, copy, nonatomic) NSString *carrierInfo; // ivar: _carrierInfo
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *groupIdentifierQueryStringKey; // ivar: _groupIdentifierQueryStringKey
@property (readonly, copy, nonatomic) NSSet *homepageURLs; // ivar: _homepageURLs
@property (readonly, copy, nonatomic) NSArray *hostSuffixes; // ivar: _hostSuffixes
@property (readonly, copy, nonatomic) NSArray *languages; // ivar: _languages
@property (readonly, nonatomic) NSUInteger parsecSearchEndpointType; // ivar: _parsecSearchEndpointType
@property (readonly, copy, nonatomic) NSString *parsecSearchIdentifier; // ivar: _parsecSearchIdentifier
@property (readonly, nonatomic) int parsecSearchResultType; // ivar: _parsecSearchResultType
@property (readonly, copy, nonatomic) NSString *parsecSearchSuggestionIdentifier; // ivar: _parsecSearchSuggestionIdentifier
@property (readonly, copy, nonatomic) NSArray *pathPrefixes; // ivar: _pathPrefixes
@property (readonly, copy, nonatomic) NSDictionary *safeSearchURLQueryParameters; // ivar: _safeSearchURLQueryParameters
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *safeSearchURLTemplate; // ivar: _safeSearchURLTemplate
@property (readonly, copy, nonatomic) NSString *scriptName; // ivar: _scriptName
@property (readonly, copy, nonatomic) NSString *searchEngineIdentifier; // ivar: _searchEngineIdentifier
@property (readonly, nonatomic) NSInteger searchID; // ivar: _searchID
@property (readonly, nonatomic) BOOL searchShouldUseSafeSearchTemplate;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplate; // ivar: _searchURLTemplate
@property (readonly, copy, nonatomic) NSString *shortName; // ivar: _shortName
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *suggestionsURLTemplate; // ivar: _suggestionsURLTemplate
@property (readonly, copy, nonatomic) NSDictionary *topLevelDomains; // ivar: _topLevelDomains
@property (readonly, copy, nonatomic) NSArray *userRegions; // ivar: _userRegions
@property (readonly, nonatomic) BOOL usesSearchTermsFromFragment; // ivar: _usesSearchTermsFromFragment
@property (readonly, nonatomic) BOOL usesSecureSearchURL; // ivar: _usesSecureSearchURL


+(BOOL)supportsSecureCoding;
+(id)defaultProviderInUserVisibleProviders:(id)arg0 usingSettings:(id)arg1 ;
+(id)sortedSearchProvidersInArray:(id)arg0 usingShortNameOrder:(id)arg1 ;
+(id)userVisibleProvidersInAllProviders:(id)arg0 usingContext:(id)arg1 ;
-(BOOL)shouldDisplaySearchProviderInContext:(id)arg0 ;
-(BOOL)urlIsHomepage:(id)arg0 ;
-(BOOL)urlIsHomepage:(id)arg0 shouldUseCanonicalRepresentation:(BOOL)arg1 ;
-(BOOL)urlIsValidSearch:(id)arg0 ;
-(NSUInteger)_parsecSearchEndpointTypeInDictionary:(id)arg0 ;
-(id)_searchURLTemplateStringInDictionary:(id)arg0 usingContext:(id)arg1 ;
-(id)_substitutionValuesForTemplateURLUsingContext:(id)arg0 ;
-(id)_suggestionsURLTemplateStringInDictionary:(id)arg0 usingContext:(id)arg1 ;
-(id)_urlByEnsuringQueryItemInURL:(id)arg0 percentEncodedQueryItemKey:(id)arg1 percentEncodedQueryItemValue:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 usingContext:(id)arg1 ;
-(id)safeSearchURLForSearchURL:(id)arg0 ;
-(id)searchURLForUserTypedString:(id)arg0 ;
-(id)suggestionsURLForUserTypedString:(id)arg0 ;
-(id)urlAttributingToSafariIfValidSearchURL:(id)arg0 ;
-(id)urlByIncorporatingGroupIdentifier:(NSUInteger)arg0 ifIsValidSearchResultsURL:(id)arg1 ;
-(id)userVisibleQueryFromSearchURL:(id)arg0 ;
-(id)userVisibleQueryFromSearchURL:(id)arg0 allowQueryThatLooksLikeURL:(BOOL)arg1 ;
-(int)_parsecSearchResultTypeInDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif