// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDTEXTINPUTRESPONDER_H
#define TSDTEXTINPUTRESPONDER_H

@class UIResponder, UITextPosition, NSString, UITextRange, NSDictionary, UITextInputPasswordRules, UIView;
@protocol UITextInput, UIResponderStandardEditActions, _UITextInputRevealSupport, TSDTextInput, UITextInputDelegate, UITextInputTokenizer;


#import "TSDTextInputTokenizer.h"
#import "TSDTextPosition.h"

@interface TSDTextInputResponder : UIResponder <UITextInput, UIResponderStandardEditActions, _UITextInputRevealSupport>

 {
    TSDTextInputTokenizer *_tokenizer;
    BOOL _isResigning;
    int _respondingToUITextInput;
    BOOL _isSettingSelectedTextRange;
    TSDTextPosition *_referencePosition;
    NSInteger _referenceOffset;
    TSDTextPosition *_cachedPosition;
    BOOL _pendingEditorChange;
    NSObject<TSDTextInput> *_pendingEditor;
    BOOL _pendingFirstResponderChange;
    id<TSDTextInput> *_pendingFirstResponderObject;
    BOOL _inDynamicOperation;
    UIResponder *_nextResponder;
    BOOL _editorRespondsToRawArrowKeySelectors;
    int _ignoreKeyboardInputCount;
}


@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<TSDTextInput> *editor; // ivar: _editor
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<UITextInputDelegate> *inputDelegate; // ivar: _inputDelegate
@property (readonly, nonatomic) id *insertDictationResultPlaceholder;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic) float preferredEndPosition; // ivar: _preferredEndPosition
@property (nonatomic) float preferredStartPosition; // ivar: _preferredStartPosition
@property (readonly, nonatomic, getter=isResigning) BOOL resigning;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) NSInteger selectionAffinity;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) UIView *textInputView;
@property (readonly, nonatomic) NSObject<UITextInputTokenizer> *tokenizer;


-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canResignFirstResponder;
-(BOOL)p_currentEditorIsNotOnMyCanvas;
-(BOOL)p_didEnterUITextInput;
-(BOOL)p_isExecutingUITextInput;
-(BOOL)p_requiresFirstResponderChangeForEditor:(id)arg0 ;
-(BOOL)p_resignFirstResponder;
-(BOOL)p_wantRawArrowKeys;
-(BOOL)resignFirstResponder;
-(NSInteger)_indexForTextPosition:(id)arg0 ;
-(NSInteger)baseWritingDirectionForPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(NSInteger)comparePosition:(id)arg0 toPosition:(id)arg1 ;
-(NSInteger)offsetFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(id)_selectableText;
-(id)_textRangeFromNSRange:(struct _NSRange )arg0 ;
-(id)characterRangeAtPoint:(struct CGPoint )arg0 ;
-(id)characterRangeByExtendingPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 withinRange:(id)arg1 ;
-(id)editingTextRep;
-(id)editingTextReps;
-(id)initWithNextResponder:(id)arg0 ;
-(id)inputAccessoryView;
-(id)inputView;
-(id)keyCommands;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)nextResponder;
-(id)p_ICC;
-(id)positionFromPosition:(id)arg0 inDirection:(NSInteger)arg1 offset:(NSInteger)arg2 ;
-(id)positionFromPosition:(id)arg0 offset:(NSInteger)arg1 ;
-(id)positionWithinRange:(id)arg0 farthestInDirection:(NSInteger)arg1 ;
-(id)rectsForRange:(id)arg0 ;
-(id)selectionRectsForRange:(id)arg0 ;
-(id)superview;
-(id)textInRange:(id)arg0 ;
-(id)textRangeFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(id)textStylingAtPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )firstRectForRange:(id)arg0 ;
-(struct _NSRange )_nsrangeForTextRange:(id)arg0 ;
-(struct _NSRange )_selectedNSRange;
-(void)acceptAutocorrection;
-(void)beginIgnoringKeyboardInput;
-(void)cancelDelayedResponderChange;
-(void)canvasWillRotate;
-(void)canvasWillScroll;
-(void)canvasWillZoom;
-(void)clearEditorAndResignFirstResponder;
-(void)customAction6:(id)arg0 ;
-(void)customAction7:(id)arg0 ;
-(void)customAction8:(id)arg0 ;
-(void)dealloc;
-(void)delete:(id)arg0 ;
-(void)deleteBackward;
-(void)deleteForward;
-(void)editorDidChangeSelection:(id)arg0 ;
-(void)editorDidChangeSelection:(id)arg0 withFlags:(NSUInteger)arg1 ;
-(void)endIgnoringKeyboardInput;
-(void)forceDelayedResponderChange;
-(void)forwardInvocation:(id)arg0 ;
-(void)insertDictationResult:(id)arg0 ;
-(void)insertText:(id)arg0 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg0 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg0 ;
-(void)p_didUndoRedoChangeNotification:(id)arg0 ;
-(void)p_editorDidInsertTextNotification:(id)arg0 ;
-(void)p_editorSelectionWasForciblyChangedNotification:(id)arg0 ;
-(void)p_editorWillClearSelectionNotification:(id)arg0 ;
-(void)p_editorWillHandleTapNotification:(id)arg0 ;
-(void)p_editorWillStyleTextNotification:(id)arg0 ;
-(void)p_finishDynamicOperation:(id)arg0 ;
-(void)p_setFirstResponder:(id)arg0 ;
-(void)p_setFirstResponderAfterDelay;
-(void)p_setFirstResponderAndEditor:(id)arg0 ;
-(void)p_setFirstResponderAndEditorAfterDelay;
-(void)p_startDynamicOperation:(id)arg0 ;
-(void)p_textChanged;
-(void)p_unmarkText;
-(void)p_willExitUITextInput;
-(void)p_willShowPopoverNotification:(id)arg0 ;
-(void)p_willUndoChangeNotification:(id)arg0 ;
-(void)replaceRange:(id)arg0 withText:(id)arg1 ;
-(void)resumeEditing;
-(void)selectAll:(id)arg0 ;
-(void)setBaseWritingDirection:(NSInteger)arg0 forRange:(id)arg1 ;
-(void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)teardown;
-(void)toggleBoldface:(id)arg0 ;
-(void)toggleItalics:(id)arg0 ;
-(void)toggleUnderline:(id)arg0 ;
-(void)unmarkText;


@end


#endif