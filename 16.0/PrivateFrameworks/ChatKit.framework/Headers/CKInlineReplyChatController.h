// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKINLINEREPLYCHATCONTROLLER_H
#define CKINLINEREPLYCHATCONTROLLER_H

@class UIVisualEffectView, NSString, UINavigationBarAppearance, NSDictionary, IMMessageItem;
@protocol CKTranscriptOverlayViewControllerProtocol, CKInlineReplyInteractionDelegate, CKTranscriptOverlayTransitionDelegate;


#import "CKChatController.h"
#import "CKInlineReplyCollectionViewController.h"
#import "CKTranscriptOverlayTransitionContext.h"

@interface CKInlineReplyChatController : CKChatController <CKTranscriptOverlayViewControllerProtocol>



@property (nonatomic) BOOL animatingIn; // ivar: _animatingIn
@property (nonatomic) BOOL animatingOut; // ivar: _animatingOut
@property (retain, nonatomic) UIVisualEffectView *blurView; // ivar: _blurView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKInlineReplyCollectionViewController *inlineCollectionViewController;
@property (weak, nonatomic) NSObject<CKInlineReplyInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (nonatomic) BOOL isInitialLoad; // ivar: _isInitialLoad
@property (nonatomic) BOOL isInitialSizing; // ivar: _isInitialSizing
@property (readonly, nonatomic, getter=isModal) BOOL modal;
@property (retain, nonatomic) UINavigationBarAppearance *navBarAppearance; // ivar: _navBarAppearance
@property (readonly, nonatomic) NSDictionary *originatorMessageSummaryInfo; // ivar: _originatorMessageSummaryInfo
@property (nonatomic) BOOL shouldReloadInsetsForFloatingKeyboard; // ivar: _shouldReloadInsetsForFloatingKeyboard
@property (nonatomic) BOOL showNavbarKeyline; // ivar: _showNavbarKeyline
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier
@property (retain, nonatomic) IMMessageItem *threadOriginator; // ivar: _threadOriginator
@property (weak, nonatomic) NSObject<CKTranscriptOverlayTransitionDelegate> *transcriptOverlayTransitionDelegate; // ivar: _transcriptOverlayTransitionDelegate
@property (retain, nonatomic) CKTranscriptOverlayTransitionContext *transitionContext; // ivar: _transitionContext


+(Class)_gradientReferenceViewClass;
+(Class)transcriptControllerClass;
+(id)stringForContentType:(unsigned char)arg0 ;
-(BOOL)isInline;
-(BOOL)isUnanimated;
-(BOOL)messageEntryViewWidth:(*CGFloat)arg0 andOffset:(*CGFloat)arg1 ;
-(BOOL)shouldListParticipantsInTitle;
-(BOOL)shouldShowDoneButton;
-(BOOL)transcriptCollectionViewControllerIsPresentedInModalInlineReply:(id)arg0 ;
-(CGFloat)accessoryViewHeight;
-(CGFloat)throwAnimationFinalFrameOffset:(id)arg0 ;
-(CGFloat)throwAnimationManagerTopHeaderHeight:(id)arg0 ;
-(CGFloat)transcriptCollectionViewController:(id)arg0 targetAlphaForChatItem:(id)arg1 ;
-(NSInteger)targetFirstResponder;
-(id)_defaultTranscriptNavBarAppearance;
-(id)_imMessageForIMMessageItem:(id)arg0 ;
-(id)_navigationBarAppearanceWithKeyline:(BOOL)arg0 ;
-(id)_visibleGUIDs;
-(id)initWithConversation:(id)arg0 threadIdentifier:(id)arg1 threadOriginator:(id)arg2 transitionContext:(id)arg3 originatorMessageSummaryInfo:(id)arg4 ;
-(id)inputAccessoryView;
-(id)inputController;
-(id)inputViewController;
-(struct CGRect )_initialFrameForCollectionView;
-(struct CGRect )gradientFrameWithInsets:(struct UIEdgeInsets )arg0 ;
-(struct CGSize )contentSizeForPinning;
-(struct UIEdgeInsets )_contentInsetForSendAnimation;
-(struct UIEdgeInsets )navigationBarInsetsWithoutPalette;
-(void)_animateIn:(BOOL)arg0 ;
-(void)_animateOut;
-(void)_didSendCompositionInConversation:(id)arg0 ;
-(void)_doneButtonPressed;
-(void)_requestDismissal;
-(void)_restoreDraftState;
-(void)_saveDraftState;
-(void)_setInitialScrollPositionIfNecessary;
-(void)_updateNavigationUI;
-(void)cleanUpDarkEffectStyle;
-(void)collectMetricsForSending:(id)arg0 ;
-(void)dismissController;
-(void)messageEntryViewDidBeginEditingNotAlreadyActive:(id)arg0 ;
-(void)reloadEntryViewIfNeeded;
-(void)reloadInputViews;
-(void)sendMessage:(id)arg0 forConversation:(id)arg1 newComposition:(BOOL)arg2 ;
-(void)sendMessage:(id)arg0 forConversation:(id)arg1 onService:(id)arg2 newComposition:(BOOL)arg3 ;
-(void)setIsShowingPreview:(BOOL)arg0 ;
-(void)setTargetFirstResponder:(NSInteger)arg0 ;
-(void)setUpStyleForDarkEffect;
-(void)stageAssetArchive:(id)arg0 skipShelf:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)tapGestureRecognized:(id)arg0 ;
-(void)transcriptCollectionViewController:(id)arg0 collectionViewContentSizeDidChange:(struct CGSize )arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didScroll:(struct CGPoint )arg1 ;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg0 ;
-(void)transcriptCollectionViewControllerRestingStateDidChange:(id)arg0 ;
-(void)updateScrollGeometry;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif