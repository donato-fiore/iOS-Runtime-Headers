// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CSSUGGESTIONTOKEN_H
#define _CSSUGGESTIONTOKEN_H

@class NSNumber, NSArray, NSString, NSAttributedString, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CSSearchableItem.h"
#import "CSItemSummary.h"

@interface _CSSuggestionToken : NSObject <NSSecureCoding, NSCopying>

 {
    NSInteger _internalType;
    NSInteger _bundleType;
    _NSRange _replacementRange;
    NSNumber *_score;
    NSArray *_scopes;
    NSString *_displayString;
    NSString *_searchString;
    NSString *_spotlightQueryString;
    NSAttributedString *_suggestionDisplayText;
    BOOL _personIsUser;
    BOOL _personIsImportant;
    BOOL _personIsMailingList;
    BOOL _shouldDisplayNameAndEmail;
    NSString *_personIdentifier;
    CSSearchableItem *_personItem;
    NSString *_nlpCompletionType;
    NSDictionary *_nlpCompletionAttributes;
    NSInteger _localCompletionType;
    NSArray *_localCompletionAttributes;
    NSArray *_localCompletionBundleIdentifiers;
    NSAttributedString *_displayText;
    NSInteger _nlpKind;
}


@property (readonly, nonatomic) NSAttributedString *displayText;
@property (retain, nonatomic) CSItemSummary *itemSummary; // ivar: _itemSummary
@property (readonly, nonatomic) _NSRange replacementRange;
@property (readonly, nonatomic) NSArray *scopes;
@property (retain, nonatomic) NSNumber *score;
@property (nonatomic) NSUInteger selectedScope; // ivar: _selectedScope
@property (retain, nonatomic) NSArray *tokenScopes; // ivar: _tokenScopes
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToToken:(id)arg0 ;
-(BOOL)isImportant;
-(BOOL)isMailingList;
-(BOOL)isMessageWithAttachmentsToken;
-(BOOL)isUser;
-(BOOL)isValid;
-(BOOL)nameAndEmailRenderableWithName:(id)arg0 emails:(id)arg1 ;
-(BOOL)shouldDisplayNameAndEmail;
-(CGFloat)lastUsedDate;
-(NSInteger)bundleType;
-(NSInteger)compareByRank:(id)arg0 ;
-(NSInteger)internalType;
-(NSInteger)localCompare:(id)arg0 ;
-(NSInteger)localCompletionType;
-(NSInteger)nlpCompare:(id)arg0 ;
-(NSInteger)peopleCompare:(id)arg0 ;
-(NSInteger)tokenKind;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)displayString;
-(id)filterQueries;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserString:(id)arg0 displayString:(id)arg1 ;
-(id)initWithUserString:(id)arg0 displayString:(id)arg1 attributeValues:(id)arg2 bundleIdentifiers:(id)arg3 ;
-(id)initWithUserString:(id)arg0 displayString:(id)arg1 score:(id)arg2 ;
-(id)initWithUserString:(id)arg0 itemResult:(id)arg1 ;
-(id)initWithUserString:(id)arg0 queryString:(id)arg1 ;
-(id)initWithUserString:(id)arg0 scopes:(id)arg1 selectedIndex:(NSInteger)arg2 displayString:(id)arg3 ;
-(id)initWithUserString:(id)arg0 suggestionResult:(id)arg1 ;
-(id)initWithUserString:(id)arg0 tokenScopes:(id)arg1 selectedIndex:(NSInteger)arg2 displayString:(id)arg3 internalType:(NSInteger)arg4 ;
-(id)localCompletionAttributes;
-(id)localCompletionFeedback;
-(id)localeCompletionBundleIdentifiers;
-(id)nlpCompletionAttributes;
-(id)nlpCompletionCategories;
-(id)nlpCompletionType;
-(id)personItem;
-(id)queryString;
-(id)searchString;
-(id)spotlightQueryString;
-(id)suggestionDisplayText;
-(id)tokenDisplayString;
-(id)tokenQueryString;
-(id)tokenText;
-(void)commonInitWithUserString:(id)arg0 displayString:(id)arg1 score:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeTokenScopesAndSpotlightQueryString:(id)arg0 ;
-(void)setBundleType:(NSInteger)arg0 ;
-(void)setInternalType:(NSInteger)arg0 ;
-(void)setSuggestionDisplayText:(id)arg0 ;
-(void)updateItemSummary;
-(void)updateNameAndEmailDisplayState;
-(void)updateReplacementRange:(struct _NSRange )arg0 ;
-(void)updateScopeSelection:(NSUInteger)arg0 ;
-(void)updateScopes:(id)arg0 ;
-(void)updateSearchString:(id)arg0 ;
-(void)updateTokenText:(id)arg0 ;


@end


#endif