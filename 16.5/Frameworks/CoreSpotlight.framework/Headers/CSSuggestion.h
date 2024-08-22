// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSUGGESTION_H
#define CSSUGGESTION_H

@class NSString, NSArray, NSAttributedString, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_CSSuggestionToken.h"

@interface CSSuggestion : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_searchString;
    NSString *_displayString;
    NSString *_userQueryString;
    NSArray *_previousSuggestionTokens;
    NSArray *_updatedSuggestionTokens;
    NSAttributedString *_localizedAttributedString;
    NSArray *_suggestionTokens;
    _CSSuggestionToken *_currentSuggestionToken;
    NSInteger _rank;
    NSInteger _resultCount;
    BOOL _enableFragments;
    BOOL _updated;
}


@property (readonly, nonatomic) NSAttributedString *localizedAttributedSuggestion;
@property (nonatomic) NSInteger rank;
@property (readonly, nonatomic) NSDictionary *rankCategories;
@property (readonly, nonatomic) NSInteger suggestionKind;
@property (nonatomic) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)advancedSuggestionWithUserString:(id)arg0 currentSuggestion:(id)arg1 parseResult:(id)arg2 ;
+(id)attachmentNameSuggestionWithUserString:(id)arg0 currentSuggestion:(id)arg1 ;
+(id)emptySuggestion;
+(id)messageWithAttachmentsSuggestionWithUserString:(id)arg0 currentSuggestion:(id)arg1 ;
+(id)subjectSuggestionWithUserString:(id)arg0 currentSuggestion:(id)arg1 ;
+(id)suggestionWithUserString:(id)arg0 ;
+(id)suggestionWithUserString:(id)arg0 currentSuggestion:(id)arg1 ;
+(id)suggestionWithUserString:(id)arg0 currentSuggestion:(id)arg1 updatedSuggestionTokens:(id)arg2 ;
+(id)updatedSuggestionWithCurrentSuggestion:(id)arg0 highlightedText:(id)arg1 ;
+(id)updatedSuggestionWithCurrentSuggestion:(id)arg0 highlightedText:(id)arg1 highlightedRange:(struct _NSRange )arg2 ;
+(id)updatedSuggestionWithCurrentSuggestion:(id)arg0 interaction:(int)arg1 ;
+(id)updatedSuggestionWithCurrentSuggestion:(id)arg0 mailboxKind:(NSInteger)arg1 ;
+(id)updatedSuggestionWithCurrentSuggestion:(id)arg0 token:(id)arg1 scopeSelection:(NSUInteger)arg2 ;
+(id)updatedSuggestionWithCurrentSuggestion:(id)arg0 token:(id)arg1 tokenText:(id)arg2 ;
+(id)updatedSuggestionWithCurrentSuggestion:(id)arg0 userString:(id)arg1 tokens:(id)arg2 ;
-(BOOL)enableFragments;
-(BOOL)hasAttachmentsRelatedSearchString;
-(BOOL)hasSuggestionTokenWithType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSuggestion:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compareByRank:(id)arg0 ;
-(NSInteger)numberOfMessageWithAttachmentTokens;
-(NSInteger)resultCount;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentSuggestionToken;
-(id)currentToken;
-(id)currentTokens;
-(id)debugDescription;
-(id)description;
-(id)displayString;
-(id)displayTextForPeopleSuggestion:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserString:(id)arg0 currentSuggestion:(id)arg1 ;
-(id)initWithUserString:(id)arg0 currentSuggestion:(id)arg1 currentSuggestionToken:(id)arg2 ;
-(id)initWithUserString:(id)arg0 currentSuggestion:(id)arg1 currentToken:(id)arg2 tokens:(id)arg3 ;
-(id)initWithUserString:(id)arg0 currentSuggestion:(id)arg1 displayString:(id)arg2 attributeValues:(id)arg3 bundleIdentifiers:(id)arg4 ;
-(id)initWithUserString:(id)arg0 currentSuggestion:(id)arg1 displayString:(id)arg2 score:(id)arg3 ;
-(id)initWithUserString:(id)arg0 currentSuggestion:(id)arg1 internalType:(NSInteger)arg2 ;
-(id)initWithUserString:(id)arg0 currentSuggestion:(id)arg1 itemResult:(id)arg2 ;
-(id)initWithUserString:(id)arg0 currentSuggestion:(id)arg1 suggestionResult:(id)arg2 ;
-(id)initWithUserString:(id)arg0 currentSuggestion:(id)arg1 updatedSuggestionTokens:(id)arg2 ;
-(id)initWithUserString:(id)arg0 previousSuggestionTokens:(id)arg1 displayString:(id)arg2 attributeValues:(id)arg3 bundleIdentifiers:(id)arg4 enableFragements:(BOOL)arg5 ;
-(id)personSuggestionByReplacingCurrentTokenEmailAddresses:(id)arg0 ;
-(id)previousSuggestionTokens;
-(id)queryString;
-(id)score;
-(id)searchString;
-(id)searchStringByRemovingPrefixForScopeKey:(id)arg0 ;
-(id)suggestionTokens;
-(id)uniqueIdentifier;
-(id)userQueryString;
-(void)commonInitWithUserString:(id)arg0 currentSuggestion:(id)arg1 currentSuggestionToken:(id)arg2 updatedSuggestionTokens:(id)arg3 ;
-(void)commonInitWithUserString:(id)arg0 currentSuggestionToken:(id)arg1 previousSuggestionTokens:(id)arg2 updatedSuggestionTokens:(id)arg3 enableFragments:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeSuggestionAndUpdateLocalizedAttributedString:(id)arg0 ;
-(void)setEnableFragments:(BOOL)arg0 ;
-(void)setResultCount:(NSInteger)arg0 ;
-(void)update;
-(void)updateCurrentSuggestionToken:(id)arg0 ;
-(void)updateDisplayString:(id)arg0 ;
-(void)updateLocalizedAttributedString:(id)arg0 ;
-(void)updateLocalizedAttributedStringForPersonSuggestion;
-(void)updatePreviousSuggestionTokens:(id)arg0 ;
-(void)updateResultCount:(NSInteger)arg0 ;
-(void)updateSearchString:(id)arg0 ;
-(void)updateSuggestFragments:(BOOL)arg0 ;
-(void)updateSuggestionTokens:(id)arg0 ;
-(void)updateUpdatedFlag:(BOOL)arg0 ;
-(void)updateUpdatedSuggestionTokens:(id)arg0 ;
-(void)updateUserQueryString:(id)arg0 ;
-(void)updateVersion:(NSInteger)arg0 ;


@end


#endif