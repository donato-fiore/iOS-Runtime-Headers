// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKEXPANDEDAPPVIEWCONTROLLER_H
#define CKEXPANDEDAPPVIEWCONTROLLER_H

@class UIViewController, UIViewPropertyAnimator, UILongPressGestureRecognizer, NSNumber, IMBalloonPlugin, IMBalloonPluginDataSource, UIView, UIViewController<CKBrowserViewControllerProtocol>, NSData, NSString, NSArray;
@protocol CKBrowserViewControllerProtocol, CKFullScreenAppNavbarManagerDelegate, CKAppGrabberViewDelegate, UIGestureRecognizerDelegate, CKExpandedAppViewControllerProtocol, CKExpandedAppViewControllerDelegate, UIViewControllerTransitioningDelegate, CKBrowserViewControllerSendDelegate;


#import "CKAppGrabberView.h"
#import "CKImmediatePanGestureRecognizer.h"
#import "CKBrowserDragManager.h"
#import "CKConversation.h"
#import "CKDismissView.h"
#import "CKFullScreenAppNavbarManager.h"

@interface CKExpandedAppViewController : UIViewController <CKBrowserViewControllerProtocol, CKFullScreenAppNavbarManagerDelegate, CKAppGrabberViewDelegate, UIGestureRecognizerDelegate, CKExpandedAppViewControllerProtocol>

 {
    CKAppGrabberView *_grabberView;
    CKImmediatePanGestureRecognizer *_collapseGestureTracker;
    UIViewPropertyAnimator *_collapsePropertyAnimator;
    BOOL _shouldDoCollapseInteraction;
    BOOL _collapseInteractionDidMove;
    CGPoint _collapseGestureStartingLocation;
    UILongPressGestureRecognizer *_touchTracker;
    BOOL _shouldDisableSnapshotView;
}


@property (retain, nonatomic) NSNumber *adamID;
@property (nonatomic) BOOL addsVerticalPaddingForStatusBar; // ivar: _addsVerticalPaddingForStatusBar
@property (readonly, nonatomic) NSUInteger badgeValue;
@property (readonly, nonatomic) IMBalloonPlugin *balloonPlugin;
@property (retain, nonatomic) IMBalloonPluginDataSource *balloonPluginDataSource;
@property (readonly, nonatomic) CKBrowserDragManager *browserDragManager;
@property (readonly, nonatomic) NSInteger browserPresentationStyle;
@property (readonly, nonatomic) BOOL canReplaceDataSource;
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *contentViewController; // ivar: _contentViewController
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (retain, nonatomic) NSData *conversationEngramID;
@property (nonatomic) NSString *conversationID;
@property (nonatomic) NSInteger currentBrowserConsumer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKExpandedAppViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKDismissView *dismissView; // ivar: _dismissView
@property (readonly, nonatomic, getter=isDismissing) BOOL dismissing;
@property (nonatomic) BOOL fadesOutDuringStickerDrag; // ivar: _fadesOutDuringStickerDrag
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect horizontalSwipeExclusionRect;
@property (nonatomic) BOOL inDragAndDrop; // ivar: _inDragAndDrop
@property (readonly, nonatomic) BOOL inExpandedPresentation;
@property (readonly, nonatomic) BOOL inFullScreenModalPresentation;
@property (nonatomic) BOOL inTransition; // ivar: _inTransition
@property (nonatomic) CGRect initialBrowserFrame; // ivar: _initialBrowserFrame
@property (nonatomic) BOOL isPrimaryViewController;
@property (nonatomic) BOOL isiMessage;
@property (nonatomic) NSInteger lastKnownDeviceOrientation; // ivar: _lastKnownDeviceOrientation
@property (readonly, nonatomic) BOOL mayBeKeptInViewHierarchy;
@property (retain, nonatomic) CKFullScreenAppNavbarManager *navbarManager; // ivar: _navbarManager
@property (readonly, nonatomic) NSInteger parentModalPresentationStyle;
@property (readonly, weak, nonatomic) NSObject<UIViewControllerTransitioningDelegate> *parentTransitioningDelegate;
@property (retain, nonatomic) UIViewController *presentationViewController;
@property (retain, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) UIViewController *remoteViewController;
@property (weak, nonatomic) NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate;
@property (retain, nonatomic) NSString *sender;
@property (nonatomic) BOOL shouldDisableSnapshotView;
@property (readonly, nonatomic) BOOL shouldShowChatChrome;
@property (readonly, nonatomic) BOOL shouldSuppressEntryView;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsQuickView;
@property (nonatomic) CGRect targetBrowserFrame; // ivar: _targetBrowserFrame
@property (nonatomic) NSUInteger transitionDirection; // ivar: _transitionDirection
@property (nonatomic) BOOL usesDimmingView; // ivar: _usesDimmingView
@property (readonly, nonatomic) BOOL wantsDarkUI;
@property (readonly, nonatomic) BOOL wantsOpaqueUI;
@property (readonly, nonatomic) BOOL wasExpandedPresentation;


-(BOOL)_currentPluginIsAppManager;
-(BOOL)_currentPluginIsAppStore;
-(BOOL)_currentPluginIsJellyfish;
-(BOOL)_shouldShowDimmingView;
-(BOOL)canBecomeFirstResponder;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)isLoaded;
-(BOOL)shouldAutorotate;
-(CGFloat)collapseTargetOriginY;
-(CGFloat)topAreaHeight;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithBalloonPlugin:(id)arg0 ;
-(id)initWithBalloonPlugin:(id)arg0 dataSource:(id)arg1 ;
-(id)initWithConversation:(id)arg0 plugin:(id)arg1 ;
-(id)inputAccessoryView;
-(id)traitCollection;
-(struct CGRect )finalContentViewFrame;
-(struct CGRect )leftRightSafeAreaInsetRect:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )additionalSafeAreaInsets;
-(void)_dismiss:(id)arg0 ;
-(void)_dragBegan:(id)arg0 ;
-(void)_dragEnded:(id)arg0 ;
-(void)_updateDimmingViewAlpha;
-(void)addNewGrabberView;
-(void)animateBrowserViewFromSourceRect:(struct CGRect )arg0 interactive:(BOOL)arg1 grabberView:(id)arg2 completion:(id)arg3 ;
-(void)animateBrowserViewToTargetRect:(struct CGRect )arg0 grabberView:(id)arg1 completion:(id)arg2 ;
-(void)appGrabberViewCloseButtonTapped:(id)arg0 ;
-(void)collapse;
-(void)collapse:(id)arg0 ;
-(void)collapseGestureTouchMoved:(id)arg0 ;
-(void)dealloc;
-(void)dismiss;
-(void)hideDimmingView;
-(void)loadView;
-(void)navbarManagerDidDismissAllMessages:(id)arg0 ;
-(void)navbarManagerDidReceiveMessage:(id)arg0 ;
-(void)reverseAndCleanupCollapseAnimator;
-(void)setGrabberView:(id)arg0 ;
-(void)setupPausedCollapseAnimatorIfNeeded;
-(void)touchTrackerRecognized:(id)arg0 ;
-(void)updateGrabberTitleAndIconForPlugin:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif