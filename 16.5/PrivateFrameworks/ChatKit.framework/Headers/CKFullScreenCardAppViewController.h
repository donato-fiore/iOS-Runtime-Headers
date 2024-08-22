// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFULLSCREENCARDAPPVIEWCONTROLLER_H
#define CKFULLSCREENCARDAPPVIEWCONTROLLER_H

@class UIViewController, NSNumber, IMBalloonPlugin, IMBalloonPluginDataSource, UIView, UIViewController<CKBrowserViewControllerProtocol>, NSData, NSString, NSArray;
@protocol CKBrowserViewControllerProtocol, UIGestureRecognizerDelegate, UIAdaptivePresentationControllerDelegate, CKExpandedAppViewControllerProtocol, CKExpandedAppViewControllerDelegate, UIViewControllerTransitioningDelegate, CKBrowserViewControllerSendDelegate;


#import "CKBrowserDragManager.h"
#import "CKConversation.h"
#import "CKDismissView.h"

@interface CKFullScreenCardAppViewController : UIViewController <CKBrowserViewControllerProtocol, UIGestureRecognizerDelegate, UIAdaptivePresentationControllerDelegate, CKExpandedAppViewControllerProtocol>

 {
    BOOL _shouldDisableSnapshotView;
}


@property (retain, nonatomic) NSNumber *adamID;
@property (readonly, nonatomic) NSUInteger badgeValue;
@property (readonly, nonatomic) IMBalloonPlugin *balloonPlugin;
@property (retain, nonatomic) IMBalloonPluginDataSource *balloonPluginDataSource;
@property (readonly, nonatomic) CKBrowserDragManager *browserDragManager;
@property (readonly, nonatomic) NSInteger browserPresentationStyle;
@property (readonly, nonatomic) BOOL canReplaceDataSource;
@property (readonly, nonatomic) UIViewController *canvasViewController;
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
@property (weak, nonatomic) UIView *dragTargetView;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect horizontalSwipeExclusionRect;
@property (readonly, nonatomic) BOOL inExpandedPresentation;
@property (readonly, nonatomic) BOOL inFullScreenModalPresentation;
@property (nonatomic) BOOL inTransition; // ivar: _inTransition
@property (readonly, nonatomic) BOOL isAlive;
@property (nonatomic) BOOL isPrimaryViewController;
@property (nonatomic) BOOL isiMessage;
@property (nonatomic) NSInteger lastKnownDeviceOrientation; // ivar: _lastKnownDeviceOrientation
@property (readonly, nonatomic) BOOL mayBeKeptInViewHierarchy;
@property (readonly, nonatomic) NSInteger parentModalPresentationStyle;
@property (readonly, weak, nonatomic) NSObject<UIViewControllerTransitioningDelegate> *parentTransitioningDelegate;
@property (readonly, weak, nonatomic) NSObject<UIViewControllerTransitioningDelegate> *parentTransitioningDelegate; // ivar: _parentTransitioningDelegate
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
@property (readonly, nonatomic) BOOL wantsDarkUI;
@property (readonly, nonatomic) BOOL wantsOpaqueUI;
@property (readonly, nonatomic) BOOL wasExpandedPresentation;


-(BOOL)_currentPluginIsJellyfish;
-(BOOL)_shouldShowDimmingView;
-(BOOL)canBecomeFirstResponder;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)isLoaded;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithBalloonPlugin:(id)arg0 ;
-(id)initWithBalloonPlugin:(id)arg0 dataSource:(id)arg1 ;
-(id)initWithConversation:(id)arg0 plugin:(id)arg1 ;
-(id)inputAccessoryView;
-(struct CGRect )finalContentViewFrame;
-(void)_handleRemoteConnectionInterrupted:(id)arg0 ;
-(void)_updateDimmingViewAlpha;
-(void)animateBrowserViewFromSourceRect:(struct CGRect )arg0 interactive:(BOOL)arg1 grabberView:(id)arg2 completion:(id)arg3 ;
-(void)animateBrowserViewToTargetRect:(struct CGRect )arg0 grabberView:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)dismiss;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif