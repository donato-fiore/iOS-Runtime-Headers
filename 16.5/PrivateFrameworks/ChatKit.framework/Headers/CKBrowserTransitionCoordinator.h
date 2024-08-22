// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKBROWSERTRANSITIONCOORDINATOR_H
#define CKBROWSERTRANSITIONCOORDINATOR_H

@class UIWindow, UIViewController<CKBrowserViewControllerProtocol>, NSString, UINavigationController, UIViewController;
@protocol CKExpandedAppViewControllerDelegate, CKBrowserTransitionCoordinatorDelegate, CKBrowserViewControllerSendDelegate;

#import <Foundation/Foundation.h>

#import "CKConversation.h"
#import "CKExpandedAppViewController.h"

@interface CKBrowserTransitionCoordinator : NSObject <CKExpandedAppViewControllerDelegate>



@property (retain, nonatomic) UIWindow *appWindow; // ivar: _appWindow
@property (nonatomic) CGRect cachedCompactFrame; // ivar: _cachedCompactFrame
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *currentBrowser; // ivar: _currentBrowser
@property (nonatomic) NSInteger currentConsumer; // ivar: _currentConsumer
@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *currentModalBrowser; // ivar: _currentModalBrowser
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKBrowserTransitionCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (retain, nonatomic) CKExpandedAppViewController *expandedAppViewController; // ivar: _expandedAppViewController
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger lastTransitionReason; // ivar: _lastTransitionReason
@property (retain, nonatomic) UIWindow *modalAppWindow; // ivar: _modalAppWindow
@property (weak, nonatomic) UIWindow *preModalKeyWindow; // ivar: _preModalKeyWindow
@property (retain, nonatomic) UINavigationController *presentedModalBrowserNavigationController; // ivar: _presentedModalBrowserNavigationController
@property (readonly, nonatomic, getter=isPresentingFullScreenModal) BOOL presentingFullScreenModal;
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (weak, nonatomic) UIWindow *previousKeyWindow; // ivar: _previousKeyWindow
@property (weak, nonatomic) NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate; // ivar: _sendDelegate
@property (readonly) Class superclass;
@property (nonatomic) BOOL underTest; // ivar: _underTest
@property (readonly, nonatomic) BOOL wasCurrentBrowserExpanded;


-(BOOL)_shouldRestrictToPortraitOrientationForPlugin:(id)arg0 ;
-(BOOL)expandedAppViewControllerShouldDismissOnDragSuccess:(id)arg0 ;
-(BOOL)isHostingRemoteKeyboardView;
-(BOOL)shouldAlwaysShowAppTitle;
-(BOOL)shouldPresentModalFromPresentingViewController;
-(BOOL)updateBrowserSessionForPlugin:(id)arg0 datasource:(id)arg1 ;
-(BOOL)usePresentationWindowDuringTransition;
-(CGFloat)expandedAppViewControllerCollapsedContentHeight:(id)arg0 ;
-(id)appIconOverride;
-(id)appTitleOverride;
-(id)modalPresentationViewController;
-(id)requestOwnershipOfBrowserForConsumer:(NSInteger)arg0 ;
-(id)transitionViewController;
-(void)dismissCurrentExpandedBrowserAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissCurrentFullScreenModalAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)expandedAppViewController:(id)arg0 hasUpdatedLastTouchDate:(id)arg1 ;
-(void)expandedAppViewController:(id)arg0 wantsToSwitchToPlugin:(id)arg1 datasource:(id)arg2 ;
-(void)expandedAppViewControllerDidTransitionFromOrientation:(NSInteger)arg0 toOrientation:(NSInteger)arg1 ;
-(void)expandedAppViewControllerSwitcherDidSelectAppManager:(id)arg0 ;
-(void)expandedAppViewControllerSwitcherDidSelectAppStore:(id)arg0 ;
-(void)expandedAppViewControllerWantsToCollapse:(id)arg0 ;
-(void)presentPluginFullScreenModal:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentPluginFullScreenModal:(id)arg0 datasource:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)releaseOwnershipOfBrowserForConsumer:(NSInteger)arg0 ;
-(void)transitionCurrentBrowserToCollapsedPresentationAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)transitionCurrentBrowserToExpandedPresentationAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)updateBrowser:(id)arg0 ;
-(void)updateSupportedInterfaceOrientationsOfAppWindow:(id)arg0 forPlugin:(id)arg1 ;


@end


#endif