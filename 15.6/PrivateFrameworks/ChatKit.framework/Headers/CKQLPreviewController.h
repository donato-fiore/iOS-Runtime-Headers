// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKQLPREVIEWCONTROLLER_H
#define CKQLPREVIEWCONTROLLER_H

@class QLPreviewController, NSString, UIBarButtonItem;
@protocol CKFullScreenBalloonViewControllerDelegate, IMPhotoLibraryPersistenceManagerListener, CKQLPreviewControllerDelegate;


#import "CKChatItem.h"

@interface CKQLPreviewController : QLPreviewController <CKFullScreenBalloonViewControllerDelegate, IMPhotoLibraryPersistenceManagerListener>



@property (weak, nonatomic) NSObject<CKQLPreviewControllerDelegate> *chatControllerPreviewDelegate; // ivar: _chatControllerPreviewDelegate
@property (weak, nonatomic) CKChatItem *chatItem; // ivar: _chatItem
@property (nonatomic) BOOL controllerWasDismissed; // ivar: _controllerWasDismissed
@property (nonatomic) BOOL currentPreviewItemIsSaved; // ivar: _currentPreviewItemIsSaved
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressRefetchingCurrentHighQualityImage; // ivar: _suppressRefetchingCurrentHighQualityImage
@property (retain, nonatomic) UIBarButtonItem *tapbackButton; // ivar: _tapbackButton


-(BOOL)__im_ff_commSafetyUIEnabled;
-(BOOL)canCurrentPreviewItemQuickSave;
-(BOOL)fullScreenBalloonViewControllerShouldShowHightlightButton:(id)arg0 forChatItem:(id)arg1 ;
-(BOOL)fullScreenBalloonViewControllerShouldShowReplyButton:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(char)fullScreenBalloonViewControllerAnchorVertialOrientation:(id)arg0 withBalloonFrame:(struct CGRect )arg1 ;
-(id)currentPreviewItem;
-(id)init;
-(id)previewActions;
-(struct CGRect )fullScreenBalloonViewController:(id)arg0 balloonFrameForChatItem:(id)arg1 ;
-(struct CGRect )fullScreenBalloonViewControllerSafeAreaLayoutFrame:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)_dismissFullScreenBubbleViewController:(id)arg0 animated:(BOOL)arg1 withSendAnimation:(BOOL)arg2 completion:(id)arg3 ;
-(void)currentPreviewItemDidChange;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 deleteStickerWithTransferGUID:(id)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 didAppearAnimated:(BOOL)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 replyButtonPressedForChatItem:(id)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 sendMessageAcknowledgment:(NSInteger)arg1 forChatItem:(id)arg2 ;
-(void)fullScreenBalloonViewController:(id)arg0 sendMessageHighlight:(BOOL)arg1 forChatItem:(id)arg2 ;
-(void)fullScreenBalloonViewController:(id)arg0 stickerPackTappedWithAdamID:(id)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 verticallyScrollTranscriptByAmount:(CGFloat)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)fullScreenBalloonViewController:(id)arg0 willAppearAnimated:(BOOL)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg0 willDisappearWithSendAnimation:(BOOL)arg1 ;
-(void)fullScreenBalloonViewControllerDidDisappear:(id)arg0 ;
-(void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg0 ;
-(void)fullScreenBalloonViewControllerMessageHighlightButtonDidFinishAnimating:(id)arg0 ;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)photoLibraryPersistedSyndicatedAssetSetDidChange;
-(void)replyTapped:(id)arg0 ;
-(void)saveTapped:(id)arg0 ;
-(void)tapbackTapped:(id)arg0 ;
-(void)updateBarButtonItems;
-(void)updateCurrentPreviewItemIsSaved:(BOOL)arg0 valueDidChange:(*BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif