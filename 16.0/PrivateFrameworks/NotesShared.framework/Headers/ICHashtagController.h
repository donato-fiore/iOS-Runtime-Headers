// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICHASHTAGCONTROLLER_H
#define ICHASHTAGCONTROLLER_H

@class ICAttachmentInsertionController, NSMutableDictionary, NSMutableSet, ICTableColumnTextView, UITextView;
@protocol ICHashtagAnalyticsDelegate, ICHashtagKeyboardDelegate;

#import <Foundation/Foundation.h>

#import "ICHashtagsNode.h"
#import "ICNote.h"

@interface ICHashtagController : NSObject

@property (readonly, nonatomic) BOOL allowsHashtag;
@property (weak, nonatomic) NSObject<ICHashtagAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (weak, nonatomic) ICAttachmentInsertionController *attachmentInsertionController; // ivar: _attachmentInsertionController
@property (nonatomic) _NSRange editedRange; // ivar: _editedRange
@property (weak, nonatomic) NSObject<ICHashtagKeyboardDelegate> *hashtagKeyboardDelegate; // ivar: _hashtagKeyboardDelegate
@property (retain, nonatomic) NSMutableDictionary *hashtagSuggestionsDictionary; // ivar: _hashtagSuggestionsDictionary
@property (weak, nonatomic) NSObject<ICHashtagKeyboardDelegate> *hashtagTableKeyboardDelegate; // ivar: _hashtagTableKeyboardDelegate
@property (retain, nonatomic) NSMutableSet *hashtagsNames; // ivar: _hashtagsNames
@property (retain, nonatomic) ICHashtagsNode *hashtagsTree; // ivar: _hashtagsTree
@property (nonatomic) BOOL isUpdatingKeyboard; // ivar: _isUpdatingKeyboard
@property (readonly, nonatomic) NSUInteger maxLengthOfStringForCheckingHashtag;
@property (nonatomic) NSUInteger maxNameLength; // ivar: _maxNameLength
@property (weak, nonatomic) ICNote *note; // ivar: _note
@property (weak, nonatomic) ICTableColumnTextView *tableTextView; // ivar: _tableTextView
@property (weak, nonatomic) UITextView *textView; // ivar: _textView


+(BOOL)isBeginningHashtagAtSelectionRange:(struct _NSRange )arg0 inString:(id)arg1 languageHasSpaces:(BOOL)arg2 ;
+(BOOL)isValidPostfixCharacter:(unsigned short)arg0 ;
+(BOOL)isValidPrefixCharacter:(unsigned short)arg0 languageHasSpaces:(BOOL)arg1 ;
+(BOOL)range:(struct _NSRange )arg0 hasValidPostfixCharacterForString:(id)arg1 ;
+(BOOL)range:(struct _NSRange )arg0 hasValidPrefixCharacterForString:(id)arg1 languageHasSpaces:(BOOL)arg2 ;
+(BOOL)range:(struct _NSRange )arg0 isPrefixedWithHashtagForString:(id)arg1 ;
+(BOOL)shouldAutoConvertToTag;
+(struct _NSRange )range:(struct _NSRange )arg0 appendingSubstringRange:(struct _NSRange )arg1 ;
+(struct _NSRange )rangeOfLastCharacterInRange:(struct _NSRange )arg0 ;
+(void)setShouldAutoConvertToTag:(BOOL)arg0 ;
-(id)checkForHashtagInString:(id)arg0 inRange:(struct _NSRange )arg1 selectionRange:(struct _NSRange )arg2 languageHasSpaces:(BOOL)arg3 ;
-(id)hashtagSuggestionsForKey:(id)arg0 ;
-(id)initWithNote:(id)arg0 ;
-(void)accountWasDeleted:(id)arg0 ;
-(void)associateHashtagSuggestion:(id)arg0 withKey:(id)arg1 ;
-(void)crossAppHashtagDidChange:(id)arg0 ;
-(void)dealloc;
-(void)updateHashtagsAssociations;
-(void)updateNoteHashtags;


@end


#endif