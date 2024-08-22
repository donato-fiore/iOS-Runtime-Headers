// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSIQUERYTOKEN_H
#define PSIQUERYTOKEN_H

@class NSMutableSet, NSDictionary, NSString, NSIndexSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PSIQueryToken.h"
#import "PSIWordEmbeddingMatch.h"

@interface PSIQueryToken : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger assetCount;
@property (retain, nonatomic) NSMutableSet *assetIds; // ivar: _assetIds
@property (nonatomic) BOOL belongsToSearchText; // ivar: _belongsToSearchText
@property (readonly, nonatomic) NSUInteger collectionCount;
@property (retain, nonatomic) NSMutableSet *collectionIds; // ivar: _collectionIds
@property (readonly, nonatomic) BOOL containsMarker;
@property (retain, nonatomic) NSDictionary *dateAttributes; // ivar: _dateAttributes
@property (readonly, copy, nonatomic) NSDictionary *debugDictionary;
@property (readonly, copy, nonatomic) NSString *groupMatchingText;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isFilterTypeToken; // ivar: _isFilterTypeToken
@property (nonatomic) BOOL isFullTextToken; // ivar: _isFullTextToken
@property (readonly, nonatomic) BOOL isTextSearchable;
@property (readonly, nonatomic) NSUInteger matchType; // ivar: _matchType
@property (copy, nonatomic) NSString *normalizedText; // ivar: _normalizedText
@property (retain, nonatomic) PSIQueryToken *parentToken; // ivar: _parentToken
@property (nonatomic) _NSRange rangeInSearchText; // ivar: _rangeInSearchText
@property (readonly, copy, nonatomic) NSString *resolvedText;
@property (readonly, nonatomic) NSUInteger resultCount;
@property (copy, nonatomic) NSIndexSet *searchedCategories; // ivar: _searchedCategories
@property (readonly, copy, nonatomic) NSString *suggestionText;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSUInteger userCategory; // ivar: _userCategory
@property (nonatomic) BOOL userControlledCategoriesUseWildcard; // ivar: _userControlledCategoriesUseWildcard
@property (nonatomic) BOOL usesWordEmbeddings; // ivar: _usesWordEmbeddings
@property (readonly, copy, nonatomic) NSString *wildcardResolvedText;
@property (retain, nonatomic) PSIWordEmbeddingMatch *wordEmbeddingMatch; // ivar: _wordEmbeddingMatch


+(BOOL)supportsSecureCoding;
+(id)personQueryTokensFromSocialGroupQueryToken:(id)arg0 ;
+(id)stringForMatchType:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 userCategory:(NSUInteger)arg1 ;
-(id)initWithIdentifier:(id)arg0 userCategory:(NSUInteger)arg1 searchedCategories:(id)arg2 ;
-(id)initWithText:(id)arg0 normalizedText:(id)arg1 identifier:(id)arg2 userCategory:(NSUInteger)arg3 searchedCategories:(id)arg4 matchType:(NSUInteger)arg5 ;
-(id)initWithText:(id)arg0 normalizedText:(id)arg1 userCategory:(NSUInteger)arg2 matchType:(NSUInteger)arg3 ;
-(id)initWithText:(id)arg0 normalizedText:(id)arg1 userCategory:(NSUInteger)arg2 searchedCategories:(id)arg3 matchType:(NSUInteger)arg4 ;
-(id)initWithText:(id)arg0 userCategory:(NSUInteger)arg1 matchType:(NSUInteger)arg2 ;
-(id)initWithText:(id)arg0 userCategory:(NSUInteger)arg1 searchedCategories:(id)arg2 matchType:(NSUInteger)arg3 ;
-(id)tokenByWordEmbeddingWithMatch:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)normalizeTextWithTokenizer:(id)arg0 ;
-(void)replaceIdentifier:(id)arg0 ;


@end


#endif