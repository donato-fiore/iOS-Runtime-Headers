// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFTEXTINPUTVIEW_H
#define PDFTEXTINPUTVIEW_H

@class UIView, UITextRange, UITextInteraction, UITextHighlightView, UITextSearchingDimmingView, NSMutableArray, UITextPosition, NSString, NSDictionary, UITextInputPasswordRules;
@protocol UITextInput, UIKeyInput, UITextInteractionDelegate, UITextSearching, PDFTextInputDelegate, UITextInputDelegate, UITextInputTokenizer, NSObject><NSCopying;


#import "PDFTextSearchAggregator.h"

@interface PDFTextInputView : UIView <UITextInput, UIKeyInput, UITextInteractionDelegate, UITextSearching>

 {
    id<PDFTextInputDelegate> *_delegate;
    UITextRange *_textSelectionRange;
    UITextInteraction *_textInteraction;
    id<UITextInputDelegate> *_textInputDelegate;
    id<UITextInputTokenizer> *_textInputTokenizer;
    BOOL _dimmingViewVisible;
    UITextHighlightView *_searchHighlightView;
    UITextSearchingDimmingView *_searchDimmingView;
    UITextRange *_highlightedTextRange;
    NSMutableArray *_foundTextRanges;
    PDFTextSearchAggregator *_activeSearch;
}


@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
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
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (readonly) NSObject<NSObject><NSCopying> *selectedTextSearchDocument;
@property (nonatomic) NSInteger selectionAffinity;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsTextReplacement;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) UIView *textInputView;
@property (readonly, nonatomic) NSObject<UITextInputTokenizer> *tokenizer;


-(BOOL)_allowAnimatedUpdateSelectionRectViews;
-(BOOL)canBecomeFirstResponder;
-(BOOL)interactionShouldBegin:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(NSInteger)baseWritingDirectionForPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(NSInteger)compareFoundRange:(id)arg0 toRange:(id)arg1 inDocument:(id)arg2 ;
-(NSInteger)comparePosition:(id)arg0 toPosition:(id)arg1 ;
-(NSInteger)offsetFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(id)_closestPositionToPoint:(struct CGPoint )arg0 withinRange:(id)arg1 ;
-(id)_selectionForTextRange:(id)arg0 ;
-(id)_targetedPreviewForRange:(id)arg0 ;
-(id)characterRangeAtPoint:(struct CGPoint )arg0 ;
-(id)characterRangeByExtendingPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 withinRange:(id)arg1 ;
-(id)editMenuForTextRange:(id)arg0 suggestedActions:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)linkRegionsConstrainedToLineAtPoint:(struct CGPoint )arg0 ;
-(id)positionFromPosition:(id)arg0 inDirection:(NSInteger)arg1 offset:(NSInteger)arg2 ;
-(id)positionFromPosition:(id)arg0 offset:(NSInteger)arg1 ;
-(id)positionWithinRange:(id)arg0 farthestInDirection:(NSInteger)arg1 ;
-(id)selection;
-(id)selectionRectsForRange:(id)arg0 ;
-(id)textInRange:(id)arg0 ;
-(id)textRangeFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )firstRectForRange:(id)arg0 ;
-(void)_setDimmingViewVisible:(BOOL)arg0 ;
-(void)clearAllDecoratedFoundText;
-(void)decorateFoundTextRange:(id)arg0 inDocument:(id)arg1 usingStyle:(NSInteger)arg2 ;
-(void)deleteBackward;
-(void)handleGesture:(NSUInteger)arg0 state:(NSInteger)arg1 location:(struct CGPoint )arg2 locationOfFirstTouch:(struct CGPoint )arg3 isIndirectTouch:(BOOL)arg4 ;
-(void)insertText:(id)arg0 ;
-(void)layoutSubviews;
-(void)performTextSearchWithQueryString:(id)arg0 usingOptions:(id)arg1 resultAggregator:(id)arg2 ;
-(void)replaceRange:(id)arg0 withText:(id)arg1 ;
-(void)setBaseWritingDirection:(NSInteger)arg0 forRange:(id)arg1 ;
-(void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)setSelection:(id)arg0 ;
-(void)unmarkText;
-(void)updateGestureRecognizerDependencies;
-(void)updateTextSelectionGraphics;


@end


#endif