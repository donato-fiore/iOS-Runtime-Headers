// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMESSAGEENTRYCONTENTVIEW_H
#define CKMESSAGEENTRYCONTENTVIEW_H

@class UIScrollView, NSDictionary, UIButton, NSString, UIFont, UIView, UIViewController<CKPluginEntryViewController>, IMPluginPayload;
@protocol UITextViewDelegate, CKMessageEntryRichTextViewDelegate, UITextDragDelegate, CKMessageEntryViewStyleProtocol, UIGestureRecognizerDelegate;


#import "CKMessageEntryTextView.h"
#import "CKComposition.h"
#import "CKConversation.h"
#import "CKMessageEntryRichTextView.h"

@interface CKMessageEntryContentView : UIScrollView <UITextViewDelegate, CKMessageEntryRichTextViewDelegate, UITextDragDelegate, CKMessageEntryViewStyleProtocol, UIGestureRecognizerDelegate>



@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) CKMessageEntryTextView *activeView; // ivar: _activeView
@property (nonatomic) char balloonColor;
@property (copy, nonatomic) NSDictionary *bizIntent; // ivar: _bizIntent
@property (retain, nonatomic) UIButton *clearPluginButton; // ivar: _clearPluginButton
@property (retain, nonatomic) CKComposition *composition; // ivar: _composition
@property (nonatomic) CGFloat containerViewLineWidth; // ivar: _containerViewLineWidth
@property (readonly, nonatomic) UIEdgeInsets contentTextAlignmentInsets;
@property (weak, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceEnsureTextViewVisble; // ivar: _forceEnsureTextViewVisble
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreEndEditing; // ivar: _ignoreEndEditing
@property (nonatomic) BOOL isCompositionExpirable; // ivar: _isCompositionExpirable
@property (nonatomic) CGFloat maxContentWidthWhenExpanded; // ivar: _maxContentWidthWhenExpanded
@property (nonatomic) CGFloat maxPreviewContentWidthWhenExpanded; // ivar: _maxPreviewContentWidthWhenExpanded
@property (nonatomic) BOOL needsEnsureSelectionVisible; // ivar: _needsEnsureSelectionVisible
@property (nonatomic) BOOL needsEnsureTextViewVisible; // ivar: _needsEnsureTextViewVisible
@property (nonatomic) BOOL needsTextLayout; // ivar: _needsTextLayout
@property (retain, nonatomic) UIFont *originalFont; // ivar: _originalFont
@property (retain, nonatomic) NSString *overridePlaceholderText; // ivar: _overridePlaceholderText
@property (nonatomic) BOOL pendingShelfPayloadWillAnimateIn; // ivar: _pendingShelfPayloadWillAnimateIn
@property (nonatomic) CGFloat placeHolderWidth; // ivar: _placeHolderWidth
@property (copy, nonatomic) NSString *placeholderText;
@property (retain, nonatomic) UIView *pluginDividerLine; // ivar: _pluginDividerLine
@property (retain, nonatomic) UIViewController<CKPluginEntryViewController> *pluginEntryViewController; // ivar: _pluginEntryViewController
@property (readonly, nonatomic) UIView *pluginView;
@property (retain, nonatomic) NSString *requestedPlaceholderText; // ivar: _requestedPlaceholderText
@property (nonatomic) CGFloat sendButtonTextInsetWidth; // ivar: _sendButtonTextInsetWidth
@property (retain, nonatomic) IMPluginPayload *shelfPluginPayload; // ivar: _shelfPluginPayload
@property (nonatomic) BOOL shouldHideClearPluginButton; // ivar: _shouldHideClearPluginButton
@property (readonly, nonatomic) BOOL shouldShowPlugin;
@property (nonatomic) BOOL shouldShowSubject; // ivar: _shouldShowSubject
@property (nonatomic) BOOL shouldStripEmojis; // ivar: _shouldStripEmojis
@property (readonly, nonatomic, getter=isShowingDictationPlaceholder) BOOL showingDictationPlaceholder;
@property (readonly, nonatomic, getter=isSingleLine) BOOL singleLine;
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) CKMessageEntryTextView *subjectView; // ivar: _subjectView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *textAndSubjectDividerLine; // ivar: _textAndSubjectDividerLine
@property (retain, nonatomic) CKMessageEntryRichTextView *textView; // ivar: _textView


+(id)_createSubjectView;
+(id)_createTextView:(BOOL)arg0 ;
+(void)prewarmTextView;
-(BOOL)_shouldDeferUpdateUI;
-(BOOL)makeActive;
-(BOOL)messageEntryRichTextView:(id)arg0 shouldPasteMediaObjects:(id)arg1 ;
-(BOOL)messageEntryRichTextView:(id)arg0 shouldRecognizeGesture:(id)arg1 ;
-(BOOL)messageEntryRichTextViewCanSuggestMentionForCurrentSelection:(id)arg0 ;
-(BOOL)shouldLayoutPluginEdgeToEdge;
-(BOOL)shouldShowClearButton;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(BOOL)textView:(id)arg0 shouldInteractWithTextAttachment:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(BOOL)textViewShouldBeginEditing:(id)arg0 ;
-(CGFloat)_calcuateIdealMaxPluginHeight:(BOOL)arg0 ;
-(CGFloat)_maxWidthForTextView;
-(CGFloat)maxWidthForPreviewImagesInMessageEntryRichTextView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 shouldShowSubject:(BOOL)arg1 shouldDisableAttachments:(BOOL)arg2 ;
-(id)textDraggableView:(id)arg0 itemsForDrag:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutDividerLine:(id)arg0 leftInset:(CGFloat)arg1 rightInset:(CGFloat)arg2 currentYOffset:(*CGFloat)arg3 ;
-(void)_layoutTextView:(id)arg0 currentYOffset:(*CGFloat)arg1 originX:(CGFloat)arg2 maxWidth:(CGFloat)arg3 ;
-(void)_updateUI;
-(void)acceptAutocorrection;
-(void)clearPluginButtonTapped:(id)arg0 ;
-(void)collapseTextFieldsIfInPencilMode;
-(void)configureShelfForPluginPayload:(id)arg0 ;
-(void)dealloc;
-(void)didFinishAnimatedBoundsChange;
-(void)ensureSelectionVisibleIfNeeded;
-(void)ensureTextViewVisibleIfNeeded;
-(void)invalidateComposition;
-(void)layoutSubviews;
-(void)messageEntryRichTextView:(id)arg0 didTapCharacterAtIndex:(NSUInteger)arg1 isLongPress:(BOOL)arg2 ;
-(void)messageEntryRichTextView:(id)arg0 didTapMediaObject:(id)arg1 ;
-(void)messageEntryRichTextView:(id)arg0 insertMention:(id)arg1 entity:(id)arg2 replacementRange:(struct _NSRange )arg3 ;
-(void)messageEntryRichTextView:(id)arg0 insertionPointEnteredRange:(struct _NSRange )arg1 forMention:(id)arg2 withEntities:(id)arg3 ;
-(void)messageEntryRichTextView:(id)arg0 pastedURL:(id)arg1 ;
-(void)messageEntryRichTextView:(id)arg0 showMentionSuggestionsForEntities:(id)arg1 replacementRange:(struct _NSRange )arg2 completionHandler:(id)arg3 ;
-(void)messageEntryRichTextViewCancelShowMentionSuggestions:(id)arg0 ;
-(void)messageEntryRichTextViewDidTapHandwritingKey:(id)arg0 ;
-(void)messageEntryRichTextViewDidTapMention:(id)arg0 characterIndex:(CGFloat)arg1 ;
-(void)messageEntryRichTextViewInsertionPointExitedRangeWithMention:(id)arg0 ;
-(void)messageEntryRichTextViewWasTapped:(id)arg0 isLongPress:(BOOL)arg1 ;
-(void)pluginPayloadWantsResize:(id)arg0 ;
-(void)plugingPayloadDidLoad:(id)arg0 ;
-(void)prepareForShelfPayloadAnimation;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidChangeSelection:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;
-(void)willAnimateBoundsChange;


@end


#endif