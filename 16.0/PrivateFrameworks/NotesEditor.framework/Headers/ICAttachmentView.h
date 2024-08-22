// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICATTACHMENTVIEW_H
#define ICATTACHMENTVIEW_H

@class ICBaseAttachmentView, UIWindow, UIContextMenuInteraction, NSString, UIPanGestureRecognizer, NSArray;
@protocol ICAccessibilityRotorSearchElement, UIGestureRecognizerDelegate, UIPointerInteractionDelegate, UIContextMenuInteractionDelegate, ICAttachmentViewContentFrame, ICAttachmentViewInitializing, ICAttachmentViewDelegate;


#import "ICTextView.h"

@interface ICAttachmentView : ICBaseAttachmentView <ICAccessibilityRotorSearchElement, UIGestureRecognizerDelegate, UIPointerInteractionDelegate, UIContextMenuInteractionDelegate, ICAttachmentViewContentFrame, ICAttachmentViewInitializing>



@property (retain, nonatomic) UIWindow *actionWindow; // ivar: _actionWindow
@property (retain, nonatomic) UIContextMenuInteraction *contextInteraction; // ivar: _contextInteraction
@property (readonly, nonatomic) NSInteger dataOwnerForAttachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICAttachmentViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL finishedInit; // ivar: _finishedInit
@property (readonly) BOOL forManualRendering; // ivar: _forManualRendering
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *icaxAttachmentViewTypeDescription;
@property (readonly, nonatomic) NSString *icaxHintString;
@property (readonly, nonatomic) BOOL icaxIsTextRangeSelected;
@property (nonatomic) BOOL insideSystemPaper; // ivar: _insideSystemPaper
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *supportedRotorTypes;
@property (readonly, nonatomic) _NSRange textRangeInNote;
@property (readonly, nonatomic) ICTextView *textView;


-(BOOL)_accessibilityHasTextOperations;
-(BOOL)_accessibilityShouldUseViewHierarchyForFindingScrollParent;
-(BOOL)_accessibilitySupportsActivateAction;
-(BOOL)_accessibilityTextOperationAction:(id)arg0 ;
-(BOOL)_wantsContextMenuPreview;
-(BOOL)accessibilityActivate;
-(BOOL)alertAboutUnsupportedAttachmentIfNecessary;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)icaxSelectAttachmentTextRangeAction;
-(BOOL)isAccessibilityElement;
-(BOOL)shouldAddMenuLongPressGesture;
-(BOOL)shouldAddPanGesture;
-(BOOL)shouldAddTapGesture;
-(BOOL)showRecoverNoteAlertIfNecessary;
-(id)_accessibilityTextOperations;
-(id)_accessibilityUserTestingVisibleAncestor;
-(id)_icaxParentTextView;
-(id)accessibilityContainer;
-(id)accessibilityCustomActions;
-(id)accessibilityCustomRotors;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityDropPointDescriptors;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)initWithAttachment:(id)arg0 actionWindow:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 andTextAttachment:(id)arg1 forManualRendering:(BOOL)arg2 ;
-(id)initWithTextAttachment:(id)arg0 forManualRendering:(BOOL)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)targetForAction:(SEL)arg0 withSender:(id)arg1 ;
-(struct CGRect )frameForContent;
-(void)_copy;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)copy:(id)arg0 ;
-(void)copyWithCompletionBlock:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)delete:(id)arg0 ;
-(void)didTapAttachment:(id)arg0 ;
-(void)editAttachmentWithBlock:(id)arg0 ;
-(void)icaxActivate;
-(void)icaxSelectAttachmentTextRange:(BOOL)arg0 ;
-(void)openAttachment;
-(void)prepareForPrinting;
-(void)removeFromSuperview;
-(void)rename:(id)arg0 ;
-(void)requestEditorFirstResponder;
-(void)respondToLongPressGesture:(id)arg0 ;
-(void)respondToPanGesture:(id)arg0 ;
-(void)respondToTapGesture:(id)arg0 ;
-(void)setAttachmentViewType:(short)arg0 ;
-(void)setupConstraints;
-(void)setupEventHandling;
-(void)share:(id)arg0 ;
-(void)shareAttachment:(id)arg0 ;
-(void)shareWebLink:(id)arg0 ;
-(void)sharedInit:(BOOL)arg0 ;
-(void)showAttachmentsAsLargePreviews:(id)arg0 ;
-(void)showAttachmentsAsThumbnails:(id)arg0 ;
-(void)updateFirstResponder;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif