// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKCIMAGETEXTSELECTIONVIEW_IOS_H
#define VKCIMAGETEXTSELECTIONVIEW_IOS_H

@class NSIndexSet, NSArray, NSString, UITextPosition, UIDragInteraction, UIInputContextHistory, UIColor, UILongPressGestureRecognizer, UITextRange, NSDictionary, UITextInputPasswordRules, UIImage, _UISupplementalLexicon, UIView, UITextInteraction, UITextSelectionGrabberSuppressionAssertion, UITextInputStringTokenizer;
@protocol UITextInteractionDelegate, VKCTextRecognitionResultTextDelegate, UIDragInteractionDelegate, UIScribbleInteractionDelegatePrivate, UITextInputTraits_Private, _UITextInputRevealItemProvider, _UITextInputTranslationSupport, VKCTextSelectionLongPressHandlerDelegate, UITextInput, UIKeyInput, UITextInputDelegate;


#import "VKCImageTextSelectionView.h"
#import "VKCTextSelectionLongPressDelegateHandler.h"
#import "VKCTextPointerTrackingView.h"

@interface VKCImageTextSelectionView_iOS : VKCImageTextSelectionView <UITextInteractionDelegate, VKCTextRecognitionResultTextDelegate, UIDragInteractionDelegate, UIScribbleInteractionDelegatePrivate, UITextInputTraits_Private, _UITextInputRevealItemProvider, _UITextInputTranslationSupport, VKCTextSelectionLongPressHandlerDelegate, UITextInput, UIKeyInput>



@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsInitialEmojiKeyboard;
@property (nonatomic) BOOL acceptsPayloads;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (readonly, nonatomic) NSArray *accessibilityElements; // ivar: _accessibilityElements
@property (nonatomic) NSInteger autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (nonatomic) NSInteger autocorrectionType;
@property (nonatomic) BOOL beginSelectionChangedCalled; // ivar: _beginSelectionChangedCalled
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry;
@property (nonatomic) BOOL disableHandwritingKeyboard;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (retain, nonatomic) UIDragInteraction *dragInteraction; // ivar: _dragInteraction
@property (nonatomic) NSUInteger draggedRectEdge; // ivar: _draggedRectEdge
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
@property (readonly, nonatomic, getter=isImageBacked) BOOL imageBacked;
@property (nonatomic) BOOL initializationComplete; // ivar: _initializationComplete
@property (retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property (weak, nonatomic) NSObject<UITextInputDelegate> *inputDelegate; // ivar: _inputDelegate
@property (readonly, nonatomic) id *insertDictationResultPlaceholder;
@property (retain, nonatomic) UIColor *insertionPointColor;
@property (nonatomic) NSUInteger insertionPointWidth;
@property (nonatomic) BOOL isCarPlayIdiom;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (nonatomic) BOOL learnsCorrections;
@property (nonatomic) BOOL loadKeyboardsForSiriLanguage;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGR; // ivar: _longPressGR
@property (retain, nonatomic) VKCTextSelectionLongPressDelegateHandler *longPressHandler; // ivar: _longPressHandler
@property (nonatomic) BOOL manuallySettingSelectedRange; // ivar: _manuallySettingSelectedRange
@property (readonly, nonatomic) UITextRange *markedTextRange; // ivar: _markedTextRange
@property (copy, nonatomic) NSDictionary *markedTextStyle; // ivar: _markedTextStyle
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) _NSRange preSelectionChangeSelectedRange; // ivar: _preSelectionChangeSelectedRange
@property (nonatomic) BOOL preferOnlineDictation;
@property (nonatomic) NSInteger preferredKeyboardStyle;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy) UITextRange *selectedTextRange; // ivar: _selectedTextRange
@property (nonatomic) NSInteger selectionAffinity; // ivar: _selectionAffinity
@property (retain, nonatomic) UIColor *selectionBarColor;
@property (retain, nonatomic) UIColor *selectionBorderColor;
@property (nonatomic) CGFloat selectionBorderWidth;
@property (nonatomic) CGFloat selectionCornerRadius;
@property (retain, nonatomic) UIImage *selectionDragDotImage;
@property (nonatomic) UIEdgeInsets selectionEdgeInsets;
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
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) UIView *textInputView;
@property (retain, nonatomic) UITextInteraction *textInteraction; // ivar: _textInteraction
@property (nonatomic) int textLoupeVisibility;
@property (weak, nonatomic) VKCTextPointerTrackingView *textPointerTrackingView; // ivar: _textPointerTrackingView
@property (readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
@property (nonatomic) NSInteger textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (retain, nonatomic) UITextSelectionGrabberSuppressionAssertion *textSelectionGrabberSuppression; // ivar: _textSelectionGrabberSuppression
@property (nonatomic) id *textSuggestionDelegate;
@property (nonatomic) *__CFCharacterSet textTrimmingSet;
@property (retain, nonatomic) UITextInputStringTokenizer *tokenizer; // ivar: _tokenizer
@property (retain, nonatomic) UIColor *underlineColorForSpelling;
@property (retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL useFullDocumentRangeForEmptySelection; // ivar: _useFullDocumentRangeForEmptySelection
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) _NSRange validTextRange;


+(BOOL)processHasSnapshotDragEntitlement;
-(BOOL)_scribbleInteractionShouldDisableInputAssistant:(id)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)interactionShouldBegin:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(BOOL)isEditable;
-(BOOL)isEditing;
-(BOOL)longPressHandler:(id)arg0 gestureRecognizer:(id)arg1 shouldRecieveTouch:(id)arg2 ;
-(BOOL)longPressHandler:(id)arg0 gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(BOOL)selectable;
-(NSInteger)_availableTextServices;
-(NSUInteger)currentDraggedRectEdge;
-(NSUInteger)draggedRectEdgeForTextRecognitionResult:(id)arg0 ;
-(id)_accessibilityUserTestingChildren;
-(id)_rvItemForSelectedRange;
-(id)_rvItemInRange:(struct _NSRange )arg0 ;
-(id)_textRangeForActions;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)selectedRange;
-(id)selectedTextPathsConvertedToView:(id)arg0 ;
-(id)targetedDragPreviewForCurrentSelection;
-(id)targetedDragPreviewWithLabelsForCurrentSelection;
-(id)text;
-(id)textRangeFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(struct _NSRange )preSelectionChangeSelectedRangeForTextRecognitionResult:(id)arg0 ;
-(struct _NSRange )selectedRangeForTextRecognitionResult:(id)arg0 ;
-(void)_addShortcut:(id)arg0 ;
-(void)_define:(id)arg0 ;
-(void)_lookup:(id)arg0 ;
-(void)_share:(id)arg0 ;
-(void)_translate:(id)arg0 ;
-(void)beginSelectionChange;
-(void)commonInit;
-(void)copy:(id)arg0 ;
-(void)deleteBackward;
-(void)didLongPress:(id)arg0 ;
-(void)endSelectionChange;
-(void)insertText:(id)arg0 ;
-(void)replaceRange:(id)arg0 withText:(id)arg1 ;
-(void)selectAll:(id)arg0 ;
-(void)setBaseWritingDirection:(NSInteger)arg0 forRange:(id)arg1 ;
-(void)setContentsRect:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setLongPressDataDetectorsInTextMode:(BOOL)arg0 ;
-(void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)setRecognitionResult:(id)arg0 ;
-(void)setSelectedRange:(id)arg0 ;
-(void)suppressSelectionViewGrabbers;
-(void)takeTraitsFrom:(id)arg0 ;
-(void)unmarkText;
-(void)unsuppressSelectionViewGrabbers;
-(void)updateSelectionRectsForWindowChange;
-(void)useInteractionOptions:(NSUInteger)arg0 ;


@end


#endif