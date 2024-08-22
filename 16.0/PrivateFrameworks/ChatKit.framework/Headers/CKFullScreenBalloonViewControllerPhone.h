// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKFULLSCREENBALLOONVIEWCONTROLLERPHONE_H
#define CKFULLSCREENBALLOONVIEWCONTROLLERPHONE_H

@class UIView, NSString, NSArray, CAShapeLayer, UIVisualEffectView;
@protocol CKBalloonViewDelegate, CKStickerDetailViewControllerDelegate, PHLivePhotoViewDelegate, CKMessageHighlightButtonDelegate;


#import "CKFullScreenBalloonViewController.h"
#import "CKMessageHighlightButton.h"
#import "CKLivePhotoBalloonView.h"
#import "CKGroupAcknowledgmentVotingViewController.h"

@interface CKFullScreenBalloonViewControllerPhone : CKFullScreenBalloonViewController <CKBalloonViewDelegate, CKStickerDetailViewControllerDelegate, PHLivePhotoViewDelegate, CKMessageHighlightButtonDelegate>

 {
    BOOL _shouldLayoutViews;
}


@property (nonatomic) BOOL animationsDisabledForTesting; // ivar: _animationsDisabledForTesting
@property (retain, nonatomic) UIView *balloonView; // ivar: _balloonView
@property (nonatomic) CGFloat balloonYOffsetFromTranscript; // ivar: _balloonYOffsetFromTranscript
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideBalloonView; // ivar: _hideBalloonView
@property (retain, nonatomic) CKMessageHighlightButton *highlightButton; // ivar: _highlightButton
@property (copy, nonatomic) NSArray *interfaceActions; // ivar: _interfaceActions
@property (retain, nonatomic) CKLivePhotoBalloonView *livePhotoBalloonView; // ivar: _livePhotoBalloonView
@property (retain, nonatomic) CAShapeLayer *replyButtonBorderLayer; // ivar: _replyButtonBorderLayer
@property (retain, nonatomic) UIVisualEffectView *replyButtonEffectView; // ivar: _replyButtonEffectView
@property (retain, nonatomic) CAShapeLayer *replyButtonMaskLayer; // ivar: _replyButtonMaskLayer
@property (retain, nonatomic) UIView *replyButtonView; // ivar: _replyButtonView
@property (readonly) Class superclass;
@property (retain, nonatomic) CAShapeLayer *tintViewMaskLayer; // ivar: _tintViewMaskLayer
@property (retain, nonatomic) CKGroupAcknowledgmentVotingViewController *votingViewController; // ivar: _votingViewController


-(BOOL)_shouldShowVotingView;
-(CGFloat)replyButtonHeightFromBalloon;
-(CGFloat)replyButtonVerticalOffset;
-(NSUInteger)supportedInterfaceOrientations;
-(char)messageHightlightButtonTranscriptOrientation:(id)arg0 ;
-(id)initWithChatItem:(id)arg0 title:(id)arg1 interfaceActions:(id)arg2 gradientReferenceView:(id)arg3 isGroupConversation:(BOOL)arg4 pluginBalloonSnapshot:(id)arg5 delegate:(id)arg6 ;
-(struct CGRect )messageHightlightButtonBalloonViewFrame:(id)arg0 ;
-(struct CGRect )messageHightlightButtonReplyButtonFrame:(id)arg0 ;
-(void)_stickerDetailViewControllerCloseButtonPressed:(id)arg0 ;
-(void)addHighlightButtonIfNeeded;
-(void)audioBalloonScrubberDidChangeValue:(CGFloat)arg0 ;
-(void)balloonView:(id)arg0 userDidDragOutsideBalloonWithPoint:(struct CGPoint )arg1 ;
-(void)balloonViewDoubleTapped:(id)arg0 ;
-(void)balloonViewLongTouched:(id)arg0 ;
-(void)balloonViewSelected:(id)arg0 keyModifierFlags:(NSInteger)arg1 selectedText:(id)arg2 ;
-(void)balloonViewSelected:(id)arg0 withModifierFlags:(NSInteger)arg1 selectedText:(id)arg2 ;
-(void)balloonViewShouldCopyToPasteboard:(id)arg0 ;
-(void)balloonViewShowInlineReply:(id)arg0 ;
-(void)balloonViewTapped:(id)arg0 withModifierFlags:(NSInteger)arg1 selectedText:(id)arg2 ;
-(void)balloonViewTextViewDidChangeSelection:(id)arg0 selectedText:(id)arg1 textView:(id)arg2 ;
-(void)dealloc;
-(void)disableAnimationsForTesting;
-(void)dismissTapGestureRecognized:(id)arg0 ;
-(void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg0 ;
-(void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg0 ;
-(void)liveBalloonTouched:(id)arg0 ;
-(void)livePhotoView:(id)arg0 didEndPlaybackWithStyle:(NSInteger)arg1 ;
-(void)loadLivePhotoBalloonViewIfNeeded;
-(void)messageHightlightButtonDidFinishAnimating:(id)arg0 ;
-(void)messageHightlightButtonWasClicked:(id)arg0 ;
-(void)performClosingAnimationsAnimated:(BOOL)arg0 withSendAnimation:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)performInitialAnimations;
-(void)presentStickerDetailControllerWithStickers:(id)arg0 ;
-(void)setupReplyButton;
-(void)stickerDetailViewController:(id)arg0 deletedStickerWithTransferGUID:(id)arg1 ;
-(void)stickerDetailViewController:(id)arg0 selectedStickerPackWithAdamID:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateReplyButtonColor;
-(void)updateReplyButtonSizeAndLocation:(struct CGRect )arg0 layoutRelativeToHighlightButton:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif