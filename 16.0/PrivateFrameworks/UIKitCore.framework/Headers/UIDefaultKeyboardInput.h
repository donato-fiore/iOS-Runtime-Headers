// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDEFAULTKEYBOARDINPUT_H
#define UIDEFAULTKEYBOARDINPUT_H

@class NSIndexSet, RTIInputSystemSourceSession, NSString, NSDictionary;
@protocol UIKeyboardInput, UITextInputPrivate, UITextInputDelegate, UITextInputSuggestionDelegate, UITextInputTokenizer;


#import "UIView.h"
#import "UITextInputTraits.h"
#import "UITextPosition.h"
#import "UIInputContextHistory.h"
#import "UIColor.h"
#import "UITextInteractionAssistant.h"
#import "UITextRange.h"
#import "UITextInputPasswordRules.h"
#import "UIImage.h"
#import "_UISupplementalLexicon.h"

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput, UITextInputPrivate>

 {
    UITextInputTraits *m_traits;
}


@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (readonly, nonatomic) RTIInputSystemSourceSession *_rtiSourceSession;
@property (nonatomic) NSInteger _textInputSource;
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsInitialEmojiKeyboard;
@property (nonatomic) BOOL acceptsPayloads;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) NSInteger autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (readonly, nonatomic) NSInteger cursorBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry;
@property (nonatomic) BOOL disableHandwritingKeyboard;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (nonatomic) UIEdgeInsets floatingKeyboardEdgeInsets;
@property (nonatomic) BOOL forceDefaultDictationInfo;
@property (nonatomic) NSInteger forceDictationKeyboardType;
@property (nonatomic) BOOL forceDisableDictation;
@property (nonatomic) BOOL forceEnableDictation;
@property (nonatomic) BOOL forceFloatingKeyboard;
@property (nonatomic) BOOL forceSpellingDictation;
@property (nonatomic) BOOL hasDefaultContents;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidePrediction;
@property (retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property (weak, nonatomic) NSObject<UITextInputDelegate> *inputDelegate;
@property (readonly, nonatomic) id *insertDictationResultPlaceholder;
@property (retain, nonatomic) UIColor *insertionPointColor;
@property (nonatomic) NSUInteger insertionPointWidth;
@property (readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic) BOOL isCarPlayIdiom;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (nonatomic) BOOL learnsCorrections;
@property (nonatomic) BOOL loadKeyboardsForSiriLanguage;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) BOOL preferOnlineDictation;
@property (nonatomic) NSInteger preferredKeyboardStyle;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) NSInteger selectionAffinity;
@property (retain, nonatomic) UIColor *selectionBarColor;
@property (retain, nonatomic) UIColor *selectionBorderColor;
@property (nonatomic) CGFloat selectionBorderWidth;
@property (nonatomic) CGFloat selectionCornerRadius;
@property (retain, nonatomic) UIImage *selectionDragDotImage;
@property (nonatomic) UIEdgeInsets selectionEdgeInsets;
@property (nonatomic) NSInteger selectionGranularity;
@property (retain, nonatomic) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) BOOL showDictationButton;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (retain, nonatomic) _UISupplementalLexicon *supplementalLexicon;
@property (retain, nonatomic) UIImage *supplementalLexiconAmbiguousItemIcon;
@property (readonly, nonatomic) BOOL supportsImagePaste;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) NSObject<UITextInputSuggestionDelegate> *textInputSuggestionDelegate;
@property (readonly, nonatomic) UIView *textInputView;
@property (nonatomic) int textLoupeVisibility;
@property (readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
@property (nonatomic) NSInteger textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id *textSuggestionDelegate;
@property (nonatomic) *__CFCharacterSet textTrimmingSet;
@property (readonly, nonatomic) NSObject<UITextInputTokenizer> *tokenizer;
@property (retain, nonatomic) UIColor *underlineColorForSpelling;
@property (retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) _NSRange validTextRange;


-(BOOL)becomesEditableWithGestures;
-(BOOL)hasContent;
-(BOOL)hasSelection;
-(BOOL)isEditable;
-(BOOL)isEditing;
-(BOOL)isPosition:(id)arg0 atBoundary:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(BOOL)isPosition:(id)arg0 withinTextUnit:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(BOOL)isSecure;
-(BOOL)isShowingPlaceholder;
-(BOOL)selectionAtDocumentStart;
-(BOOL)selectionAtWordStart;
-(NSInteger)baseWritingDirectionForPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(NSInteger)comparePosition:(id)arg0 toPosition:(id)arg1 ;
-(NSInteger)offsetFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(id)characterRangeAtPoint:(struct CGPoint )arg0 ;
-(id)characterRangeByExtendingPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 withinRange:(id)arg1 ;
-(id)delegate;
-(id)fontForCaretSelection;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)positionFromPosition:(id)arg0 inDirection:(NSInteger)arg1 offset:(NSInteger)arg2 ;
-(id)positionFromPosition:(id)arg0 offset:(NSInteger)arg1 ;
-(id)positionFromPosition:(id)arg0 toBoundary:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(id)positionWithinRange:(id)arg0 farthestInDirection:(NSInteger)arg1 ;
-(id)rangeByExtendingCurrentSelection:(int)arg0 ;
-(id)rangeByMovingCurrentSelection:(int)arg0 ;
-(id)rangeEnclosingPosition:(id)arg0 withGranularity:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(id)rectsForNSRange:(struct _NSRange )arg0 ;
-(id)selectionRectsForRange:(id)arg0 ;
-(id)selectionView;
-(id)text;
-(id)textColorForCaretSelection;
-(id)textInRange:(id)arg0 ;
-(id)textInputTraits;
-(id)textRangeFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(int)selectionState;
-(int)wordOffsetInRange:(id)arg0 ;
-(struct CGRect )caretRect;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )convertCaretRect:(struct CGRect )arg0 ;
-(struct CGRect )firstRectForRange:(id)arg0 ;
-(struct CGRect )visibleBounds;
-(struct _NSRange )selectionRange;
-(unsigned short)characterAfterCaretSelection;
-(unsigned short)characterBeforeCaretSelection;
-(unsigned short)characterInRelationToCaretSelection:(int)arg0 ;
-(void)confirmMarkedText:(id)arg0 ;
-(void)deleteBackward;
-(void)extendCurrentSelection:(int)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)insertText:(id)arg0 ;
-(void)replaceCurrentWordWithText:(id)arg0 ;
-(void)replaceRange:(id)arg0 withText:(id)arg1 ;
-(void)selectAll;
-(void)setBaseWritingDirection:(NSInteger)arg0 forRange:(id)arg1 ;
-(void)setBecomesEditableWithGestures:(BOOL)arg0 ;
-(void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)setSecure:(BOOL)arg0 ;
-(void)setSelectionWithPoint:(struct CGPoint )arg0 ;
-(void)setText:(id)arg0 ;
-(void)setupPlaceholderTextIfNeeded;
-(void)takeTraitsFrom:(id)arg0 ;
-(void)unmarkText;
-(void)updateSelection;


@end


#endif