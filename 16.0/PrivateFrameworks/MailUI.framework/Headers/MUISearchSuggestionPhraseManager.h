// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUISEARCHSUGGESTIONPHRASEMANAGER_H
#define MUISEARCHSUGGESTIONPHRASEMANAGER_H

@class NSArray, NSString, CSSuggestion;
@protocol EMVIPManager;

#import <Foundation/Foundation.h>


@interface MUISearchSuggestionPhraseManager : NSObject

@property (readonly, copy, nonatomic) NSArray *excludedMailboxes; // ivar: _excludedMailboxes
@property (readonly, copy, nonatomic) NSString *filterQuery; // ivar: _filterQuery
@property (readonly, nonatomic) BOOL hasPhraseOrSuggestions;
@property (readonly, copy, nonatomic) NSArray *implicitSuggestions; // ivar: _implicitSuggestions
@property (readonly, copy, nonatomic) NSArray *inputLanguages; // ivar: _inputLanguages
@property (readonly, copy, nonatomic) NSString *phrase; // ivar: _phrase
@property (readonly, nonatomic) unsigned char phraseKind;
@property (readonly, copy, nonatomic) NSString *scopeIdentifierForPeopleSuggestions; // ivar: _scopeIdentifierForPeopleSuggestions
@property (readonly, copy, nonatomic) NSArray *selectedSuggestions; // ivar: _selectedSuggestions
@property (readonly, nonatomic) NSUInteger signpostID; // ivar: _signpostID
@property (readonly, nonatomic) CSSuggestion *updatedSuggestion; // ivar: _updatedSuggestion
@property (readonly, nonatomic) NSObject<EMVIPManager> *vipManager; // ivar: _vipManager


+(id)phraseManagerWithPhrase:(id)arg0 updatedSuggestion:(id)arg1 filterQuery:(id)arg2 ;
-(id)initWithPhrase:(id)arg0 selectedSuggestions:(id)arg1 vipManager:(id)arg2 updatedSuggestion:(id)arg3 scopeIdentifierForPeopleSuggestions:(id)arg4 inputLanguages:(id)arg5 implicitSuggestions:(id)arg6 filterQuery:(id)arg7 excludedMailboxes:(id)arg8 ;
-(id)spotlightQueryStrings;


@end


#endif