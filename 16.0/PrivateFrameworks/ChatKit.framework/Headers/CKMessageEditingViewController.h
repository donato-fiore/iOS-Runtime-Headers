// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMESSAGEEDITINGVIEWCONTROLLER_H
#define CKMESSAGEEDITINGVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, UIVisualEffectView;
@protocol CKMessageEditingViewDelegate, CKTranscriptOverlayViewControllerProtocol, CKMessageEditingViewControllerInteractionDelegate, CKTranscriptOverlayTransitionDelegate;


#import "CKMessageEditingView.h"
#import "CKTranscriptOverlayTransitionContext.h"

@interface CKMessageEditingViewController : UIViewController <CKMessageEditingViewDelegate, CKTranscriptOverlayViewControllerProtocol>



@property (nonatomic) BOOL animatingIn; // ivar: _animatingIn
@property (nonatomic) BOOL animatingOut; // ivar: _animatingOut
@property (readonly, nonatomic) UIView *balloonViewForAlignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGRect editedMessageAchorPosition; // ivar: _editedMessageAchorPosition
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CKMessageEditingViewControllerInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (nonatomic) BOOL isInitialLoad; // ivar: _isInitialLoad
@property (nonatomic) CGRect keyboardFrame; // ivar: _keyboardFrame
@property (retain, nonatomic) CKMessageEditingView *messageEditingView; // ivar: _messageEditingView
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<CKTranscriptOverlayTransitionDelegate> *transcriptOverlayTransitionDelegate; // ivar: _transcriptOverlayTransitionDelegate
@property (retain, nonatomic) UIVisualEffectView *transcriptOverlayView; // ivar: _transcriptOverlayView
@property (retain, nonatomic) CKTranscriptOverlayTransitionContext *transitionContext; // ivar: _transitionContext
@property (nonatomic) CGFloat viewHeightForEditedMessageAnchorPosition; // ivar: _viewHeightForEditedMessageAnchorPosition


-(BOOL)becomeFirstResponder;
-(NSUInteger)_animationOptionsFromCurve:(NSInteger)arg0 ;
-(id)initWithTransitionContext:(id)arg0 ;
-(void)_animateIn;
-(void)_animateOutWithState:(NSInteger)arg0 ;
-(void)_handleKeyboardAppearanceNotification:(id)arg0 ;
-(void)_informDelegateOfUpdatedBalloonViewFrame;
-(void)_requestDismissal;
-(void)configureForInitialAppearance;
-(void)dismissAndRejectChanges;
-(void)dismissIfNoChanges;
-(void)keyboardDidChangeFrame:(id)arg0 ;
-(void)keyboardDidHide:(id)arg0 ;
-(void)keyboardDidShow:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)messageEditingViewConfirmButtonSelected:(id)arg0 ;
-(void)messageEditingViewDidUpdateBalloonViewContent:(id)arg0 ;
-(void)messageEditingViewDidUpdateBalloonViewFrame:(id)arg0 ;
-(void)messageEditingViewRejectButtonSelected:(id)arg0 ;
-(void)transcriptOverlayTapGestureRecognized:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif