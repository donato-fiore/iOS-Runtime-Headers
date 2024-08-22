// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKBALLOONTEXTVIEW_H
#define CKBALLOONTEXTVIEW_H

@class UITextView, NSAttributedString, NSString, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol NSLayoutManagerDelegate, CKBalloonTextViewProtocol, UIGestureRecognizerDelegate, UITextViewDelegate, CKBalloonTextViewInteractionDelegate;



@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate, CKBalloonTextViewProtocol, UIGestureRecognizerDelegate, UITextViewDelegate>



@property (nonatomic) _NSRange _selectedRange; // ivar: __selectedRange
@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIPanGestureRecognizer *dragGestureRecognizer; // ivar: _dragGestureRecognizer
@property (nonatomic, getter=isFakeSelected) BOOL fakeSelected; // ivar: _fakeSelected
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CKBalloonTextViewInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (nonatomic) BOOL shouldAdjustInsetsForMinimumSize; // ivar: _shouldAdjustInsetsForMinimumSize
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


+(id)textView;
+(struct CGSize )sizeThatFits:(struct CGSize )arg0 attributedText:(id)arg1 maximumNumberOfLines:(NSUInteger)arg2 lineBreakMode:(NSInteger)arg3 isReplyPreview:(BOOL)arg4 outTextAlignmentInsets:(struct UIEdgeInsets *)arg5 outIsSingleLine:(*BOOL)arg6 ;
-(BOOL)_showsEditMenu;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFocused;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)resignFirstResponder;
-(id)_fakeSelectionBackgroundColor;
-(id)_textWithHyphenationAppliedForAttributedText:(id)arg0 ;
-(id)initReadonlyAndUnselectableWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 isSingleLine:(*BOOL)arg2 isReplyPreview:(BOOL)arg3 ;
-(void)_interactionStartedFromPreviewItemController:(id)arg0 ;
-(void)_interactionStoppedFromPreviewItemController:(id)arg0 ;
-(void)_removeFakeSelectionBackgroundColor;
-(void)_setFakeSelectionBackgroundColor;
-(void)_setFakeSelectionBackgroundColorForRange:(struct _NSRange )arg0 ;
-(void)_updateFakeSelectionBackgroundColor:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)didMoveToWindow;
-(void)panGestureRecognized:(id)arg0 ;
-(void)registerForEvents;
-(void)setBalloonTextSelectedRange:(struct _NSRange )arg0 ;


@end


#endif