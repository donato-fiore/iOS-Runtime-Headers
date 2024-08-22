// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNATOMTEXTVIEW_H
#define CNATOMTEXTVIEW_H

@class UIControl, UITextInputTraits, _UITextFieldRoundedRectBackgroundViewNeue, UIScrollView, UILabel, UIButton, NSMutableArray, NSLayoutConstraint, NSIndexSet, RTIInputSystemSourceSession, NSString, UITextPosition, UIFont, UIInputContextHistory, UIColor, UITextInteractionAssistant, UIView, UITextRange, NSDictionary, UITextInputPasswordRules, NSArray, UIImage, _UISupplementalLexicon;
@protocol NSLayoutManagerDelegate, UITextViewDelegate, UITextInputPrivate, UITextInput, CNAtomTextViewDelegate, UITextInputDelegate, UITextInputSuggestionDelegate, UITextInputTokenizer;


#import "_CNAtomFieldEditor.h"
#import "_CNAtomTextViewBaselineLayoutStrut.h"

@interface CNAtomTextView : UIControl <NSLayoutManagerDelegate, UITextViewDelegate, UITextInputPrivate, UITextInput>

 {
    UITextInputTraits *_textInputTraits;
    _UITextFieldRoundedRectBackgroundViewNeue *_background;
    UIScrollView *_scrollView;
    _CNAtomFieldEditor *_textView;
    UILabel *_placeholderLabel;
    UIButton *_clearButton;
    NSMutableArray *_atomViews;
    _CNAtomTextViewBaselineLayoutStrut *_baselineLayoutLabel;
    NSLayoutConstraint *_baselineLayoutConstraint;
    ? _flags;
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
@property (readonly, nonatomic) UIButton *clearButton;
@property (nonatomic) NSDirectionalEdgeInsets clearButtonInsets; // ivar: _clearButtonInsets
@property (nonatomic) NSInteger clearButtonMode; // ivar: _clearButtonMode
@property (nonatomic) BOOL contentsIsSingleValue;
@property (readonly, copy, nonatomic) NSString *currentEditingString;
@property (readonly, nonatomic) NSInteger cursorBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder;
@property (weak, nonatomic) NSObject<CNAtomTextViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry;
@property (nonatomic) BOOL disableHandwritingKeyboard;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (nonatomic, getter=_drawsDebugBaselines, setter=_setDrawsDebugBaselines:) BOOL drawsDebugBaselines; // ivar: _drawsDebugBaselines
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (readonly, nonatomic, getter=_fieldEditor) _CNAtomFieldEditor *fieldEditor;
@property (nonatomic) UIEdgeInsets floatingKeyboardEdgeInsets;
@property (retain, nonatomic) UIFont *font; // ivar: _font
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
@property (retain, nonatomic) UIView *leadingView; // ivar: _leadingView
@property (nonatomic) NSDirectionalEdgeInsets leadingViewInsets; // ivar: _leadingViewInsets
@property (nonatomic) NSInteger leadingViewMode; // ivar: _leadingViewMode
@property (nonatomic) BOOL learnsCorrections;
@property (nonatomic) BOOL loadKeyboardsForSiriLanguage;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (retain, nonatomic) UIColor *placeholderColor; // ivar: _placeholderColor
@property (nonatomic) NSDirectionalEdgeInsets placeholderInsets; // ivar: _placeholderInsets
@property (readonly, nonatomic) UILabel *placeholderLabel;
@property (nonatomic) BOOL preferOnlineDictation;
@property (nonatomic) NSInteger preferredKeyboardStyle;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (copy, nonatomic) NSArray *representedObjects;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (readonly, copy, nonatomic) NSArray *selectedRepresentedObjects;
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
@property (readonly, nonatomic, getter=_systemBackgroundView) UIView *systemBackgroundView;
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) NSObject<UITextInputSuggestionDelegate> *textInputSuggestionDelegate;
@property (readonly, nonatomic) UIView *textInputView;
@property (nonatomic) NSDirectionalEdgeInsets textInsets; // ivar: _textInsets
@property (nonatomic) int textLoupeVisibility;
@property (readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
@property (nonatomic) NSInteger textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id *textSuggestionDelegate;
@property (nonatomic) *__CFCharacterSet textTrimmingSet;
@property (readonly, nonatomic) NSObject<UITextInputTokenizer> *tokenizer;
@property (retain, nonatomic) UIView *trailingView; // ivar: _trailingView
@property (nonatomic) NSDirectionalEdgeInsets trailingViewInsets; // ivar: _trailingViewInsets
@property (nonatomic) NSInteger trailingViewMode; // ivar: _trailingViewMode
@property (retain, nonatomic) UIColor *underlineColorForSpelling;
@property (retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) _NSRange validTextRange;


+(Class)_backgroundViewClass;
+(id)defaultFont;
+(id)defaultPlaceholderColor;
+(id)defaultTextColor;
-(BOOL)_hasContent;
-(BOOL)_showViewWithMode:(NSInteger)arg0 alwaysDefinition:(BOOL)arg1 ;
-(BOOL)_showsClearButton;
-(BOOL)_showsLeadingView;
-(BOOL)_showsPlaceholder;
-(BOOL)_showsTrailingView;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canResignFirstResponder;
-(BOOL)hasContent;
-(BOOL)hasSelection;
-(BOOL)isFirstResponder;
-(BOOL)isPosition:(id)arg0 atBoundary:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(BOOL)isPosition:(id)arg0 withinTextUnit:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(BOOL)keyboardInputChanged:(id)arg0 ;
-(BOOL)resignFirstResponder;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(NSInteger)baseWritingDirectionForPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(NSInteger)comparePosition:(id)arg0 toPosition:(id)arg1 ;
-(NSInteger)offsetFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(id)_atomLayoutViewForRepresentedObject:(id)arg0 ;
-(id)_attachmentAtCharacterIndex:(NSUInteger)arg0 ;
-(id)_baseAttributedStringWithRepresentedObject:(id)arg0 ;
-(id)_clearButtonImageForState:(NSUInteger)arg0 ;
-(id)_representedObjectsFromPasteboard:(id)arg0 ;
-(id)_representedObjectsInRange:(struct _NSRange )arg0 ranges:(*id)arg1 ;
-(id)_supportedPasteboardTypes;
-(id)baseAttributes;
-(id)baseAttributesWithRepresentedObject:(id)arg0 ;
-(id)characterRangeAtPoint:(struct CGPoint )arg0 ;
-(id)characterRangeByExtendingPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 withinRange:(id)arg1 ;
-(id)currentEditingString:(struct _NSRange *)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)keyCommands;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)paragraphStyle;
-(id)positionFromPosition:(id)arg0 inDirection:(NSInteger)arg1 offset:(NSInteger)arg2 ;
-(id)positionFromPosition:(id)arg0 offset:(NSInteger)arg1 ;
-(id)positionFromPosition:(id)arg0 toBoundary:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(id)positionWithinRange:(id)arg0 atCharacterOffset:(NSInteger)arg1 ;
-(id)positionWithinRange:(id)arg0 farthestInDirection:(NSInteger)arg1 ;
-(id)rangeEnclosingPosition:(id)arg0 withGranularity:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(id)selectionRectsForRange:(id)arg0 ;
-(id)textInRange:(id)arg0 ;
-(id)textInputTraits;
-(id)textRangeFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(id)viewForLastBaselineLayout;
-(struct CGPoint )_firstGlyphBaselineLeftPointWithLayoutManager:(id)arg0 ;
-(struct CGRect )_rectForBounds:(struct CGRect )arg0 sizingView:(id)arg1 isLeft:(BOOL)arg2 ;
-(struct CGRect )_usedRectWithLayoutManager:(id)arg0 textContainer:(id)arg1 ;
-(struct CGRect )_visibleAtomsRect;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )clearButtonFrameForBounds:(struct CGRect )arg0 ;
-(struct CGRect )firstRectForRange:(id)arg0 ;
-(struct CGRect )leadingViewFrameForBounds:(struct CGRect )arg0 ;
-(struct CGRect )placeholderFrameForBounds:(struct CGRect )arg0 ;
-(struct CGRect )trailingViewFrameForBounds:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )_edgeInsetsForDirectionalInsets:(struct NSDirectionalEdgeInsets )arg0 ;
-(struct UIEdgeInsets )edgeInsets;
-(struct _NSRange )_characterRangeForAtomView:(id)arg0 ;
-(struct _NSRange )selectionRange;
-(void)_clearButtonTapped:(id)arg0 ;
-(void)_createBaselineLayoutStrutIfNecessary;
-(void)_deleteCharactersInStorage:(id)arg0 ranges:(id)arg1 rangeToAdjust:(struct _NSRange *)arg2 ;
-(void)_insertRepresentedObjects:(id)arg0 atCharacterRange:(struct _NSRange )arg1 ;
-(void)_layoutButtons;
-(void)_layoutPlaceholder;
-(void)_removeRepresentedObjectsInCharacterRange:(struct _NSRange )arg0 ;
-(void)_scrollToSelectionIfNeeded;
-(void)_setEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_storeRepresentedObjects:(id)arg0 onPasteboard:(id)arg1 ;
-(void)_tapRecognized:(id)arg0 ;
-(void)_textStorageDidProcessEditing:(id)arg0 ;
-(void)_updateAtomMasksInRect:(struct CGRect )arg0 ;
-(void)_updateBaselineConstraintIfNecessaryUsingTextViewFrame:(struct CGRect )arg0 ;
-(void)addRepresentedObject:(id)arg0 ;
-(void)dealloc;
-(void)deleteBackward;
-(void)escKeyPressed:(id)arg0 ;
-(void)insertRepresentedObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertText:(id)arg0 ;
-(void)keyboardInputChangedSelection:(id)arg0 ;
-(void)layoutManager:(id)arg0 didCompleteLayoutForTextContainer:(id)arg1 atEnd:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)removeRepresentedObject:(id)arg0 ;
-(void)removeRepresentedObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeRepresentedObjects:(id)arg0 ;
-(void)removeRepresentedObjectsAtIndexes:(id)arg0 ;
-(void)replaceCurrentEditingStringWithRepresentedObject:(id)arg0 ;
-(void)replaceCurrentEditingStringWithRepresentedObject:(id)arg0 autoSelect:(BOOL)arg1 ;
-(void)replaceRange:(id)arg0 withText:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)selectAll;
-(void)setBaseWritingDirection:(NSInteger)arg0 forRange:(id)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)takeTraitsFrom:(id)arg0 ;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidChangeSelection:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;
-(void)unmarkText;


@end


#endif