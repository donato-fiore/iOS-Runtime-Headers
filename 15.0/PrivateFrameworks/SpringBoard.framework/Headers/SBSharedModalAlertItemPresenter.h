// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSHAREDMODALALERTITEMPRESENTER_H
#define SBSHAREDMODALALERTITEMPRESENTER_H

@class SBFZStackParticipant, SBFZStackResolver, SBFWindow, SBAlertItem, NSString;
@protocol _SBAlertControllerDelegate, SBModalViewControllerStackDelegate, UIAlertControllerCoordinatedActionPerforming, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBReachabilityObserver, SBFLockOutStatusProvider;

#import <Foundation/Foundation.h>

#import "SBSystemGestureManager.h"
#import "SBHomeGestureParticipant.h"
#import "SBHomeGestureArbiter.h"
#import "SBReachabilityManager.h"
#import "SBAlertLayoutPresentationVerifier.h"
#import "SBBarSwipeAffordanceView.h"
#import "SBModalViewControllerStack.h"

@interface SBSharedModalAlertItemPresenter : NSObject <_SBAlertControllerDelegate, SBModalViewControllerStackDelegate, UIAlertControllerCoordinatedActionPerforming, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBReachabilityObserver>

 {
    id<SBFLockOutStatusProvider> *_lockOutProvider;
    SBSystemGestureManager *_systemGestureManager;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SBHomeGestureArbiter *_homeGestureArbiter;
    SBFZStackParticipant *_zStackParticipant;
    SBFZStackResolver *_zStackResolver;
    SBReachabilityManager *_reachabilityManager;
    SBAlertLayoutPresentationVerifier *_alertLayoutPresentationVerifier;
    SBBarSwipeAffordanceView *_barSwipeView;
    SBFWindow *_window;
}


@property (readonly, nonatomic) SBAlertItem *currentlyPresentedAlertItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_modalViewControllerStack, setter=_setModalViewControllerStack:) SBModalViewControllerStack *modalViewControllerStack; // ivar: _modalViewControllerStack
@property (readonly) Class superclass;


-(NSUInteger)barSwipeAffordanceView:(id)arg0 systemGestureTypeForType:(NSInteger)arg1 ;
-(id)initWithLockOutProvider:(id)arg0 systemGestureManager:(id)arg1 homeGestureArbiter:(id)arg2 zStackResolver:(id)arg3 reachabilityManager:(id)arg4 alertLayoutPresentationVerifier:(id)arg5 ;
-(id)initWithLockOutProvider:(id)arg0 systemGestureManager:(id)arg1 homeGestureArbiter:(id)arg2 zStackResolver:(id)arg3 reachabilityManager:(id)arg4 alertLayoutPresentationVerifier:(id)arg5 enableGestures:(BOOL)arg6 ;
// -(void)_performActionForAlertController:(id)arg0 invokeActionBlock:(id)arg1 dismissControllerBlock:(unk)arg2  ;
-(void)_updateBarSwipeViewWithAlertController:(id)arg0 ;
-(void)_updateHomeGestureParticipant;
-(void)alertControllerDidDisappear:(id)arg0 ;
-(void)dealloc;
-(void)dismissAlertItem:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)handleReachabilityYOffsetDidChange;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg0 ;
-(void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg0 ;
-(void)homeGrabberViewDidReceiveClick:(id)arg0 ;
-(void)modalViewControllerStack:(id)arg0 didDismissViewController:(id)arg1 ;
-(void)modalViewControllerStack:(id)arg0 didPresentViewController:(id)arg1 ;
-(void)modalViewControllerStack:(id)arg0 willDismissViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)modalViewControllerStack:(id)arg0 willPresentViewController:(id)arg1 ;
-(void)presentAlertItem:(id)arg0 isLocked:(BOOL)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif