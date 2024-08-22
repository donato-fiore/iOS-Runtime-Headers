// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKFULLSCREENBALLOONVIEWCONTROLLER_H
#define CKFULLSCREENBALLOONVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, UIButton, UIGestureRecognizer;
@protocol CKMessageAcknowledgmentPickerBarDelegate, UIGestureRecognizerDelegate, CKAdaptivePresentedControllerProtocol, CKFullScreenBalloonViewControllerDelegate;


#import "CKMessagePartChatItem.h"
#import "CKMessageAcknowledgmentPickerBarViewController.h"

@interface CKFullScreenBalloonViewController : UIViewController <CKMessageAcknowledgmentPickerBarDelegate, UIGestureRecognizerDelegate, CKAdaptivePresentedControllerProtocol>



@property (readonly, nonatomic) UIView *balloonWrapperView;
@property (readonly, nonatomic) CKMessagePartChatItem *chatItem; // ivar: _chatItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<CKFullScreenBalloonViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) char forcedOrientation; // ivar: _forcedOrientation
@property (readonly, nonatomic) CGRect gradientFrame; // ivar: _gradientFrame
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isGroupConversation; // ivar: _isGroupConversation
@property (readonly, nonatomic) CKMessageAcknowledgmentPickerBarViewController *pickerBar; // ivar: _pickerBar
@property (nonatomic) BOOL preserveModalPresentationStyle; // ivar: _preserveModalPresentationStyle
@property (retain, nonatomic) UIButton *replyButton; // ivar: _replyButton
@property (nonatomic) BOOL shouldHidePresentingWindow;
@property (readonly, nonatomic) BOOL showActionMenu; // ivar: _showActionMenu
@property (readonly) Class superclass;
@property (retain, nonatomic) CKMessagePartChatItem *supplementaryLayoutChatItem; // ivar: _supplementaryLayoutChatItem
@property (retain, nonatomic) id *supplementaryLayoutContext; // ivar: _supplementaryLayoutContext
@property (retain, nonatomic) UIGestureRecognizer *tapRecognizer; // ivar: _tapRecognizer
@property (readonly, nonatomic) UIView *tintView; // ivar: _tintView
@property (nonatomic) BOOL useForcedOrientation; // ivar: _useForcedOrientation
@property (nonatomic) BOOL wantsWindowedPresentation; // ivar: _wantsWindowedPresentation


-(BOOL)constrainToPresentingVCBounds;
-(BOOL)forceWindowedPresentation;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceivePress:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(id)initWithChatItem:(id)arg0 gradientReferenceView:(id)arg1 isGroupConversation:(BOOL)arg2 showActionMenu:(BOOL)arg3 delegate:(id)arg4 ;
-(void)_performClosingAnimationsAnimated:(BOOL)arg0 withSendAnimation:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)addTapRecognizerWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)dealloc;
-(void)dismissImmediatelyWithNoAnimations;
-(void)dismissTapGestureRecognized:(id)arg0 ;
-(void)loadView;
-(void)messageAcknowledgmentPickerViewController:(id)arg0 didPickAcknowledgment:(NSInteger)arg1 ;
-(void)performCancelAnimationWithCompletion:(id)arg0 ;
-(void)performClosingAnimationsAnimated:(BOOL)arg0 withSendAnimation:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)performInitialAnimations;
-(void)performSendAndCloseAnimationWithCompletion:(id)arg0 ;
-(void)removeTapRecogonizer;
-(void)replyButtonPressed:(id)arg0 ;
-(void)setupReplyButton;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif