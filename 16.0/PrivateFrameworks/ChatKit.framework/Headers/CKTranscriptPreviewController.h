// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSCRIPTPREVIEWCONTROLLER_H
#define CKTRANSCRIPTPREVIEWCONTROLLER_H

@class NSString;
@protocol CKTranscriptCollectionViewControllerDelegate;


#import "CKViewController.h"
#import "CKTranscriptCollectionView.h"
#import "CKConversation.h"

@interface CKTranscriptPreviewController : CKViewController <CKTranscriptCollectionViewControllerDelegate>



@property (retain, nonatomic) CKTranscriptCollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInitialLayout; // ivar: _isInitialLayout
@property (nonatomic) UIEdgeInsets layoutMargins; // ivar: _layoutMargins
@property (readonly) Class superclass;
@property (nonatomic) CGFloat transcriptWidth; // ivar: _transcriptWidth


-(BOOL)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 shouldSelectChatItem:(id)arg2 ;
-(BOOL)transcriptCollectionViewController:(id)arg0 balloonViewDidRequestCommitPayload:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)transcriptCollectionViewController:(id)arg0 balloonViewDidRequestCommitSticker:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)transcriptCollectionViewController:(id)arg0 shouldCleanupFullscreenEffectUI:(id)arg1 ;
-(BOOL)transcriptCollectionViewController:(id)arg0 shouldSetupFullscreenEffectUI:(id)arg1 ;
-(BOOL)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg0 ;
-(BOOL)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(id)arg0 ;
-(BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg0 ;
-(CGFloat)transcriptCollectionViewController:(id)arg0 targetAlphaForChatItem:(id)arg1 ;
-(id)initWithConversation:(id)arg0 transcriptWidth:(CGFloat)arg1 layoutMargins:(struct UIEdgeInsets )arg2 ;
-(id)textInputContextIdentifier;
-(id)traitCollectionForTranscriptCollectionViewController:(id)arg0 ;
-(id)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(id)arg0 ;
-(void)loadView;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 didRequestPresentationStyle:(NSUInteger)arg2 forChatItem:(id)arg3 allowAllStyles:(BOOL)arg4 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 doubleTappedItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 longPressedForItemWithIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 selectedItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 showInlineReplyForItemWithIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonView:(id)arg1 tappedForChatItem:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonViewDidRequestStartEditingPayload:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)transcriptCollectionViewController:(id)arg0 balloonViewTitleTappedForItemWithIndexPath:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 collectionViewContentSizeDidChange:(struct CGSize )arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didTapAttributionButtonForChatItem:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 didTapPluginStatusButtonForChatItem:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 showMessageSomeoneForItemWithIndexPath:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 viewedCommSafetyItemWithIndexPath:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg0 willDeleteChatItems:(id)arg1 ;
-(void)transcriptCollectionViewControllerBlockContactButtonTapped:(id)arg0 ;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg0 ;
-(void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(id)arg0 ;
-(void)transcriptCollectionViewControllerDidInset:(id)arg0 ;
-(void)transcriptCollectionViewControllerDisplaySMSSpamReporting:(id)arg0 ;
-(void)transcriptCollectionViewControllerNeedsChatItemLayoutInvalidation:(id)arg0 ;
-(void)transcriptCollectionViewControllerPerformBatchUpdateCompleted:(id)arg0 ;
-(void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg0 ;
-(void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg0 ;
-(void)transcriptCollectionViewControllerRestingStateDidChange:(id)arg0 ;
-(void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg0 ;
-(void)transcriptCollectionViewControllerWillInset:(id)arg0 targetContentInset:(struct UIEdgeInsets *)arg1 ;
-(void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif