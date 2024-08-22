// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTCONTENTVIEW_H
#define UITEXTCONTENTVIEW_H

@class WebFrame, DOMHTMLElement, UIFont, NSAttributedString, NSString, NSDictionary;
@protocol WebPolicyDelegate, WebEditingDelegate, UIWebDraggingDelegate, UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, UITextInput, UITextLinkInteraction, UITextInputTraits, UITextContentViewDelegate, UITextInputDelegate, UITextInputTokenizer;


#import "UIView.h"
#import "UITextInteractionAssistant.h"
#import "UIWebDocumentView.h"
#import "UIColor.h"
#import "UIDragInteraction.h"
#import "UIDropInteraction.h"
#import "UITextPosition.h"
#import "UITextRange.h"
#import "UITextInputPasswordRules.h"

@interface UITextContentView : UIView <WebPolicyDelegate, WebEditingDelegate, UIWebDraggingDelegate, UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, UITextInput, UITextLinkInteraction, UITextInputTraits>

 {
    WebFrame *m_frame;
    DOMHTMLElement *m_body;
    int m_marginTop;
    CGFloat m_bottomBufferHeight;
    BOOL m_editable;
    BOOL m_becomesEditableWithGestures;
    BOOL m_becomingFirstResponder;
    BOOL m_reentrancyGuard;
    BOOL m_hasExplicitTextAlignment;
    BOOL m_allowsEditingTextAttributes;
    BOOL m_usesAttributedText;
    UITextInteractionAssistant *m_interactionAssistant;
    UIWebDocumentView *m_webView;
    UIFont *m_font;
    UIColor *m_textColor;
    NSInteger m_textAlignment;
    UIDragInteraction *m_dragInteraction;
    UIDropInteraction *m_dropInteraction;
}


@property (nonatomic) BOOL allowsEditingTextAttributes;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UITextContentViewDelegate> *delegate; // ivar: m_delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDragInteractionEnabled) BOOL dragInteractionEnabled; // ivar: _dragInteractionEnabled
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: m_editing
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (retain, nonatomic) UIFont *font;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<UITextInputDelegate> *inputDelegate;
@property (readonly, nonatomic) id *insertDictationResultPlaceholder;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic) BOOL scrollsSelectionOnWebDocumentChanges; // ivar: m_scrollsSelectionOnWebDocumentChanges
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) _NSRange selectedRange;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) NSInteger selectionAffinity;
@property (nonatomic) UIEdgeInsets selectionInset; // ivar: m_selectionInset
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) UIView *textInputView;
@property (readonly, nonatomic) NSObject<UITextInputTokenizer> *tokenizer;


+(id)excludedElementsForHTML;
-(BOOL)_restoreFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)becomesEditableWithGestures;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canResignFirstResponder;
-(BOOL)dragInteractionEnabled;
-(BOOL)hasMarkedText;
-(BOOL)hasSelection;
-(BOOL)isFirstResponder;
-(BOOL)isInteractingWithLink;
-(BOOL)keyboardInput:(id)arg0 shouldInsertText:(id)arg1 isMarkedText:(BOOL)arg2 ;
-(BOOL)keyboardInput:(id)arg0 shouldReplaceTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(BOOL)keyboardInputChanged:(id)arg0 ;
-(BOOL)keyboardInputShouldDelete:(id)arg0 ;
-(BOOL)mightHaveLinks;
-(BOOL)resignFirstResponder;
-(BOOL)shouldStartDataDetectors;
-(BOOL)willInteractWithLinkAtPoint:(struct CGPoint )arg0 ;
-(CGFloat)bottomBufferHeight;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(NSInteger)_dropInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(NSInteger)baseWritingDirectionForPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(NSInteger)comparePosition:(id)arg0 toPosition:(id)arg1 ;
-(NSInteger)offsetFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(NSInteger)selectionGranularity;
-(NSUInteger)_allowedLinkTypes;
-(NSUInteger)dataDetectorTypes;
-(NSUInteger)offsetInMarkedTextForSelection:(id)arg0 ;
-(id)_keyboardResponder;
-(id)_proxyTextInput;
-(id)automaticallySelectedOverlay;
-(id)characterRangeAtPoint:(struct CGPoint )arg0 ;
-(id)characterRangeByExtendingPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 withinRange:(id)arg1 ;
-(id)contentAsAttributedString;
-(id)contentAsHTMLString;
-(id)documentFragmentForPasteboardItemAtIndex:(NSInteger)arg0 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForCancellingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dropInteraction:(id)arg0 previewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 webView:(id)arg1 ;
-(id)insertTextPlaceholderWithSize:(struct CGSize )arg0 ;
-(id)interactionAssistant;
-(id)metadataDictionariesForDictationResults;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)positionFromPosition:(id)arg0 inDirection:(NSInteger)arg1 offset:(NSInteger)arg2 ;
-(id)positionFromPosition:(id)arg0 offset:(NSInteger)arg1 ;
-(id)positionWithinRange:(id)arg0 farthestInDirection:(NSInteger)arg1 ;
-(id)selectedText;
-(id)selectionRectsForRange:(id)arg0 ;
-(id)selectionView;
-(id)styleString;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)textInRange:(id)arg0 ;
-(id)textRangeFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(id)textStylingAtPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)undoManager;
-(id)undoManagerForWebView:(id)arg0 ;
-(id)webView;
-(int)marginTop;
-(struct CGPoint )constrainedPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )offset;
-(struct CGRect )_selectionClipRect;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )caretRectForVisiblePosition:(id)arg0 ;
-(struct CGRect )closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint )arg0 ;
-(struct CGRect )firstRectForRange:(id)arg0 ;
-(struct CGRect )frameForDictationResultPlaceholder:(id)arg0 ;
-(struct CGRect )rectForScrollToVisible;
-(struct CGRect )rectForSelection:(struct _NSRange )arg0 ;
-(struct CGRect )visibleRect;
-(struct CGRect )visibleTextRect;
-(struct _NSRange )selectionRange;
-(void)_addShortcut:(id)arg0 ;
-(void)_define:(id)arg0 ;
-(void)_didScroll;
-(void)_hideSelectionCommands;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg0 ;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_promptForReplace:(id)arg0 ;
// -(void)_removeAttribute:(id)arg0 fromString:(id)arg1 andSetPropertyWith:(id)arg2 usingValueClass:(unk)arg3  ;
-(void)_removeTextViewPropertiesFromText:(id)arg0 ;
-(void)_scrollViewDidEndDecelerating;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg0 ;
-(void)_scrollViewWillBeginDragging;
-(void)_share:(id)arg0 ;
-(void)_showTextStyleOptions:(id)arg0 ;
-(void)_sizeChanged;
-(void)_translate:(id)arg0 ;
-(void)_transliterateChinese:(id)arg0 ;
-(void)beginSelectionChange;
-(void)cancelAutoscroll;
-(void)cancelDataDetectorsWithWebLock;
-(void)cancelInteractionWithLink;
-(void)commonInitWithWebDocumentView:(id)arg0 isDecoding:(BOOL)arg1 ;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)decreaseSize:(id)arg0 ;
-(void)deleteBackward;
-(void)didMoveToSuperview;
-(void)displayScrollerIndicators;
-(void)dragInteraction:(id)arg0 session:(id)arg1 didEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 willAnimateLiftWithAnimator:(id)arg1 session:(id)arg2 ;
-(void)dropInteraction:(id)arg0 concludeDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 item:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidExit:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endSelectionChange;
-(void)ensureSelection;
-(void)forwardInvocation:(id)arg0 ;
-(void)increaseSize:(id)arg0 ;
-(void)insertDictationResult:(id)arg0 withCorrectionIdentifier:(id)arg1 ;
-(void)insertText:(id)arg0 ;
-(void)keyboardDidShow:(id)arg0 ;
-(void)keyboardInputChangedSelection:(id)arg0 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg0 ;
-(void)makeTextWritingDirectionNatural:(id)arg0 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg0 ;
-(void)paste:(id)arg0 ;
-(void)pasteAndMatchStyle:(id)arg0 ;
-(void)performBecomeEditableTasks;
-(void)performScrollSelectionToVisible:(BOOL)arg0 ;
-(void)recalculateStyle;
-(void)removeDictationResultPlaceholder:(id)arg0 willInsertResult:(BOOL)arg1 ;
-(void)removeFromSuperview;
-(void)removeTextPlaceholder:(id)arg0 ;
-(void)replace:(id)arg0 ;
-(void)replaceRange:(id)arg0 withText:(id)arg1 ;
-(void)resetDataDetectorsResultsWithWebLock;
-(void)scrollRangeToVisible:(struct _NSRange )arg0 ;
-(void)scrollRectToVisible:(struct CGRect )arg0 animated:(BOOL)arg1 ;
-(void)scrollSelectionToVisible:(BOOL)arg0 ;
-(void)select:(id)arg0 ;
-(void)selectAll;
-(void)selectAll:(id)arg0 ;
-(void)setBaseWritingDirection:(NSInteger)arg0 forRange:(id)arg1 ;
-(void)setBecomesEditableWithGestures:(BOOL)arg0 ;
-(void)setBottomBufferHeight:(CGFloat)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentToAttributedString:(id)arg0 ;
-(void)setContentToHTMLString:(id)arg0 ;
-(void)setDataDetectorTypes:(NSUInteger)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setMarginTop:(int)arg0 ;
-(void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)setOffset:(struct CGPoint )arg0 ;
-(void)setSelectionChangeCallbacksDisabled:(BOOL)arg0 ;
-(void)setSelectionGranularity:(NSInteger)arg0 ;
-(void)setSelectionToEnd;
-(void)setSelectionToStart;
-(void)setSelectionWithPoint:(struct CGPoint )arg0 ;
-(void)startAutoscroll:(struct CGPoint )arg0 ;
-(void)startDataDetectorsWithWebLock;
-(void)startInteractionWithLinkAtPoint:(struct CGPoint )arg0 ;
-(void)startLongInteractionWithLinkAtPoint:(struct CGPoint )arg0 ;
-(void)tapLinkAtPoint:(struct CGPoint )arg0 ;
-(void)toggleBoldface:(id)arg0 ;
-(void)toggleItalics:(id)arg0 ;
-(void)toggleUnderline:(id)arg0 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)unmarkText;
-(void)updateContentEditableAttribute:(BOOL)arg0 ;
-(void)updateInteractionWithLinkAtPoint:(struct CGPoint )arg0 ;
-(void)updateSelection;
-(void)validateInteractionWithLinkAtPoint:(struct CGPoint )arg0 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 request:(id)arg2 frame:(id)arg3 decisionListener:(id)arg4 ;
-(void)webViewDidChange:(id)arg0 ;


@end


#endif