// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIFIELDEDITOR_H
#define UIFIELDEDITOR_H

@class NSAttributedString, NSDictionary, NSTextContainer, NSTimer, UIView<_UITextCanvas>, NSIndexSet, RTIInputSystemSourceSession, NSString, NSLayoutManager, NSTextStorage;
@protocol UITextInputControllerDelegate, NSLayoutManagerDelegate, UIKeyInputPrivate, UITextFieldContent, NSUITextViewCommonMethods, UIAutoscrollContainer, UITextInput, UITextInputPrivate, UITextAutoscrolling, UIKeyboardInput, UITextInputDelegate, UITextInputSuggestionDelegate, UITextInputTokenizer;


#import "UIScrollView.h"
#import "UITextField.h"
#import "UIAutoscroll.h"
#import "UITextInputController.h"
#import "_UITextLayoutController.h"
#import "_UICascadingTextStorage.h"
#import "UITextPosition.h"
#import "UIInputContextHistory.h"
#import "UIColor.h"
#import "UITextInteractionAssistant.h"
#import "UITextRange.h"
#import "UITextInputPasswordRules.h"
#import "UIImage.h"
#import "_UISupplementalLexicon.h"
#import "UIView.h"

@interface UIFieldEditor : UIScrollView <UITextInputControllerDelegate, NSLayoutManagerDelegate, UIKeyInputPrivate, UITextFieldContent, NSUITextViewCommonMethods, UIAutoscrollContainer, UITextInput, UITextInputPrivate, UITextAutoscrolling, UIKeyboardInput>

 {
    UITextField *_textField;
    BOOL _active;
    UIAutoscroll *_autoscroll;
    NSAttributedString *_originalAttributedString;
    NSDictionary *_originalDefaultAttributes;
    UIEdgeInsets _contentInsetsFromFonts;
    UITextInputController *__textInputController;
    NSTextContainer *__textContainer;
    _UITextLayoutController *__textLayoutController;
    _UICascadingTextStorage *__textStorage;
    ? _feFlags;
    NSUInteger _obscuredSecureLength;
    NSTimer *_obscureAllTextTimer;
    CGFloat _desiredContentWidth;
    UIView<_UITextCanvas> *_contentView;
}


@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (readonly, nonatomic) RTIInputSystemSourceSession *_rtiSourceSession;
@property (copy, nonatomic, setter=_setScrollAnimationEndedAction:) id *_scrollAnimationEndedAction; // ivar: _scrollAnimationEndedAction
@property (nonatomic) BOOL _shouldObscureNextInput; // ivar: __shouldObscureNextInput
@property (nonatomic) NSInteger _textInputSource;
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsInitialEmojiKeyboard;
@property (nonatomic) BOOL acceptsPayloads;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) BOOL allowsAttachments; // ivar: _allowsAttachments
@property (nonatomic) NSInteger autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (nonatomic) NSInteger autocorrectionType;
@property (nonatomic) CGPoint autoscrollContentOffset; // ivar: _autoscrollContentOffset
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
@property (readonly, nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (readonly, nonatomic) NSLayoutManager *layoutManager;
@property (readonly, nonatomic) NSInteger layoutOrientation;
@property (nonatomic) BOOL learnsCorrections;
@property (nonatomic) BOOL loadKeyboardsForSiriLanguage;
@property (nonatomic) _NSRange markedRange;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (readonly, nonatomic) NSDictionary *markedTextStyle;
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
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
@property (nonatomic) BOOL shouldAutoscroll;
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
@property (readonly, nonatomic) NSTextContainer *textContainer;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) NSObject<UITextInputSuggestionDelegate> *textInputSuggestionDelegate;
@property (readonly, nonatomic) UIView *textInputView;
@property (readonly, nonatomic) _UITextLayoutController *textLayoutController;
@property (nonatomic) int textLoupeVisibility;
@property (readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
@property (nonatomic) NSInteger textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (readonly, nonatomic) NSTextStorage *textStorage;
@property (nonatomic) id *textSuggestionDelegate;
@property (nonatomic) *__CFCharacterSet textTrimmingSet;
@property (readonly, nonatomic) NSObject<UITextInputTokenizer> *tokenizer;
@property (copy, nonatomic) NSDictionary *typingAttributes;
@property (retain, nonatomic) UIColor *underlineColorForSpelling;
@property (retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) _NSRange validTextRange;


+(id)activeFieldEditor;
+(id)excludedElementsForHTML;
+(id)sharedFieldEditor;
-(BOOL)_clearOnEditIfNeeded;
-(BOOL)_hasDictationPlaceholder;
-(BOOL)_shouldIgnoreAutofillSave;
-(BOOL)_shouldObscureInput;
-(BOOL)hasMarkedText;
-(BOOL)isEditing;
-(BOOL)isFirstResponder;
-(BOOL)isHorizontallyResizable;
-(BOOL)keyboardInput:(id)arg0 shouldInsertText:(id)arg1 isMarkedText:(BOOL)arg2 ;
-(BOOL)keyboardInput:(id)arg0 shouldReplaceTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(BOOL)keyboardInputChanged:(id)arg0 ;
-(BOOL)keyboardInputShouldDelete:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)setUpClippingWithMaskForBounds:(struct CGRect )arg0 contentFrame:(struct CGRect )arg1 ;
-(BOOL)textInput:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(BOOL)textInputShouldExtendCaretHeight:(id)arg0 ;
-(CGFloat)_passcodeStyleAlpha;
-(NSInteger)baseWritingDirectionForPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(NSInteger)comparePosition:(id)arg0 toPosition:(id)arg1 ;
-(NSInteger)layoutManager:(id)arg0 shouldUseAction:(NSInteger)arg1 forControlCharacterAtIndex:(NSUInteger)arg2 ;
-(NSInteger)nonEditingLinebreakMode;
-(NSInteger)offsetFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(NSUInteger)layoutManager:(id)arg0 shouldGenerateGlyphs:(*unsigned short)arg1 properties:(*NSInteger)arg2 characterIndexes:(*NSUInteger)arg3 font:(id)arg4 forGlyphRange:(struct _NSRange )arg5 ;
-(id)_inputController;
-(id)_responderForBecomeFirstResponder;
-(id)_textCanvasView;
-(id)_textInputController;
-(id)_textInputTraits;
-(id)_textSelectingContainer;
-(id)attributedSubstringForMarkedRange;
-(id)attributedText;
-(id)attributedTextInRange:(id)arg0 ;
-(id)characterRangeAtPoint:(struct CGPoint )arg0 ;
-(id)characterRangeByExtendingPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 withinRange:(id)arg1 ;
-(id)font;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTextField:(id)arg0 ;
-(id)insertTextPlaceholderWithSize:(struct CGSize )arg0 ;
-(id)layoutManager:(id)arg0 effectiveCUICatalogForTextEffect:(id)arg1 ;
-(id)linkTextAttributes;
-(id)metadataDictionariesForDictationResults;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)positionFromPosition:(id)arg0 inDirection:(NSInteger)arg1 offset:(NSInteger)arg2 ;
-(id)positionFromPosition:(id)arg0 offset:(NSInteger)arg1 ;
-(id)positionWithinRange:(id)arg0 farthestInDirection:(NSInteger)arg1 ;
-(id)rangeWithTextAlternatives:(*id)arg0 atPosition:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg0 ;
-(id)text;
-(id)textColor;
-(id)textColorForCaretSelection;
-(id)textField;
-(id)textInRange:(id)arg0 ;
-(id)textInputTraits;
-(id)textRangeFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(id)undoManager;
-(int)scrollXOffset;
-(int)scrollYOffset;
-(struct CGPoint )textContainerOriginForTextAlignment:(NSInteger)arg0 ;
-(struct CGRect )_responderExternalTouchRectForWindow:(id)arg0 ;
-(struct CGRect )_selectionClipRect;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )contentFrameForView:(id)arg0 ;
-(struct CGRect )firstRectForRange:(id)arg0 ;
-(struct CGRect )frameForDictationResultPlaceholder:(id)arg0 ;
-(struct CGRect )layoutManager:(id)arg0 boundingBoxForControlGlyphAtIndex:(NSUInteger)arg1 forTextContainer:(id)arg2 proposedLineFragment:(struct CGRect )arg3 glyphPosition:(struct CGPoint )arg4 characterIndex:(NSUInteger)arg5 ;
-(struct CGRect )visibleRect;
-(struct CGSize )minSize;
-(struct UIEdgeInsets )_contentInsetsFromFonts;
-(struct UIEdgeInsets )_fullContentInsetsFromFonts;
-(struct _NSRange )_unobscuredSecureRange;
-(struct _NSRange )insertFilteredText:(id)arg0 ;
-(struct _NSRange )selectionRange;
-(struct _NSRange )textInput:(id)arg0 willChangeSelectionFromCharacterRange:(struct _NSRange )arg1 toCharacterRange:(struct _NSRange )arg2 ;
-(void)_applyCorrectTextContainerSize;
-(void)_applyCorrectTextContainerSize:(id)arg0 ;
-(void)_cancelObscureAllTextTimer;
-(void)_deactivateSelectionView;
-(void)_deleteBackwardAndNotify:(BOOL)arg0 ;
-(void)_ephemerallyUnobscureCharacterAtIndex:(NSUInteger)arg0 ;
-(void)_ephemerallyUnobscureTextInRange:(struct _NSRange )arg0 ;
-(void)_handleObscuredTextAfterActivationChange;
-(void)_invalidateAfterObscuredRangeChangeIfNeeded;
-(void)_obscureAllText;
-(void)_performWhileSuppressingDelegateNotifications:(id)arg0 ;
-(void)_scrollRangeToVisible:(struct _NSRange )arg0 animated:(BOOL)arg1 ;
-(void)_scrollViewAnimationEnded:(id)arg0 finished:(BOOL)arg1 ;
-(void)_setAttributedTextInRange:(struct _NSRange )arg0 replacementText:(id)arg1 andSetCaretSelectionAfterText:(BOOL)arg2 ;
-(void)_setNeedsInvalidateAfterObscuredRangeChange;
-(void)_setTextInRange:(struct _NSRange )arg0 replacementText:(id)arg1 andSetCaretSelectionAfterText:(BOOL)arg2 ;
-(void)_setValue:(id)arg0 forTextAttribute:(id)arg1 ;
-(void)_textStorageDidProcessEditing:(id)arg0 ;
-(void)_tvUpdateTextColor;
-(void)_unobscureAllText;
-(void)_unobscureTextInRange:(struct _NSRange )arg0 settingTimerToReobscure:(BOOL)arg1 ;
-(void)_updateLayoutManagerStyleEffectConfiguration;
-(void)activateEditor;
-(void)addTextAlternativesDisplayStyle:(NSInteger)arg0 toRange:(struct _NSRange )arg1 ;
-(void)beginSelectionChange;
-(void)cancelAutoscroll;
-(void)clearText;
-(void)deactivateEditorDiscardingEdits:(BOOL)arg0 ;
-(void)dealloc;
-(void)deleteBackward;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)endSelectionChange;
-(void)insertAttributedText:(id)arg0 ;
-(void)insertDictationResult:(id)arg0 withCorrectionIdentifier:(id)arg1 ;
-(void)insertText:(id)arg0 ;
-(void)invalidateTextContainerOrigin;
-(void)keyboardInputChangedSelection:(id)arg0 ;
-(void)layoutManager:(id)arg0 didCompleteLayoutForTextContainer:(id)arg1 atEnd:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)removeDictationResultPlaceholder:(id)arg0 willInsertResult:(BOOL)arg1 ;
-(void)removeTextPlaceholder:(id)arg0 ;
-(void)replaceRange:(id)arg0 withAttributedText:(id)arg1 ;
-(void)replaceRange:(id)arg0 withText:(id)arg1 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg0 replacementText:(id)arg1 ;
-(void)scrollSelectionToVisible:(BOOL)arg0 ;
-(void)selectAll;
-(void)setAttributedMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)setAttributedText:(id)arg0 ;
-(void)setAttributedText:(id)arg0 andSetCaretSelectionAfterText:(BOOL)arg1 ;
-(void)setAttributedTextInRange:(struct _NSRange )arg0 replacementText:(id)arg1 ;
-(void)setBaseWritingDirection:(NSInteger)arg0 forRange:(id)arg1 ;
-(void)setConstrainedFrameSize:(struct CGSize )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)setFont:(id)arg0 ;
-(void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 avoidAdditionalLayout:(BOOL)arg1 ;
-(void)setNonEditingLinebreakMode:(NSInteger)arg0 ;
-(void)setScrollXOffset:(int)arg0 scrollYOffset:(int)arg1 ;
-(void)setScrollXOffset:(int)arg0 scrollYOffset:(int)arg1 adjustForPurpleCaret:(BOOL)arg2 ;
-(void)setSelection:(struct _NSRange )arg0 ;
-(void)setText:(id)arg0 ;
-(void)setText:(id)arg0 andSetCaretSelectionAfterText:(BOOL)arg1 ;
-(void)setTextColor:(id)arg0 ;
-(void)setTextInRange:(struct _NSRange )arg0 replacementText:(id)arg1 ;
-(void)startAutoscroll:(struct CGPoint )arg0 ;
-(void)textContainerUsageDidChangeToBounds:(struct CGRect )arg0 ;
-(void)textInput:(id)arg0 prepareAttributedTextForInsertion:(id)arg1 ;
-(void)textInputDidAnimatePaste:(id)arg0 ;
-(void)textInputDidChange:(id)arg0 ;
-(void)textInputDidChangeSelection:(id)arg0 ;
-(void)textInputWillAnimatePaste:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unmarkText;
-(void)updateAutoscroll:(id)arg0 ;
-(void)updateInsertionPointStateAndRestartTimer:(BOOL)arg0 ;


@end


#endif