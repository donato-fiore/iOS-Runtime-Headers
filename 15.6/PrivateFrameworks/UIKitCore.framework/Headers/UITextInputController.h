// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITEXTINPUTCONTROLLER_H
#define UITEXTINPUTCONTROLLER_H

@class NSLayoutManager, NSHashTable, NSDictionary, NSAttributedString, NSArray, UIView<UITextInput>, NSSet, NSIndexSet, UIResponder<UITextInput>, RTIInputSystemSourceSession, UIView<UITextInputPrivate>, NSString;
@protocol UITextInput_Internal, UITextInput, UITextInputAdditions, UIResponderStandardEditActions, UITextInputPrivate, UITextInputDelegate, UITextInputControllerDelegate, UITextInputSuggestionDelegate, UITextInputTokenizer;

#import <Foundation/Foundation.h>

#import "UITextRange.h"
#import "_UITextInputControllerTokenizer.h"
#import "_UITextServiceSession.h"
#import "UIKeyboardCameraSession.h"
#import "UITextInputTraits.h"
#import "_UITextUndoManager.h"
#import "_UITextUndoOperationTyping.h"
#import "UITextChecker.h"
#import "UITextCheckingController.h"
#import "UITextPlaceholder.h"
#import "UITextPosition.h"
#import "UIInputContextHistory.h"
#import "UIColor.h"
#import "UITextInteractionAssistant.h"
#import "UITextInputPasswordRules.h"
#import "UIImage.h"
#import "_UISupplementalLexicon.h"
#import "UIView.h"
#import "_UITextLayoutController.h"

@interface UITextInputController : NSObject <UITextInput_Internal, UITextInput, UITextInputAdditions, UIResponderStandardEditActions, UITextInputPrivate>

 {
    id<UITextInputDelegate> *_inputDelegate;
    UITextRange *_selectedTextRange;
    _UITextInputControllerTokenizer *_tokenizer;
    NSLayoutManager *_layoutManager;
    NSHashTable *_observedScrollViews;
    _UITextServiceSession *_learnSession;
    _UITextServiceSession *_shareSession;
    _UITextServiceSession *_lookupSession;
    _UITextServiceSession *_translateSession;
    UIKeyboardCameraSession *_keyboardCameraSession;
    UITextInputTraits *_textInputTraits;
    _NSRange _markedTextRange;
    _NSRange _markedTextSelection;
    NSDictionary *_markedTextStyle;
    NSAttributedString *_markedText;
    ? _tiFlags;
    NSArray *_extraItemsBeforeTextStyleOptions;
    UIView<UITextInput> *_firstTextView;
    _UITextUndoManager *_undoManager;
    _UITextUndoOperationTyping *_undoOperationForCoalescing;
    UITextChecker *_textChecker;
    UITextCheckingController *_textCheckingController;
    NSSet *_whitelistedTypingAttributes;
    NSUInteger _dontRemoveAllActionsCount;
    UITextPlaceholder *_textPlaceholder;
}


@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (readonly, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;
@property (readonly, nonatomic) RTIInputSystemSourceSession *_rtiSourceSession;
@property (nonatomic) NSInteger _textInputSource;
@property (readonly, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;
@property (copy, nonatomic, getter=_whitelistedTypingAttributes, setter=_setWhitelistedTypingAttributes:) NSSet *_whitelistedTypingAttributes;
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsInitialEmojiKeyboard;
@property (nonatomic) BOOL acceptsPayloads;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) BOOL allowsEditingTextAttributes; // ivar: _allowsEditingTextAttributes
@property (nonatomic) NSInteger autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, nonatomic, getter=_caretRect) CGRect caretRect;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (nonatomic) BOOL continuousSpellCheckingEnabled; // ivar: _continuousSpellCheckingEnabled
@property (nonatomic) int currentUndoGroupType; // ivar: _currentUndoGroupType
@property (readonly, nonatomic) NSInteger cursorBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder;
@property (weak, nonatomic) NSObject<UITextInputControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry;
@property (nonatomic) BOOL disableHandwritingKeyboard;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) int emptyContentReturnKeyType;
@property (copy, nonatomic, getter=_emptyStringAttributes, setter=_setEmptyStringAttributes:) NSDictionary *emptyStringAttributes; // ivar: _emptyStringAttributes
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (readonly, nonatomic) NSAttributedString *filteredAttributedText;
@property (nonatomic) UIEdgeInsets floatingKeyboardEdgeInsets;
@property (nonatomic) BOOL forceDefaultDictationInfo;
@property (nonatomic) NSInteger forceDictationKeyboardType;
@property (nonatomic) BOOL forceDisableDictation;
@property (nonatomic) BOOL forceEnableDictation;
@property (nonatomic) BOOL forceFloatingKeyboard;
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
@property (retain, nonatomic) UITextRange *previousSelectedTextRange; // ivar: _previousSelectedTextRange
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) _NSRange selectedRange;
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
@property (nonatomic) BOOL shouldStartUndoGroup; // ivar: _shouldStartUndoGroup
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
@property (readonly, weak, nonatomic) _UITextLayoutController *textLayoutController; // ivar: _textLayoutController
@property (nonatomic) int textLoupeVisibility;
@property (readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
@property (nonatomic) NSInteger textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id *textSuggestionDelegate;
@property (nonatomic) *__CFCharacterSet textTrimmingSet;
@property (readonly, nonatomic) NSObject<UITextInputTokenizer> *tokenizer;
@property (copy, nonatomic) NSDictionary *typingAttributes; // ivar: _typingAttributes
@property (retain, nonatomic) UIColor *underlineColorForSpelling;
@property (retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) _NSRange validTextRange;


+(BOOL)_shouldUseStandardTextScaling:(id)arg0 ;
-(BOOL)_canHandleResponderAction:(SEL)arg0 ;
-(BOOL)_delegateShouldChangeTextInRange:(struct _NSRange )arg0 replacementText:(id)arg1 ;
-(BOOL)_hasDictationPlaceholder;
-(BOOL)_hasMarkedText;
-(BOOL)_hasMarkedTextOrRangedSelection;
-(BOOL)_isDisplayingLookupViewController;
-(BOOL)_isDisplayingReferenceLibraryViewController;
-(BOOL)_isDisplayingShareViewController;
-(BOOL)_isDisplayingShortcutViewController;
-(BOOL)_isDisplayingTextService;
-(BOOL)_isEmptySelection;
-(BOOL)_isSystemAttachment:(id)arg0 ;
-(BOOL)_mightHaveSelection;
-(BOOL)_pasteFromPasteboard:(id)arg0 andMatchStyle:(BOOL)arg1 ;
-(BOOL)_range:(id)arg0 containsRange:(id)arg1 ;
-(BOOL)_range:(id)arg0 intersectsRange:(id)arg1 ;
-(BOOL)_range:(id)arg0 isEqualToRange:(id)arg1 ;
-(BOOL)_selectionAtDocumentEnd;
-(BOOL)_selectionAtDocumentStart;
-(BOOL)_selectionAtWordStart;
-(BOOL)_shouldConsiderTextViewForGeometry:(id)arg0 ;
-(BOOL)_shouldHandleResponderAction:(SEL)arg0 ;
-(BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg0 forText:(id)arg1 checkAutocorrection:(BOOL)arg2 ;
-(BOOL)_undoRedoInProgress;
-(BOOL)_usesAsynchronousProtocol;
-(BOOL)dontRemoveAllActions;
-(BOOL)isCoalescing;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)shouldStartNewUndoGroup:(id)arg0 textGranularity:(NSInteger)arg1 operationType:(int)arg2 ;
-(BOOL)supportLetterByLetterUndo;
-(NSInteger)_opposingDirectionFromDirection:(NSInteger)arg0 ;
-(NSInteger)_resolveNaturalDirection:(NSInteger)arg0 ;
-(NSInteger)baseWritingDirectionForPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(NSInteger)comparePosition:(id)arg0 toPosition:(id)arg1 ;
-(NSInteger)offsetFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(NSInteger)writingDirectionAtPosition:(id)arg0 ;
-(NSUInteger)_validCaretPositionFromCharacterIndex:(NSUInteger)arg0 downstream:(BOOL)arg1 ;
-(id)_attributedStringForInsertionOfAttributedString:(id)arg0 ;
-(id)_attributesForInsertionOfText:(struct _NSRange )arg0 ;
-(id)_attributesForReplacementInRange:(struct _NSRange )arg0 ;
-(id)_characterPositionForPoint:(struct CGPoint )arg0 ;
-(id)_clampedpositionFromPosition:(id)arg0 offset:(int)arg1 ;
-(id)_findPleasingWordBoundaryFromPosition:(id)arg0 ;
-(id)_firstTextView;
-(id)_fixupTypingAttributeForAttributes:(id)arg0 ;
-(id)_fontForCaretSelection;
-(id)_fullRange;
-(id)_fullText;
-(id)_intersectionOfRange:(id)arg0 andRange:(id)arg1 ;
-(id)_itemProviderForCopyingRange:(struct _NSRange )arg0 ;
-(id)_keyInput;
-(id)_moveDown:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveLeft:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveRight:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveToEndOfDocument:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveToEndOfLine:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveToEndOfParagraph:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveToEndOfWord:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveToStartOfDocument:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveToStartOfLine:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveToStartOfParagraph:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveToStartOfWord:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_moveUp:(BOOL)arg0 withHistory:(id)arg1 ;
-(id)_newAttributedStringForInsertionOfAttributedText:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(id)_newAttributedStringForInsertionOfText:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(id)_normalizedStringForRangeComparison:(id)arg0 ;
-(id)_parentScrollView;
-(id)_pasteController;
-(id)_positionAtStartOfWords:(NSUInteger)arg0 beforePosition:(id)arg1 ;
-(id)_positionFromPosition:(id)arg0 inDirection:(NSInteger)arg1 offset:(NSInteger)arg2 withAffinityDownstream:(BOOL)arg3 ;
-(id)_positionFromPosition:(id)arg0 pastTextUnit:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(id)_positionWithinRange:(id)arg0 farthestInDirection:(NSInteger)arg1 ;
-(id)_rangeFromCurrentRangeWithDelta:(struct _NSRange )arg0 ;
-(id)_rangeOfEnclosingWord:(id)arg0 ;
-(id)_rangeOfLineEnclosingPosition:(id)arg0 ;
-(id)_rangeOfParagraphEnclosingPosition:(id)arg0 ;
-(id)_rangeOfSentenceEnclosingPosition:(id)arg0 ;
-(id)_rangeOfSmartSelectionIncludingRange:(id)arg0 ;
-(id)_rangeOfText:(id)arg0 endingAtPosition:(id)arg1 ;
-(id)_rangeOfTextUnit:(NSInteger)arg0 enclosingPosition:(id)arg1 ;
-(id)_rangeSpanningTextUnit:(NSInteger)arg0 andPosition:(id)arg1 ;
-(id)_rectsForRange:(struct _NSRange )arg0 ;
-(id)_selectableText;
-(id)_selectedAttributedText;
-(id)_selectedText;
-(id)_senderForDelegateNotifications;
-(id)_setHistory:(id)arg0 withExtending:(BOOL)arg1 withAnchor:(int)arg2 withAffinityDownstream:(BOOL)arg3 ;
-(id)_setSelectionRangeWithHistory:(id)arg0 ;
-(id)_textColorForCaretSelection;
-(id)_textInputTraits;
-(id)_textRangeFromNSRange:(struct _NSRange )arg0 ;
-(id)_textStorage;
-(id)_wordContainingCaretSelection;
-(id)annotatedSubstringForRange:(id)arg0 ;
-(id)attributedSubstringForMarkedRange;
-(id)attributedTextInRange:(id)arg0 ;
-(id)characterRangeAtPoint:(struct CGPoint )arg0 ;
-(id)characterRangeByExtendingPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 withinRange:(id)arg1 ;
-(id)initWithTextLayoutController:(id)arg0 ;
-(id)insertTextPlaceholderWithSize:(struct CGSize )arg0 ;
-(id)insertTextPlaceholderWithSize:(struct CGSize )arg0 embeddingType:(NSInteger)arg1 ;
-(id)metadataDictionariesForDictationResults;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)positionFromPosition:(id)arg0 inDirection:(NSInteger)arg1 offset:(NSInteger)arg2 ;
-(id)positionFromPosition:(id)arg0 offset:(NSInteger)arg1 ;
-(id)positionWithinRange:(id)arg0 farthestInDirection:(NSInteger)arg1 ;
-(id)rangeWithTextAlternatives:(*id)arg0 atPosition:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg0 ;
-(id)selectionView;
-(id)textChecker;
-(id)textInRange:(id)arg0 ;
-(id)textRangeForNSRange:(struct _NSRange )arg0 ;
-(id)textRangeFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(id)textStylingAtPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)undoManager;
-(id)validAnnotations;
-(int)_indexForTextPosition:(id)arg0 ;
-(struct CGRect )_caretRectForOffset:(NSUInteger)arg0 ;
-(struct CGRect )_selectionClipRect;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )firstRectForRange:(id)arg0 ;
-(struct CGRect )frameForDictationResultPlaceholder:(id)arg0 ;
-(struct CGRect )frameForTextPlaceholder:(id)arg0 ;
-(struct _NSRange )_nsrangeForTextRange:(id)arg0 ;
-(struct _NSRange )_rangeAfterCancelDictationIfNecessaryForChangeInRange:(struct _NSRange )arg0 ;
-(struct _NSRange )_rangeForBackwardsDelete;
-(struct _NSRange )_rangeToReplaceWhenInsertingText;
-(struct _NSRange )_selectedNSRange;
-(struct _NSRange )markedRange;
-(struct _NSRange )nsRangeForTextRange:(id)arg0 ;
-(unsigned int)_characterAfterCaretSelection;
-(unsigned int)_characterBeforeCaretSelection;
-(unsigned int)_characterInRelationToCaretSelection:(int)arg0 ;
-(unsigned int)_characterInRelationToPosition:(id)arg0 amount:(int)arg1 ;
-(unsigned int)_characterInRelationToRangedSelection:(int)arg0 ;
-(void)_addShortcut:(id)arg0 ;
-(void)_addToTypingAttributes:(id)arg0 value:(id)arg1 ;
-(void)_changeTextAlignment:(NSInteger)arg0 undoString:(id)arg1 ;
-(void)_clearMarkedText;
-(void)_clearSelectionUI;
-(void)_coordinateSelectionChange:(id)arg0 ;
-(void)_copySelectionToClipboard;
-(void)_copySelectionToClipboard:(id)arg0 ;
-(void)_define:(id)arg0 ;
-(void)_deleteBackwardAndNotify:(BOOL)arg0 ;
-(void)_deleteByWord;
-(void)_deleteForwardAndNotify:(BOOL)arg0 ;
-(void)_deleteForwardByWord;
-(void)_deleteTextRange:(id)arg0 ;
-(void)_deleteToEndOfLine;
-(void)_deleteToEndOfParagraph;
-(void)_deleteToStartOfLine;
-(void)_detachFromLayoutManager;
-(void)_ensureSelectionValid;
-(void)_ensureSelectionVisible;
-(void)_expandSelectionToBackwardDeletionCluster;
-(void)_expandSelectionToStartOfWordBeforeCaretSelection;
-(void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg0 ;
-(void)_extendCurrentSelection:(int)arg0 ;
-(void)_forceUnmarkTextDueToEditing;
-(void)_insertAttributedText:(id)arg0 fromKeyboard:(BOOL)arg1 ;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg0 ;
-(void)_insertDictationResult:(id)arg0 withCorrectionIdentifier:(id)arg1 replacingRange:(struct _NSRange )arg2 resultLength:(*NSUInteger)arg3 ;
-(void)_insertText:(id)arg0 fromKeyboard:(BOOL)arg1 ;
-(void)_invalidateEmptyStringAttributes;
-(void)_invalidateTypingAttributes;
-(void)_layoutManagerDidCompleteLayout;
-(void)_moveCurrentSelection:(int)arg0 ;
-(void)_pasteAndMatchStyle:(BOOL)arg0 ;
-(void)_pasteAttributedString:(id)arg0 pasteAsRichText:(BOOL)arg1 ;
-(void)_pasteAttributedString:(id)arg0 toRange:(id)arg1 completion:(id)arg2 ;
-(void)_pasteRawAttributedString:(id)arg0 asRichText:(BOOL)arg1 ;
-(void)_performWhileSuppressingDelegateNotifications:(id)arg0 ;
-(void)_promptForReplace:(id)arg0 ;
-(void)_registerUndoOperationForReplacementWithActionName:(id)arg0 replacementText:(id)arg1 ;
-(void)_removeShareController;
-(void)_removeShortcutController;
-(void)_replaceCurrentWordWithText:(id)arg0 ;
-(void)_replaceDocumentWithText:(id)arg0 ;
-(void)_replaceRange:(id)arg0 withAttributedTextFromKeyboard:(id)arg1 addingUnderlinesForAlternatives:(BOOL)arg2 ;
-(void)_resetShowingTextStyle:(id)arg0 ;
-(void)_scrollRectToVisible:(struct CGRect )arg0 animated:(BOOL)arg1 ;
-(void)_selectAll;
-(void)_selectionDidScroll:(id)arg0 ;
-(void)_selectionGeometryChanged;
-(void)_sendDelegateChangeNotificationsForText:(BOOL)arg0 selection:(BOOL)arg1 ;
-(void)_sendDelegateWillChangeNotificationsForText:(BOOL)arg0 selection:(BOOL)arg1 ;
-(void)_setAttributedMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)_setAttributedMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 fromKeyboard:(BOOL)arg2 useTextStyle:(BOOL)arg3 ;
-(void)_setCaretSelectionAtEndOfSelection;
-(void)_setGestureRecognizers;
-(void)_setInternalGestureRecognizers;
-(void)_setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)_setSelectionToPosition:(id)arg0 ;
-(void)_setUndoRedoInProgress:(BOOL)arg0 ;
-(void)_share:(id)arg0 ;
-(void)_showTextStyleOptions:(id)arg0 ;
-(void)_textContainerDidChangeView:(id)arg0 ;
-(void)_textStorageDidProcessEditing:(id)arg0 ;
-(void)_toggleFontTrait:(unsigned int)arg0 ;
-(void)_translate:(id)arg0 ;
-(void)_transliterateChinese:(id)arg0 ;
-(void)_transpose;
-(void)_undoManagerWillUndo:(id)arg0 ;
-(void)_unmarkText;
-(void)_updateEmptyStringAttributes;
-(void)_updateFirstTextView;
-(void)_updateRangeForSmartDelete;
-(void)_updateRectsForPlaceholder;
-(void)_updateSelectionWithTextRange:(id)arg0 withAffinityDownstream:(BOOL)arg1 ;
-(void)_validateCommand:(id)arg0 forFont:(id)arg1 traits:(int)arg2 ;
-(void)addTextAlternativesDisplayStyle:(NSInteger)arg0 toRange:(struct _NSRange )arg1 ;
-(void)alignCenter:(id)arg0 ;
-(void)alignJustified:(id)arg0 ;
-(void)alignLeft:(id)arg0 ;
-(void)alignRight:(id)arg0 ;
-(void)appendUndoOperation:(id)arg0 newGroup:(BOOL)arg1 ;
-(void)beginSelectionChange;
-(void)captureTextFromCamera:(id)arg0 ;
-(void)changeWillBeUndone:(id)arg0 ;
-(void)checkSmartPunctuationForWordInRange:(id)arg0 ;
-(void)checkSpellingForSelectionChangeIfNecessary;
-(void)checkSpellingForWordInRange:(id)arg0 ;
-(void)clearText;
-(void)coalesceInTextView:(id)arg0 actionName:(id)arg1 affectedRange:(struct _NSRange )arg2 replacementRange:(struct _NSRange )arg3 replacementText:(id)arg4 ;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)decreaseSize:(id)arg0 ;
-(void)deleteBackward;
-(void)didEndEditing;
-(void)endSelectionChange;
-(void)forwardInvocation:(id)arg0 ;
-(void)increaseSize:(id)arg0 ;
-(void)insertAttributedText:(id)arg0 ;
-(void)insertDictationResult:(id)arg0 withCorrectionIdentifier:(id)arg1 ;
-(void)insertText:(id)arg0 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg0 ;
-(void)makeTextWritingDirectionNatural:(id)arg0 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg0 ;
-(void)notifyTextCheckingControllerForSelectionChange;
-(void)paste:(id)arg0 ;
-(void)pasteAndMatchStyle:(id)arg0 ;
-(void)pasteItemProviders:(id)arg0 ;
-(void)pasteItemProviders:(id)arg0 matchesStyle:(BOOL)arg1 ;
-(void)preheatTextChecker;
-(void)registerUndoOperationForType:(int)arg0 actionName:(id)arg1 affectedRange:(struct _NSRange )arg2 replacementText:(id)arg3 ;
-(void)removeAlternativesForCurrentWord;
-(void)removeAnnotation:(id)arg0 forRange:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg0 willInsertResult:(BOOL)arg1 ;
-(void)removeSpellingMarkersForCurrentWord;
-(void)removeSpellingMarkersFromWordInRange:(id)arg0 ;
-(void)removeTextPlaceholder:(id)arg0 ;
-(void)removeTextPlaceholder:(id)arg0 notifyInputDelegate:(BOOL)arg1 ;
-(void)removeTextStylingFromString:(id)arg0 ;
-(void)replace:(id)arg0 ;
-(void)replaceRange:(id)arg0 withAnnotatedString:(id)arg1 relativeReplacementRange:(struct _NSRange )arg2 ;
-(void)replaceRange:(id)arg0 withAttributedText:(id)arg1 ;
-(void)replaceRange:(id)arg0 withText:(id)arg1 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg0 replacementText:(id)arg1 ;
-(void)scheduleUndoOperationForType:(int)arg0 actionName:(id)arg1 previousSelectedRange:(struct _NSRange )arg2 replacementText:(id)arg3 ;
-(void)scrollRangeToVisible:(struct _NSRange )arg0 ;
-(void)select:(id)arg0 ;
-(void)selectAll;
-(void)selectAll:(id)arg0 ;
-(void)setAttributedMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)setBaseWritingDirection:(NSInteger)arg0 forRange:(id)arg1 ;
-(void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)stopCoalescing;
-(void)toggleBoldface:(id)arg0 ;
-(void)toggleItalics:(id)arg0 ;
-(void)toggleUnderline:(id)arg0 ;
-(void)undoDidChangeText;
-(void)undoWillChangeText;
-(void)unmarkText;
-(void)updateSelection;
-(void)updateTextAttributesWithConversionHandler:(id)arg0 ;
-(void)validateCommand:(id)arg0 ;


@end


#endif